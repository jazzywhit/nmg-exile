/*
	Sample mission
	easy/mod/difficult/hardcore - reworked by [CiC]red_ned http://cic-gaming.co.uk
*/

private ["_num", "_side", "_OK", "_group", "_pos", "_difficulty", "_AICount", "_type", "_launcher", "_crate", "_building", "_vehicle", "_crate_loot_values", "_missionAIUnits", "_missionObjs", "_msgStart", "_msgWIN", "_msgLOSE", "_missionName", "_markers", "_time", "_added", "_cleanup", "_crate_weapons", "_crate_weapon_list", "_crate_items", "_crate_item_list", "_crate_backpacks", "_rndlevel"];

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
// This mission doesn't use "_extraParams" in any way currently.
_OK = (_this call DMS_fnc_MissionParams) params
[
	["_pos",[],[[]],[3]],
	["_extraParams",[]]
];

if !(_OK) exitWith
{
	diag_log format ["DMS ERROR :: Called MISSION medical_emdh.sqf with invalid parameters: %1",_this];
};


//setup random skill number 0-3 to give 4 options> using "floor" to give as near same chance per difficulty
_rndlevel = (0+(floor (random 4)));

// find what random number was generated and load specific variables for that level
//easy
if (_rndlevel isEqualTo 0) then {
_difficulty = "easy";
_msgStart = ['#FFFF00',"A group of deranged noob doctors have set up a field hospital. Seize it for your own!"];
_AICount = (4 + (round (random 2)));
_crate_weapons 		= 1;
_crate_items		= 5;
_crate_item_list	= ["Exile_Item_InstaDoc","Exile_Item_PlasticBottleFreshWater","Exile_Item_Bandage","Exile_Item_PlasticBottleFreshWater","Exile_Item_Vishpirin","Exile_Item_PlasticBottleFreshWater","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_InstaDoc","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin"];
_crate_backpacks	= 1;
								};
//moderate
if (_rndlevel isEqualTo 1) then {
_difficulty = "moderate";
_msgStart = ['#FFFF00',"A group of deranged doctors have set up a field hospital. Seize it for your own!"];
_AICount = (4 + (round (random 4)));
_crate_weapons 		= 2;
_crate_items		= 8;
_crate_item_list	= ["Exile_Item_InstaDoc","Exile_Item_PlasticBottleFreshWater","Exile_Item_Bandage","Exile_Item_PlasticBottleFreshWater","Exile_Item_Vishpirin","Exile_Item_PlasticBottleFreshWater","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_InstaDoc","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin"];
_crate_backpacks	= 2;
								};
//difficult
if (_rndlevel isEqualTo 2) then {
_difficulty = "difficult";
_msgStart = ['#FFFF00',"A group of deranged skilled doctors have set up a field hospital. Seize it for your own!"];
_AICount = (6 + (round (random 4)));
_crate_weapons 		= 3;
_crate_items		= 12;
_crate_item_list	= ["Exile_Item_InstaDoc","Exile_Item_PlasticBottleFreshWater","Exile_Item_Bandage","Exile_Item_PlasticBottleFreshWater","Exile_Item_Vishpirin","Exile_Item_PlasticBottleFreshWater","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_InstaDoc","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin"];
_crate_backpacks	= 3;
								};
//hardcore								
if (_rndlevel isEqualTo 3) then {
_difficulty = "hardcore";
_msgStart = ['#FFFF00',"A group of deranged hardcore doctors have set up a field hospital. Seize it for your own!"];
_AICount = (6 + (round (random 4)));
_crate_weapons 		= 4;
_crate_items		= 15;
_crate_item_list	= ["Exile_Item_InstaDoc","Exile_Item_PlasticBottleFreshWater","Exile_Item_Bandage","Exile_Item_PlasticBottleFreshWater","Exile_Item_Vishpirin","Exile_Item_PlasticBottleFreshWater","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_InstaDoc","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin"];
_crate_backpacks	= 4;

								};
//hardcore	> to catch the 1 in 400,000 % chance it hits a perfect 4							
if (_rndlevel isEqualTo 4) then {
_difficulty = "hardcore";
_msgStart = ['#FFFF00',"A group of deranged hardcore doctors have set up a field hospital. Seize it for your own!"];
_AICount = (6 + (round (random 4)));
_crate_weapons 		= 4;
_crate_items		= 15;
_crate_item_list	= ["Exile_Item_InstaDoc","Exile_Item_PlasticBottleFreshWater","Exile_Item_Bandage","Exile_Item_PlasticBottleFreshWater","Exile_Item_Vishpirin","Exile_Item_PlasticBottleFreshWater","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_InstaDoc","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin"];
_crate_backpacks	= 4;
								};


_group =
[
	_pos,					// Position of AI
	_AICount,				// Number of AI
	_difficulty,			// "random","hardcore","difficult","moderate", or "easy"
	"random", 				// "random","assault","MG","sniper" or "unarmed" OR [_type,_launcher]
	_side 					// "bandit","hero", etc.
] call DMS_fnc_SpawnAIGroup;


// Create Crate
_crate = ["Box_NATO_Wps_F",_pos] call DMS_fnc_SpawnCrate;

_building = createVehicle ["Land_Medevac_HQ_V1_F",[(_pos select 0) - 30, (_pos select 1),-10],[], 0, "CAN_COLLIDE"];

_vehicle = ["I_Truck_02_medical_F",_pos] call DMS_fnc_SpawnNonPersistentVehicle;


// Set crate loot values
_crate_loot_values =
[
	_crate_weapons,								// Weapons
	[_crate_items,_crate_item_list],			// Items + selection list
	_crate_backpacks 							// Backpacks
];


// Define mission-spawned AI Units
_missionAIUnits =
[
	_group 		// We only spawned the single group for this mission
];

// Define mission-spawned objects and loot values
_missionObjs =
[
	[_building],			// No spawned buildings
	[_vehicle],
	[[_crate,_crate_loot_values]]
];

// define start messages in difficulty choice

// Define Mission Win message
_msgWIN = ['#0080ff',"Convicts have claimed the medical supplies for their own!"];

// Define Mission Lose message
_msgLOSE = ['#FF0000',"Hawkeye has ran off with the medical supplies! Everything is gone!"];

// Define mission name (for map marker and logging)
_missionName = "Deranged Doctors";

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
