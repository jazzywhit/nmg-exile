private ["_randomChance"];

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
	if (ZMB_Spawn_chance_dynamic > _randomChance) then
	{		
		_spawnCenter = MAP_CENTRE; //Center of your map -- this is Namalsk 
		_min = ZMB_minDistance; // minimum distance from the center position (Number) in meters
		_max = ZMB_maxDistance; // maximum distance from the center position (Number) in meters
		_mindist = ZMB_minDist; // minimum distance from the nearest object (Number) in meters, ie. create waypoint this distance away from anything within x meters..
		_water = ZMB_water; // water mode 0: cannot be in water , 1: can either be in water or not , 2: must be in water
		_shoremode = ZMB_shoremode; // 0: does not have to be at a shore , 1: must be at a shore
	
		_dyanamicPos = [_spawnCenter,_min,_max,_mindist,_water,1,_shoremode] call BIS_fnc_findSafePos;
		_size = ZMB_Radius_dynamic;
		_amountMin = ZMB_Amount_min_dynamic;
		_amountMax = ZMB_Amount_max_dynamic;

		_type = ZMB_Type_day;

		if (daytime >= 17 || daytime < 6) then   
		{
			_type = ZMB_Type_night;
		};	
		
		[_dyanamicPos, _amountMin, _amountMax, _type, _size] spawn fn_DS_spawnZone;

		diag_log format ["Spawned [DYNAMIC] zombie group due to succesful spawn chance of -- %1",_randomChance];
	};
};	