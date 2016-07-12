if(!isServer)exitWith{};
						
ZMB_SIDE	= West;					// Change the side of the zombies, default is West
ZMB_HEALTH	= 0.60;					// Zombie Health 				-- 0 to 1 [1 Being dead]
ZLT_ENABLED = true;					// Enabled the zombie loot table
ZLT_MAXITEM = 3;					// Max amount of items to add
ZPT_ENABLED = true;					// Zombie Poptab Reward
ZPT_AMOUNT	= 20;					// Amount of poptabs to reward
ZPT_RANDOM	= true;					// If enabled poptab reward is 1/2 to full randomly
ZRT_ENABLED = true;					// Zombie Respect Reward
ZRT_AMOUNT	= 20;					// Amount of Respect to reward
ZRT_RANDOM	= true;					// If enabled respect reward is 1/2 to full randomly
WPC_ENABLED	= true;					// Dont touch this.
ZMB_MAX		= true;					// Enable a zombie cap -- Strongly suggest you use this.
ZMB_MAXGLOBAL = 150;				// Only allow 150 zombies to exist
ZMB_DespawnTimer = 120;				// Time in seconds for dead zombies to be cleaned up
ZMB_ViewDistanceDay	= 75;			// Zombie detection limit in meters during daytime hours
ZMB_ViewDistanceNight	= 30;		// Zombie detection limit in meters during nighttime hours
ZMB_Type_day = 1;					// Type of zombie spawned during day time hours -- 1: Slow, crawlers 2: Medium, fast
ZMB_Type_night = 2;					// Type of zombie spawned during night time hours -- 1: Slow, crawlers 2: Medium, fast
ZMB_Night_offset = 0.2;				// Amount to increase the chance for zombies to spawn at night. EG, if you have a 0.3 chance for day time, at night it will be a 0.5 chance or 50%.
ZMB_SpawnCycle = 360;				// How often in seconds the script will spawn zombies
ZMB_BleedingEnabled = true;			// If true zombies will bleed to death taking between 5 and 20 seconds

/*

Infection settings -- Only use this if you are using DP RZInfection mod -- http://steamcommunity.com/sharedfiles/filedetails/?id=614815221 or you want your plays to inevitibly die from infection..

*/

ryanzombiesinfectedchance = 0.1;		// Chance to be infected when hit by zombie
ryanzombiesinfectedrate = 0.1;		// Rate of damage per minute while infected
ryanzombiesinfected = 0.9;			// 0.9 = Normal infection symptoms -- 0.7 = Less infection symptoms -- 0.5 == No infection symptoms
ryanzombiesinfecteddeath = 0.9;		// 0.9 =  Scream -- 0.7 = Silent
ryanzombiesantivirusduration = 300;	// Time in seconds the antivirus injector will protect you from infection

/*

Dynamic spawn settings -- Adjust these for your map. This will determine where dynamic random spawns will occur

*/

MAP_CENTRE = [6133,7156,0];			// Map center position -- This is Namalsk
ZMB_minDistance = 50; 				// minimum distance from the center position (Number) in meters
ZMB_maxDistance = 5000; 			// maximum distance from the center position (Number) in meters
ZMB_mindist = 5;					// minimum distance from the nearest object (Number) in meters, ie. create waypoint this distance away from anything within x meters..
ZMB_water = 0; 						// water mode 0: cannot be in water , 1: can either be in water or not , 2: must be in water
ZMB_shoremode = 0; 					// 0: does not have to be at a shore , 1: must be at a shore	

ZMB_Radius_dynamic = 250; 			// Radius zombies will spawn for dynamic spawns
ZMB_Spawn_chance_dynamic = 0.3;		// Chance for dynamic zombies to spawn each spawn cycle -- Take into account ZMB_Night_offset

ZMB_Amount_min_dynamic = 10;		// Minimum amount of zombies spawned at a dynamic spawn
ZMB_Amount_max_dynamic = 20;		// Maximum amount of zombies spawned at a dynamic spawn

/* 

Fixed spawn settings

Add fixed zombie location spawns here. Just input a position, these are setup for the major cities in Namalsk.

An easy way to get positions is as follows -

1. In the editor, spawn in on your desired map and teleport to your desired spawn location
2. In the consol type this and press local exec -- _position = getPosATL player; copyToClipBoard str _position; hint "Position copied to clipboard";

The script wll randomly call on one of these locations every spawn cycle and spawn zombies there. 

*/

ZMB_Radius_fixed = 150;				// Radius zombies will spawn around these fixed locations
ZMB_Spawn_chance_fixed = 0.3;		// Chance for zombies to spawn each spawn cycle -- Take into account ZMB_Night_offset
ZMB_Amount_min_fixed = 10;			// Minimum amount of zombies spawned at fixed location
ZMB_Amount_max_fixed = 20;			// Maximum amount of zombies spawned at a fixed location  

ZMB_INCLUSION =  
[
	[4446,11236,0],
	[4835,10831,0],

	[6748,11234,0],
	[6173,10866,0],
	[7136,10726,0],

	[6294,9393,0],
	[6503,8505,0],
	[7642,8745,0],
	[7312,7995,0],

	[7855,7677,0],
	[7652,7413,0],
	[7059,5814,0],
	[4842,6219,0],

	[5317,7170,0],
	[4182,6626,0],
	[3547,6670,0],
	[4077,9224,0],
	[4723,8909,0],
	[5743,9836,0],
	[5443,9323,0]
];


/*

Zombie loot settings

Zombies have a chance to spawn with a backpack containing loot.

Format is - ["Item_class_name",number (chance for this item to spawn)]

So the below example would be a 5% chance for a 16 rnd magazine to spawn in the zombies pack.

["16Rnd_9x21_Mag ",5]

*/

ZMB_ChanceForLoot = 20;				// Chance % for zombies to have a backpack containing loot

ZMB_ITEMS = 

[
	["16Rnd_9x21_Mag ",5],
	["30Rnd_556x45_Stanag",5],
	["Exile_Item_CanOpener",10],
	["Exile_Item_Cheathas",50],
	["Exile_Item_EnergyDrink",10],
	["Exile_Item_Raisins",50],
	["Exile_Item_Moobar",40],
	["Exile_Item_GloriousKnakworst",40],
	["Exile_Item_SausageGravy",40],
	["Exile_Item_ChristmasTinner",40],
	["Exile_Item_BBQSandwich",40],
	["Exile_Item_Surstromming",15],
	["Exile_Item_Catfood",90],
	["Exile_Item_PlasticBottleFreshWater",75],
	["Exile_Item_Beer",15],
	["Exile_Item_Energydrink",5],
	["NVGoggles",1]
];

// DO NOT EDIT BELOW THIS LINE!
ZMB_COUNT = 0;