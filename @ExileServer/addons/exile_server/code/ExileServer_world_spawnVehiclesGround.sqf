/**
 * ExileServer_world_spawnVehiclesGround
 * edited by warsheep(GER)
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_pos","_middle","_mapsizeX","_mapsizeY","_gridSize","_gridVehicles","_vehicleCount","_spawnRadius","_spawnRadiusRoad","_debugMarkers","_vehicleClassNames","_maximumDamage","_damageChance","_airportPositions","_xSize","_workingXSize","_ySize","_workingYSize","_position","_spawned","_spawnedPositions","_positionAir","_vehiclePosition","_positionReal","_spawnControl","_vehicleClassName","_vehicle","_hitpointsData","_hitpoints","_debugMarker"];
_mapsizeX = worldSize; 
_mapsizeY = worldSize; 
_gridSize = getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "groundGridSize");
_gridVehicles = getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "groundGridAmount");
_debugMarkers = ((getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "groundDebugMarkers")) isEqualTo 1);
_spawnRadius = getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "groundSpawnRadius");
_spawnRadiusRoad = getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "groundSpawnRadiusRoad");
_damageChance = getNumber (configFile >> "CfgSettings" >> "VehicleSpawn" >> "groundDamageChance");
_maximumDamage = getNumber (configFile >> "CfgSettings" >> "VehicleSpawn" >> "groundMaximumDamage");
_vehicleClassNames = getArray (configFile >> "CfgSettings" >> "VehicleSpawn" >> "ground");

format ["Spawning Dynamic Ground Vehicles. GridSize: %1 Vehs/Grid : %2",_gridSize,_gridVehicles] call ExileServer_util_log;

_vehicleCount = 0;
_middle     = worldSize/2;
 _pos  = [_middle,_middle,0];
	
for "_xSize" from 0 to _mapsizeX step _gridSize do
{
	for "_ySize" from 0 to _mapsizeY step _gridSize do
	{
		_spawned = 0;
		_spawnedPositions = [];
		while {_spawned < _gridVehicles} do 
		{
			_vehiclePosition = [_pos, _spawnRadius] call ExileClient_util_world_findRoadPosition;
			_positionReal = [_vehiclePosition, 1, _spawnRadiusRoad, 5, 0 , 1 , 0 , _spawnedPositions] call BIS_fnc_findSafePos;
			if(count _positionReal isEqualTo 3)exitWith{};
			_spawnControl = [[(_positionReal select 0) - 50, (_positionReal select 1) + 50],[(_positionReal select 0) + 50,(_positionReal select 1) - 50]];
			_spawnedPositions pushBack _spawnControl;
			_positionReal pushBack 0;
			_vehicleClassName = selectRandom _vehicleClassNames;
			_vehicle = [_vehicleClassName, _positionReal, random 360, true] call ExileServer_object_vehicle_createNonPersistentVehicle;
			_hitpointsData = getAllHitPointsDamage _vehicle;
			if !(_hitpointsData isEqualTo []) then 
			{
				_hitpoints = _hitpointsData select 0;
				{
				    if ((random 100) < _damageChance) then
				    {
				        _vehicle setHitPointDamage [_x, random _maximumDamage];
				    };
				}
				forEach _hitpoints;
			};
			if (_debugMarkers) then
			{
				_debugMarker = createMarker ["vehicleMarkerGround#"+str _vehicleCount, _positionReal];
				_debugMarker setMarkerColor "ColorGreen";
				_debugMarker setMarkerType "mil_dot_noShadow";
			};
			_spawned = _spawned + 1;
			_vehicleCount = _vehicleCount + 1;
		};
	};
};
format ["Dynamic ground vehicles spawned. Count : %1",_vehicleCount] call ExileServer_util_log;
true