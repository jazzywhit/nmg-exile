////////////////////////////////////////////////////////////////////
// 	DonkeyPunch Arma 3 for Exile Addon Mod
// 	by DirtySanchez (aka. =RAV=MusTanG)
//	a3_dpExile_Characters
//	config.cpp
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DonkeyPunch_Exile_Addons_Characters
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","DonkeyPunch_Exile_Addons_Security"};
	};
};
class UniformSlotInfo;
class DefaultEventHandlers;
class AnimationSources;
class CfgVehicles
{
	class VirtualMan_F;
	class Man;
	class CAManBase: Man
	{
		class ViewPilot;
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierWB: CAManBase
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Soldier_base_F: SoldierWB
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class Exile_Unit_Abstract: B_Soldier_base_F
	{
		scope = 0;
		author = "Exile Mod Team";
		displayName = "Exile Unit Abstract";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		canCarryBackPack = 1;
		nakedUniform = "U_BasicBody";
		model = "";
		uniformClass = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles: UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
		armor = 2;
		armorStructural = 5;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
		};
	};
	class DPExile_Unit_BambiAI: Exile_Unit_Abstract
	{
		scope = 2;
		displayName = "Exile Player";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "Exile_Uniform_BambiOverall";
		hiddenSelectionsTextures[] = {"\exile_assets\model\Exile_Uniform_BambiOverall_co.paa"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_9x21_Mag","Exile_Item_Bandage","Chemlight_green","Chemlight_green"};
	};
	class DPExile_Unit_BambiAIArmed: Exile_Unit_Abstract
	{
		scope = 2;
		displayName = "Exile Player";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "Exile_Uniform_BambiOverall";
		hiddenSelectionsTextures[] = {"\exile_assets\model\Exile_Uniform_BambiOverall_co.paa"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"hgun_Rook40_F"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","Exile_Item_InstaDoc","Chemlight_green","Chemlight_green"};
	};
	class DPExile_Unit_BambiAI_Woodland: Exile_Unit_Abstract
	{
		scope = 2;
		displayName = "Exile Woodland";
		uniformClass = "Exile_Unitform_Woodland";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_9x21_Mag","Exile_Item_Bandage","Chemlight_green","Chemlight_green"};
	};
	class DPExile_Unit_BambiAIArmed_Woodland: Exile_Unit_Abstract
	{
		scope = 2;
		displayName = "Exile Woodland";
		uniformClass = "Exile_Unitform_Woodland";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"hgun_Rook40_F"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","Exile_Item_InstaDoc","Chemlight_green","Chemlight_green"};
	};
	class DPExile_Unit_BanditAI: Exile_Unit_Abstract
	{
		scope = 2;
		displayName = "DonkeyPunch BanditAI";
		uniformClass = "U_BG_Guerrilla_6_1";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa"};
		linkedItems[] = {"V_TacVest_khk","H_ShemagOpen_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"srifle_DMR_03_F","hgun_Rook40_F"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","Exile_Item_InstaDoc","Chemlight_green","Chemlight_green"};
	};
	class DPExile_Unit_HeroAI: Exile_Unit_Abstract
	{
		scope = 2;
		displayName = "DonkeyPunch HeroAI";
		uniformClass = "U_BG_Guerrilla_6_1";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa"};
		linkedItems[] = {"V_TacVest_khk","H_MilCap_mcamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"srifle_DMR_03_F","hgun_Rook40_F"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","Exile_Item_InstaDoc","Chemlight_green","Chemlight_green"};
	};
};
class cfgMods
{
	author = "DonkeyPunch.INFO";
	timepacked = "1337000000";
};
//};