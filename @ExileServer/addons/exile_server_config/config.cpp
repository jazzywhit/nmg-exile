/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

class CfgPatches
{
	class exile_server_config
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};


class CfgBuildings
{
    #include "cfgBuildings.hpp"
};
class CfgLootTables
{
    #include "cfgLootTables.hpp"
};

class CfgSettings
{
	///////////////////////////////////////////////////////////////////////
	// GARBAGE COLLECTOR
	///////////////////////////////////////////////////////////////////////
	class GarbageCollector
	{
		/*
			Remark:
			In 0.9.35 and below, Exile has checked if a player was nearby and then delayed
			the deletion. This check has been removed to save server performance.

			Do NOT touch these if you are not 10000% sure what you do!
		*/
		class Ingame
		{
			// Dropped items without fissix
			class GroundWeaponHolder
			{
				lifeTime = 10;
				interval = 5;
			};

			// Dropped items with fissix
			class WeaponHolderSimulated
			{
				lifeTime = 10;
				interval = 5;
			};

			// Corpses and wrecks
			class AllDead
			{
				lifeTime = 15;
				interval = 5;
			};

			// Loot spawned inside a building
			class Loot
			{
				lifeTime = 8;
				interval = 1;
			};

			// Never touch this or you will break your sever!
			class Groups
			{
				interval = 0.5;
			};
		};

		class Database
		{
			// Remove all territories (and contructions + containers in it) that were not paid after X days
			territoryLifeTime = 7;

			// Remove all containers outside of territories that have not been used for X days
			// Example: Tents
			containerLifeTime = 10;

			// Remove all constructions outside of territories that are older than X days or not moved for X days
			// Example: Work Benches
			constructionLifeTime = 2;

			// Remove all vehicles that were not moved/used for X days
			vehicleLifeTime = 3;

			// Set safe as abandoned
			abandonedTime = 7;

		};
	};

	///////////////////////////////////////////////////////////////////////
	// RESPECT, YO
	///////////////////////////////////////////////////////////////////////
	class Respect
	{
		/**
		* Defines the factor of respect you gain for every pop tab in revenue
		*
		* Default: Get 1 respect for every 10 pop tabs
		*/
		tradingRespectFactor = 0.1;

		/**
		* Defines the amount of respect earned/lost for certain types of frags
		*/
		class Frags
		{
			bambi = -1000;				// Bambi slayers
			friendlyFire = -1000;		// For party members
			standard = 100;				// Normal kill
			domination = 100;			// Keeps killing the same guy
			letItRain = 150;			// MG, also vehicle MGs
			humiliation = 300;			// Axe
			passenger = 400;			// Out of car/chopper/boat
			roadKill = 200;				// :)
			bigBird = 600;				// Roadkill, but with chopper/plane
			chuteGreaterChopper = 1000;	// Someone flies into chute and chopper/plane explodes
		};

		class Handcuffs
		{
			trapping = -200;				// A handcuffs B
			breakingFree = 200; 			// B broke free
			releasedByHero = 50; 			// C releases B
			releasedByHostageTaker = 50; 	// A releases B
		};

		class Bonus
		{
			// Bonus per full 100m
			per100mDistance = 25;

			// First blood after server restart
			firstBlood = 200;

			// If you kill someone while you are in your own territory
			homie = 20;

			// If you kill someone who is in his own territory
			raid = 20;

			/*
				Example with killstreak = 50

				Frag  Factor   Bonus
				2    * 50      +100
				3    * 50      +150
				4    * 50      +200
				5    * 50      +250
			*/
			killStreak = 50;

			// Kills within this amount of seconds stack (default: 2 minutes)
			killStreakTimeout = 600;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// KILLFEED MAN!
	///////////////////////////////////////////////////////////////////////

	class KillFeed
	{
		// Shows a kill feed for well kills
		showKillFeed = 1;
	};

	///////////////////////////////////////////////////////////////////////
	// PLAYER SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////
	class BambiSettings
	{
		/**
		 * Loadout of new bambi players
		 *
		 * (They will always spawn with a bambi overall - you cannot
		 * change the loadout uniform)
		 */
		loadOut[] =
		{
			"Exile_Item_XM8",
			"V_Rangemaster_belt"
		};

