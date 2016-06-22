////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// 	DonkeyPunch Arma 3 for Exile Addon Mod
// 	by DirtySanchez (aka. =RAV=MusTanG)
//	a3_dpExile_A3Addons_Simulated
//	config.cpp
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DonkeyPunch_Exile_Addons_Simulated
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
	class DP_Item_Land_LightHouse_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Lighthouse";
	descriptionShort = "Used to Build a Lighthouse";
	mass = 30;
	model = "\A3\Structures_F\Ind\Cargo\CargoBox_V1_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_LightHouse_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};

	class DP_Item_Land_Lighthouse_small_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Lighthouse (Small)";
	descriptionShort = "Used to Build a Lighthouse (Small)";
	mass = 30;
	model = "\A3\Structures_F\Ind\Cargo\CargoBox_V1_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_Lighthouse_small_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};
	
	class DP_Item_Land_LampAirport_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Airport Lamp [on]";
	descriptionShort = "Used to Build a Airport Lamp [on]";
	mass = 30;
	model = "\A3\Structures_F\Ind\Cargo\CargoBox_V1_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_LampAirport_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};
	
	class DP_Item_Land_LampDecor_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Lamp (Decorative) [on]";
	descriptionShort = "Used to Build a Lamp (Decorative) [on]";
	mass = 30;
	model = "\A3\Structures_F\Ind\Cargo\CargoBox_V1_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_LampDecor_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};
	
	class DP_Item_Land_LampHalogen_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Lamp (Halogen) [on]";
	descriptionShort = "Used to Build a Lamp (Halogen) [on]";
	mass = 30;
	model = "\A3\Structures_F\Ind\Cargo\CargoBox_V1_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_LampHalogen_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};
	
	class DP_Item_Land_LampHarbour_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Lamp (Harbor) [on]";
	descriptionShort = "Used to Build a Lamp (Harbor) [on]";
	mass = 30;
	model = "\A3\Structures_F\Ind\Cargo\CargoBox_V1_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_LampHarbour_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};
	
	class DP_Item_Land_LampShabby_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Lamp (Shabby) [on]";
	descriptionShort = "Used to Build a Lamp (Shabby) [on]";
	mass = 30;
	model = "\A3\Structures_F\Ind\Cargo\CargoBox_V1_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_LampShabby_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};
	
	class DP_Item_Land_LampSolar_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Lamp (Solar) [on]";
	descriptionShort = "Used to Build a Lamp (Solar) [on]";
	mass = 30;
	model = "\A3\Structures_F\Ind\Cargo\CargoBox_V1_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_LampSolar_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};
	
	class DP_Item_Land_LampStreet_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Street Lamp [on]";
	descriptionShort = "Used to Build a Street Lamp [on]";
	mass = 30;
	model = "\A3\Structures_F\Ind\Cargo\CargoBox_V1_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_LampStreet_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};
	
	class DP_Item_Land_LampStreet_small_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Street Lamp (Small) [on]";
	descriptionShort = "Used to Build a Street Lamp (Small) [on]";
	mass = 30;
	model = "\A3\Structures_F\Ind\Cargo\CargoBox_V1_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_LampStreet_small_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};
	
	class DP_Item_Land_FloodLight_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Floodlight";
	descriptionShort = "Used to Build a Floodlight";
	mass = 30;
	model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_FloodLight_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};
	
	class DP_Item_Land_PortableLight_single_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Portable Lights (Single)";
	descriptionShort = "Used to Build a Portable Lights (Single)";
	mass = 30;
	model = "\A3\Structures_F\Ind\Cargo\CargoBox_V1_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_PortableLight_single_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};

	class DP_Item_Land_PortableLight_double_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Portable Lights (Double)";
	descriptionShort = "Used to Build a Portable Lights (Double)";
	mass = 30;
	model = "\A3\Structures_F\Ind\Cargo\CargoBox_V1_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_PortableLight_double_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};
	
	class DP_Item_Land_PowerPoleWooden_L_F_Kit: Exile_AbstractItem
	{
	scope = 2;
	displayName = "Wooden Power Pole (Lamp) [on]";
	descriptionShort = "Used to Build a Wooden Power Pole (Lamp) [on]";
	mass = 30;
	model = "\A3\Structures_F\Ind\Cargo\CargoBox_V1_F.p3d";
	picture = "\a3_dpExile_A3Addons_Simulated\images\Land_PowerPoleWooden_L_F.paa";
	class Interactions
	{
	class Constructing: Exile_AbstractItem_Interaction_Constructing{};
	};
	};
	
};	
	
