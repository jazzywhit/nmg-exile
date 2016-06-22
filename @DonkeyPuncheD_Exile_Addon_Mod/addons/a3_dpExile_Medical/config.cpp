////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Wed Jan 27 02:35:25 2016 : Source 'file' date Wed Jan 27 02:35:25 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class C:\Users\MusTanG\Desktop\AddonExpanded\addons\a3_dpExile_Medical\config.bin{
class CfgPatches
{
	class DonkeyPunch_Exile_Addons_Medical
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","DonkeyPunch_Exile_Addons_Security"};
		magazines[] = {"DP_Item_Antibiotic_MaD","DP_Item_BloodBag_MaD","DP_Item_Painkillers_MaD","DP_Item_Vitamin_MaD","DP_Item_AquaCure_MaD"};
	};
};
class CfgMagazines
{
	class Exile_AbstractItem_Interaction_Consuming;
	class Exile_AbstractItem_Interaction_Eating;
	class Exile_AbstractItem_Interaction_Eating_Can;
	class Exile_AbstractItem_Interaction_Drinking;
	class Exile_AbstractItem_Interaction_Consuming_Healing;
	class Exile_AbstractItem_Interaction_Using;
	class Exile_AbstractItem_Interaction_Constructing;
	class Exile_AbstractItem;
	class DP_Item_Antibiotic_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Antibiotics";
		descriptionShort = "Pills will make your troubles go away....<br/>Health: +75%/20s";
		mass = 15;
		model = "\A3\Structures_F_EPA\Items\Medical\Antibiotic_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Antibiotic_F.jpg";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding = 0;
				effects[] = {{ 0,75,20 }};
			};
		};
	};
	class DP_Item_BloodBag_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Blood Bag";
		descriptionShort = "No wonder Vampires dig this shit<br/>Health: +100%/20s<br/>Thirst: +100%/5s<br/>Hunger: +100%/5s";
		mass = 35;
		model = "\A3\Structures_F_EPA\Items\Medical\BloodBag_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BloodBag_F.jpg";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding = 1;
				effects[] = {{ 0,100,20 },{ 2,100,5 },{ 3,100,5 }};
			};
		};
	};
	class DP_Item_Painkillers_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Painkillers";
		descriptionShort = "Pills will make your troubles go away....<br/>Health: +75%/20s";
		mass = 15;
		model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PainKillers_F.jpg";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding = 0;
				effects[] = {{ 0,50,20 }};
			};
		};
	};
	class DP_Item_Vitamin_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Vitamin Capsules";
		descriptionShort = "Pills will make your troubles go away....<br/>Health: +75%/20s";
		mass = 15;
		model = "\A3\Structures_F_EPA\Items\Medical\VitaminBottle_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_VitaminBottle_F.jpg";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding = 0;
				effects[] = {{ 0,50,20 }};
			};
		};
	};
	class DP_Item_AquaCure_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Aqua Cure H2O Purication Tabs";
		descriptionShort = "Easier than Boiling. OH YEAH";
		mass = 15;
		model = "\A3\Structures_F_EPA\Items\Medical\WaterPurificationTablets_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_WaterPurificationTablets_F.jpg";
		class Interactions{};
	};
};
class cfgMods
{
	author = "DonkeyPunch.INFO";
	timepacked = "1337000000";
};
//};