		/**
		 * Enables or disables parachute spawning.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		parachuteSpawning = 1;

		/**
		 * Enables or disables halo jumping. Only applies
		 * if parachute spawning is enabled.
		 *
		 * Remember that if you enable halo jump, it is adviced
		 * to adjust the parachuteDropHeight to something around
		 * 1km or so.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		haloJump = 1;

		/**
		 * Parachute drop height in meters.
		 */
		parachuteDropHeight = 1000;

		/**
		 * Number of minutes where a fresh spawned player remains in the
		 * bambi state. It will end the bambi state after this timeout
		 * expired or when they pick up their first weapon. Whatever
		 * happens first.
		 */
		protectionDuration = 5;

		/**
		 * Radius of spawn zones around the center of spawn zone markers.
		 */
		spawnZoneRadius = 500;

		/**
		 * These vehicles spawn on server restart close to spawn zones.
		 * They are non-persistent and will despawn on server restart.
		 * Basically they are just used to get away from the spawn zone
		 * faster.
		 *
		 * {Number of vehicles *per* spawn zone, vehicle class name}
		 */
		spawnZoneVehicles[] =
		{
			{5, "Exile_Bike_OldBike"},
			{5, "Exile_Bike_MountainBike"}
		};
	};

	///////////////////////////////////////////////////////////////////////
	// VEHICLE SPAWN CONFIGURATION
	// Updated based on http://www.exilemod.com/topic/14289-guide-custom-vehicle-spawn-airgroundwater/?page=1
	///////////////////////////////////////////////////////////////////////

	class VehicleSpawn
    {
        /** Grid Size for Vehicle spawning,
        * smaller the number more Vehicle,
        * you get the point
        */
        groundGridSize = 10000;
        waterGridSize = 10000;
        airGridSize = 10000;

        /**
        * Vehicle ammount per grid
        * kinda self explanitory
        */
        groundGridAmount = 30;
        waterGridAmount = 15;
        airGridAmount = 5;
        /**
        * Creates global markers for vehicle spawn tweeking,
        * after you are satisfied with vehicle ammount and spread set this to 0.
        */
        groundDebugMarkers = 0;
        waterDebugMarkers = 0;
        airDebugMarkers = 0;
        /**
         * Radius of spawn around Airport.
         */
        groundSpawnRadius = 9000;
        waterSpawnRadius = 5000;
        airSpawnRadius = 500;
        /**
         * Radius of spawn around Road/Coast
         */
        groundSpawnRadiusRoad = 10;
        waterSpawnRadiusCoast = 50;
        airSpawnRadiusRoad = 50;
        /**
        * The server will apply random damage up to this value when spawning a vehicle.
        */
        groundDamageChance = 100; // % chance for a vehicle HITPOINT to be damaged
        waterDamageChance = 100; // % chance for a vehicle HITPOINT to be damaged
        airDamageChance = 100; // % chance for a vehicle HITPOINT to be damaged

        groundMaximumDamage = 0.9; // maximum vehicle HITPOINT to be damaged
        waterMaximumDamage = 0.9; // maximum vehicle HITPOINT to be damaged
        airMaximumDamage = 0.9; // maximum vehicle HITPOINT to be damaged
        /**
         * Enables or disables nightvision optics on ALL vehicles
         *
         * 0 = off
         * 1 = on
         */
        NightVision = 1;

        /**
         * Enables or disables thermal optics on ALL vehicles
         *
         * 0 = off
         * 1 = on
         */
        ThermalVision = 0;

        /**
         * Set this to 1 to unlock vehicles on server boot if they are in safe zones
         *
         * 0 = off
         * 1 = on
         */
        UnlockInSafeZonesAfterRestart = 1;

