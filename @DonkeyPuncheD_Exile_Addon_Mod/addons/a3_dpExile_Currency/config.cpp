////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// 	DonkeyPunch Arma 3 for Exile Addon Mod
// 	by DirtySanchez (aka. =RAV=MusTanG)
//	a3_dpExile_Code
//	config.cpp
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DonkeyPunch_Exile_Addons_Currency
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","DonkeyPunch_Exile_Addons_Security"};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class VehicleMagazine;
	class HandGrenade;
	class Exile_AbstractItem: CA_Magazine
	{
		scope = 1;
		descriptionShort = "Dummy";
		displayName = "Dummy";
		count = 1;
		mass = 1;
		picture = "\exile_assets\texture\item\Dummy.paa";
		model = "\exile_assets\model\Dummy.p3d";
		class Interactions{};
	};
	///////////////////////////////
	//Currencies
	///////////////////////////////
	class DP_Item_Briefcase_Gold_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Briefcase of Gold";
		descriptionShort = "Briefcase of Gold. 10-10oz bars of Gold. 100-1oz Gold Coins.";
		mass = 75;
		model = "\A3\Structures_F\Items\Luggage\Suitcase_F.p3d";
		picture = "\a3_dpExile_Currency\images\suitcase.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\a3_dpExile_Currency\textures\gold_co.paa"};
	};
	class DP_Item_10oz_Gold_Bar_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "10oz Bar of Gold";
		descriptionShort = "10oz Gold Bar. 10 more for a Briefcase.";
		mass = 20;
		model = "\a3_dpExile_Currency\models\10ozGoldBar.p3d";
		picture = "\a3_dpExile_Currency\images\10ozGoldBar.paa";
		
	};
	class DP_Item_1oz_Gold_Coin_USA_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "1oz Gold Coin USA";
		descriptionShort = "1oz Gold Coin. 9 more for 1 10oz Gold Bar.  99 more for a Briefcase.";
		mass = 20;
		model = "\a3_dpExile_Currency\models\1ozUSAGoldCoin.p3d";
		picture = "\a3_dpExile_Currency\images\1ozUSAGoldCoin.paa";
	};
	class DP_Item_10oz_Silver_Bar_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "10oz Silver Bar";
		descriptionShort = "10oz Silver Bar. 9 more for a 1oz Gold Coin.";
		mass = 20;
		model = "\a3_dpExile_Currency\models\10ozSilverBar.p3d";
		picture = "\a3_dpExile_Currency\images\10ozSilverBar.paa";
	};
	class DP_Item_1oz_Silver_Coin_USA_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "1oz Silver Coin USA";
		descriptionShort = "1oz Silver Coin. 9 more for 1 10oz Silver Bar.  99 more for a 1oz Gold Coin.";
		mass = 20;
		model = "\a3_dpExile_Currency\models\1ozUSASilverCoin.p3d";
		picture = "\a3_dpExile_Currency\images\1ozUSASilverCoin.paa";
	};
	class DP_Item_10oz_Platinum_Bar_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "10oz Platinum Bar";
		descriptionShort = "10oz Platinum Bar.";
		mass = 20;
		model = "\a3_dpExile_Currency\models\10ozPlatinumBar.p3d";
		picture = "\a3_dpExile_Currency\images\10ozPlatinumBar.paa";
	};
	class DP_Item_1oz_Platinum_Coin_USA_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "1oz Platinum Coin USA";
		descriptionShort = "1oz Platinum Coin.";
		mass = 50;
		model = "\a3_dpExile_Currency\models\1ozUSAPlatinumCoin.p3d";
		picture = "\a3_dpExile_Currency\images\1ozUSAPlatinumCoin.paa";
	};
/*	class DP_Item_1oz_Copper_Coin_USA_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "1oz Copper Coin USA";
		descriptionShort = "1oz Copper Coin. 9 more for 1 10oz Copper Bar.  99 more for a 1oz Silver Coin.";
		mass = 20;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\a3_dpExile_Currency\images\1ozUSACopperCoin.paa";
	};
	class DP_Item_1oz_Copper_Coin_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "1oz Copper Coin";
		descriptionShort = "1oz Copper Coin. 9 more for 1 10oz Copper Bar.  99 more for a 1oz Silver Coin.";
		mass = 20;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\a3_dpExile_Currency\images\1ozCopperCoin.paa";
	};*/
};
class cfgMods
{
	author = "DonkeyPunch.INFO";
	timepacked = "1337000000";
};
//};
