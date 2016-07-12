private ["_randomChance"];

diag_log format ["Number of alive zombies [%1] out of [%2]",ZMB_COUNT,ZMB_MAXGLOBAL];

if (ZMB_COUNT < ZMB_MAXGLOBAL) then
{
	if (daytime >= 17 || daytime < 6) then 
	{
		_randomChance = random 1 -  ZMB_Night_offset;
		if (_randomChance <= 0) then
		{
			_randomChance = 0;
		};

		Ryanzombieslimit = ZMB_ViewDistanceNight;
	} 
	else 
	{
		_randomChance = random 1;
		
		Ryanzombieslimit = ZMB_ViewDistanceDay;
	};
	
	_location = selectRandom ZMB_INCLUSION;

	if (ZMB_Spawn_chance_fixed > _randomChance) then
	{	
		_size = ZMB_Radius_fixed;
		_amountMin = ZMB_Amount_min_fixed;
		_amountMax = ZMB_Amount_max_fixed;
		_type = ZMB_type_day;
		if (daytime >= 17 || daytime < 6) then   
		{
			_type = ZMB_type_night;
		};	
		
		[_location, _amountMin, _amountMax, _type, _size] spawn fn_DS_spawnZone;

		diag_log format ["Spawned [FIXED] zombie group due to succesful spawn chance of -- %1",_randomChance];
	};
};