        // Stuff to spawn on roads
        ground[] =
        {
            "Exile_Bike_QuadBike_Black",
            "Exile_Bike_QuadBike_Blue",
            "Exile_Bike_QuadBike_Red",
            "Exile_Bike_QuadBike_White",
            "Exile_Bike_QuadBike_Nato",
            "Exile_Bike_QuadBike_Csat",
            "Exile_Bike_QuadBike_Fia",
            "Exile_Bike_QuadBike_Guerilla01",
            "Exile_Bike_QuadBike_Guerilla02",
            "Exile_Car_Hatchback_Beige",
            "Exile_Car_Hatchback_Green",
            "Exile_Car_Hatchback_Blue",
            "Exile_Car_Hatchback_BlueCustom",
            "Exile_Car_Hatchback_BeigeCustom",
            "Exile_Car_Hatchback_Yellow",
            "Exile_Car_Hatchback_Grey",
            "Exile_Car_Hatchback_Black",
            "Exile_Car_Hatchback_Dark",
            "Exile_Car_Hatchback_Rusty1",
            "Exile_Car_Hatchback_Rusty2",
            "Exile_Car_Hatchback_Rusty3",
            "Exile_Car_Ikarus_Blue",
            "Exile_Car_Ikarus_Red",
            "Exile_Car_Ikarus_Party",
            "Exile_Car_Ural_Open_Blue",
            "Exile_Car_Ural_Open_Yellow",
            "Exile_Car_Ural_Open_Worker",
            "Exile_Car_Ural_Open_Military",
            "Exile_Car_Ural_Covered_Blue",
            "Exile_Car_Ural_Covered_Yellow",
            "Exile_Car_Ural_Covered_Worker",
            "Exile_Car_Ural_Covered_Military",
            "Exile_Car_SUVXL_Black",
            "Exile_Car_Tractor_Red",
            "Exile_Car_OldTractor_Red",
            "Exile_Car_Octavius_White",
            "Exile_Car_Octavius_Black",
            "Exile_Car_UAZ_Green",
            "Exile_Car_UAZ_Open_Green",
            "Exile_Car_LandRover_Red",
            "Exile_Car_LandRover_Urban",
            "Exile_Car_LandRover_Green",
            "Exile_Car_LandRover_Sand",
            "Exile_Car_LandRover_Desert",
            "Exile_Car_LandRover_Ambulance_Green",
            "Exile_Car_LandRover_Ambulance_Desert",
            "Exile_Car_LandRover_Ambulance_Sand",
            "Exile_Car_Lada_Green",
            "Exile_Car_Lada_Taxi",
            "Exile_Car_Lada_Red",
            "Exile_Car_Lada_White",
            "Exile_Car_Lada_Hipster",
            "Exile_Car_Volha_Blue",
            "Exile_Car_Volha_White",
            "Exile_Car_Volha_Black",
            "Exile_Car_Hatchback_Sport_Red",
            "Exile_Car_Hatchback_Sport_Blue",
            "Exile_Car_Hatchback_Sport_Orange",
            "Exile_Car_Hatchback_Sport_White",
            "Exile_Car_Hatchback_Sport_Beige",
            "Exile_Car_Hatchback_Sport_Green",
            "Exile_Car_HEMMT",
            "Exile_Car_Hunter",
            "Exile_Car_Ifrit",
            "Exile_Car_Offroad_Red",
            "Exile_Car_Offroad_Beige",
            "Exile_Car_Offroad_White",
            "Exile_Car_Offroad_Blue",
            "Exile_Car_Offroad_DarkRed",
            "Exile_Car_Offroad_BlueCustom",
            "Exile_Car_Offroad_Guerilla01",
            "Exile_Car_Offroad_Guerilla02",
            "Exile_Car_Offroad_Guerilla03",
            "Exile_Car_Offroad_Guerilla04",
            "Exile_Car_Offroad_Guerilla05",
            "Exile_Car_Offroad_Guerilla06",
            "Exile_Car_Offroad_Guerilla07",
            "Exile_Car_Offroad_Guerilla08",
            "Exile_Car_Offroad_Guerilla09",
            "Exile_Car_Offroad_Guerilla10",
            "Exile_Car_Offroad_Guerilla11",
            "Exile_Car_Offroad_Guerilla12",
            "Exile_Car_Offroad_Rusty1",
            "Exile_Car_Offroad_Rusty2",
            "Exile_Car_Offroad_Rusty3",
            "Exile_Car_Offroad_Armed_Guerilla01",
            "Exile_Car_Offroad_Armed_Guerilla02",
            "Exile_Car_Offroad_Armed_Guerilla03",
            "Exile_Car_Offroad_Armed_Guerilla04",
            "Exile_Car_Offroad_Armed_Guerilla05",
            "Exile_Car_Offroad_Armed_Guerilla06",
            "Exile_Car_Offroad_Armed_Guerilla07",
            "Exile_Car_Offroad_Armed_Guerilla08",
            "Exile_Car_Offroad_Armed_Guerilla09",
            "Exile_Car_Offroad_Armed_Guerilla10",
            "Exile_Car_Offroad_Armed_Guerilla11",
            "Exile_Car_Offroad_Armed_Guerilla12",
            "Exile_Car_Offroad_Repair_Civillian",
            "Exile_Car_Offroad_Repair_Red",
            "Exile_Car_Offroad_Repair_Beige",
            "Exile_Car_Offroad_Repair_White",
            "Exile_Car_Offroad_Repair_Blue",
            "Exile_Car_Offroad_Repair_DarkRed",
            "Exile_Car_Offroad_Repair_BlueCustom",
            "Exile_Car_Offroad_Repair_Guerilla01",
            "Exile_Car_Offroad_Repair_Guerilla02",
            "Exile_Car_Offroad_Repair_Guerilla03",
            "Exile_Car_Offroad_Repair_Guerilla04",
            "Exile_Car_Offroad_Repair_Guerilla05",
            "Exile_Car_Offroad_Repair_Guerilla06",
            "Exile_Car_Offroad_Repair_Guerilla07",
            "Exile_Car_Offroad_Repair_Guerilla08",
            "Exile_Car_Offroad_Repair_Guerilla09",
            "Exile_Car_Offroad_Repair_Guerilla10",
            "Exile_Car_Offroad_Repair_Guerilla11",
            "Exile_Car_Offroad_Repair_Guerilla12",
            "Exile_Car_Strider",
            "Exile_Car_SUV_Red",
            "Exile_Car_SUV_Black",
            "Exile_Car_SUV_Grey",
            "Exile_Car_SUV_Orange",
            "Exile_Car_Tempest",
            "Exile_Car_Van_Black",
            "Exile_Car_Van_White",
            "Exile_Car_Van_Red",
            "Exile_Car_Van_Guerilla01",
            "Exile_Car_Van_Guerilla02",
            "Exile_Car_Van_Guerilla03",
            "Exile_Car_Van_Guerilla04",
            "Exile_Car_Van_Guerilla05",
            "Exile_Car_Van_Guerilla06",
            "Exile_Car_Van_Guerilla07",
            "Exile_Car_Van_Guerilla08",
            "Exile_Car_Van_Box_Black",
            "Exile_Car_Van_Box_White",
            "Exile_Car_Van_Box_Red",
            "Exile_Car_Van_Box_Guerilla01",
            "Exile_Car_Van_Box_Guerilla02",
            "Exile_Car_Van_Box_Guerilla03",
            "Exile_Car_Van_Box_Guerilla04",
            "Exile_Car_Van_Box_Guerilla05",
            "Exile_Car_Van_Box_Guerilla06",
            "Exile_Car_Van_Box_Guerilla07",
            "Exile_Car_Van_Box_Guerilla08",
            "Exile_Car_Van_Fuel_Black",
            "Exile_Car_Van_Fuel_White",
            "Exile_Car_Van_Fuel_Red",
            "Exile_Car_Van_Fuel_Guerilla01",
            "Exile_Car_Van_Fuel_Guerilla02",
            "Exile_Car_Van_Fuel_Guerilla03",
            "Exile_Car_Zamak"
        };

