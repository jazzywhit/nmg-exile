if(!isServer)exitWith{};

_killed = _this select 0 select 0;
_killer = _this select 0 select 1;
_playerObj = objNull;

if (isPlayer _killer) then
{
	_veh = vehicle _killer;
	_playerObj = _killer;
	
	if (!(_killer isKindOf "Exile_Unit_Player") && {!isNull (gunner _killer)}) then
	{
			_playerObj = gunner _killer;
	};

	if (!(_veh isEqualTo _killer) && {(driver _veh) isEqualTo _killer}) then
	{
			_playerObj = driver _veh;
	};
};

ZMB_COUNT = ZMB_COUNT - 1;

_moneyError = false;
_respectError = false;

if ((Alive _playerObj) && (_playerObj isKindOf "Exile_Unit_Player")) then
{
	_money = _playerObj getVariable ["ExileMoney", 0];
	_respect = _playerObj getVariable ["ExileScore", 0];

	_safeGuardMoney = _money + ZPT_AMOUNT;				// Get the value of the killers current poptabs + the max amount of tabs reward in the config to compare to what will be actually given
	_safeGuardRespect = _respect + ZRT_AMOUNT;			// As above but for respect
	
	if(!isPlayer _playerObj)exitWith{};
	
	if (ZPT_ENABLED && ZPT_AMOUNT > 0) then
	{
		_rndMon = 0;
		if(ZPT_RANDOM)then
		{ 
			_rndMon = floor (random ZPT_AMOUNT);
			_money = (_money + _rndMon);			// Overal amount of poptabs to return to the killer

			if ((_money > _safeGuardMoney) || (_money < 0)) then 			// If the amount of money calculated to apply to the killer is greater than the max possible exit with a debug report.
			{
				_moneyError = true;
			};
		}
		else 
		{
			_money = _money + ZPT_AMOUNT; 

			if (_money > _safeGuardMoney) then
			{
				_moneyError = true;
			};
		};

		if !(_moneyError) then
		{	

			_playerObj setVariable ["ExileMoney",_money];

			[_playerObj, "moneyReceivedRequest", [str _money, "Zombie Kill"]] call ExileServer_system_network_send_to;
		}
		else
		{
			diag_log format ["No money given to %1 -- Poptab error amount %2",name _playerObj,_money];
		};	
	};

	if (ZRT_ENABLED && ZRT_AMOUNT > 0) then
	{
		_rndRes = 0;
		if(ZRT_RANDOM) then
		{ 
			//_rndRes = (ZRT_AMOUNT/2) + (random ZRT_AMOUNT/2);
			_rndRes = floor (random ZRT_AMOUNT); 
			_respect = _respect + floor(_rndRes); 
		}
		else 
		{ 
			_respect = _respect + ZRT_AMOUNT; 
		};

		_playerObj setVariable ["ExileScore",_respect];

		if(!ZRT_RANDOM)then
		{
			[_playerObj, "showFragRequest", [ [["ZOMBIE KILL",ZRT_AMOUNT]] ] ] call ExileServer_system_network_send_to;
		} 
		else 
		{ 
			[_playerObj, "showFragRequest", [ [["ZOMBIE KILL",floor(_rndRes)]] ] ] call ExileServer_system_network_send_to; 
		};

		
	};
	if !(_moneyError) then
	{	
		format["setAccountMoneyAndRespect:%1:%2:%3", _money, _respect, (getPlayerUID _playerObj)] call ExileServer_system_database_query_fireAndForget;
		_playerObj call ExileServer_object_player_sendStatsUpdate;
	};	
};

uiSleep ZMB_DespawnTimer;

deleteVehicle _killed;