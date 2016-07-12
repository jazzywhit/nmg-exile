if(!isServer) exitWith {}; 

_location = _this select 0; 
_unitMin = _this select 1; 		
_unitMax = _this select 2; 		
_unitsType = _this select 3; 	
_trigRadius = _this select 4; 

_pos = _location;

_civSlow 	= ["RyanZombieC_man_1slow","RyanZombieC_man_polo_1_Fslow","RyanZombieC_man_polo_2_Fslow","RyanZombieC_man_polo_4_Fslow","RyanZombieC_man_polo_5_Fslow","RyanZombieC_man_polo_6_Fslow","RyanZombieC_man_p_fugitive_Fslow","RyanZombieC_man_w_worker_Fslow","RyanZombieC_man_hunter_1_Fslow"]; 
_civMed 	= ["RyanZombieC_man_1medium","RyanZombieC_man_polo_1_Fmedium","RyanZombieC_man_polo_2_Fmedium","RyanZombieC_man_polo_4_Fmedium","RyanZombieC_man_polo_5_Fmedium","RyanZombieC_man_polo_6_Fmedium","RyanZombieC_man_p_fugitive_Fmedium","RyanZombieC_man_w_worker_Fmedium","RyanZombieC_man_hunter_1_Fmedium"]; 
_civFast 	= ["RyanZombieC_man_1","RyanZombieC_man_polo_1_F","RyanZombieC_man_polo_2_F","RyanZombieC_man_polo_4_F","RyanZombieC_man_polo_5_F","RyanZombieC_man_polo_6_F","RyanZombieC_man_p_fugitive_F","RyanZombieC_man_w_worker_F","RyanZombieC_man_hunter_1_F","RyanZombieC_man_pilot_F","RyanZombieC_journalist_F","RyanZombieC_Orestes","RyanZombieC_Nikos"];
_spiderList = ["RyanZombieSpider1","RyanZombieSpider2","RyanZombieSpider3","RyanZombieSpider4","RyanZombieSpider5","RyanZombieSpider6"];
_milSlow	= ["RyanZombieB_Soldier_02_fslow","RyanZombieB_Soldier_02_f_1slow","RyanZombieB_Soldier_02_f_1_1slow","RyanZombieB_Soldier_03_fslow","RyanZombieB_Soldier_03_f_1slow","RyanZombieB_Soldier_03_f_1_1slow","RyanZombieB_Soldier_04_fslow","RyanZombieB_Soldier_04_f_1slow","RyanZombieB_Soldier_04_f_1_1slow","RyanZombieB_Soldier_lite_Fslow","RyanZombieB_Soldier_lite_F_1slow"];
_milMed		= ["RyanZombieB_Soldier_02_fmedium","RyanZombieB_Soldier_02_f_1medium","RyanZombieB_Soldier_02_f_1_1medium","RyanZombieB_Soldier_03_fmedium","RyanZombieB_Soldier_03_f_1medium","RyanZombieB_Soldier_03_f_1_1medium","RyanZombieB_Soldier_04_fmedium","RyanZombieB_Soldier_04_f_1medium","RyanZombieB_Soldier_04_f_1_1medium","RyanZombieB_Soldier_lite_Fmedium","RyanZombieB_Soldier_lite_F_1medium"];
_milFast	= ["RyanZombieB_Soldier_02_f", "RyanZombieB_Soldier_02_f_1", "RyanZombieB_Soldier_02_f_1_1", "RyanZombieB_Soldier_03_f", "RyanZombieB_Soldier_03_f_1", "RyanZombieB_Soldier_03_f_1_1", "RyanZombieB_Soldier_04_f", "RyanZombieB_Soldier_04_f_1", "RyanZombieB_Soldier_04_f_1_1", "RyanZombieB_Soldier_lite_F", "RyanZombieB_Soldier_lite_F_1"];
_crawler    = ["RyanZombieCrawler1", "RyanZombieCrawler2", "RyanZombieCrawler3", "RyanZombieCrawler4", "RyanZombieCrawler5", "RyanZombieCrawler6", "RyanZombieCrawler7"];
_walker 	= ["RyanZombieC_man_1walker","RyanZombieC_man_polo_1_Fwalker","RyanZombieC_man_polo_2_Fwalker","RyanZombieC_man_polo_4_Fwalker","RyanZombieC_man_polo_5_Fwalker","RyanZombieC_man_polo_6_Fwalker","RyanZombieC_man_p_fugitive_Fwalker","RyanZombieC_man_w_worker_Fwalker","RyanZombieC_scientist_Fwalker","RyanZombieC_man_hunter_1_Fwalker","RyanZombieC_man_pilot_Fwalker","RyanZombieC_journalist_Fwalker","RyanZombieC_Oresteswalker","RyanZombieC_Nikoswalker"];

_zombieList = [];

Ryanzombieslogicroam = true;

if(_unitsType == 1) then
{
 	_zombieList = _zombieList + _civSlow;
 	_zombieList = _zombieList + _crawler;
 	_zombieList = _zombieList + _walker;
	
} 
else 
{
	_zombieList = _zombieList + _civMed; 
    _zombieList = _zombieList + _civFast;
};


_unitCount = _unitMin + random _unitMax;
_grp = createGroup ZMB_SIDE;

diag_log format["-- DeathSpawn : Zombies have spawned @ %1 -- Amount spawned [%2]",_pos,round _unitCount];

for "_i" from 0 to _unitCount do 
{
	if(ZMB_COUNT < ZMB_MAXGLOBAL || !ZMB_MAX) then
	{
		_spawnPos = [(_pos select 0) + random (_trigRadius) - random (_trigRadius), (_pos select 1) + random (_trigRadius) - random (_trigRadius)];
		if(surfaceIsWater _spawnPos) then
		{ 
			_spawnPos = [(_pos select 0) + random (_trigRadius) - random (_trigRadius), (_pos select 1) + random (_trigRadius) - random (_trigRadius)]; 
		};
		
		(_zombieList select random count _zombieList) createUnit [_spawnPos, _grp, "", 0.2, "PRIVATE"];
		ZMB_COUNT = ZMB_COUNT + 1;
	} 
	else 
	{ 
		diag_log format["-- DeathSpawn : Zombie Limit Hit [%1, %2] --", ZMB_COUNT, ZMB_MAXGLOBAL]; 
	};
};
_currentSpawned = units _grp;

{	
	_grp = createGroup ZMB_SIDE;
	[_x] join _grp;
	
	
	if(ZPT_ENABLED || ZRT_ENABLED)then{_x addMPEventHandler["MPKilled",{[_this] spawn fn_DS_zombieAddTabs;}];};
	if (ZMB_BleedingEnabled) then
	{	
		_x addMPEventHandler["MPHit",{[_this] spawn JohnO_fnc_zombieBleed;}];
	};		
	if(ZLT_ENABLED)then{ [_x, false] spawn fn_DS_addZombieLoot; }; // Normal zombies
	
} forEach _currentSpawned;