        // Stuff to spawn on water
        water[] =
        {
            "Exile_Boat_MotorBoat_Police",
            "Exile_Boat_MotorBoat_Orange",
            "Exile_Boat_MotorBoat_White",
            "Exile_Boat_RubberDuck_CSAT",
            "Exile_Boat_RubberDuck_Digital",
            "Exile_Boat_RubberDuck_Orange",
            "Exile_Boat_RubberDuck_Blue",
            "Exile_Boat_RubberDuck_Black",
            "Exile_Boat_SDV_CSAT",
            "Exile_Boat_SDV_Digital",
            "Exile_Boat_SDV_Grey"
        };

        // Stuff to spawn on airfield
        air[] =
        {
//            "Exile_Chopper_Huey_Green",
//            "Exile_Chopper_Huey_Desert",
//            "Exile_Chopper_Huey_Armed_Green",
//            "Exile_Chopper_Huey_Armed_Desert",
//            "Exile_Chopper_Hellcat_Green",
//            "Exile_Chopper_Hellcat_FIA",
//            "Exile_Chopper_Hummingbird_Green",
//            "Exile_Chopper_Hummingbird_Civillian_Blue",
//            "Exile_Chopper_Hummingbird_Civillian_Red",
//            "Exile_Chopper_Hummingbird_Civillian_ION",
//            "Exile_Chopper_Hummingbird_Civillian_BlueLine",
//            "Exile_Chopper_Hummingbird_Civillian_Digital",
//            "Exile_Chopper_Hummingbird_Civillian_Elliptical",
//            "Exile_Chopper_Hummingbird_Civillian_Furious",
//            "Exile_Chopper_Hummingbird_Civillian_GrayWatcher",
//            "Exile_Chopper_Hummingbird_Civillian_Jeans",
//            "Exile_Chopper_Hummingbird_Civillian_Light",
//            "Exile_Chopper_Hummingbird_Civillian_Shadow",
//            "Exile_Chopper_Hummingbird_Civillian_Sheriff",
//            "Exile_Chopper_Hummingbird_Civillian_Speedy",
//            "Exile_Chopper_Hummingbird_Civillian_Sunset",
//            "Exile_Chopper_Hummingbird_Civillian_Vrana",
//            "Exile_Chopper_Hummingbird_Civillian_Wasp",
//            "Exile_Chopper_Hummingbird_Civillian_Wave",
//            "Exile_Chopper_Huron_Black",
//            "Exile_Chopper_Huron_Green",
//            "Exile_Chopper_Mohawk_FIA",
//            "Exile_Chopper_Orca_CSAT",
//            "Exile_Chopper_Orca_Black",
//            "Exile_Chopper_Orca_BlackCustom",
//            "Exile_Chopper_Taru_Transport_CSAT",
//            "Exile_Chopper_Taru_Transport_Black",
//            "Exile_Chopper_Taru_CSAT",
//            "Exile_Chopper_Taru_Black",
//            "Exile_Chopper_Taru_Covered_CSAT",
//            "Exile_Chopper_Taru_Covered_Black",
            "Exile_Plane_Cessna"
        };
    };

