/*
	Sample mission
	Created by Defent and eraser1
	easy/mod/difficult/hardcore - reworked by [CiC]red_ned http://cic-gaming.co.uk
	Called from DMS_selectMission
*/

private ["_num", "_side", "_pos", "_OK", "_difficulty", "_extraParams", "_AICount", "_group", "_type", "_launcher", "_staticGuns", "_wreck", "_crate", "_crate1", "_vehicle", "_pinCode", "_class", "_veh", "_crate_loot_values", "_crate_loot_values1", "_missionAIUnits", "_missionObjs", "_msgStart", "_msgWIN", "_msgLOSE", "_missionName", "_markers", "_time", "_added", "_cleanup", "_baseObjs", "_crate_weapons", "_crate_weapon_list", "_crate_items", "_crate_item_list", "_crate_backpacks", "_rndlevel"];

// For logging purposes
_num = DMS_MissionCount;


// Set mission side
_side = "bandit";


// This part is unnecessary, but exists just as an example to format the parameters for "DMS_fnc_MissionParams" if you want to explicitly define the calling parameters for DMS_fnc_FindSafePos.
// It also allows anybody to modify the default calling parameters easily.
if ((isNil "_this") || {_this isEqualTo [] || {!(_this isEqualType [])}}) then
{
	_this =
	[
		[10,DMS_WaterNearBlacklist,DMS_MinSurfaceNormal,DMS_SpawnZoneNearBlacklist,DMS_TraderZoneNearBlacklist,DMS_MissionNearBlacklist,DMS_PlayerNearBlacklist,DMS_TerritoryNearBlacklist,DMS_ThrottleBlacklists],
		[
			[]
		],
		_this
	];
};

// Check calling parameters for manually defined mission position.
// You can use _extraParams to define which vehicles to spawn. _vehClass1, [_vehClass1], or [_vehClass1,_vehClass2]
_OK = (_this call DMS_fnc_MissionParams) params
[
	["_pos",[],[[]],[3]],
	["_extraParams",[]]
];

if !(_OK) exitWith
{
	diag_log format ["DMS ERROR :: Called MISSION cardealer_emdh.sqf with invalid parameters: %1",_this];
};


//setup random skill number 0-3 to give 4 options> using "floor" to give as near same chance per difficulty
_rndlevel = (0+(floor (random 4)));

// find what random number was generated and load specific variables for that level
//easy
if (_rndlevel isEqualTo 0) then {
_difficulty = "easy";
_msgStart = ['#FFFF00',"A local car dealership is being robbed by easy bandits. Stop them!"];
_AICount = (3 + (round (random 2)));	
_crate_weapons 		= 3;
_crate_items 		= 3;
_crate_backpacks 	= 1;
								};
//moderate
if (_rndlevel isEqualTo 1) then {
_difficulty = "moderate";
_msgStart = ['#FFFF00',"A local car dealership is being robbed by moderate bandits. Stop them!"];
_AICount = (4 + (round (random 2)));	
_crate_weapons 		= 6;
_crate_items 		= 6;
_crate_backpacks 	= 2;
								};
//difficult
if (_rndlevel isEqualTo 2) then {
_difficulty = "difficult";
_msgStart = ['#FFFF00',"A local car dealership is being robbed by difficult bandits. Stop them!"];
_AICount = (4 + (round (random 3)));	
_crate_weapons 		= 9;
_crate_items 		= 9;
_crate_backpacks 	= 3;
								};
//hardcore								
if (_rndlevel isEqualTo 3) then {
_difficulty = "hardcore";
_msgStart = ['#FFFF00',"A local car dealership is being robbed by hardcore bandits. Stop them!"];
_AICount = (4 + (round (random 4)));	
_crate_weapons 		= 12;
_crate_items 		= 15;
_crate_backpacks 	= 4;
								};
//hardcore	> to catch the 1 in 400,000 % chance it hits a perfect 4							
if (_rndlevel isEqualTo 4) then {
_difficulty = "hardcore";
_msgStart = ['#FFFF00',"A local car dealership is being robbed by hardcore bandits. Stop them!"];
_AICount = (4 + (round (random 4)));
_crate_weapons 		= 12;
_crate_items 		= 15;
_crate_backpacks 	= 4;
								};


_group =
[
	_pos,					// Position of AI
	_AICount,				// Number of AI
	_difficulty,				// "random","hardcore","difficult","moderate", or "easy"
	"random", 				// "random","assault","MG","sniper" or "unarmed" OR [_type,_launcher]
	_side 					// "bandit","hero", etc.
] call DMS_fnc_SpawnAIGroup;


// Create Crates
_crate1 = ["Box_NATO_Wps_F",_pos] call DMS_fnc_SpawnCrate;