class AbstractConstruction
{
	staticObject = "";
	previewObject = "";
	kitMagazine = "";
	upgradeObject = "";
	refundObjects[] = {};
	requiresTerritory = 0;
	canBePlacedOnRoad = 1;
	class SnapPositions{};
	class SnapObjects{};
};
class CfgConstruction
{	
	class Land_LightHouse_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_LightHouse_F";
	previewObject = "DP_Land_LightHouse_F_Preview";
	kitMagazine = "DP_Item_Land_LightHouse_F_Kit";
	refundObjects[] = {"DP_Item_Land_LightHouse_F_Kit"};
	};

	class Land_Lighthouse_small_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_Lighthouse_small_F";
	previewObject = "DP_Land_Lighthouse_small_F_Preview";
	kitMagazine = "DP_Item_Land_Lighthouse_small_F_Kit";
	refundObjects[] = {"DP_Item_Land_Lighthouse_small_F_Kit"};
	};
	
	class Land_LampAirport_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_LampAirport_F";
	previewObject = "DP_Land_LampAirport_F_Preview";
	kitMagazine = "DP_Item_Land_LampAirport_F_Kit";
	refundObjects[] = {"DP_Item_Land_LampAirport_F_Kit"};
	};

	class Land_LampDecor_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_LampDecor_F";
	previewObject = "DP_Land_LampDecor_F_Preview";
	kitMagazine = "DP_Item_Land_LampDecor_F_Kit";
	refundObjects[] = {"DP_Item_Land_LampDecor_F_Kit"};
	};

	class Land_LampHalogen_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_LampHalogen_F";
	previewObject = "DP_Land_LampHalogen_F_Preview";
	kitMagazine = "DP_Item_Land_LampHalogen_F_Kit";
	refundObjects[] = {"DP_Item_Land_LampHalogen_F_Kit"};
	};

	class Land_LampHarbour_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_LampHarbour_F";
	previewObject = "DP_Land_LampHarbour_F_Preview";
	kitMagazine = "DP_Item_Land_LampHarbour_F_Kit";
	refundObjects[] = {"DP_Item_Land_LampHarbour_F_Kit"};
	};

	class Land_LampShabby_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_LampShabby_F";
	previewObject = "DP_Land_LampShabby_F_Preview";
	kitMagazine = "DP_Item_Land_LampShabby_F_Kit";
	refundObjects[] = {"DP_Item_Land_LampShabby_F_Kit"};
	};

	class Land_LampSolar_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_LampSolar_F";
	previewObject = "DP_Land_LampSolar_F_Preview";
	kitMagazine = "DP_Item_Land_LampSolar_F_Kit";
	refundObjects[] = {"DP_Item_Land_LampSolar_F_Kit"};
	};

	class Land_LampStadium_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_LampStadium_F";
	previewObject = "DP_Land_LampStadium_F_Preview";
	kitMagazine = "DP_Item_Land_LampStadium_F_Kit";
	refundObjects[] = {"DP_Item_Land_LampStadium_F_Kit"};
	};

	class Land_LampStreet_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_LampStreet_F";
	previewObject = "DP_Land_LampStreet_F_Preview";
	kitMagazine = "DP_Item_Land_LampStreet_F_Kit";
	refundObjects[] = {"DP_Item_Land_LampStreet_F_Kit"};
	};

	class Land_LampStreet_small_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_LampStreet_small_F";
	previewObject = "DP_Land_LampStreet_small_F_Preview";
	kitMagazine = "DP_Item_Land_LampStreet_small_F_Kit";
	refundObjects[] = {"DP_Item_Land_LampStreet_small_F_Kit"};
	};
	
	class Land_FloodLight_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_FloodLight_F";
	previewObject = "DP_Land_FloodLight_F_Preview";
	kitMagazine = "DP_Item_Land_FloodLight_F_Kit";
	refundObjects[] = {"DP_Item_Land_FloodLight_F_Kit"};
	};
	class Land_PortableLight_single_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_PortableLight_single_F";
	previewObject = "DP_Land_PortableLight_single_F_Preview";
	kitMagazine = "DP_Item_Land_PortableLight_single_F_Kit";
	refundObjects[] = {"DP_Item_Land_PortableLight_single_F_Kit"};
	};

	class Land_PortableLight_double_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_PortableLight_double_F";
	previewObject = "DP_Land_PortableLight_double_F_Preview";
	kitMagazine = "DP_Item_Land_PortableLight_double_F_Kit";
	refundObjects[] = {"DP_Item_Land_PortableLight_double_F_Kit"};
	};
	
	class Land_PowerPoleWooden_L_F_Construction: AbstractConstruction
	{
	staticObject = "DP_Land_PowerPoleWooden_L_F";
	previewObject = "DP_Land_PowerPoleWooden_L_F_Preview";
	kitMagazine = "DP_Item_Land_PowerPoleWooden_L_F_Kit";
	refundObjects[] = {"DP_Item_Land_PowerPoleWooden_L_F_Kit"};
	};	
};	
class CfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class House_Small_F: House_F{};
	class Ruins_F;
	class ReammoBox;
	class ReammoBox_F;
	class NonStrategic;
	class thingX;
	class Exile_Construction_Abstract_Physics: thingX
	{
		scope = 1;
		author = "Exile Mod Team";
		mapSize = 1;
		armor = 1000;
		cost = 1000;
		icon = "iconObject_1x1";
		destrType = "DestructNo";
		vehicleclass = "ExileConstructions";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	class Exile_Construction_Abstract_Static: NonStrategic
	{
		scope = 1;
		author = "Exile Mod Team";
		mapSize = 1;
		armor = 10000;
		cost = 1000;
		icon = "iconObject_1x1";
		destrType = "DestructBuilding";
		vehicleclass = "ExileConstructions";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		exileRequiresSimulation = 1;
	};
	class DP_Land_LightHouse_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Lighthouse";
		model = "\A3\Structures_F\Dominants\Lighthouse\LightHouse_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};	
	class DP_Land_LightHouse_F : Exile_Construction_Abstract_Static {
		mapSize = 12.09;
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_LightHouse_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "DonkeyPuncheD Lighthouse";
		model = "\A3\Structures_F\Dominants\Lighthouse\LightHouse_F.p3d";
		icon = "iconObject_circle";
		
		cost = 80000;
		armor = 10000;
		armorLights = 2;
		featureSize = 60;
		ExileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		numberOfDoors = 1;
		ladders[] = {{"Ladder_1_start", "Ladder_1_end"}};
		selectionDamage = "DamT_1";
		class DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\A3\Structures_F\Dominants\Lighthouse\LightHouse_ruins_F.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
			class Smoke1 {
				simulation = "particles";
				type = "HouseDestructionSmoke3";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2 : Smoke1 {
				type = "HouseDestructionSmoke4";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3 : Smoke1 {
				type = "HouseDestrSmokeLong";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Med {
				simulation = "particles";
				type = "HouseDestructionSmoke3Med";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med : Smoke1Med {
				type = "HouseDestructionSmoke4Med";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Med : Smoke1Med {
				type = "HouseDestrSmokeLongMed";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Low {
				simulation = "particles";
				type = "HouseDestructionSmoke3Low";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low : Smoke1Low {
				type = "HouseDestructionSmoke4Low";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Low : Smoke1Low {
				type = "HouseDestrSmokeLongLow";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
			};
			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Reflectors {
			class Reflector_1 {
				color[] = {8000, 7000, 6000};
				ambient[] = {20, 17.5, 15};
				intensity = 1000;
				size = 1;
				innerAngle = 5;
				outerAngle = 45;
				coneFadeCoef = 3;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 25;
				flareMaxDistance = 2500;
				blinking = 0;
				dayLight = 0;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0.1;
					quadratic = 0;
					hardLimitStart = 800;
					hardLimitEnd = 1000;
				};
			};
			class Reflector_2 : Reflector_1 {
				position = "Light_2_pos";
				direction = "Light_2_dir";
				hitpoint = "Light_2_hitpoint";
				selection = "Light_2_hide";
				color[] = {8000, 7000, 6000};
				ambient[] = {20, 17.5, 15};
				intensity = 1000;
				size = 1;
				innerAngle = 5;
				outerAngle = 45;
				coneFadeCoef = 3;
				useFlare = 1;
				flareSize = 25;
				flareMaxDistance = 2500;
				blinking = 0;
				dayLight = 0;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0.1;
					quadratic = 0;
					hardLimitStart = 800;
					hardLimitEnd = 1000;
				};
			};
			class Reflector_3 : Reflector_1 {
				position = "Light_3_pos";
				direction = "Light_3_dir";
				hitpoint = "Light_3_hitpoint";
				selection = "Light_3_hide";
				color[] = {8000, 7000, 6000};
				ambient[] = {20, 17.5, 15};
				intensity = 1000;
				size = 1;
				innerAngle = 5;
				outerAngle = 45;
				coneFadeCoef = 3;
				useFlare = 1;
				flareSize = 25;
				flareMaxDistance = 2500;
				blinking = 0;
				dayLight = 0;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0.1;
					quadratic = 0;
					hardLimitStart = 800;
					hardLimitEnd = 1000;
				};
			};
			class Cabin_illumination {
				color[] = {1000, 900, 800};
				ambient[] = {10, 9, 8};
				intensity = 10;
				size = 1;
				innerAngle = 275;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "Light_4_pos";
				direction = "Light_4_dir";
				hitpoint = "Cabin_illumination_hitpoint";
				selection = "Cabin_illumination_hide";
				useFlare = 0;
				blinking = 0;
				dayLight = 0;
				class Attenuation {
					start = 1;
					constant = 0;
					linear = 0.5;
					quadratic = 25;
					hardLimitStart = 2;
					hardLimitEnd = 6;
				};
			};
			class Door_Lamp_1 {
				color[] = {2400, 2200, 2000};
				ambient[] = {24, 22, 20};
				intensity = 10;
				size = 1;
				innerAngle = 20;
				outerAngle = 90;
				coneFadeCoef = 1;
				position = "Light_5_pos";
				direction = "Light_5_dir";
				hitpoint = "Door_Lamp_hitpoint";
				selection = "";
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 35;
				dayLight = 0;
				blinking = 0;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 5;
					quadratic = 50;
					hardLimitStart = 8;
					hardLimitEnd = 10;
				};
			};
		};
		class Damage {
			tex[] = {};
			mat[] = {"A3\Structures_F\Dominants\Lighthouse\Data\Lighthouse_multi_1.rvmat", "A3\Structures_F\Dominants\Lighthouse\Data\destruct_Lighthouse_multi_1.rvmat", "A3\Structures_F\Dominants\Lighthouse\Data\destruct_Lighthouse_multi_1.rvmat", "A3\Structures_F\Dominants\Lighthouse\Data\Lighthouse_multi_2.rvmat", "A3\Structures_F\Dominants\Lighthouse\Data\destruct_Lighthouse_multi_2.rvmat", "A3\Structures_F\Dominants\Lighthouse\Data\destruct_Lighthouse_multi_2.rvmat"};
		};
		class AnimationSources {
			class LockedDoor_source {
				source = "user";
				initPhase = 0;
				animPeriod = 0.1;
			};
			class Door_1_source {
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "MetalDoorsSound";
				soundPosition = "Door_1_trigger";
			};
			class Door_1_handle_source {
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
		};
		class UserActions {
			class OpenDoor_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open door";
				position = "Door_1_trigger";
				priority = 0.4;
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this call ExileClient_object_construction_openShow";
				statement = "([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorOpen)";
			};
			class CloseDoor_1 : OpenDoor_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close door";
				priority = 0.2;
				condition = "((this animationPhase 'Door_1_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door_1',0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement = "([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorClose)";
				position = "Door_1_trigger";
				radius = 1.5;
				onlyForPlayer = 0;
			};
			class OpenLockedDoor_1 : OpenDoor_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition = "((this animationPhase 'Door_1_rot') < 0.1) && ((this getVariable ['bis_disabled_Door_1',0]) == 1) && (cameraOn isKindOf 'CAManBase')";
				statement = "([this, 'Door_Handle_1_rot_1', 'Door_Locked_1_rot'] call BIS_fnc_LockedDoorOpen)";
				displayName = "Open door";
				position = "Door_1_trigger";
				priority = 0.4;
				radius = 1.5;
				onlyForPlayer = 0;
			};
		};
		actionBegin1 = "OpenDoor_1";
		actionEnd1 = "OpenDoor_1";
		accuracy = 1000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 4;
		isLockingDisabled = 1;
		keepHorizontalPlacement = 1;
		replaceDamagedLimit = 0.99999;
		simulation = "house";
		animated = 0;
		side = 3;
		nameSound = "obj_building";
		reversed = 0;
		hasDriver = 0;
		audible = 0;
		picture = "pictureStaticObject";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		countsForScoreboard = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class EventHandlers {
		};
		class MarkerLights {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		aggregateReflectors[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		selectionFireAnim = "";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
	class DP_Land_Lighthouse_small_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Lighthouse (Small)";
		model = "\A3\Structures_F\Dominants\Lighthouse\Lighthouse_small_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DP_Land_Lighthouse_small_F : Exile_Construction_Abstract_Static {
		mapSize = 12.58;
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_Lighthouse_small_F";
		scope = 1;
		scopeCurator = 2;
		exileRequiresSimulation = 1;
		displayName = "DonkeyPuncheD Lighthouse (Small)";
		model = "\A3\Structures_F\Dominants\Lighthouse\Lighthouse_small_F.p3d";
		icon = "iconObject_3x2";
		
		class DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\A3\Structures_F\Dominants\Lighthouse\Lighthouse_small_ruins_F.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
			class Smoke1 {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2 {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3 {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Med {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Med {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Low {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Low {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
			};
			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		cost = 35000;
		accuracy = 1000;
		armor = 10000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 4;
		isLockingDisabled = 1;
		keepHorizontalPlacement = 1;
		replaceDamagedLimit = 0.99999;
		simulation = "house";
		animated = 0;
		ladders[] = {};
		side = 3;
		nameSound = "obj_building";
		reversed = 0;
		hasDriver = 0;
		audible = 0;
		picture = "pictureStaticObject";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		countsForScoreboard = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		featureSize = 0;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		
		armorLights = 0.4;
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class EventHandlers {
		};
		class MarkerLights {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		class Reflectors {
		};
		aggregateReflectors[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		class AnimationSources {
		};
		selectionFireAnim = "";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
	class DP_Land_LampAirport_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Airport Lamp [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampAirport_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DP_Land_LampAirport_F : Exile_Construction_Abstract_Static {
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_LampAirport_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "DonkeyPuncheD Airport Lamp [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampAirport_F.p3d";
		icon = "iconObject_circle";
		exileRequiresSimulation = 1;
		aggregateReflectors[] = {{"Light_1", "Light_2", "Light_3"}};
		class Reflectors {
			class Light_1 {
				color[] = {2500, 4000, 6000};
				ambient[] = {2.5, 4, 6};
				intensity = 2;
				size = 1;
				innerAngle = 100;
				outerAngle = 165;
				coneFadeCoef = 4;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = 130;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.3;
					hardLimitStart = 50;
					hardLimitEnd = 65;
				};
			};
			class Light_2 : Light_1 {
				position = "Light_2_pos";
				direction = "Light_2_dir";
				hitpoint = "Light_2_hitpoint";
				selection = "Light_2_hide";
				color[] = {2500, 4000, 6000};
				ambient[] = {2.5, 4, 6};
				intensity = 2;
				size = 1;
				innerAngle = 100;
				outerAngle = 165;
				coneFadeCoef = 4;
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = 130;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.3;
					hardLimitStart = 50;
					hardLimitEnd = 65;
				};
			};
			class Light_3 : Light_1 {
				position = "Light_3_pos";
				direction = "Light_3_dir";
				hitpoint = "Light_3_hitpoint";
				selection = "Light_3_hide";
				color[] = {2500, 4000, 6000};
				ambient[] = {2.5, 4, 6};
				intensity = 2;
				size = 1;
				innerAngle = 100;
				outerAngle = 165;
				coneFadeCoef = 4;
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = 130;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.3;
					hardLimitStart = 50;
					hardLimitEnd = 65;
				};
			};
		};
		mapSize = 3.68;
		armor = 10000;
		class Hitpoints {
		};
		class AnimationSources {
		};
		class MarkerLights {
			class Light_4 {
				color[] = {1, 0, 0};
				ambient[] = {0.01, 0, 0};
				intensity = 800;
				name = "Light_4_pos";
				useFlare = 1;
				flareSize = 1.5;
				flareMaxDistance = 1000;
				activeLight = 1;
				blinking = 0;
				dayLight = 0;
				drawLight = 0;
				class Attenuation {
					start = 0;
					constant = 2;
					linear = 10;
					quadratic = 20;
					hardLimitStart = 5;
					hardLimitEnd = 6;
				};
			};
		};
		
		cost = 1000;
		armorLights = 0.001;
		isLockingDisabled = 1;
		class DestructionEffects {
			class Smoke1 {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2 {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3 {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Med {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Med {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Low {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Low {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
			};
			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		accuracy = 1000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 4;
		keepHorizontalPlacement = 1;
		replaceDamagedLimit = 0.99999;
		simulation = "house";
		animated = 0;
		ladders[] = {};
		side = 3;
		nameSound = "obj_building";
		reversed = 0;
		hasDriver = 0;
		audible = 0;
		picture = "pictureStaticObject";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		countsForScoreboard = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		featureSize = 0;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class EventHandlers {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		selectionFireAnim = "";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
	class DP_Land_LampDecor_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Lamp (Decorative) [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampDecor_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DP_Land_LampDecor_F : Exile_Construction_Abstract_Static {
		mapSize = 1.38;
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_LampDecor_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "DonkeyPuncheD Lamp (Decorative) [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampDecor_F.p3d";
		icon = "iconObject_circle";
		exileRequiresSimulation = 1;
		armor = 10000;
		aggregateReflectors[] = {{"Light_1", "Light_2", "Light_3"}};
		class Reflectors {
			class Light_1 {
				color[] = {1000, 650, 400};
				ambient[] = {10, 6.5, 4};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.8;
				flareMaxDistance = 250;
				class Attenuation {
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_2 : Light_1 {
				position = "Light_2_pos";
				direction = "Light_2_dir";
				hitpoint = "Light_2_hitpoint";
				selection = "Light_2_hide";
				color[] = {1000, 650, 400};
				ambient[] = {10, 6.5, 4};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				useFlare = 1;
				flareSize = 0.8;
				flareMaxDistance = 250;
				class Attenuation {
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_3 : Light_1 {
				position = "Light_3_pos";
				direction = "Light_3_dir";
				hitpoint = "Light_3_hitpoint";
				selection = "Light_3_hide";
				color[] = {1000, 650, 400};
				ambient[] = {10, 6.5, 4};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				useFlare = 1;
				flareSize = 0.8;
				flareMaxDistance = 250;
				class Attenuation {
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
		};
		
		cost = 1000;
		armorLights = 0.001;
		isLockingDisabled = 1;
		class DestructionEffects {
			class Smoke1 {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2 {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3 {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Med {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Med {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Low {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Low {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
			};
			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		accuracy = 1000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 4;
		keepHorizontalPlacement = 1;
		replaceDamagedLimit = 0.99999;
		simulation = "house";
		animated = 0;
		ladders[] = {};
		side = 3;
		nameSound = "obj_building";
		reversed = 0;
		hasDriver = 0;
		audible = 0;
		picture = "pictureStaticObject";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		countsForScoreboard = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		featureSize = 0;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class EventHandlers {
		};
		class MarkerLights {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		class AnimationSources {
		};
		selectionFireAnim = "";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
	
	class DP_Land_LampHalogen_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Lamp (Halogen) [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampHalogen_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DP_Land_LampHalogen_F : Exile_Construction_Abstract_Static {
		mapSize = 1.57;
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_LampHalogen_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "DonkeyPuncheD Lamp (Halogen) [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampHalogen_F.p3d";
		icon = "iconObject_circle";
		exileRequiresSimulation = 1;
		armor = 10000;
		aggregateReflectors[] = {{"Light_1", "Light_2", "Light_3", "Light_4"}};
		class Reflectors {
			class Light_1 {
				color[] = {1000, 1000, 1200};
				ambient[] = {10, 10, 12};
				intensity = 5;
				size = 1;
				innerAngle = 60;
				outerAngle = 130;
				coneFadeCoef = 6;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 250;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.5;
					hardLimitStart = 50;
					hardLimitEnd = 70;
				};
			};
			class Light_2 : Light_1 {
				position = "Light_2_pos";
				direction = "Light_2_dir";
				hitpoint = "Light_2_hitpoint";
				selection = "Light_2_hide";
				color[] = {1000, 1000, 1200};
				ambient[] = {10, 10, 12};
				intensity = 5;
				size = 1;
				innerAngle = 60;
				outerAngle = 130;
				coneFadeCoef = 6;
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 250;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.5;
					hardLimitStart = 50;
					hardLimitEnd = 70;
				};
			};
			class Light_3 : Light_1 {
				position = "Light_3_pos";
				direction = "Light_3_dir";
				hitpoint = "Light_3_hitpoint";
				selection = "Light_3_hide";
				color[] = {1000, 1000, 1200};
				ambient[] = {10, 10, 12};
				intensity = 5;
				size = 1;
				innerAngle = 60;
				outerAngle = 130;
				coneFadeCoef = 6;
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 250;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.5;
					hardLimitStart = 50;
					hardLimitEnd = 70;
				};
			};
			class Light_4 : Light_1 {
				position = "Light_4_pos";
				direction = "Light_4_dir";
				hitpoint = "Light_4_hitpoint";
				selection = "Light_4_hide";
				color[] = {1000, 1000, 1200};
				ambient[] = {10, 10, 12};
				intensity = 5;
				size = 1;
				innerAngle = 60;
				outerAngle = 130;
				coneFadeCoef = 6;
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 250;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.5;
					hardLimitStart = 50;
					hardLimitEnd = 70;
				};
			};
		};
		
		cost = 1000;
		armorLights = 0.001;
		isLockingDisabled = 1;
		class DestructionEffects {
			class Smoke1 {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2 {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3 {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Med {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Med {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Low {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Low {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
			};
			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		accuracy = 1000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 4;
		keepHorizontalPlacement = 1;
		replaceDamagedLimit = 0.99999;
		simulation = "house";
		animated = 0;
		ladders[] = {};
		side = 3;
		nameSound = "obj_building";
		reversed = 0;
		hasDriver = 0;
		audible = 0;
		picture = "pictureStaticObject";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		countsForScoreboard = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		featureSize = 0;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class EventHandlers {
		};
		class MarkerLights {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		class AnimationSources {
		};
		selectionFireAnim = "";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
	class DP_Land_LampHarbour_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Lamp (Harbor) [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampHarbour_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DP_Land_LampHarbour_F : Exile_Construction_Abstract_Static {
		mapSize = 0.8;
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_LampHarbour_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "DonkeyPuncheD Lamp (Harbor) [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampHarbour_F.p3d";
		icon = "iconObject_circle";
		exileRequiresSimulation = 1;
		armor = 10000;
		class Reflectors {
			class Light_1 {
				color[] = {700, 600, 500};
				ambient[] = {7, 6, 5};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 140;
				coneFadeCoef = 1;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 85;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 25;
					hardLimitEnd = 30;
				};
			};
		};
		
		cost = 1000;
		armorLights = 0.001;
		isLockingDisabled = 1;
		class DestructionEffects {
			class Smoke1 {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2 {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3 {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Med {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Med {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Low {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Low {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
			};
			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		accuracy = 1000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 4;
		keepHorizontalPlacement = 1;
		replaceDamagedLimit = 0.99999;
		simulation = "house";
		animated = 0;
		ladders[] = {};
		side = 3;
		nameSound = "obj_building";
		reversed = 0;
		hasDriver = 0;
		audible = 0;
		picture = "pictureStaticObject";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		countsForScoreboard = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		featureSize = 0;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class EventHandlers {
		};
		class MarkerLights {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		aggregateReflectors[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		class AnimationSources {
		};
		selectionFireAnim = "";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
	class DP_Land_LampShabby_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Lamp (Shabby) [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampShabby_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DP_Land_LampShabby_F : Exile_Construction_Abstract_Static {
		mapSize = 0.79;
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_LampShabby_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "DonkeyPuncheD Lamp (Shabby) [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampShabby_F.p3d";
		icon = "iconObject_circle";
		exileRequiresSimulation = 1;
		armor = 10000;
		class Reflectors {
			class Light_1 {
				color[] = {1100, 700, 500};
				ambient[] = {11, 7, 5};
				intensity = 5;
				size = 1;
				innerAngle = 80;
				outerAngle = 130;
				coneFadeCoef = 3;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 100;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.8;
					hardLimitStart = 30;
					hardLimitEnd = 40;
				};
			};
		};
		
		
		cost = 1000;
		armorLights = 0.001;
		isLockingDisabled = 1;
		class DestructionEffects {
			class Smoke1 {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2 {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3 {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Med {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Med {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Low {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Low {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
			};
			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		accuracy = 1000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 4;
		keepHorizontalPlacement = 1;
		replaceDamagedLimit = 0.99999;
		simulation = "house";
		animated = 0;
		ladders[] = {};
		side = 3;
		nameSound = "obj_building";
		reversed = 0;
		hasDriver = 0;
		audible = 0;
		picture = "pictureStaticObject";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		countsForScoreboard = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		featureSize = 0;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class EventHandlers {
		};
		class MarkerLights {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		aggregateReflectors[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		class AnimationSources {
		};
		selectionFireAnim = "";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
	class DP_Land_LampSolar_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Lamp (Solar) [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampSolar_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DP_Land_LampSolar_F : Exile_Construction_Abstract_Static {
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_LampSolar_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "DonkeyPuncheD Lamp (Solar) [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampSolar_F.p3d";
		icon = "iconObject_circle";
		exileRequiresSimulation = 1;	
		armor = 10000;
		class Reflectors {
			class Light_1 {
				color[] = {1000, 1000, 1100};
				ambient[] = {10, 10, 11};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 130;
				coneFadeCoef = 2;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 85;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.9;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
		};
		mapSize = 2.4;
		
		
		cost = 1000;
		armorLights = 0.001;
		isLockingDisabled = 1;
		class DestructionEffects {
			class Smoke1 {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2 {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3 {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Med {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Med {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Low {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Low {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
			};
			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		accuracy = 1000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 4;
		keepHorizontalPlacement = 1;
		replaceDamagedLimit = 0.99999;
		simulation = "house";
		animated = 0;
		ladders[] = {};
		side = 3;
		nameSound = "obj_building";
		reversed = 0;
		hasDriver = 0;
		audible = 0;
		picture = "pictureStaticObject";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		countsForScoreboard = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		featureSize = 0;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class EventHandlers {
		};
		class MarkerLights {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		aggregateReflectors[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		class AnimationSources {
		};
		selectionFireAnim = "";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
	class DP_Land_LampStreet_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Street Lamp [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampStreet_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DP_Land_LampStreet_F : Exile_Construction_Abstract_Static {
		mapSize = 3.78;
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_LampStreet_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "DonkeyPuncheD Street Lamp [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampStreet_F.p3d";
		icon = "iconObject_circle";
		exileRequiresSimulation = 1;
		armor = 10000;
		class Reflectors {
			class Light_1 {
				color[] = {1200, 600, 300};
				ambient[] = {12, 6, 3};
				intensity = 7;
				size = 1;
				innerAngle = 100;
				outerAngle = 180;
				coneFadeCoef = 2;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = 220;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.3;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
		};
		
		
		cost = 1000;
		armorLights = 0.001;
		isLockingDisabled = 1;
		class DestructionEffects {
			class Smoke1 {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2 {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3 {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Med {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Med {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Low {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Low {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
			};
			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		accuracy = 1000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 4;
		keepHorizontalPlacement = 1;
		replaceDamagedLimit = 0.99999;
		simulation = "house";
		animated = 0;
		ladders[] = {};
		side = 3;
		nameSound = "obj_building";
		reversed = 0;
		hasDriver = 0;
		audible = 0;
		picture = "pictureStaticObject";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		countsForScoreboard = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		featureSize = 0;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class EventHandlers {
		};
		class MarkerLights {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		aggregateReflectors[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		class AnimationSources {
		};
		selectionFireAnim = "";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
	class DP_Land_LampStreet_small_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Street Lamp (Small) [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampStreet_small_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DP_Land_LampStreet_small_F : Exile_Construction_Abstract_Static {
		mapSize = 0.7;
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_LampStreet_small_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "DonkeyPuncheD Street Lamp (Small) [on]";
		model = "\A3\Structures_F\Civ\Lamps\LampStreet_small_F.p3d";
		icon = "iconObject_circle";
		exileRequiresSimulation = 1;
		armor = 10000;
		class Reflectors {
			class Light_1 {
				color[] = {1000, 1100, 1200};
				ambient[] = {10, 11, 12};
				intensity = 3;
				size = 1;
				innerAngle = 120;
				outerAngle = 170;
				coneFadeCoef = 1;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 1.1;
				flareMaxDistance = 200;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.1;
					hardLimitStart = 35;
					hardLimitEnd = 55;
				};
			};
		};
		
		
		cost = 1000;
		armorLights = 0.001;
		isLockingDisabled = 1;
		class DestructionEffects {
			class Smoke1 {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2 {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3 {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Med {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Med {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Low {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Low {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
			};
			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		accuracy = 1000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 4;
		keepHorizontalPlacement = 1;
		replaceDamagedLimit = 0.99999;
		simulation = "house";
		animated = 0;
		ladders[] = {};
		side = 3;
		nameSound = "obj_building";
		reversed = 0;
		hasDriver = 0;
		audible = 0;
		picture = "pictureStaticObject";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		countsForScoreboard = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		featureSize = 0;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class EventHandlers {
		};
		class MarkerLights {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		aggregateReflectors[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		class AnimationSources {
		};
		selectionFireAnim = "";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
	class DP_Land_FloodLight_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Floodlight";
		model = "\A3\Structures_F\Items\Electronics\FloodLight_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DP_Land_FloodLight_F : Exile_Construction_Abstract_Static {
		mapSize = 0.556;
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_FloodLight_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "DonkeyPuncheD Floodlight";
		model = "\A3\Structures_F\Items\Electronics\FloodLight_F.p3d";
		icon = "iconObject_2x3";
		exileRequiresSimulation = 1;
		
		
		cost = 100;
		simulation = "thingX";
		accuracy = 1000;
		animated = 0;
		countsForScoreboard = 0;
		class DestructionEffects {
		};
		reversed = 0;
		nameSound = "obj_object";
		audible = 0;
		side = 3;
		weight = 0;
		class InventoryPlacements {
		};
		submerged = 0;
		submergeSpeed = 0;
		airFriction2[] = {0.01, 0.01, 0.01};
		airFriction1[] = {0.01, 0.01, 0.01};
		airFriction0[] = {0.01, 0.01, 0.01};
		airRotation = 0;
		gravityFactor = 1;
		timeToLive = 1e+010;
		disappearAtContact = 0;
		hasDriver = 0;
		picture = "pictureThing";
		weapons[] = {};
		magazines[] = {};
		minHeight = 0.1;
		avgHeight = 0.2;
		maxHeight = 0.4;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		irTarget = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		featureSize = 0;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		armor = 10000;
		armorLights = 0.4;
		armorStructural = 1;
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedLimit = 0.9;
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class EventHandlers {
		};
		class MarkerLights {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		class Reflectors {
		};
		aggregateReflectors[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		class AnimationSources {
		};
		selectionFireAnim = "";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
	class DP_Land_PortableLight_single_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Portable Lights (Single)";
		model = "\A3\Structures_F_EPA\Civ\Constructions\PortableLight_single_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DP_Land_PortableLight_single_F : Exile_Construction_Abstract_Static {
		mapSize = 0.824;
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_PortableLight_single_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "DonkeyPuncheD Portable Lights (Single)";
		model = "\A3\Structures_F_EPA\Civ\Constructions\PortableLight_single_F.p3d";
		icon = "iconObject_5x4";
		exileRequiresSimulation = 1;
		
		class AnimationSources {
			class Light_1_pitch_source {
				source = "user";
				initPhase = 0;
				animPeriod = "1/45";
			};
			class Light_1_jaw_source {
				source = "user";
				initPhase = 0.13;
				animPeriod = 2;
			};
		};
		class Reflectors {
			class Light_1 {
				color[] = {1000, 1000, 1200};
				ambient[] = {10, 10, 12};
				intensity = 5;
				size = 1;
				innerAngle = 60;
				outerAngle = 130;
				coneFadeCoef = 6;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 250;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.5;
					hardLimitStart = 50;
					hardLimitEnd = 70;
				};
			};
		};
		
		armor = 10000;
		cost = 1000;
		armorLights = 0.001;
		isLockingDisabled = 1;
		class DestructionEffects {
			class Smoke1 {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2 {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3 {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Med {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Med {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Low {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Low {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
			};
			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		accuracy = 1000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 4;
		keepHorizontalPlacement = 1;
		replaceDamagedLimit = 0.99999;
		simulation = "house";
		animated = 0;
		ladders[] = {};
		side = 3;
		nameSound = "obj_building";
		reversed = 0;
		hasDriver = 0;
		audible = 0;
		picture = "pictureStaticObject";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		countsForScoreboard = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		featureSize = 0;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class EventHandlers {
		};
		class MarkerLights {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		aggregateReflectors[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		selectionFireAnim = "";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
	class DP_Land_PortableLight_double_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Portable Lights (Double)";
		model = "\A3\Structures_F_EPA\Civ\Constructions\PortableLight_double_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DP_Land_PortableLight_double_F : Exile_Construction_Abstract_Static {
		mapSize = 1.352;
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_PortableLight_double_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "DonkeyPuncheD Portable Lights (Double)";
		model = "\A3\Structures_F_EPA\Civ\Constructions\PortableLight_double_F.p3d";
		icon = "iconObject_2x1";
		exileRequiresSimulation = 1;
		
		aggregateReflectors[] = {{"Light_1", "Light_2"}};
		class Reflectors {
			class Light_1 {
				color[] = {1000, 1000, 1200};
				ambient[] = {10, 10, 12};
				intensity = 5;
				size = 1;
				innerAngle = 60;
				outerAngle = 130;
				coneFadeCoef = 6;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 250;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.5;
					hardLimitStart = 50;
					hardLimitEnd = 70;
				};
			};
			class Light_2 : Light_1 {
				position = "Light_2_pos";
				direction = "Light_2_dir";
				hitpoint = "Light_2_hitpoint";
				selection = "Light_2_hide";
				color[] = {1000, 1000, 1200};
				ambient[] = {10, 10, 12};
				intensity = 5;
				size = 1;
				innerAngle = 60;
				outerAngle = 130;
				coneFadeCoef = 6;
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 250;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.5;
					hardLimitStart = 50;
					hardLimitEnd = 70;
				};
			};
		};
		class AnimationSources {
			class Light_1_pitch_source {
				source = "user";
				initPhase = 0;
				animPeriod = "1/45";
			};
			class Light_1_jaw_source {
				source = "user";
				initPhase = 0.13;
				animPeriod = 2;
			};
		};
		
		armor = 10000;
		cost = 1000;
		armorLights = 0.001;
		isLockingDisabled = 1;
		class DestructionEffects {
			class Smoke1 {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2 {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3 {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Med {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Med {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Low {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Low {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
			};
			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		accuracy = 1000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 4;
		keepHorizontalPlacement = 1;
		replaceDamagedLimit = 0.99999;
		simulation = "house";
		animated = 0;
		ladders[] = {};
		side = 3;
		nameSound = "obj_building";
		reversed = 0;
		hasDriver = 0;
		audible = 0;
		picture = "pictureStaticObject";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		countsForScoreboard = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		featureSize = 0;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class EventHandlers {
		};
		class MarkerLights {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		selectionFireAnim = "";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
	class DP_Land_PowerPoleWooden_L_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DonkeyPuncheD Wooden Power Pole (Lamp) [on]";
		model = "\A3\Structures_F\Ind\PowerLines\PowerPoleWooden_L_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DP_Land_PowerPoleWooden_L_F : Exile_Construction_Abstract_Static {
		author = "Bohemia Interactive";
		_generalMacro = "DP_Land_PowerPoleWooden_L_F";
		scope = 1;
		scopeCurator = 0;
		displayName = "DonkeyPuncheD Wooden Power Pole (Lamp) [on]";
		model = "\A3\Structures_F\Ind\PowerLines\PowerPoleWooden_L_F.p3d";
		exileRequiresSimulation = 1;
		cost = 1000;
		armorLights = 0.01;
		class Reflectors {
			class Light_1 {
				color[] = {1000, 500, 300};
				ambient[] = {10, 5, 3};
				intensity = 7;
				size = 1;
				innerAngle = 90;
				outerAngle = 150;
				coneFadeCoef = 2;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = 220;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.3;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
		};
		mapSize = 2.79;
		
		compatibleWires[] = {};
		class EventHandlers {
			killed = "[(_this select 0)] execVM ""\A3\Structures_F\Ind\PowerLines\Scripts\column_ruins.sqf""";
		};
		class DestructionEffects {
			class Smoke1 {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2 {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3 {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Med {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Med {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke1Low {
				type = "HouseDestructionSmoke3Small";
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low {
				type = "HouseDestructionSmoke4Small";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Smoke3Low {
				type = "HouseDestrSmokeLongSmall";
				lifeTime = 0.035;
				simulation = "particles";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
			};
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
			};
			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		accuracy = 1000;
		armor = 10000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 4;
		isLockingDisabled = 1;
		keepHorizontalPlacement = 1;
		replaceDamagedLimit = 0.99999;
		simulation = "house";
		animated = 0;
		ladders[] = {};
		side = 3;
		nameSound = "obj_building";
		reversed = 0;
		hasDriver = 0;
		icon = "iconObject";
		audible = 0;
		picture = "pictureStaticObject";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		countsForScoreboard = 0;
		access = 0;
		autocenter = 1;
		shadow = 1;
		featureSize = 0;
		faction = "Default";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		spotableDarkNightLightsOff = 0.003;
		spotableNightLightsOff = 0.035;
		spotableNightLightsOn = 4;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		insideDetectCoef = 0.5;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		portrait = "";
		ghostPreview = "";
		
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = "0.01f";
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = "5.0f";
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = "10.0f";
		indirectHitFriendlyCoefAI = "-20.0f";
		indirectHitCivilianCoefAI = "-20.0f";
		indirectHitUnknownCoefAI = "-0.5f";
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		class MarkerLights {
		};
		class NVGMarkers {
		};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {
		};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot {
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt {
		};
		class SoundEquipment {
		};
		class SoundGear {
		};
		class SoundBreath {
		};
		class SoundBreathSwimming {
		};
		class SoundBreathInjured {
		};
		class SoundHitScream {
		};
		class SoundInjured {
		};
		class SoundBreathAutomatic {
		};
		class SoundDrown {
		};
		class SoundChoke {
		};
		class SoundRecovered {
		};
		class SoundBurning {
		};
		class PulsationSound {
		};
		class SoundDrowning {
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		Uav = 0;
		typicalCargo[] = {};
		aggregateReflectors[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		class AnimationSources {
		};
		selectionFireAnim = "";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		features = "";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
	};
};