	class Weather
	{
		/*
			You can define multiple "keyframes" for the weather to change. The server will pick
			a keyframe randomly to simulate the weather. It will change the weather-keyframes
			based on the following interval
		*/
		interval = 30;

		/*
			Add the keyframes here. The server will pick one random, so if you want one
			weather type of be more dominant compared to others, add it multiple times
		*/
		keyframes[] = {"Cloudy", "Thunderstorm"};

		/*
			This is a keyframe. Look up the BIKI to get more details about the parameters

			Be sure to design the fog settings at a view distance of 1,600m as this is the
			limit in multiplayer by default

			https://community.bistudio.com/wiki/fogParams
			https://community.bistudio.com/wiki/overcast
			https://community.bistudio.com/wiki/setWaves
			https://community.bistudio.com/wiki/setWindStr
			https://community.bistudio.com/wiki/setGusts
			https://community.bistudio.com/wiki/setRain
			https://community.bistudio.com/wiki/setLightnings
			https://community.bistudio.com/wiki/setRainbow
		*/
		class Sunny
		{
			fogValue = 0.1;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 0.2;
			waves = 0.2;
			wind = 0.25;
			gusts = 0.1;
			rain = 0;
			lightnings = 0;
			rainbows = 0;
		};

		class Cloudy
		{
			fogValue = 0.2;
			fogDecay = 0.1;
			fogBase = 5;
			overcast = 0.4;
			waves = 0.4;
			wind = 0.25;
			gusts = 0.5;
			rain = 0.1;
			lightnings = 0.1;
			rainbows = 1;
		};

		class Thunderstorm
		{
			fogValue = 0.7;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 1;
			waves = 1;
			wind = 0.25;
			gusts = 0.5;
			rain = 1;
			lightnings = 1;
			rainbows = 0.5;
		};
	};

	class Time
	{
		// Uses Dedicated Server time as ingame Time
		useRealTime = 0;

		// Will overide RealTime
		useStaticTime = 1;

		// time in ARMA FORMAT << CONFIG
		// https://community.bistudio.com/wiki/setDate

		staticTime[] = {2039,10,24,15,30};
	};


	class RCON
	{
		/*
			Note that for this to work you need to have serverCommandPassowrd defined in config.cfg and BE enabled
		*/

		// This needs to match config.cfg serverCommandPassword
		serverPassword = "";

		// Autolocks server until its ready to accept players
		useAutoLock = 0;

		// Server will autoLock at that time before restart (minutes)
		restartAutoLock = 3;

