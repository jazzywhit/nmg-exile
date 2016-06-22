////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// 	DonkeyPunch Arma 3 for Exile Addon Mod
// 	by DirtySanchez (aka. =RAV=MusTanG)
//	a3_dpExile_FoodDrink
//	config.cpp
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DonkeyPunch_Exile_Addons_FoodDrink
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","DonkeyPunch_Exile_Addons_Security"};
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
	///////////////////////////////
	//Drink Items
	///////////////////////////////
	class DP_Item_Spirit_Rusty_MaD : Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Rusty Spirit Lemon-Lime";
		descriptionShort = "DonkeyPunch Presents: Rusty Can of Spirit Soda.<br/>Thirst: +30%/15s<br/>Health: -10%/5s";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Can_Rusty_F.jpg";
		model = "\A3\Structures_F\Items\Food\Can_Rusty_F.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "DP_Exile_EmptyCan_F";
				effects[] = {{ 3,50,15 },{ 0,-10,5 }};
			};
		};
	};
	class DP_Item_Spirit_MaD : Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Spirit Lemon-Lime";
		descriptionShort = "DonkeyPunch Presents: Spirit Soda.<br/>Thirst: +30%/15s";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Can_V1_F.jpg";
		model = "\A3\Structures_F\Items\Food\Can_V1_F.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "DP_Exile_EmptyCan_F";
				effects[] = {{ 3,50,15 },{ 0,-10,5 }};
			};
		};
	};
	class DP_Item_Fanta_MaD : Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Orange Franta";
		descriptionShort = "DonkeyPunch Presents: No Juice Orange DRINK.<br/>Thirst: +30%/15s";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Can_V2_F.jpg";
		model = "\A3\Structures_F\Items\Food\Can_V2_F.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "DP_Exile_EmptyCan_F";
				effects[] = {{ 3,50,15 }};
			};
		};
	};	
	class DP_Item_RedGull_MaD : Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Red Gull";
		descriptionShort = "DonkeyPunch Presents: High Concentration Energy Drink.<br/>Thirst: +50%/10s";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Can_V3_F.jpg";
		model = "\A3\Structures_F\Items\Food\Can_V3_F.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "DP_Exile_EmptyCan_F";
				effects[] = {{ 3,50,10 }};
			};
		};
	};
	class DP_Item_EmptyCan_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Empty Can";
		descriptionShort = "DonkeyPunch Presents: Empty Can.";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Can_Dented_F.jpg";
		model = "\A3\Structures_F\Items\Food\Can_Dented_F.p3d";
		mass = 1;
		class Interactions {};
	};
	///////////////////////////////
	//Food Items
	///////////////////////////////
	class DP_Item_TacticalBacon_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Tactical Bacon! (Cooked)";
		descriptionShort = "Tactical Bacon by DonkeyPunch.INFO!<br/>Hunger +100%/15s";
		model = "\A3\Structures_F\Items\Food\TacticalBacon_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_TacticalBacon_F.jpg";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{ 2,60,15 }};
			};
		};
	};
	class DP_Item_BakedBeans_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Baked Beans! (Cooked)";
		descriptionShort = "Baked Beans by DonkeyPunch.INFO!<br/>Hunger +100%/10s";
		model = "\A3\Structures_F_EPA\Items\Food\BakedBeans_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BakedBeans_F.jpg";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{ 2,60,10 }};
			};
		};
	};
	class DP_Item_CrunchinCrisps_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Crunchin Crisps!";
		descriptionShort = "Crunchin Crisps by DonkeyPunch.INFO!<br/>Hunger +100%/10s";
		model = "\A3\Structures_F_EPA\Items\Food\CerealsBox_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_CerealsBox_F.jpg";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,60,10 }};
			};
		};
	};
	class DP_Item_PowderedMilk_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Powdered Milk!";
		descriptionShort = "Powdered Milk by DonkeyPunch.INFO!<br/>Hunger +50%/10s";
		model = "\A3\Structures_F_EPA\Items\Food\PowderedMilk_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PowderedMilk_F.jpg";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,50,10 }};
			};
		};
	};
	class DP_Item_RichRice_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Natural RichRice!";
		descriptionShort = "Natural RichRice by DonkeyPunch.INFO!<br/>Hunger +100%/5s";
		model = "\A3\Structures_F_EPA\Items\Food\RiceBox_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_RiceBox_F.jpg";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,70,20 }};
			};
		};
	};
	class DP_Item_Salema_FisH_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Salema Fish!";
		descriptionShort = "Salema by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\Salema_porgy_F.p3d";
		picture = "\a3_dpExile_FoodDrink\images\Salema_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,80,20 }};
			};
		};
	};
	class DP_Item_Mackerel_FisH_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Mackerel Fish!";
		descriptionShort = "Mackeral by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\mackerel_F.p3d";
		picture = "\a3_dpExile_FoodDrink\images\Mackerel_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,80,20 }};
			};
		};
	};
	class DP_Item_Tuna_FisH_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Tuna Fish!";
		descriptionShort = "Tuna Fish by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\Tuna_F.p3d";
		picture = "\a3_dpExile_FoodDrink\images\Tuna_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,80,20 }};
			};
		};
	};
	class DP_Item_Mullet_FisH_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Mullet Fish!";
		descriptionShort = "Mullet Fish by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\Mullet_F.p3d";
		picture = "\a3_dpExile_FoodDrink\images\Mullet_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,80,20 }};
			};
		};
	};
	class DP_Item_CatShark_FisH_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP CatShark!";
		descriptionShort = "CatShark by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\CatShark_F.p3d";
		picture = "\a3_dpExile_FoodDrink\images\CatShark_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,80,20 }};
			};
		};
	};
	class DP_Item_Ornate_FisH_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Ornate Fish!";
		descriptionShort = "Ornate by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\ornate_F.p3d";
		picture = "\a3_dpExile_FoodDrink\images\Ornate_random_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,80,20 }};
			};
		};
	};
};
class cfgMods
{
	author = "DonkeyPunch.INFO";
	timepacked = "1337000000";
};
//};
