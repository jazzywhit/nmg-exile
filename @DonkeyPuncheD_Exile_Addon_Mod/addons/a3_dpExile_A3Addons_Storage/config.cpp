////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// 	DonkeyPunch Arma 3 for Exile Addon Mod
// 	by DirtySanchez (aka. =RAV=MusTanG)
//	a3_dpExile_A3Addons_Storage
//	config.cpp
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DonkeyPunch_Exile_Addons_Storage
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","DonkeyPunch_Exile_Addons_Security"};
	};
};
	////////////////////////////////////////////
	// Shelving / Storage / Lockable
	////////////////////////////////////////////
class CfgMagazines
{
	class Exile_AbstractItem_Interaction_Constructing;
	class Exile_AbstractItem;
	class DP_Item_ShelvesWooden_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Shelf Kit";
		descriptionShort = "DonkeyPunch Presents: Shelving for the elite.";
		mass = 25;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\a3_dpExile_A3Addons_Storage\images\Land_ShelvesWooden_F.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class DP_Item_ShelvesWooden_khaki_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Shelf Khaki Kit";
		descriptionShort = "DonkeyPunch Presents: Shelving for the elite.";
		mass = 25;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\a3_dpExile_A3Addons_Storage\images\Land_ShelvesWooden_khaki_F.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class DP_Item_ShelvesWooden_blue_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Shelf Blue Kit";
		descriptionShort = "DonkeyPunch Presents: Shelving for the elite.";
		mass = 25;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\a3_dpExile_A3Addons_Storage\images\Land_ShelvesWooden_blue_F.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class DP_Item_ShelvesMetal_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Shelves Kit";
		descriptionShort = "DonkeyPunch Presents: Shelving for the elite.";
		mass = 25;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\a3_dpExile_A3Addons_Storage\images\Land_ShelvesMetal_F.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class DP_Item_TableDesk_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Office Desk Kit";
		descriptionShort = "DonkeyPunch Presents: Office Desk for the elite.";
		mass = 25;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\a3_dpExile_A3Addons_Storage\images\Land_TableDesk_F.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class DP_Item_Metal_wooden_rack_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Wooden Rack Kit";
		descriptionShort = "DonkeyPunch Presents: Rack storage for the elite.";
		mass = 25;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\a3_dpExile_A3Addons_Storage\images\Land_Metal_wooden_rack_F.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class DP_Item_Metal_rack_Tall_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Rack Tall Kit";
		descriptionShort = "DonkeyPunch Presents: Rack storage for the elite.";
		mass = 25;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\a3_dpExile_A3Addons_Storage\images\Land_Metal_rack_Tall_F.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class DP_Item_Metal_rack_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Rack Kit";
		descriptionShort = "DonkeyPunch Presents: Rack storage for the elite.";
		mass = 25;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\a3_dpExile_A3Addons_Storage\images\Land_Metal_rack_F.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class DP_Item_Icebox_F_MaD: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Ice Box Kit";
		descriptionShort = "DonkeyPunch Presents: Shelving for the elite.";
		mass = 25;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\a3_dpExile_A3Addons_Storage\images\Land_Icebox_F.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class DP_Exile_Item_SafeKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "X-Safe Kit";
		descriptionShort = "DonkeyPunch Presents: Storage for the elite.";
		mass = 200;
		model = "\exile_assets\model\Exile_Container_Safe_Groundmodel.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Safe.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class DP_Exile_Item_Metal_Shed_F_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "X-Metal Shed Kit";
		descriptionShort = "DonkeyPunch Presents: Storage for the elite.";
		mass = 200;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Safe.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
};
class AbstractConstruction
{
	staticObject = "D";
	previewObject = "";
	kitMagazine = "";
	upgradeObject = "";
	refundObjects[] = {};
	requiresTerritory = 1;
	canBePlacedOnRoad = 1;
	class SnapObjects{};
};
class CfgConstruction
{
	class DPXSafe: AbstractConstruction
	{
		staticObject = "DP_Exile_Container_Safe";
		previewObject = "Exile_Construction_Safe_Preview";
		kitMagazine = "DP_Exile_Item_SafeKit";
		requiresTerritory = 1;
		refundObjects[] = {"DP_Exile_Item_SafeKit"};
	};
	class DPXShed: AbstractConstruction
	{
		staticObject = "DP_Land_Metal_Shed_F";
		previewObject = "DP_Land_Metal_Shed_F_Preview";
		kitMagazine = "DP_Exile_Item_Metal_Shed_F_Kit";
		requiresTerritory = 1;
		refundObjects[] = {"DP_Exile_Item_Metal_Shed_F_Kit"};
	};
	class DPXShelvesWooden: AbstractConstruction
	{
		staticObject = "DPX_Land_ShelvesWooden_F";
		previewObject = "DPX_Land_ShelvesWooden_F_Preview";
		kitMagazine = "DP_Item_ShelvesWooden_MaD";
		requiresTerritory = 1;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"DP_Item_ShelvesWooden_MaD"};
	};
	class DPXShelvesWoodenKhaki: AbstractConstruction
	{
		staticObject = "DPX_Land_ShelvesWooden_khaki_F";
		previewObject = "DPX_Land_ShelvesWooden_khaki_F_Preview";
		kitMagazine = "DP_Item_ShelvesWooden_khaki_MaD";
		requiresTerritory = 1;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"DP_Item_ShelvesWooden_khaki_MaD"};
	};
	class DPXShelvesWoodenBlue: AbstractConstruction
	{
		staticObject = "DPX_Land_ShelvesWooden_blue_F";
		previewObject = "DPX_Land_ShelvesWooden_blue_F_Preview";
		kitMagazine = "DP_Item_ShelvesWooden_blue_MaD";
		requiresTerritory = 1;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"DP_Item_ShelvesWooden_blue_MaD"};
	};
	class DPXShelvesMetal: AbstractConstruction
	{
		staticObject = "DPX_Land_ShelvesMetal_F";
		previewObject = "DPX_Land_ShelvesMetal_F_Preview";
		kitMagazine = "DP_Item_ShelvesMetal_MaD";
		requiresTerritory = 1;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"DP_Item_ShelvesMetal_MaD"};
	};
	class DPXOfficeDesk: AbstractConstruction
	{
		staticObject = "DPX_Land_TableDesk_F";
		previewObject = "DPX_Land_TableDesk_F_Preview";
		kitMagazine = "DP_Item_TableDesk_MaD";
		requiresTerritory = 1;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"DP_Item_TableDesk_MaD"};
	};
	class DPXMetalRackTall: AbstractConstruction
	{
		staticObject = "DPX_Land_Metal_rack_Tall_F";
		previewObject = "DPX_Land_Metal_rack_Tall_F_Preview";
		kitMagazine = "DP_Item_Metal_rack_Tall_MaD";
		requiresTerritory = 1;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"DP_Item_Metal_rack_Tall_MaD"};
	};
	class DPXMetalRack: AbstractConstruction
	{
		staticObject = "DPX_Land_Metal_rack_F";
		previewObject = "DPX_Land_Metal_rack_F_Preview";
		kitMagazine = "DP_Item_Metal_rack_MaD";
		requiresTerritory = 1;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"DP_Item_Metal_rack_MaD"};
	};
	class DPXWoodenRack: AbstractConstruction
	{
		staticObject = "DPX_Land_Metal_wooden_rack_F";
		previewObject = "DPX_Land_Metal_wooden_rack_F_Preview";
		kitMagazine = "DP_Item_Metal_wooden_rack_MaD";
		requiresTerritory = 1;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"DP_Item_Metal_wooden_rack_MaD"};
	};
	class DPXIcebox: AbstractConstruction
	{
		staticObject = "DPX_Land_Icebox_F";
		previewObject = "DPX_Land_Icebox_F_Preview";
		kitMagazine = "DP_Item_Icebox_F_MaD";
		requiresTerritory = 1;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"DP_Item_Icebox_F_MaD"};
	};
	class Box_NATO_Wps_F_Construction: AbstractConstruction
	{
		staticObject = "Box_NATO_Wps_F";
		previewObject = "Box_NATO_Wps_F_Preview";
		kitMagazine = "DP_Exile_Item_Box_NATO_Wps_F_Kit";
		requiresTerritory = 0;
		refundObjects[] = {"DP_Exile_Item_Box_NATO_Wps_F_Kit"};
	};
	class Box_NATO_AmmoVeh_F_Construction: AbstractConstruction
	{
		staticObject = "Box_NATO_AmmoVeh_F";
		previewObject = "Box_NATO_AmmoVeh_F_Preview";
		kitMagazine = "DP_Exile_Item_Box_NATO_AmmoVeh_F_Kit";
		requiresTerritory = 0;
		refundObjects[] = {"DP_Exile_Item_Box_NATO_AmmoVeh_F_Kit"};
	};
	class Box_East_AmmoVeh_F_Construction: AbstractConstruction
	{
		staticObject = "Box_East_AmmoVeh_F";
		previewObject = "Box_East_AmmoVeh_F_Preview";
		kitMagazine = "DP_Exile_Item_Box_East_AmmoVeh_F_Kit";
		requiresTerritory = 0;
		refundObjects[] = {"DP_Exile_Item_Box_East_AmmoVeh_F_Kit"};
	};
	class B_supplyCrate_F_Construction: AbstractConstruction
	{
		staticObject = "B_supplyCrate_F";
		previewObject = "B_supplyCrate_F_Preview";
		kitMagazine = "DP_Exile_Item_B_supplyCrate_F_Kit";
		requiresTerritory = 0;
		refundObjects[] = {"DP_Exile_Item_B_supplyCrate_F_Kit"};
	};
	class I_supplyCrate_F_Construction: AbstractConstruction
	{
		staticObject = "I_supplyCrate_F";
		previewObject = "I_supplyCrate_F_Preview";
		kitMagazine = "DP_Exile_Item_I_supplyCrate_F_Kit";
		requiresTerritory = 0;
		refundObjects[] = {"DP_Exile_Item_I_supplyCrate_F_Kit"};
	};
	class O_supplyCrate_F_Construction: AbstractConstruction
	{
		staticObject = "O_supplyCrate_F";
		previewObject = "O_supplyCrate_F_Preview";
		kitMagazine = "DP_Exile_Item_O_supplyCrate_F_Kit";
		requiresTerritory = 0;
		refundObjects[] = {"DP_Exile_Item_O_supplyCrate_F_Kit"};
	};
	class B_CargoNet_01_ammo_F_Construction: AbstractConstruction
	{
		staticObject = "B_CargoNet_01_ammo_F";
		previewObject = "B_CargoNet_01_ammo_F_Preview";
		kitMagazine = "DP_Exile_Item_B_CargoNet_01_ammo_F_Kit";
		requiresTerritory = 0;
		refundObjects[] = {"DP_Exile_Item_B_CargoNet_01_ammo_F_Kit"};
	};
	class I_CargoNet_01_ammo_F_Construction: AbstractConstruction
	{
		staticObject = "I_CargoNet_01_ammo_F";
		previewObject = "I_CargoNet_01_ammo_F_Preview";
		kitMagazine = "DP_Exile_Item_I_CargoNet_01_ammo_F_Kit";
		requiresTerritory = 0;
		refundObjects[] = {"DP_Exile_Item_I_CargoNet_01_ammo_F_Kit"};
	};
	class O_CargoNet_01_ammo_F_Construction: AbstractConstruction
	{
		staticObject = "O_CargoNet_01_ammo_F";
		previewObject = "O_CargoNet_01_ammo_F_Preview";
		kitMagazine = "DP_Exile_Item_O_CargoNet_01_ammo_F_Kit";
		requiresTerritory = 0;
		refundObjects[] = {"DP_Exile_Item_O_CargoNet_01_ammo_F_Kit"};
	};
};
class CfgVehicles
{
	class thingX;
	class ReammoBox_F;
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
	class Exile_Container_Abstract: ReammoBox_F
	{
		author = "Exile Mod Team";
		scope = 1;
		vehicleClass = "Ammo";
		exileContainer = 1;
		icon = "iconCrateWpns";
		simulation = "thingX";
		exileRequiresSimulation = 0;
		maximumLoad = 500;
		armor = 1000;
		destrType = "DestructNo";
		exileIsLockable = 0;
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class Exile_Container_Safe;
	class DP_Exile_Container_Safe: Exile_Container_Safe
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_Safe.p3d";
		displayName = "DPXSafe";
		destrType = "DestructNo";
		maximumLoad = 6000;
		armor = 2000;
		exileIsLockable = 1;
		simulation = "house";
	};
	class DP_Land_Metal_Shed_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Structures_F\Households\Addons\Metal_Shed_F.p3d";
		displayName = "DPXShed";
		exileContainer = 1;
	};
	class DP_Land_Metal_Shed_F: Exile_Container_Safe
	{
		scope = 2;
		model = "\A3\Structures_F\Households\Addons\Metal_Shed_F.p3d";
		displayName = "DPXShed";
		destrType = "DestructNo";
		maximumLoad = 10000;
		armor = 3000;
		exileIsLockable = 1;
		simulation = "house";
	};
	class DPX_Land_ShelvesWooden_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DPXShelvesWooden";
		model = "\A3\Structures_F_EPB\Furniture\ShelvesWooden_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DPX_Land_ShelvesWooden_F: Exile_Container_Abstract
	{
		scope = 2;
		model = "\A3\Structures_F_EPB\Furniture\ShelvesWooden_F.p3d";
		shortDescription = "Will explode when shot. Powered by Michael Bay.";
		displayName = "DPXShelvesWooden";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 1000;
		armor = 1500;
		simulation = "house";
	};
	class DPX_Land_ShelvesWooden_khaki_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		displayName = "DPXShelvesWoodenKhaki";
		model = "\A3\Structures_F_EPB\Furniture\ShelvesWooden_khaki_F.p3d";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DPX_Land_ShelvesWooden_khaki_F: Exile_Container_Abstract
	{
		scope = 2;
		model = "\A3\Structures_F_EPB\Furniture\ShelvesWooden_khaki_F.p3d";
		shortDescription = "Will explode when shot. Powered by Michael Bay.";
		displayName = "DPXShelvesWoodenKhaki";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 1000;
		armor = 1500;
		simulation = "house";
	};
	class DPX_Land_ShelvesWooden_blue_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\ShelvesWooden_blue_F.p3d";
		displayName = "DPXShelvesWoodenBlue";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DPX_Land_ShelvesWooden_blue_F: Exile_Container_Abstract
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\ShelvesWooden_blue_F.p3d";
		shortDescription = "Will explode when shot. Powered by Michael Bay.";
		displayName = "DPXShelvesWoodenBlue";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 1000;
		armor = 1500;
		simulation = "house";
	};
	class DPX_Land_ShelvesMetal_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\ShelvesMetal_F.p3d";
		displayName = "DPXShelvesMetal";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DPX_Land_ShelvesMetal_F: Exile_Container_Abstract
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\ShelvesMetal_F.p3d";
		shortDescription = "Will explode when shot. Powered by Michael Bay.";
		displayName = "DPXShelvesMetal";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 1000;
		armor = 1500;
		simulation = "house";
	};
	class DPX_Land_TableDesk_F_Preview: Exile_Construction_Abstract_Physics 
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\TableDesk_F.p3d";
		displayName = "DPXOfficeDesk";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class DPX_Land_TableDesk_F: Exile_Container_Abstract
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\TableDesk_F.p3d";
		shortDescription = "Will explode when shot. Powered by Michael Bay.";
		displayName = "DPXOfficeDesk";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 700;
		armor = 1000;
		simulation = "house";
	};
	class DPX_Land_Metal_rack_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\Metal_rack_F.p3d";
		displayName = "DPXMetalRack";
		exileContainer = 1;
	};
	class DPX_Land_Metal_rack_F: Exile_Container_Abstract
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\Metal_rack_F.p3d";
		shortDescription = "Will explode when shot. Powered by Michael Bay.";
		displayName = "DPXMetalRack";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 1000;
		armor = 1500;
		simulation = "house";
	};
	class DPX_Land_Metal_rack_Tall_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\Metal_rack_Tall_F.p3d";
		displayName = "DPXMetalRackTall";
		exileContainer = 1;
	};
	class DPX_Land_Metal_rack_Tall_F: Exile_Container_Abstract
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\Metal_rack_Tall_F.p3d";
		shortDescription = "Will explode when shot. Powered by Michael Bay.";
		displayName = "DPXMetalRackTall";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 1000;
		armor = 1500;
		simulation = "house";
	};
	class DPX_Land_Metal_wooden_rack_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\Metal_wooden_rack_F.p3d";
		displayName = "DPXWoodenRack";
		exileContainer = 1;
	};
	class DPX_Land_Metal_wooden_rack_F: Exile_Container_Abstract
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\Metal_wooden_rack_F.p3d";
		shortDescription = "Will explode when shot. Powered by Michael Bay.";
		displayName = "DPXWoodenRack";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 1000;
		armor = 1500;
		simulation = "house";
	};
	class DPX_Land_Icebox_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\Icebox_F.p3d";
		displayName = "DPXIcebox";
		exileContainer = 1;
	};
	class DPX_Land_Icebox_F: Exile_Container_Abstract
	{
		scope = 2;
		model = "\A3\Structures_F\Furniture\Icebox_F.p3d";
		shortDescription = "Will explode when shot. Powered by Michael Bay.";
		displayName = "DPXIcebox";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 1000;
		armor = 1500;
		simulation = "house";
	};
	class Exile_Container_SupplyBox;
	class Box_NATO_Wps_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		displayName = "Supply Box";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
		exileContainer = 1;
	};
	class Box_NATO_Wps_F: Exile_Container_SupplyBox
	{
		scope = 2;
		isArmaStorageforExile = 1;
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		shortDescription = "A supply box that can hold a lot of things.";
		displayName = "Supply Box";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 5000;
		armor = 5000;
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class Box_NATO_AmmoVeh_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		displayName = "Supply Box";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoVeh_CO.paa"};
		exileContainer = 1;
	};
	class Box_NATO_AmmoVeh_F: Exile_Container_SupplyBox
	{
		scope = 2;
		isArmaStorageforExile = 1;
		model = "A3\Weapons_F\Ammoboxes\AmmoVeh_F";
		shortDescription = "A supply box that can hold a lot of things.";
		displayName = "Supply Box";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 5000;
		armor = 5000;
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoVeh_CO.paa"};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		slingLoadCargoMemoryPointsDir[] = {};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class Box_East_AmmoVeh_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		displayName = "Supply Box";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_OPFOR_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoVeh_OPFOR_CO.paa"};
		exileContainer = 1;
	};
	class Box_East_AmmoVeh_F: Exile_Container_SupplyBox
	{
		scope = 2;
		isArmaStorageforExile = 1;
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		shortDescription = "A supply box that can hold a lot of things.";
		displayName = "Supply Box";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 5000;
		armor = 5000;
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_OPFOR_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoVeh_OPFOR_CO.paa"};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		slingLoadCargoMemoryPointsDir[] = {};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class B_supplyCrate_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		displayName = "Supply Box";
		exileContainer = 1;
	};
	class B_supplyCrate_F: Exile_Container_SupplyBox
	{
		scope = 2;
		isArmaStorageforExile = 1;
		model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		shortDescription = "A supply box that can hold a lot of things.";
		displayName = "Supply Box";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 5000;
		armor = 5000;
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		slingLoadCargoMemoryPointsDir[] = {};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class I_supplyCrate_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		displayName = "Supply Box";
		exileContainer = 1;
	};
	class I_supplyCrate_F: Exile_Container_SupplyBox
	{
		scope = 2;
		isArmaStorageforExile = 1;
		model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		shortDescription = "A supply box that can hold a lot of things.";
		displayName = "Supply Box";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 5000;
		armor = 5000;
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		slingLoadCargoMemoryPointsDir[] = {};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class O_supplyCrate_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		displayName = "Supply Box";
		exileContainer = 1;
	};
	class O_supplyCrate_F: Exile_Container_SupplyBox
	{
		scope = 2;
		isArmaStorageforExile = 1;
		model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		shortDescription = "A supply box that can hold a lot of things.";
		displayName = "Supply Box";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 5000;
		armor = 5000;
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		slingLoadCargoMemoryPointsDir[] = {};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class B_CargoNet_01_ammo_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		displayName = "Supply Box";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa","\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"};
		exileContainer = 1;
	};
	class B_CargoNet_01_ammo_F: Exile_Container_SupplyBox
	{
		scope = 2;
		isArmaStorageforExile = 1;
		model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		shortDescription = "A supply box that can hold a lot of things.";
		displayName = "Supply Box";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 10000;
		armor = 5000;
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa","\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		slingLoadCargoMemoryPointsDir[] = {};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class I_CargoNet_01_ammo_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		displayName = "Supply Box";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_HAF_CO.paa","\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_HAF_CA.paa"};
		exileContainer = 1;
	};
	class I_CargoNet_01_ammo_F: Exile_Container_SupplyBox
	{
		scope = 2;
		isArmaStorageforExile = 1;
		model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		shortDescription = "A supply box that can hold a lot of things.";
		displayName = "Supply Box";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 10000;
		armor = 5000;
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_HAF_CO.paa","\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_HAF_CA.paa"};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		slingLoadCargoMemoryPointsDir[] = {};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class O_CargoNet_01_ammo_F_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		displayName = "Supply Box";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_OPFOR_CO.paa","\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_OPFOR_CA.paa"};
		exileContainer = 1;
	};
	class O_CargoNet_01_ammo_F: Exile_Container_SupplyBox
	{
		scope = 2;
		isArmaStorageforExile = 1;
		model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		shortDescription = "A supply box that can hold a lot of things.";
		displayName = "Supply Box";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 10000;
		armor = 5000;
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_OPFOR_CO.paa","\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_OPFOR_CA.paa"};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		slingLoadCargoMemoryPointsDir[] = {};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	
	//Arma 3 Backpacks double size
	class Bag_Base;
	class DPX_B_Carryall_Base: Bag_Base
	{
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_khk_co.paa"};
		maximumLoad = 500;
		mass = 80;
	};
	
	class DPX_B_Carryall_ocamo: DPX_B_Carryall_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			animate[] = {{"animationName1",1},{"animationName2",2}};
			hide[] = {"animationSelection1","animationSelection2"};
			verticalOffset = 0;
		};
		_generalMacro = "DPX_B_Carryall_ocamo";
		scope = 2;
		displayName = "X-Carryall Hex";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_hex.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_hex_co.paa"};
	};
	class DPX_B_Carryall_oucamo: DPX_B_Carryall_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			animate[] = {{"animationName1",1},{"animationName2",2}};
			hide[] = {"animationSelection1","animationSelection2"};
			verticalOffset = 0;
		};
		_generalMacro = "DPX_B_Carryall_oucamo";
		scope = 2;
		displayName = "X-Carryall Urban";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_oucamo.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_oucamo_co.paa"};
	};
	class DPX_B_Carryall_mcamo: DPX_B_Carryall_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			animate[] = {{"animationName1",1},{"animationName2",2}};
			hide[] = {"animationSelection1","animationSelection2"};
			verticalOffset = 0;
		};
		_generalMacro = "DPX_B_Carryall_mcamo";
		scope = 2;
		displayName = "X-Carryall MTP";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_mcamo.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_mcamo_co.paa"};
	};
	class DPX_B_Carryall_khk: DPX_B_Carryall_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			animate[] = {{"animationName1",1},{"animationName2",2}};
			hide[] = {"animationSelection1","animationSelection2"};
			verticalOffset = 0;
		};
		_generalMacro = "DPX_B_Carryall_khk";
		scope = 2;
		displayName = "X-Carryall Khaki";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_khk_co.paa"};
	};
	class DPX_B_Carryall_cbr: DPX_B_Carryall_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			animate[] = {{"animationName1",1},{"animationName2",2}};
			hide[] = {"animationSelection1","animationSelection2"};
			verticalOffset = 0;
		};
		_generalMacro = "DPX_B_Carryall_cbr";
		scope = 2;
		displayName = "X-Carryall Coyote";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_cbr.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_cbr_co.paa"};
	};
	class DPX_B_Carryall_armor: DPX_B_Carryall_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			animate[] = {{"animationName1",1},{"animationName2",2}};
			hide[] = {"animationSelection1","animationSelection2"};
			verticalOffset = 0;
		};
		_generalMacro = "DPX_B_Carryall_armor";
		scope = 2;
		displayName = "X-Carryall Armor";
		picture = "\a3_dpExile_A3Addons_Storage\images\DPX_B_Carryall_armor.paa";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
};