		/*
			Number of hours and minutes of your restart period.

			Examples:

			{4, 0} = Every 4 hours
			{1, 30} = Every one and a half hour (who the hell would do this?)
		*/
		restartTimer[] = {3, 0};

		/*
			Kicks players before restart to prevent gear loss.
			We strongely recommend to use this!

			0 = off
			1 = on
		*/
		useAutoKick = 0;

		/*
			Number of minutes before the server kicks players that did
			not disconnect before the restart. Should at least be two
			minutes!
		*/
		kickTime = 2;

		/*
			Self-explanatory

			0 = off
			1 = on
		*/
		useRestartMessages = 0;

		/*
			Number of minutes before the restart to inform your players.

			Only use full minutes here. Value like 5.5 have not been tested.
		*/
		restartWarningTime[] = {15, 10, 5, 3};

		/*
			If set to 1 server will execute '#shutdown',
			to try to shutdown the server
		*/

		useShutdown = 0;
	};

	class ServerSettings
	{
		/*
			Support for custom server FSM if wanted
		*/
		serverFSM = "exile_server\fsm\main.fsm";

		/*
			If this is enabled, Exile developers will spawn with a ton of pop tabs.
			We will have a hard time debugging things if you disable this.
		*/
		devFriendyMode = 1;

		devs[] =
		{
			"76561197985241690", // Eichi
			"76561198022879703", // Grim
			"76561197968999666", // Mr.White^ex
			"76561198075905447"  // Vishpala
		};
	};

	class Events
	{
		/*
			A list of events that are active
		*/
		enabledEvents[] = {"SupplyBox","AbandonedSafe"};

		class SupplyBox // DONT USE IT: WIP BROKEN
		{
			/*
				Drops a supply box on a parachute next to a random airport on the map.
				The box may contain items. The box can be transported to a territory
				and installed to become a normal storage container.
			*/
			type = "spawn";
			function = "ExileServer_system_event_supplyBox_start";
			minTime = 15; // minutes
			maxTime = 30; // minutes
			minimumPlayersOnline = 0;
			dropRadius = 500; // 500m around an airport (including the main airport on Altis!)
			dropAltitude = 100; // altitude of the drop
			markerTime = 10; // minutes

			/*
				These are different types of boxes can be dropped.
				You can specify the cargo a box should contain.
				The type of box is chosen randomly from the following list.
				Add a type multiple times to increase the chance of being used.
			*/
			types[] = {"Tools", "Food", "Food", "RepairParts"};

			class BoxTypes
			{
				class Beer
				{
					items[] =
					{
						{"Exile_Item_Beer", 24}
					};
				};

				class Nades
				{
					items[] =
					{
						{"Exile_Item_Beer", 10}
					};
				};

				class Food
				{
					items[] =
					{
						{"Exile_Item_BBQSandwich", 5},
						{"Exile_Item_Catfood", 5},
						{"Exile_Item_ChristmasTinner", 5},
						{"Exile_Item_GloriousKnakworst", 5},
						{"Exile_Item_SausageGravy", 5},
						{"Exile_Item_Surstromming", 5},
						{"Exile_Item_CanOpener", 1},
						{"Exile_Item_CookingPot", 1},
						{"Exile_Item_Matches", 1}
					};
				};

				class Tools
				{
					items[] =
					{
						{"Exile_Item_Wrench", 1},
						{"Exile_Item_Shovel", 1},
						{"Exile_Item_Screwdriver", 1},
						{"Exile_Item_Pliers", 1},
						{"Exile_Item_Handsaw", 1},
						{"Exile_Item_FireExtinguisher", 1},
						{"Exile_Item_DuctTape", 1}
					};
				};

				class RepairParts
				{
					items[] =
					{
						{"Exile_Item_CarWheel", 8},
						{"Exile_Item_FuelCanisterFull", 4},
						{"Exile_Item_OilCanister", 1},
						{"Exile_Item_Grinder", 1},
						{"Exile_Item_CordlessScrewdriver", 1}
					};
				};
			};
		};
		class AbandonedSafe
		{

			type = "spawn";
			function = "ExileServer_system_event_abandonedSafe_start";
			minTime = 60; // minutes
			maxTime = 120; // minutes
			minimumPlayersOnline = 0;
			markerTime = 15; // minutes
		};
	};
};