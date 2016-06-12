/*
	Sniper Camp hardcore [CiC]red_ned http://cic-gaming.co.uk
	based on work by Defent and eraser1
	Done seperately due to perm vehicle
	Called from DMS_selectMission
*/

private ["_num", "_side", "_pos", "_OK", "_difficulty", "_AICount", "_group", "_type", "_launcher", "_staticGuns", "_crate1", "_vehicle", "_pinCode", "_class", "_veh", "_crate_loot_values1", "_missionAIUnits", "_missionObjs", "_msgStart", "_msgWIN", "_msgLOSE", "_missionName", "_markers", "_time", "_added", "_cleanup", "_baseObjs", "_crate_weapons", "_crate_weapon_list", "_crate_items", "_crate_item_list", "_crate_backpacks"];


// For logging purposes
_num = DMS_MissionCount;


// Set mission side (only "bandit" is supported for now)
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
// You can define "_extraParams" to specify the vehicle classname to spawn, either as _vehClass or [_vehClass]
_OK = (_this call DMS_fnc_MissionParams) params
[
	["_pos",[],[[]],[3],[],[],[]],
	["_extraParams",[]]
];

if !(_OK) exitWith
{
	diag_log format ["DMS ERROR :: Called MISSION nedsnipercamp_mission_hard.sqf with invalid parameters: %1",_this];
};


// Set general mission difficulty - "hardcore","difficult","moderate", or "easy"
_difficulty = "hardcore";


// Create AI - foot soldiers first
_AICount = 8 + (round (random 8));

_group =
[
	[[(_pos select 0)+3,(_pos select 1)-3,0],[(_pos select 0)+(10+(random 20)),(_pos select 1)+(10+(random 20)),0]],					// Position AI in tent + 2nd squad
	_AICount,				// Number of AI
	"hardcore",				// "random","hardcore","difficult","moderate", or "easy"
	"sniper", 				// "random","assault","MG","sniper" or "unarmed" OR [_type,_launcher]
	_side 					// "bandit","hero", etc.
] call DMS_fnc_SpawnAIGroup_MultiPos;

// add vehicle patrol and randomise a little
_veh =
[
	[
[(_pos select 0) -(75-(random 25)),(_pos select 1) +(75+(random 25)),0]
	],
	_group,
	"assault",
	"hardcore",
	_side
] call DMS_fnc_SpawnAIVehicle;


// add static guns
_staticGuns =
[
	[
		// make statically positioned relative to centre point and randomise a little
		[(_pos select 0) -(5-(random 1)),(_pos select 1)+(5-(random 1)),0],
		[(_pos select 0) +(5-(random 1)),(_pos select 1)-(5-(random 1)),0]
	],
	_group,
	"assault",
	"static",
	"bandit"
] call DMS_fnc_SpawnAIStaticMG;


// Create Buildings - use seperate file as found in the mercbase mission
_baseObjs =
[
	"nedsnipercamp_objects",
	_pos
] call DMS_fnc_ImportFromM3E;
		
//DMS_fnc_SpawnPersistentVehicle will automatically turn the pincode into a string and format it.
_pinCode = (1000 +(round (random 8999)));
_vehicle = ["Exile_Car_Zamak",[(_pos select 0) +17.2, (_pos select 1) -0],_pinCode] call DMS_fnc_SpawnPersistentVehicle;

// Create Crate type
_crate1 = ["Box_NATO_Wps_F",_pos] call DMS_fnc_SpawnCrate;

// Set crate loot values - trying to have setup area for crate
// whats in crate variable trying random numbers - failed
_crate_weapons 		= 15;
_crate_weapon_list	= ["srifle_DMR_02_camo_F","srifle_DMR_02_sniper_F","srifle_DMR_03_khaki_F","srifle_DMR_03_multicam_F","srifle_DMR_03_woodland_F","srifle_DMR_04_F","srifle_DMR_04_Tan_F","srifle_DMR_05_blk_F","srifle_DMR_05_hex_F","srifle_DMR_05_tan_f","srifle_DMR_06_camo_F","srifle_DMR_06_olive_F","srifle_EBR_F","srifle_GM6_camo_F","srifle_LRR_camo_F"];
_crate_items 		= 20;
_crate_item_list	= ["10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","100Rnd_65x39_caseless_mag","10Rnd_127x54_Mag","16Rnd_9x21_Mag","100Rnd_65x39_caseless_mag","10Rnd_127x54_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","100Rnd_65x39_caseless_mag","10Rnd_127x54_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_mag","30Rnd_556x45_Stanag"];
_crate_backpacks 	= 3;

// setup crate iteself with items
_crate_loot_values1 =
[
	[_crate_weapons,_crate_weapon_list],		// Weapons
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
	_staticGuns+_baseObjs+[_veh],			// armed AI vehicle, base objects, and static guns
	[_vehicle],								//this is prize vehicle
	[[_crate1,_crate_loot_values1]]			//this is prize crate
];

// Define Mission Start message
_msgStart = ['#FFFF00',"Snipers have set up an advanced training camp, go steal their rifles"];

// Define Mission Win message
_msgWIN = ['#0080ff',format ["Convicts have killed the snipers and stolen their rifles,the truck code is %1...",_pinCode]];

// Define Mission Lose message
_msgLOSE = ['#FF0000',"The Snipers have packed up and left, no rifles for you!"];

// Define mission name (for map marker and logging)
_missionName = "Sniper Camp";

// Create Markers - same for all levels
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