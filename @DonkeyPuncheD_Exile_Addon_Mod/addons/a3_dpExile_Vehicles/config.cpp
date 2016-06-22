////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// 	DonkeyPunch Arma 3 for Exile Addon Mod
// 	by DirtySanchez (aka. =RAV=MusTanG)
//	a3_dpExile_Skins
//	config.cpp
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DonkeyPunch_Exile_Addons_Vehicles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","DonkeyPunch_Exile_Addons_Security"};
	};
};
class CfgMagazines
{
	class Exile_AbstractItem_Interaction_Using;
	class Exile_AbstractItem_Interaction_Constructing;
	class Exile_AbstractItem;
	class DP_Item_LiftTow_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Lift-Tow Equipment Kit";
		descriptionShort = "DonkeyPunch Presents: A realistic form of Lift and Tow";
		mass = 25;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\a3_dpExile_Vehicles\images\DP_Item_LiftTow_Kit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Using{};
		};
	};
};	
class DefaultEventHandlers;
class AnimationSources;
class CfgVehicles
{
	////////////////////////////////
	// Abstract Strider Armed
	////////////////////////////////
	class I_MRAP_03_hmg_F;
	class DP_Car_Strider_HMG_Abstract: I_MRAP_03_hmg_F
	{
		author = "DirtySanchez";
		_generalMacro = "I_MRAP_03_gmg_F";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Strider HMG";
		fuelConsumptionRate = "0.05f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 2500;
		armor = 250;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class I_MRAP_03_gmg_F;
	class DP_Car_Strider_GMG_Abstract: I_MRAP_03_gmg_F
	{
		author = "DirtySanchez";
		_generalMacro = "I_MRAP_03_gmg_F";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Strider GMG";
		fuelConsumptionRate = "0.05f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 2500;
		armor = 250;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class B_Heli_Light_01_armed_F;
	class DP_Heli_Light_01_Armed_Abstract: B_Heli_Light_01_armed_F
	{
		author = "DirtySanchez";
		_generalMacro = "B_Heli_Light_01_armed_F";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "Hummingbird";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 2500;
		driverCanEject = 1;
		armor = 1250;
		weapons[] = {"M134_minigun","CMFlareLauncher"};
		magazines[] = {"5000Rnd_762x51_Belt","168Rnd_CMFlare_Chaff_Magazine"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class O_Heli_Light_02_v2_F;
	class DP_Heli_Light_02_v2_Abstract: O_Heli_Light_02_v2_F
	{
		author = "DirtySanchez";
		_generalMacro = "B_Heli_Light_01_armed_F";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "Orca";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 2500;
		driverCanEject = 1;
		armor = 1250;
		hiddenSelections[] = {"camo1","camo2"};
		weapons[] = {"LMG_Minigun_heli","CMFlareLauncher"};
		magazines[] = {"2000Rnd_65x39_Belt_Tracer_Green_Splash","168Rnd_CMFlare_Chaff_Magazine"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 2;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class B_Heli_Attack_01_F;
	class DP_Heli_Attack_01_Armed_Abstract: B_Heli_Attack_01_F
	{
		author = "DirtySanchez";
		_generalMacro = "B_Heli_Light_01_armed_F";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "BlackBird";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 2500;
		driverCanEject = 1;
		armor = 1250;
		weapons[] = {"gatling_20mm","CMFlareLauncher"};
		magazines[] = {"1000Rnd_20mm_shells","168Rnd_CMFlare_Chaff_Magazine"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 2;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class B_Plane_CAS_01_F;
	class DP_Jet_B_CAS_01_Abstract: B_Plane_CAS_01_F
	{
		author = "DirtySanchez";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileJets";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "Eichi Express";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1000;
		driverCanEject = 1;
		armor = 1250;
		weapons[] = {"Gatling_30mm_Plane_CAS_01_F","CMFlareLauncher"};
		magazines[] = {"1000Rnd_Gatling_30mm_Plane_CAS_01_F","120Rnd_CMFlare_Chaff_Magazine"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 1;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class O_Plane_CAS_02_F;
	class DP_Jet_O_CAS_02_Abstract: O_Plane_CAS_02_F
	{
		author = "DirtySanchez";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileJets";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "Vishpala or BUST";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1000;
		driverCanEject = 1;
		armor = 1250;
		weapons[] = {"Cannon_30mm_Plane_CAS_02_F","CMFlareLauncher"};
		magazines[] = {"500Rnd_Cannon_30mm_Plane_CAS_02_F","120Rnd_CMFlare_Chaff_Magazine"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 1;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class I_Plane_Fighter_03_CAS_F;
	class DP_Jet_I_Fighter_03_CAS_F_Abstract: I_Plane_Fighter_03_CAS_F
	{
		author = "DirtySanchez";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileJets";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "Cleveland Steamer";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1000;
		driverCanEject = 1;
		armor = 1250;
		weapons[] = {"Twin_Cannon_20mm","CMFlareLauncher"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 1;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class I_Plane_Fighter_03_AA_F;
	class DP_Jet_I_Fighter_03_AA_F_Abstract: I_Plane_Fighter_03_AA_F
	{
		author = "DirtySanchez";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileJets";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "Cleveland AASteamer";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1000;
		driverCanEject = 1;
		armor = 1250;
		weapons[] = {"Twin_Cannon_20mm","CMFlareLauncher"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 1;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
	};
};
class cfgMods
{
	author = "DonkeyPunch.INFO";
	timepacked = "1337000000";
};
//};
