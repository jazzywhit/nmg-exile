////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// 	DonkeyPunch Arma 3 for Exile Addon Mod
// 	by DirtySanchez (aka. =RAV=MusTanG)
//	a3_dpExile_Traders2
//	config.cpp
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DonkeyPunch_Exile_Addons_Traders2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","DonkeyPunch_Exile_Addons_Security"};
	};
};
class CfgFunctions 
{
	class DonkeyPunch_Traders2 
	{
		class bootstrap 
		{
			file = "\a3_dpExile_Traders2\bootstrap";
			class preInit 
			{
				preInit = 1;
			};
		};
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
	class Exile_Trader_Abstract: B_Soldier_base_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Trader Base";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		backpack = "";
		canCarryBackPack = 1;
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "";
		class EventHandlers
		{
			init = "";
		};
		class UserActions {};
		actionBegin1 = "trade";
		actionEnd1 = "trade";
	};
	/////////////////////////////////////////
	// BlackMarket Traders
	/////////////////////////////////////////
	class Exile_Trader_Armory_BlackMarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Armory Trader";
		uniformClass = "U_Rangemaster";
		linkedItems[] = {"V_Rangemaster_belt","H_Cap_headphones","G_Shades_Black"};
		weapons[] = {"srifle_DMR_06_olive_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />BlackMarket Armory";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_BlackMarket";
			};
		};
	};
	class Exile_Trader_SpecialOperations_BlackMarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Special Operations Trader";
		backpack = "B_Parachute";
		linkedItems[] = {"V_PlateCarrierGL_blk","H_HelmetB_light_black","G_Balaclava_lowprofile","NVGoggles_OPFOR","muzzle_snds_H","acc_pointer_IR","optic_KHS_blk","bipod_03_F_blk"};
		uniformClass = "U_B_CTRG_1";
		weapons[] = {"arifle_MX_Black_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />BlackMarket Spec-Ops";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_BlackMarket";
			};
		};
	};
	class Exile_Trader_Equipment_BlackMarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Equipment Trader";
		uniformClass = "U_BG_Guerrilla_6_1";
		linkedItems[] = {"V_I_G_resistanceLeader_F","H_Watchcap_khk","optic_KHS_blk"};
		weapons[] = {"arifle_MX_GL_Black_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />BlackMarket Equipment";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_BlackMarket";
			};
		};
	};
	class Exile_Trader_Food_BlackMarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Food Trader";
		uniformClass = "U_C_Poloshirt_blue";
		linkedItems[] = {"H_Cap_tan"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />BlackMarket Food";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_BlackMarket";
			};
		};
	};
	class Exile_Trader_Hardware_BlackMarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Hardware Trader";
		backpack = "B_UAV_01_backpack_F";
		uniformClass = "U_C_WorkerCoveralls";
		linkedItems[] = {"V_BandollierB_rgr","H_Booniehat_khk_hs"};
		weapons[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />BlackMarket Hardware";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_BlackMarket";
			};
			class pin
			{
				displayName = "<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this spawn ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_Vehicle_BlackMarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Vehicle Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {"H_RacingHelmet_4_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\mptable\soft_ca.paa' size='1' shadow='false' />BlackMarket Vehicle's";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_BlackMarket";
			};
		};
	};
	class Exile_Trader_Aircraft_BlackMarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Aircraft Trader";
		uniformClass = "U_I_pilotCoveralls";
		linkedItems[] = {"H_PilotHelmetHeli_O"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\map\vehicleicons\iconhelicopter_ca.paa' size='1' shadow='false' />BlackMarket Aircraft";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_BlackMarket";
			};
		};
	};
	class Exile_Trader_Boat_BlackMarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Boat Trader";
		uniformClass = "U_OrestesBody";
		linkedItems[] = {"H_Cap_surfer"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\map\vehicleicons\iconship_ca.paa' size='1' shadow='false' />BlackMarket Boat";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_BlackMarket";
			};
		};
	};
	class Exile_Trader_WasteDump_BlackMarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Waste Dump Trader";
		uniformClass = "U_I_G_Story_Protagonist_F";
		linkedItems[] = {"V_Rangemaster_belt","H_MilCap_gry"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />BlackMarket Recycler";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_wasteDumpDialog_show_BlackMarket";
			};
		};
	};
	class Exile_Trader_Office_Hero: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Office Trader";
		uniformClass = "U_I_G_resistanceLeader_F";
		linkedItems[] = {"V_Rangemaster_belt","H_Hat_brown"};
		class UserActions
		{
			class territory
			{
				displayName = "BlackMarket Territory";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_purchaseTerritoryDialog_show_BlackMarket";
			};
			class territoryProtectionMoney
			{
				displayName = "Pay BlackMarket Territory Protection Money";
				position = "ohniste";
				radius = 3;
				priority = 5;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_payTerritoryProtectionMoneyDialog_show_BlackMarket";
			};
		};
	};
	class Exile_Trader_VehicleCustoms_BlackMarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Vehicle Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />BlackMarket Paintjob";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_BlackMarket";
			};
			class pin
			{
				displayName = "<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this spawn ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_AircraftCustoms_BlackMarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Aircraft Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {"H_PilotHelmetFighter_B","V_RebreatherB"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Hero Paintjob";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_BlackMarket";
			};
			class pin
			{
				displayName = "<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this spawn ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_BoatCustoms_BlackMarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Boat Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />BlackMarket Paintjob";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_BlackMarket";
			};
			class pin
			{
				displayName = "<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this spawn ExileClient_gui_vehicleRekeyDialog_show";
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
