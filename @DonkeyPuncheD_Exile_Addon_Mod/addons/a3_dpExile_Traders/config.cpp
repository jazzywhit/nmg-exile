////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// 	DonkeyPunch Arma 3 for Exile Addon Mod
// 	by DirtySanchez (aka. =RAV=MusTanG)
//	a3_dpExile_Traders
//	config.cpp
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DonkeyPunch_Exile_Addons_Traders
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","DonkeyPunch_Exile_Addons_Security"};
	};
};
class CfgFunctions 
{
	class DonkeyPunch_Traders 
	{
		class bootstrap 
		{
			file = "\a3_dpExile_Traders\bootstrap";
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
	// Hero Traders
	/////////////////////////////////////////
	class Exile_Trader_Armory_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Armory Trader";
		uniformClass = "U_Rangemaster";
		linkedItems[] = {"V_Rangemaster_belt","H_Cap_headphones","G_Shades_Black"};
		weapons[] = {"srifle_DMR_06_olive_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Hero Armory";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_hero";
			};
		};
	};
	class Exile_Trader_SpecialOperations_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Special Operations Trader";
		backpack = "B_Parachute";
		linkedItems[] = {"V_PlateCarrierGL_blk","H_HelmetB_light_black","G_Balaclava_lowprofile","NVGoggles_OPFOR","muzzle_snds_H","acc_pointer_IR","optic_KHS_blk","bipod_03_F_blk"};
		uniformClass = "U_B_CTRG_1";
		weapons[] = {"arifle_MX_Black_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Hero Spec-Ops";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_hero";
			};
		};
	};
	class Exile_Trader_Equipment_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Equipment Trader";
		uniformClass = "U_BG_Guerrilla_6_1";
		linkedItems[] = {"V_I_G_resistanceLeader_F","H_Watchcap_khk","optic_KHS_blk"};
		weapons[] = {"arifle_MX_GL_Black_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Hero Equipment";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_hero";
			};
		};
	};
	class Exile_Trader_Food_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Food Trader";
		uniformClass = "U_C_Poloshirt_blue";
		linkedItems[] = {"H_Cap_tan"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Hero Food";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_hero";
			};
		};
	};
	class Exile_Trader_Hardware_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Hardware Trader";
		backpack = "B_UAV_01_backpack_F";
		uniformClass = "U_C_WorkerCoveralls";
		linkedItems[] = {"V_BandollierB_rgr","H_Booniehat_khk_hs"};
		weapons[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Hero Hardware";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_hero";
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
	class Exile_Trader_Vehicle_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Vehicle Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {"H_RacingHelmet_4_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\mptable\soft_ca.paa' size='1' shadow='false' />Hero Vehicle's";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_hero";
			};
		};
	};
	class Exile_Trader_Aircraft_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Aircraft Trader";
		uniformClass = "U_I_pilotCoveralls";
		linkedItems[] = {"H_PilotHelmetHeli_O"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\map\vehicleicons\iconhelicopter_ca.paa' size='1' shadow='false' />Hero Aircraft";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_hero";
			};
		};
	};
	class Exile_Trader_Boat_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Boat Trader";
		uniformClass = "U_OrestesBody";
		linkedItems[] = {"H_Cap_surfer"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\map\vehicleicons\iconship_ca.paa' size='1' shadow='false' />Hero Boat";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_hero";
			};
		};
	};
	class Exile_Trader_WasteDump_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Waste Dump Trader";
		uniformClass = "U_I_G_Story_Protagonist_F";
		linkedItems[] = {"V_Rangemaster_belt","H_MilCap_gry"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Hero Recycler";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_wasteDumpDialog_show_hero";
			};
		};
	};
	class Exile_Trader_Office_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Office Trader";
		uniformClass = "U_I_G_resistanceLeader_F";
		linkedItems[] = {"V_Rangemaster_belt","H_Hat_brown"};
		class UserActions
		{
			class territory
			{
				displayName = "Hero Territory";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_purchaseTerritoryDialog_show_hero";
			};
			class territoryProtectionMoney
			{
				displayName = "Pay Hero Territory Protection Money";
				position = "ohniste";
				radius = 3;
				priority = 5;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_payTerritoryProtectionMoneyDialog_show_hero";
			};
		};
	};
	class Exile_Trader_VehicleCustoms_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Vehicle Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
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
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_hero";
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
	class Exile_Trader_AircraftCustoms_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Aircraft Customs Trader";
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
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_hero";
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
	class Exile_Trader_BoatCustoms_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Boat Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
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
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_hero";
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
	/////////////////////////////////////////
	// Bandit Traders
	/////////////////////////////////////////
	class Exile_Trader_Armory_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Armory Trader";
		uniformClass = "U_Rangemaster";
		linkedItems[] = {"V_Rangemaster_belt","H_Cap_headphones","G_Shades_Black"};
		weapons[] = {"srifle_DMR_06_olive_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Bandit Armory";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_SpecialOperations_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Special Operations Trader";
		backpack = "B_Parachute";
		linkedItems[] = {"V_PlateCarrierGL_blk","H_HelmetB_light_black","G_Balaclava_lowprofile","NVGoggles_OPFOR","muzzle_snds_H","acc_pointer_IR","optic_KHS_blk","bipod_03_F_blk"};
		uniformClass = "U_B_CTRG_1";
		weapons[] = {"arifle_MX_Black_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Bandit Spec-Ops";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_Equipment_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Equipment Trader";
		uniformClass = "U_BG_Guerrilla_6_1";
		linkedItems[] = {"V_I_G_resistanceLeader_F","H_Watchcap_khk","optic_KHS_blk"};
		weapons[] = {"arifle_MX_GL_Black_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Bandit Equipment";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_Food_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Food Trader";
		uniformClass = "U_C_Poloshirt_blue";
		linkedItems[] = {"H_Cap_tan"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Bandit Food";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_Hardware_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Hardware Trader";
		backpack = "B_UAV_01_backpack_F";
		uniformClass = "U_C_WorkerCoveralls";
		linkedItems[] = {"V_BandollierB_rgr","H_Booniehat_khk_hs"};
		weapons[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Bandit Hardware";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_bandit";
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
	class Exile_Trader_Vehicle_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Vehicle Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {"H_RacingHelmet_4_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\mptable\soft_ca.paa' size='1' shadow='false' />Bandit Vehicle's";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_Aircraft_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Aircraft Trader";
		uniformClass = "U_I_pilotCoveralls";
		linkedItems[] = {"H_PilotHelmetHeli_O"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\map\vehicleicons\iconhelicopter_ca.paa' size='1' shadow='false' />Bandit Aircraft";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_Boat_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Boat Trader";
		uniformClass = "U_OrestesBody";
		linkedItems[] = {"H_Cap_surfer"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\map\vehicleicons\iconship_ca.paa' size='1' shadow='false' />Bandit Boat";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_WasteDump_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Waste Dump Trader";
		uniformClass = "U_I_G_Story_Protagonist_F";
		linkedItems[] = {"V_Rangemaster_belt","H_MilCap_gry"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Bandit Recycler";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_wasteDumpDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_Office_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Office Trader";
		uniformClass = "U_I_G_resistanceLeader_F";
		linkedItems[] = {"V_Rangemaster_belt","H_Hat_brown"};
		class UserActions
		{
			class territory
			{
				displayName = "Bandit Territory";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_purchaseTerritoryDialog_show_bandit";
			};
			class territoryProtectionMoney
			{
				displayName = "Pay Bandit Territory Protection Money";
				position = "ohniste";
				radius = 3;
				priority = 5;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_payTerritoryProtectionMoneyDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_VehicleCustoms_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Vehicle Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Bandit Paintjob";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_bandit";
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
	class Exile_Trader_AircraftCustoms_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Aircraft Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {"H_PilotHelmetFighter_B","V_RebreatherB"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Bandit Paintjob";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_bandit";
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
	class Exile_Trader_BoatCustoms_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Boat Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Bandit Paintjob";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_bandit";
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