_rndDir = random 180;

_wreck = createVehicle ["Land_FuelStation_Build_F",[_pos,10+(random 5),_rndDir+90] call DMS_fnc_SelectOffsetPos,[], 0, "CAN_COLLIDE"];


_vehClass1 = "Exile_Car_SUV_Red";
_vehClass2 = "Exile_Car_SUV_Grey";

if !(_extraParams isEqualTo []) then
{
	if ((typeName _extraParams)=="STRING") then
	{
		_vehClass1 = _extraParams;
	}
	else
	{
		if (((typeName _extraParams)=="ARRAY") && {(typeName (_extraParams select 0))=="STRING"}) then
		{
			_vehClass1 = _extraParams select 0;

			if (((count _extraParams)>1) && {(typeName (_extraParams select 1))=="STRING"}) then
			{
				_vehClass2 = _extraParams select 1;
			};
		};
	};
};
_vehicle1 = [_vehClass1, [_pos,5+(random 3),_rndDir] call DMS_fnc_SelectOffsetPos] call DMS_fnc_SpawnNonPersistentVehicle;
//_vehicle1 setPosATL ([_pos,5+(random 3),_rndDir] call DMS_fnc_SelectOffsetPos);


_vehicle2 = [_vehClass2, [_pos,5+(random 3),_rndDir+180] call DMS_fnc_SelectOffsetPos] call DMS_fnc_SpawnNonPersistentVehicle;
//_vehicle2 setPosATL ([_pos,5+(random 3),_rndDir+180] call DMS_fnc_SelectOffsetPos);


// Set crate loot values
_crate_loot_values1 =
[
	_crate_weapons,			// Weapons
	_crate_items,			// Items
	_crate_backpacks 		// Backpacks
];


// Define mission-spawned AI Units
_missionAIUnits =
[
	_group 		// We only spawned the single group for this mission
];

// Define mission-spawned objects and loot values
_missionObjs =
[
	[_wreck],
	[_vehicle1,_vehicle2],
	[[_crate1,_crate_loot_values1]]
];

// define start messages in difficulty choice

// Define Mission Win message
_msgWIN = ['#0080ff',"Convicts have secured the local dealership and eliminated the bandits!"];

// Define Mission Lose message
_msgLOSE = ['#FF0000',"The bandits have escaped with the cars and left nothing but a trail of smoke behind!"];

// Define mission name (for map marker and logging)
_missionName = "Car Dealer Robbery";

// Create Markers
_markers =
[
	_pos,
	_missionName,
	_difficulty
] call DMS_fnc_CreateMarker;

// Record time here (for logging purposes, otherwise you could just put "diag_tickTime" into the "DMS_AddMissionToMonitor" parameters directly)
_time = diag_tickTime;

// Parse and add mission info to missions monitor
_added =
[
	_pos,
	[
		[
			"kill",
			_group
		],
		[
			"playerNear",
			[_pos,DMS_playerNearRadius]
		]
	],
	[
		_time,
		(DMS_MissionTimeOut select 0) + random((DMS_MissionTimeOut select 1) - (DMS_MissionTimeOut select 0))
	],
	_missionAIUnits,
	_missionObjs,
	[_missionName,_msgWIN,_msgLOSE],
	_markers,
	_side,
	_difficulty,
	[]
] call DMS_fnc_AddMissionToMonitor;

// Check to see if it was added correctly, otherwise delete the stuff
if !(_added) exitWith
{
	diag_log format ["DMS ERROR :: Attempt to set up mission %1 with invalid parameters for DMS_AddMissionToMonitor! Deleting mission objects and resetting DMS_MissionCount.",_missionName];

	// Delete AI units and the crate. I could do it in one line but I just made a little function that should work for every mission (provided you defined everything correctly)
	_cleanup = [];
	{
		_cleanup pushBack _x;
	} forEach _missionAIUnits;

	_cleanup pushBack ((_missionObjs select 0)+(_missionObjs select 1));

	{
		_cleanup pushBack (_x select 0);
	} foreach (_missionObjs select 2);

	_cleanup call DMS_fnc_CleanUp;


	// Delete the markers directly
	{deleteMarker _x;} forEach _markers;


	// Reset the mission count
	DMS_MissionCount = DMS_MissionCount - 1;
};


// Notify players
[_missionName,_msgStart] call DMS_fnc_BroadcastMissionStatus;



if (DMS_DEBUG) then
{
	(format ["MISSION: (%1) :: Mission #%2 started at %3 with %4 AI units and %5 difficulty at time %6",_missionName,_num,_pos,_AICount,_difficulty,_time]) call DMS_fnc_DebugLog;
};
