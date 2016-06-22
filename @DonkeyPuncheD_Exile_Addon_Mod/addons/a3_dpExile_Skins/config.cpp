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
	class DonkeyPunch_Exile_Addons_Skins
	{
		units[] = {"Exile_Car_Hatchback_HelloKitty","Exile_Car_Hatchback_DonkeyPunch","Exile_Car_Hatchback_MyLittlePony","Exile_Car_Hatchback_Camo","Exile_Car_Hatchback_Digital","Exile_Car_Hatchback_Fire","Exile_Car_Hatchback_Safari","Exile_Car_Hatchback_Camo2","Exile_Car_Hatchback_1Camo1","Exile_Car_Hatchback_CamoAqua","Exile_Car_Hatchback_CamoDesert","Exile_Car_Hatchback_CamoGrey","Exile_Car_Hatchback_CamoPink","Exile_Car_Hatchback_CamoRed","Exile_Car_Hatchback_CamoSmooth","Exile_Car_Hatchback_CamoTerrain","Exile_Car_Hatchback_CamoTieDie","Exile_Car_Hatchback_CamoSkull","Exile_Car_Hatchback_Money","Exile_Car_Hatchback_PinkHair","Exile_Car_Hatchback_Armor","Exile_Car_Hatchback_FlatGreen","Exile_Car_Hatchback_NeonCoral","Exile_Car_Hatchback_Shield","Exile_Car_Hatchback_SpilledNeon","Exile_Car_Hatchback_CamoBWR","Exile_Car_Hatchback_CamoUrbanBlue","Exile_Car_Hatchback_CamoUrbanMixed","Exile_Car_Hatchback_ZebraCamo","Exile_Car_Hatchback_Sport_HelloKitty","Exile_Car_Hatchback_Sport_DonkeyPunch","Exile_Car_Hatchback_Sport_MyLittlePony","Exile_Car_Hatchback_Sport_Camo","Exile_Car_Hatchback_Sport_Digital","Exile_Car_Hatchback_Sport_Fire","Exile_Car_Hatchback_Sport_Safari","Exile_Car_Hatchback_Sport_Camo2","Exile_Car_Hatchback_Sport_1Camo1","Exile_Car_Hatchback_Sport_CamoAqua","Exile_Car_Hatchback_Sport_CamoDesert","Exile_Car_Hatchback_Sport_CamoGrey","Exile_Car_Hatchback_Sport_CamoPink","Exile_Car_Hatchback_Sport_CamoRed","Exile_Car_Hatchback_Sport_CamoSmooth","Exile_Car_Hatchback_Sport_CamoTerrain","Exile_Car_Hatchback_Sport_CamoTieDie","Exile_Car_Hatchback_Sport_CamoSkull","Exile_Car_Hatchback_Sport_Money","Exile_Car_Hatchback_Sport_PinkHair","Exile_Car_Hatchback_Sport_Armor","Exile_Car_Hatchback_Sport_FlatGreen","Exile_Car_Hatchback_Sport_NeonCoral","Exile_Car_Hatchback_Sport_Shield","Exile_Car_Hatchback_Sport_SpilledNeon","Exile_Car_Hatchback_Sport_CamoBWR","Exile_Car_Hatchback_Sport_CamoUrbanBlue","Exile_Car_Hatchback_Sport_CamoUrbanMixed","Exile_Car_Hatchback_Sport_ZebraCamo","Exile_Car_Offroad_Monster","Exile_Car_Offroad_Camo2","Exile_Car_Offroad_1Camo1","Exile_Car_Offroad_CamoAqua","Exile_Car_Offroad_CamoDesert","Exile_Car_Offroad_CamoGrey","Exile_Car_Offroad_CamoPink","Exile_Car_Offroad_CamoRed","Exile_Car_Offroad_CamoSmooth","Exile_Car_Offroad_CamoTerrain","Exile_Car_Offroad_CamoTieDie","Exile_Car_Offroad_CamoSkull","Exile_Car_Offroad_Money","Exile_Car_Offroad_PinkHair","Exile_Car_Offroad_Armor","Exile_Car_Offroad_FlatGreen","Exile_Car_Offroad_NeonCoral","Exile_Car_Offroad_Shield","Exile_Car_Offroad_SpilledNeon","Exile_Car_Offroad_CamoBWR","Exile_Car_Offroad_CamoUrbanBlue","Exile_Car_Offroad_CamoUrbanMixed","Exile_Car_Offroad_ZebraCamo","Exile_Car_Offroad_Armed_Monster","Exile_Car_Offroad_Armed_Camo2","Exile_Car_Offroad_Armed_1Camo1","Exile_Car_Offroad_Armed_CamoAqua","Exile_Car_Offroad_Armed_CamoDesert","Exile_Car_Offroad_Armed_CamoGrey","Exile_Car_Offroad_Armed_CamoPink","Exile_Car_Offroad_Armed_CamoRed","Exile_Car_Offroad_Armed_CamoSmooth","Exile_Car_Offroad_Armed_CamoTerrain","Exile_Car_Offroad_Armed_CamoTieDie","Exile_Car_Offroad_Armed_CamoSkull","Exile_Car_Offroad_Armed_Money","Exile_Car_Offroad_Armed_PinkHair","Exile_Car_Offroad_Armed_Armor","Exile_Car_Offroad_Armed_FlatGreen","Exile_Car_Offroad_Armed_NeonCoral","Exile_Car_Offroad_Armed_Shield","Exile_Car_Offroad_Armed_SpilledNeon","Exile_Car_Offroad_Armed_CamoBWR","Exile_Car_Offroad_Armed_CamoUrbanBlue","Exile_Car_Offroad_Armed_CamoUrbanMixed","Exile_Car_Offroad_Armed_ZebraCamo","Exile_Car_Offroad_Repair_Monster","Exile_Car_Offroad_Repair_Camo2","Exile_Car_Offroad_Repair_1Camo1","Exile_Car_Offroad_Repair_CamoAqua","Exile_Car_Offroad_Repair_CamoDesert","Exile_Car_Offroad_Repair_CamoGrey","Exile_Car_Offroad_Repair_CamoPink","Exile_Car_Offroad_Repair_CamoRed","Exile_Car_Offroad_Repair_CamoSmooth","Exile_Car_Offroad_Repair_CamoTerrain","Exile_Car_Offroad_Repair_CamoTieDie","Exile_Car_Offroad_Repair_CamoSkull","Exile_Car_Offroad_Repair_Money","Exile_Car_Offroad_Repair_PinkHair","Exile_Car_Offroad_Repair_Armor","Exile_Car_Offroad_Repair_FlatGreen","Exile_Car_Offroad_Repair_NeonCoral","Exile_Car_Offroad_Repair_Shield","Exile_Car_Offroad_Repair_SpilledNeon","Exile_Car_Offroad_Repair_CamoBWR","Exile_Car_Offroad_Repair_CamoUrbanBlue","Exile_Car_Offroad_Repair_CamoUrbanMixed","Exile_Car_Offroad_Repair_ZebraCamo","Exile_Car_Ikarus_Camo2","Exile_Car_Ikarus_1Camo1","Exile_Car_Ikarus_CamoAqua","Exile_Car_Ikarus_CamoDesert","Exile_Car_Ikarus_CamoGrey","Exile_Car_Ikarus_CamoPink","Exile_Car_Ikarus_CamoRed","Exile_Car_Ikarus_CamoSmooth","Exile_Car_Ikarus_CamoTerrain","Exile_Car_Ikarus_CamoTieDie","Exile_Car_Ikarus_CamoSkull","Exile_Car_Ikarus_Money","Exile_Car_Ikarus_PinkHair","Exile_Car_Ikarus_Armor","Exile_Car_Ikarus_FlatGreen","Exile_Car_Ikarus_NeonCoral","Exile_Car_Ikarus_Shield","Exile_Car_Ikarus_SpilledNeon","Exile_Car_Ikarus_CamoBWR","Exile_Car_Ikarus_CamoUrbanBlue","Exile_Car_Ikarus_CamoUrbanMixed","Exile_Car_Ikarus_ZebraCamo","Exile_Car_Strider_Camo2","Exile_Car_Strider_1Camo1","Exile_Car_Strider_CamoAqua","Exile_Car_Strider_CamoDesert","Exile_Car_Strider_CamoGrey","Exile_Car_Strider_CamoPink","Exile_Car_Strider_CamoRed","Exile_Car_Strider_CamoSmooth","Exile_Car_Strider_CamoTerrain","Exile_Car_Strider_CamoTieDie","Exile_Car_Strider_CamoSkull","Exile_Car_Strider_Money","Exile_Car_Strider_PinkHair","Exile_Car_Strider_Armor","Exile_Car_Strider_FlatGreen","Exile_Car_Strider_NeonCoral","Exile_Car_Strider_Shield","Exile_Car_Strider_SpilledNeon","Exile_Car_Strider_CamoBWR","Exile_Car_Strider_CamoUrbanBlue","Exile_Car_Strider_CamoUrbanMixed","Exile_Car_Strider_ZebraCamo","Exile_Car_SUV_Camo2","Exile_Car_SUV_1Camo1","Exile_Car_SUV_CamoAqua","Exile_Car_SUV_CamoDesert","Exile_Car_SUV_CamoGrey","Exile_Car_SUV_CamoPink","Exile_Car_SUV_CamoRed","Exile_Car_SUV_CamoSmooth","Exile_Car_SUV_CamoTerrain","Exile_Car_SUV_CamoTieDie","Exile_Car_SUV_CamoSkull","Exile_Car_SUV_Money","Exile_Car_SUV_PinkHair","Exile_Car_SUV_Armor","Exile_Car_SUV_FlatGreen","Exile_Car_SUV_NeonCoral","Exile_Car_SUV_Shield","Exile_Car_SUV_SpilledNeon","Exile_Car_SUV_CamoBWR","Exile_Car_SUV_CamoUrbanBlue","Exile_Car_SUV_CamoUrbanMixed","Exile_Car_SUV_ZebraCamo","Exile_Car_SUVXL_Camo2","Exile_Car_SUVXL_1Camo1","Exile_Car_SUVXL_CamoAqua","Exile_Car_SUVXL_CamoDesert","Exile_Car_SUVXL_CamoGrey","Exile_Car_SUVXL_CamoPink","Exile_Car_SUVXL_CamoRed","Exile_Car_SUVXL_CamoSmooth","Exile_Car_SUVXL_CamoTerrain","Exile_Car_SUVXL_CamoTieDie","Exile_Car_SUVXL_CamoSkull","Exile_Car_SUVXL_Money","Exile_Car_SUVXL_PinkHair","Exile_Car_SUVXL_Armor","Exile_Car_SUVXL_FlatGreen","Exile_Car_SUVXL_NeonCoral","Exile_Car_SUVXL_Shield","Exile_Car_SUVXL_SpilledNeon","Exile_Car_SUVXL_CamoBWR","Exile_Car_SUVXL_CamoUrbanBlue","Exile_Car_SUVXL_CamoUrbanMixed","Exile_Car_SUVXL_ZebraCamo","Exile_Car_Tempest_Camo2","Exile_Car_Tempest_1Camo1","Exile_Car_Tempest_CamoAqua","Exile_Car_Tempest_CamoDesert","Exile_Car_Tempest_CamoGrey","Exile_Car_Tempest_CamoPink","Exile_Car_Tempest_CamoRed","Exile_Car_Tempest_CamoSmooth","Exile_Car_Tempest_CamoTerrain","Exile_Car_Tempest_CamoTieDie","Exile_Car_Tempest_CamoSkull","Exile_Car_Tempest_Money","Exile_Car_Tempest_PinkHair","Exile_Car_Tempest_Armor","Exile_Car_Tempest_FlatGreen","Exile_Car_Tempest_NeonCoral","Exile_Car_Tempest_Shield","Exile_Car_Tempest_SpilledNeon","Exile_Car_Tempest_CamoBWR","Exile_Car_Tempest_CamoUrbanBlue","Exile_Car_Tempest_CamoUrbanMixed","Exile_Car_Tempest_ZebraCamo","Exile_Car_Ural_Open_Camo2","Exile_Car_Ural_Open_1Camo1","Exile_Car_Ural_Open_CamoAqua","Exile_Car_Ural_Open_CamoDesert","Exile_Car_Ural_Open_CamoGrey","Exile_Car_Ural_Open_CamoPink","Exile_Car_Ural_Open_CamoRed","Exile_Car_Ural_Open_CamoSmooth","Exile_Car_Ural_Open_CamoTerrain","Exile_Car_Ural_Open_CamoTieDie","Exile_Car_Ural_Open_CamoSkull","Exile_Car_Ural_Open_Money","Exile_Car_Ural_Open_PinkHair","Exile_Car_Ural_Open_Armor","Exile_Car_Ural_Open_FlatGreen","Exile_Car_Ural_Open_NeonCoral","Exile_Car_Ural_Open_Shield","Exile_Car_Ural_Open_SpilledNeon","Exile_Car_Ural_Open_CamoBWR","Exile_Car_Ural_Open_CamoUrbanBlue","Exile_Car_Ural_Open_CamoUrbanMixed","Exile_Car_Ural_Open_ZebraCamo","Exile_Car_Ural_Covered_Camo2","Exile_Car_Ural_Covered_1Camo1","Exile_Car_Ural_Covered_CamoAqua","Exile_Car_Ural_Covered_CamoDesert","Exile_Car_Ural_Covered_CamoGrey","Exile_Car_Ural_Covered_CamoPink","Exile_Car_Ural_Covered_CamoRed","Exile_Car_Ural_Covered_CamoSmooth","Exile_Car_Ural_Covered_CamoTerrain","Exile_Car_Ural_Covered_CamoTieDie","Exile_Car_Ural_Covered_CamoSkull","Exile_Car_Ural_Covered_Money","Exile_Car_Ural_Covered_PinkHair","Exile_Car_Ural_Covered_Armor","Exile_Car_Ural_Covered_FlatGreen","Exile_Car_Ural_Covered_NeonCoral","Exile_Car_Ural_Covered_Shield","Exile_Car_Ural_Covered_SpilledNeon","Exile_Car_Ural_Covered_CamoBWR","Exile_Car_Ural_Covered_CamoUrbanBlue","Exile_Car_Ural_Covered_CamoUrbanMixed","Exile_Car_Ural_Covered_ZebraCamo","Exile_Car_Van_Camo2","Exile_Car_Van_1Camo1","Exile_Car_Van_CamoAqua","Exile_Car_Van_CamoDesert","Exile_Car_Van_CamoGrey","Exile_Car_Van_CamoPink","Exile_Car_Van_CamoRed","Exile_Car_Van_CamoSmooth","Exile_Car_Van_CamoTerrain","Exile_Car_Van_CamoTieDie","Exile_Car_Van_CamoSkull","Exile_Car_Van_Money","Exile_Car_Van_PinkHair","Exile_Car_Van_Armor","Exile_Car_Van_FlatGreen","Exile_Car_Van_NeonCoral","Exile_Car_Van_Shield","Exile_Car_Van_SpilledNeon","Exile_Car_Van_CamoBWR","Exile_Car_Van_CamoUrbanBlue","Exile_Car_Van_CamoUrbanMixed","Exile_Car_Van_ZebraCamo","Exile_Car_Van_Box_Camo2","Exile_Car_Van_Box_1Camo1","Exile_Car_Van_Box_CamoAqua","Exile_Car_Van_Box_CamoDesert","Exile_Car_Van_Box_CamoGrey","Exile_Car_Van_Box_CamoPink","Exile_Car_Van_Box_CamoRed","Exile_Car_Van_Box_CamoSmooth","Exile_Car_Van_Box_CamoTerrain","Exile_Car_Van_Box_CamoTieDie","Exile_Car_Van_Box_CamoSkull","Exile_Car_Van_Box_Money","Exile_Car_Van_Box_PinkHair","Exile_Car_Van_Box_Armor","Exile_Car_Van_Box_FlatGreen","Exile_Car_Van_Box_NeonCoral","Exile_Car_Van_Box_Shield","Exile_Car_Van_Box_SpilledNeon","Exile_Car_Van_Box_CamoBWR","Exile_Car_Van_Box_CamoUrbanBlue","Exile_Car_Van_Box_CamoUrbanMixed","Exile_Car_Van_Box_ZebraCamo","Exile_Car_Van_Fuel_Camo2","Exile_Car_Van_Fuel_1Camo1","Exile_Car_Van_Fuel_CamoAqua","Exile_Car_Van_Fuel_CamoDesert","Exile_Car_Van_Fuel_CamoGrey","Exile_Car_Van_Fuel_CamoPink","Exile_Car_Van_Fuel_CamoRed","Exile_Car_Van_Fuel_CamoSmooth","Exile_Car_Van_Fuel_CamoTerrain","Exile_Car_Van_Fuel_CamoTieDie","Exile_Car_Van_Fuel_CamoSkull","Exile_Car_Van_Fuel_Money","Exile_Car_Van_Fuel_PinkHair","Exile_Car_Van_Fuel_Armor","Exile_Car_Van_Fuel_FlatGreen","Exile_Car_Van_Fuel_NeonCoral","Exile_Car_Van_Fuel_Shield","Exile_Car_Van_Fuel_SpilledNeon","Exile_Car_Van_Fuel_CamoBWR","Exile_Car_Van_Fuel_CamoUrbanBlue","Exile_Car_Van_Fuel_CamoUrbanMixed","Exile_Car_Van_Fuel_ZebraCamo","Exile_Car_Volha_Camo2","Exile_Car_Volha_1Camo1","Exile_Car_Volha_CamoAqua","Exile_Car_Volha_CamoDesert","Exile_Car_Volha_CamoGrey","Exile_Car_Volha_CamoPink","Exile_Car_Volha_CamoRed","Exile_Car_Volha_CamoSmooth","Exile_Car_Volha_CamoTerrain","Exile_Car_Volha_CamoTieDie","Exile_Car_Volha_CamoSkull","Exile_Car_Volha_Money","Exile_Car_Volha_PinkHair","Exile_Car_Volha_Armor","Exile_Car_Volha_FlatGreen","Exile_Car_Volha_NeonCoral","Exile_Car_Volha_Shield","Exile_Car_Volha_SpilledNeon","Exile_Car_Volha_CamoBWR","Exile_Car_Volha_CamoUrbanBlue","Exile_Car_Volha_CamoUrbanMixed","Exile_Car_Volha_ZebraCamo","Exile_Car_Zamak_Camo2","Exile_Car_Zamak_1Camo1","Exile_Car_Zamak_CamoAqua","Exile_Car_Zamak_CamoDesert","Exile_Car_Zamak_CamoGrey","Exile_Car_Zamak_CamoPink","Exile_Car_Zamak_CamoRed","Exile_Car_Zamak_CamoSmooth","Exile_Car_Zamak_CamoTerrain","Exile_Car_Zamak_CamoTieDie","Exile_Car_Zamak_CamoSkull","Exile_Car_Zamak_Money","Exile_Car_Zamak_PinkHair","Exile_Car_Zamak_Armor","Exile_Car_Zamak_FlatGreen","Exile_Car_Zamak_NeonCoral","Exile_Car_Zamak_Shield","Exile_Car_Zamak_SpilledNeon","Exile_Car_Zamak_CamoBWR","Exile_Car_Zamak_CamoUrbanBlue","Exile_Car_Zamak_CamoUrbanMixed","Exile_Car_Zamak_ZebraCamo","Exile_Bike_QuadBike_Camo2","Exile_Bike_QuadBike_1Camo1","Exile_Bike_QuadBike_CamoAqua","Exile_Bike_QuadBike_CamoDesert","Exile_Bike_QuadBike_CamoGrey","Exile_Bike_QuadBike_CamoPink","Exile_Bike_QuadBike_CamoRed","Exile_Bike_QuadBike_CamoSmooth","Exile_Bike_QuadBike_CamoTerrain","Exile_Bike_QuadBike_CamoTieDie","Exile_Bike_QuadBike_CamoSkull","Exile_Bike_QuadBike_Money","Exile_Bike_QuadBike_PinkHair","Exile_Bike_QuadBike_Armor","Exile_Bike_QuadBike_FlatGreen","Exile_Bike_QuadBike_NeonCoral","Exile_Bike_QuadBike_Shield","Exile_Bike_QuadBike_SpilledNeon","Exile_Bike_QuadBike_CamoBWR","Exile_Bike_QuadBike_CamoUrbanBlue","Exile_Bike_QuadBike_CamoUrbanMixed","Exile_Bike_QuadBike_ZebraCamo","Exile_Chopper_Hellcat_Camo2","Exile_Chopper_Hellcat_1Camo1","Exile_Chopper_Hellcat_CamoAqua","Exile_Chopper_Hellcat_CamoDesert","Exile_Chopper_Hellcat_CamoGrey","Exile_Chopper_Hellcat_CamoPink","Exile_Chopper_Hellcat_CamoRed","Exile_Chopper_Hellcat_CamoSmooth","Exile_Chopper_Hellcat_CamoTerrain","Exile_Chopper_Hellcat_CamoTieDie","Exile_Chopper_Hellcat_CamoSkull","Exile_Chopper_Hellcat_Money","Exile_Chopper_Hellcat_PinkHair","Exile_Chopper_Hellcat_Armor","Exile_Chopper_Hellcat_FlatGreen","Exile_Chopper_Hellcat_NeonCoral","Exile_Chopper_Hellcat_Shield","Exile_Chopper_Hellcat_SpilledNeon","Exile_Chopper_Hellcat_CamoBWR","Exile_Chopper_Hellcat_CamoUrbanBlue","Exile_Chopper_Hellcat_CamoUrbanMixed","Exile_Chopper_Hellcat_ZebraCamo","Exile_Chopper_Hummingbird_Camo2","Exile_Chopper_Hummingbird_1Camo1","Exile_Chopper_Hummingbird_CamoAqua","Exile_Chopper_Hummingbird_CamoDesert","Exile_Chopper_Hummingbird_CamoGrey","Exile_Chopper_Hummingbird_CamoPink","Exile_Chopper_Hummingbird_CamoRed","Exile_Chopper_Hummingbird_CamoSmooth","Exile_Chopper_Hummingbird_CamoTerrain","Exile_Chopper_Hummingbird_CamoTieDie","Exile_Chopper_Hummingbird_CamoSkull","Exile_Chopper_Hummingbird_Money","Exile_Chopper_Hummingbird_PinkHair","Exile_Chopper_Hummingbird_Armor","Exile_Chopper_Hummingbird_FlatGreen","Exile_Chopper_Hummingbird_NeonCoral","Exile_Chopper_Hummingbird_Shield","Exile_Chopper_Hummingbird_SpilledNeon","Exile_Chopper_Hummingbird_CamoBWR","Exile_Chopper_Hummingbird_CamoUrbanBlue","Exile_Chopper_Hummingbird_CamoUrbanMixed","Exile_Chopper_Hummingbird_ZebraCamo","Exile_Chopper_Hummingbird_Civillian_Camo2","Exile_Chopper_Hummingbird_Civillian_1Camo1","Exile_Chopper_Hummingbird_Civillian_CamoAqua","Exile_Chopper_Hummingbird_Civillian_CamoDesert","Exile_Chopper_Hummingbird_Civillian_CamoGrey","Exile_Chopper_Hummingbird_Civillian_CamoPink","Exile_Chopper_Hummingbird_Civillian_CamoRed","Exile_Chopper_Hummingbird_Civillian_CamoSmooth","Exile_Chopper_Hummingbird_Civillian_CamoTerrain","Exile_Chopper_Hummingbird_Civillian_CamoTieDie","Exile_Chopper_Hummingbird_Civillian_CamoSkull","Exile_Chopper_Hummingbird_Civillian_Money","Exile_Chopper_Hummingbird_Civillian_PinkHair","Exile_Chopper_Hummingbird_Civillian_Armor","Exile_Chopper_Hummingbird_Civillian_FlatGreen","Exile_Chopper_Hummingbird_Civillian_NeonCoral","Exile_Chopper_Hummingbird_Civillian_Shield","Exile_Chopper_Hummingbird_Civillian_SpilledNeon","Exile_Chopper_Hummingbird_Civillian_CamoBWR","Exile_Chopper_Hummingbird_Civillian_CamoUrbanBlue","Exile_Chopper_Hummingbird_Civillian_CamoUrbanMixed","Exile_Chopper_Hummingbird_Civillian_ZebraCamo","Exile_Chopper_Huron_Camo2","Exile_Chopper_Huron_1Camo1","Exile_Chopper_Huron_CamoAqua","Exile_Chopper_Huron_CamoDesert","Exile_Chopper_Huron_CamoGrey","Exile_Chopper_Huron_CamoPink","Exile_Chopper_Huron_CamoRed","Exile_Chopper_Huron_CamoSmooth","Exile_Chopper_Huron_CamoTerrain","Exile_Chopper_Huron_CamoTieDie","Exile_Chopper_Huron_CamoSkull","Exile_Chopper_Huron_Money","Exile_Chopper_Huron_PinkHair","Exile_Chopper_Huron_Armor","Exile_Chopper_Huron_FlatGreen","Exile_Chopper_Huron_NeonCoral","Exile_Chopper_Huron_Shield","Exile_Chopper_Huron_SpilledNeon","Exile_Chopper_Huron_CamoBWR","Exile_Chopper_Huron_CamoUrbanBlue","Exile_Chopper_Huron_CamoUrbanMixed","Exile_Chopper_Huron_ZebraCamo","Exile_Chopper_Mohawk_Camo2","Exile_Chopper_Mohawk_1Camo1","Exile_Chopper_Mohawk_CamoAqua","Exile_Chopper_Mohawk_CamoDesert","Exile_Chopper_Mohawk_CamoGrey","Exile_Chopper_Mohawk_CamoPink","Exile_Chopper_Mohawk_CamoRed","Exile_Chopper_Mohawk_CamoSmooth","Exile_Chopper_Mohawk_CamoTerrain","Exile_Chopper_Mohawk_CamoTieDie","Exile_Chopper_Mohawk_CamoSkull","Exile_Chopper_Mohawk_Money","Exile_Chopper_Mohawk_PinkHair","Exile_Chopper_Mohawk_Armor","Exile_Chopper_Mohawk_FlatGreen","Exile_Chopper_Mohawk_NeonCoral","Exile_Chopper_Mohawk_Shield","Exile_Chopper_Mohawk_SpilledNeon","Exile_Chopper_Mohawk_CamoBWR","Exile_Chopper_Mohawk_CamoUrbanBlue","Exile_Chopper_Mohawk_CamoUrbanMixed","Exile_Chopper_Mohawk_ZebraCamo","Exile_Chopper_Orca_Camo2","Exile_Chopper_Orca_1Camo1","Exile_Chopper_Orca_CamoAqua","Exile_Chopper_Orca_CamoDesert","Exile_Chopper_Orca_CamoGrey","Exile_Chopper_Orca_CamoPink","Exile_Chopper_Orca_CamoRed","Exile_Chopper_Orca_CamoSmooth","Exile_Chopper_Orca_CamoTerrain","Exile_Chopper_Orca_CamoTieDie","Exile_Chopper_Orca_CamoSkull","Exile_Chopper_Orca_Money","Exile_Chopper_Orca_PinkHair","Exile_Chopper_Orca_Armor","Exile_Chopper_Orca_FlatGreen","Exile_Chopper_Orca_NeonCoral","Exile_Chopper_Orca_Shield","Exile_Chopper_Orca_SpilledNeon","Exile_Chopper_Orca_CamoBWR","Exile_Chopper_Orca_CamoUrbanBlue","Exile_Chopper_Orca_CamoUrbanMixed","Exile_Chopper_Orca_ZebraCamo","Exile_Chopper_Taru_Camo2","Exile_Chopper_Taru_1Camo1","Exile_Chopper_Taru_CamoAqua","Exile_Chopper_Taru_CamoDesert","Exile_Chopper_Taru_CamoGrey","Exile_Chopper_Taru_CamoPink","Exile_Chopper_Taru_CamoRed","Exile_Chopper_Taru_CamoSmooth","Exile_Chopper_Taru_CamoTerrain","Exile_Chopper_Taru_CamoTieDie","Exile_Chopper_Taru_CamoSkull","Exile_Chopper_Taru_Money","Exile_Chopper_Taru_PinkHair","Exile_Chopper_Taru_Armor","Exile_Chopper_Taru_FlatGreen","Exile_Chopper_Taru_NeonCoral","Exile_Chopper_Taru_Shield","Exile_Chopper_Taru_SpilledNeon","Exile_Chopper_Taru_CamoBWR","Exile_Chopper_Taru_CamoUrbanBlue","Exile_Chopper_Taru_CamoUrbanMixed","Exile_Chopper_Taru_ZebraCamo","Exile_Chopper_Taru_Covered_Camo2","Exile_Chopper_Taru_Covered_1Camo1","Exile_Chopper_Taru_Covered_CamoAqua","Exile_Chopper_Taru_Covered_CamoDesert","Exile_Chopper_Taru_Covered_CamoGrey","Exile_Chopper_Taru_Covered_CamoPink","Exile_Chopper_Taru_Covered_CamoRed","Exile_Chopper_Taru_Covered_CamoSmooth","Exile_Chopper_Taru_Covered_CamoTerrain","Exile_Chopper_Taru_Covered_CamoTieDie","Exile_Chopper_Taru_Covered_CamoSkull","Exile_Chopper_Taru_Covered_Money","Exile_Chopper_Taru_Covered_PinkHair","Exile_Chopper_Taru_Covered_Armor","Exile_Chopper_Taru_Covered_FlatGreen","Exile_Chopper_Taru_Covered_NeonCoral","Exile_Chopper_Taru_Covered_Shield","Exile_Chopper_Taru_Covered_SpilledNeon","Exile_Chopper_Taru_Covered_CamoBWR","Exile_Chopper_Taru_Covered_CamoUrbanBlue","Exile_Chopper_Taru_Covered_CamoUrbanMixed","Exile_Chopper_Taru_Covered_ZebraCamo","Exile_Chopper_Taru_Transport_Camo2","Exile_Chopper_Taru_Transport_1Camo1","Exile_Chopper_Taru_Transport_CamoAqua","Exile_Chopper_Taru_Transport_CamoDesert","Exile_Chopper_Taru_Transport_CamoGrey","Exile_Chopper_Taru_Transport_CamoPink","Exile_Chopper_Taru_Transport_CamoRed","Exile_Chopper_Taru_Transport_CamoSmooth","Exile_Chopper_Taru_Transport_CamoTerrain","Exile_Chopper_Taru_Transport_CamoTieDie","Exile_Chopper_Taru_Transport_CamoSkull","Exile_Chopper_Taru_Transport_Money","Exile_Chopper_Taru_Transport_PinkHair","Exile_Chopper_Taru_Transport_Armor","Exile_Chopper_Taru_Transport_FlatGreen","Exile_Chopper_Taru_Transport_NeonCoral","Exile_Chopper_Taru_Transport_Shield","Exile_Chopper_Taru_Transport_SpilledNeon","Exile_Chopper_Taru_Transport_CamoBWR","Exile_Chopper_Taru_Transport_CamoUrbanBlue","Exile_Chopper_Taru_Transport_CamoUrbanMixed","Exile_Chopper_Taru_Transport_ZebraCamo","Exile_Boat_MotorBoat_Camo2","Exile_Boat_MotorBoat_1Camo1","Exile_Boat_MotorBoat_CamoAqua","Exile_Boat_MotorBoat_CamoDesert","Exile_Boat_MotorBoat_CamoGrey","Exile_Boat_MotorBoat_CamoPink","Exile_Boat_MotorBoat_CamoRed","Exile_Boat_MotorBoat_CamoSmooth","Exile_Boat_MotorBoat_CamoTerrain","Exile_Boat_MotorBoat_CamoTieDie","Exile_Boat_MotorBoat_CamoSkull","Exile_Boat_MotorBoat_Money","Exile_Boat_MotorBoat_PinkHair","Exile_Boat_MotorBoat_Armor","Exile_Boat_MotorBoat_FlatGreen","Exile_Boat_MotorBoat_NeonCoral","Exile_Boat_MotorBoat_Shield","Exile_Boat_MotorBoat_SpilledNeon","Exile_Boat_MotorBoat_CamoBWR","Exile_Boat_MotorBoat_CamoUrbanBlue","Exile_Boat_MotorBoat_CamoUrbanMixed","Exile_Boat_MotorBoat_ZebraCamo","Exile_Boat_RubberDuck_Camo2","Exile_Boat_RubberDuck_1Camo1","Exile_Boat_RubberDuck_CamoAqua","Exile_Boat_RubberDuck_CamoDesert","Exile_Boat_RubberDuck_CamoGrey","Exile_Boat_RubberDuck_CamoPink","Exile_Boat_RubberDuck_CamoRed","Exile_Boat_RubberDuck_CamoSmooth","Exile_Boat_RubberDuck_CamoTerrain","Exile_Boat_RubberDuck_CamoTieDie","Exile_Boat_RubberDuck_CamoSkull","Exile_Boat_RubberDuck_Money","Exile_Boat_RubberDuck_PinkHair","Exile_Boat_RubberDuck_Armor","Exile_Boat_RubberDuck_FlatGreen","Exile_Boat_RubberDuck_NeonCoral","Exile_Boat_RubberDuck_Shield","Exile_Boat_RubberDuck_SpilledNeon","Exile_Boat_RubberDuck_CamoBWR","Exile_Boat_RubberDuck_CamoUrbanBlue","Exile_Boat_RubberDuck_CamoUrbanMixed","Exile_Boat_RubberDuck_ZebraCamo","Exile_Boat_SDV_Camo2","Exile_Boat_SDV_1Camo1","Exile_Boat_SDV_CamoAqua","Exile_Boat_SDV_CamoDesert","Exile_Boat_SDV_CamoGrey","Exile_Boat_SDV_CamoPink","Exile_Boat_SDV_CamoRed","Exile_Boat_SDV_CamoSmooth","Exile_Boat_SDV_CamoTerrain","Exile_Boat_SDV_CamoTieDie","Exile_Boat_SDV_CamoSkull","Exile_Boat_SDV_Money","Exile_Boat_SDV_PinkHair","Exile_Boat_SDV_Armor","Exile_Boat_SDV_FlatGreen","Exile_Boat_SDV_NeonCoral","Exile_Boat_SDV_Shield","Exile_Boat_SDV_SpilledNeon","Exile_Boat_SDV_CamoBWR","Exile_Boat_SDV_CamoUrbanBlue","Exile_Boat_SDV_CamoUrbanMixed","Exile_Boat_SDV_ZebraCamo"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","DonkeyPunch_Exile_Addons_Security"};
	};
};
class CfgVehicles
{
	class Exile_Car_Hatchback_Abstract;
	class Exile_Car_Hatchback_HelloKitty: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Hello Kitty";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\HatchbackKitty.jpg"};
	};
	class Exile_Car_Hatchback_DonkeyPunch: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "DonkeyPunch";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\HatchbackDP1024.jpg"};
	};
	class Exile_Car_Hatchback_MyLittlePony: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "My Little Pony";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\HatchbackPony.jpg"};
	};
	class Exile_Car_Hatchback_Camo: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\C_Hatchback_01_sport_FCamo.jpg"};
	};
	class Exile_Car_Hatchback_Digital: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Digital";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\C_Hatchback_01_sport_FDigi.jpg"};
	};
	class Exile_Car_Hatchback_Fire: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Fire";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\C_Hatchback_01_sport_FFire.jpg"};
	};
	class Exile_Car_Hatchback_Safari: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Safari";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\C_Hatchback_01_sport_FSafari.jpg"};
	};
	class Exile_Car_Hatchback_Camo2: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_Hatchback_1Camo1: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_Hatchback_CamoAqua: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_Hatchback_CamoDesert: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_Hatchback_CamoGrey: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_Hatchback_CamoPink: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_Hatchback_CamoRed: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_Hatchback_CamoSmooth: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_Hatchback_CamoTerrain: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_Hatchback_CamoTieDie: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_Hatchback_CamoSkull: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_Hatchback_Money: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_Hatchback_PinkHair: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_Hatchback_Armor: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_Hatchback_FlatGreen: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_Hatchback_NeonCoral: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_Hatchback_Shield: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_Hatchback_SpilledNeon: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_Hatchback_CamoBWR: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_Hatchback_CamoUrbanBlue: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_Hatchback_CamoUrbanMixed: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_Hatchback_ZebraCamo: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Car_Hatchback_Sport_Abstract;
	class Exile_Car_Hatchback_Sport_HelloKitty: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Hello Kitty";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\HatchbackKitty.jpg"};
	};
	class Exile_Car_Hatchback_Sport_DonkeyPunch: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "DonkeyPunch";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\HatchbackDP1024.jpg"};
	};
	class Exile_Car_Hatchback_Sport_MyLittlePony: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "My Little Pony";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\HatchbackPony.jpg"};
	};
	class Exile_Car_Hatchback_Sport_Camo: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\C_Hatchback_Sport_01_sport_FCamo.jpg"};
	};
	class Exile_Car_Hatchback_Sport_Digital: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Digital";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\C_Hatchback_Sport_01_sport_FDigi.jpg"};
	};
	class Exile_Car_Hatchback_Sport_Fire: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Fire";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\C_Hatchback_Sport_01_sport_FFire.jpg"};
	};
	class Exile_Car_Hatchback_Sport_Safari: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Safari";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\hatchback\C_Hatchback_Sport_01_sport_FSafari.jpg"};
	};
	class Exile_Car_Hatchback_Sport_Camo2: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_Hatchback_Sport_1Camo1: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_Hatchback_Sport_CamoAqua: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_Hatchback_Sport_CamoDesert: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_Hatchback_Sport_CamoGrey: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_Hatchback_Sport_CamoPink: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_Hatchback_Sport_CamoRed: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_Hatchback_Sport_CamoSmooth: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_Hatchback_Sport_CamoTerrain: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_Hatchback_Sport_CamoTieDie: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_Hatchback_Sport_CamoSkull: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_Hatchback_Sport_Money: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_Hatchback_Sport_PinkHair: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_Hatchback_Sport_Armor: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_Hatchback_Sport_FlatGreen: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_Hatchback_Sport_NeonCoral: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_Hatchback_Sport_Shield: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_Hatchback_Sport_SpilledNeon: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_Hatchback_Sport_CamoBWR: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_Hatchback_Sport_CamoUrbanBlue: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_Hatchback_Sport_CamoUrbanMixed: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_Hatchback_Sport_ZebraCamo: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Car_Offroad_Abstract;
	class Exile_Car_Offroad_Monster: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Monster";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\offroad\Offroad_Monster.paa","a3_dpExile_Skins\skins\offroad\Offroad_Monster.paa"};
	};
	class Exile_Car_Offroad_Camo2: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_1Camo1: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_CamoAqua: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_CamoDesert: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_CamoGrey: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_CamoPink: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_CamoRed: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_CamoSmooth: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_CamoTerrain: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_CamoTieDie: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_CamoSkull: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Money: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_PinkHair: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armor: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_FlatGreen: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_NeonCoral: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Shield: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_SpilledNeon: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_CamoBWR: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_CamoUrbanBlue: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_CamoUrbanMixed: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_ZebraCamo: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Abstract;
	class Exile_Car_Offroad_Armed_Monster: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Monster";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\offroad\Offroad_Monster.paa","a3_dpExile_Skins\skins\offroad\Offroad_Monster.paa"};
	};
	class Exile_Car_Offroad_Armed_Camo2: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_1Camo1: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_CamoAqua: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_CamoDesert: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_CamoGrey: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_CamoPink: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_CamoRed: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_CamoSmooth: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_CamoTerrain: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_CamoTieDie: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_CamoSkull: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Money: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_PinkHair: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Armor: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_FlatGreen: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_NeonCoral: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Shield: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_SpilledNeon: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_CamoBWR: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_CamoUrbanBlue: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_CamoUrbanMixed: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_ZebraCamo: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Abstract;
	class Exile_Car_Offroad_Repair_Monster: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Monster";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\offroad\Offroad_Monster.paa","a3_dpExile_Skins\skins\offroad\Offroad_Monster.paa"};
	};
	class Exile_Car_Offroad_Repair_Camo2: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_1Camo1: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_CamoAqua: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_CamoDesert: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_CamoGrey: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_CamoPink: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_CamoRed: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_CamoSmooth: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_CamoTerrain: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_CamoTieDie: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_CamoSkull: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Money: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_PinkHair: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Armor: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_FlatGreen: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_NeonCoral: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Shield: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_SpilledNeon: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_CamoBWR: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_CamoUrbanBlue: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_CamoUrbanMixed: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_ZebraCamo: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Ikarus_Abstract;
	class Exile_Car_Ikarus_Camo2: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_Ikarus_1Camo1: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_Ikarus_CamoAqua: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_Ikarus_CamoDesert: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_Ikarus_CamoGrey: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_Ikarus_CamoPink: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_Ikarus_CamoRed: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_Ikarus_CamoSmooth: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_Ikarus_CamoTerrain: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_Ikarus_CamoTieDie: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_Ikarus_CamoSkull: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_Ikarus_Money: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_Ikarus_PinkHair: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_Ikarus_Armor: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_Ikarus_FlatGreen: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_Ikarus_NeonCoral: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_Ikarus_Shield: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_Ikarus_SpilledNeon: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_Ikarus_CamoBWR: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_Ikarus_CamoUrbanBlue: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_Ikarus_CamoUrbanMixed: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_Ikarus_ZebraCamo: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Car_Strider_Abstract;
	class Exile_Car_Strider_Camo2: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_Strider_1Camo1: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_Strider_CamoAqua: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_Strider_CamoDesert: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_Strider_CamoGrey: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_Strider_CamoPink: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_Strider_CamoRed: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_Strider_CamoSmooth: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_Strider_CamoTerrain: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_Strider_CamoTieDie: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_Strider_CamoSkull: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_Strider_Money: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_Strider_PinkHair: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_Strider_Armor: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_Strider_FlatGreen: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_Strider_NeonCoral: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_Strider_Shield: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_Strider_SpilledNeon: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_Strider_CamoBWR: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_Strider_CamoUrbanBlue: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_Strider_CamoUrbanMixed: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_Strider_ZebraCamo: Exile_Car_Strider_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	
	class DP_Car_Strider_HMG_Abstract;
	class DP_Car_Strider_HMG_Camo2: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_1Camo1: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_CamoAqua: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_CamoDesert: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_CamoGrey: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_CamoPink: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_CamoRed: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_CamoSmooth: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_CamoTerrain: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_CamoTieDie: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_CamoSkull: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_Money: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_PinkHair: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_Armor: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_FlatGreen: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_NeonCoral: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_Shield: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_SpilledNeon: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_CamoBWR: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_CamoUrbanBlue: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_CamoUrbanMixed: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class DP_Car_Strider_HMG_ZebraCamo: DP_Car_Strider_HMG_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	/////////////////////////////////
	//SUV
	/////////////////////////////////
	class Exile_Car_SUV_Abstract;
	class Exile_Car_SUV_Camo2: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_SUV_1Camo1: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_SUV_CamoAqua: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_SUV_CamoDesert: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_SUV_CamoGrey: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_SUV_CamoPink: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_SUV_CamoRed: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_SUV_CamoSmooth: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_SUV_CamoTerrain: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_SUV_CamoTieDie: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_SUV_CamoSkull: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_SUV_Money: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_SUV_PinkHair: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_SUV_Armor: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_SUV_FlatGreen: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_SUV_NeonCoral: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_SUV_Shield: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_SUV_SpilledNeon: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_SUV_CamoBWR: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_SUV_CamoUrbanBlue: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_SUV_CamoUrbanMixed: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_SUV_ZebraCamo: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Car_SUVXL_Abstract;
	class Exile_Car_SUVXL_Camo2: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_SUVXL_1Camo1: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_SUVXL_CamoAqua: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_SUVXL_CamoDesert: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_SUVXL_CamoGrey: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_SUVXL_CamoPink: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_SUVXL_CamoRed: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_SUVXL_CamoSmooth: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_SUVXL_CamoTerrain: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_SUVXL_CamoTieDie: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_SUVXL_CamoSkull: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_SUVXL_Money: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_SUVXL_PinkHair: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_SUVXL_Armor: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_SUVXL_FlatGreen: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_SUVXL_NeonCoral: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_SUVXL_Shield: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_SUVXL_SpilledNeon: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_SUVXL_CamoBWR: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_SUVXL_CamoUrbanBlue: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_SUVXL_CamoUrbanMixed: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_SUVXL_ZebraCamo: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Car_Tempest_Abstract;
	class Exile_Car_Tempest_Camo2: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_Tempest_1Camo1: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_Tempest_CamoAqua: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_Tempest_CamoDesert: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_Tempest_CamoGrey: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_Tempest_CamoPink: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_Tempest_CamoRed: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_Tempest_CamoSmooth: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_Tempest_CamoTerrain: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_Tempest_CamoTieDie: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_Tempest_CamoSkull: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_Tempest_Money: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_Tempest_PinkHair: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_Tempest_Armor: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_Tempest_FlatGreen: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_Tempest_NeonCoral: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_Tempest_Shield: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_Tempest_SpilledNeon: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_Tempest_CamoBWR: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_Tempest_CamoUrbanBlue: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_Tempest_CamoUrbanMixed: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_Tempest_ZebraCamo: Exile_Car_Tempest_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Car_Ural_Open_Abstract;
	class Exile_Car_Ural_Open_Camo2: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_Ural_Open_1Camo1: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_Ural_Open_CamoAqua: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_Ural_Open_CamoDesert: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_Ural_Open_CamoGrey: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_Ural_Open_CamoPink: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_Ural_Open_CamoRed: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_Ural_Open_CamoSmooth: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_Ural_Open_CamoTerrain: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_Ural_Open_CamoTieDie: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_Ural_Open_CamoSkull: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_Ural_Open_Money: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_Ural_Open_PinkHair: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_Ural_Open_Armor: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_Ural_Open_FlatGreen: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_Ural_Open_NeonCoral: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_Ural_Open_Shield: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_Ural_Open_SpilledNeon: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_Ural_Open_CamoBWR: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_Ural_Open_CamoUrbanBlue: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_Ural_Open_CamoUrbanMixed: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_Ural_Open_ZebraCamo: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Car_Ural_Covered_Abstract;
	class Exile_Car_Ural_Covered_Camo2: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_Ural_Covered_1Camo1: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_Ural_Covered_CamoAqua: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_Ural_Covered_CamoDesert: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_Ural_Covered_CamoGrey: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_Ural_Covered_CamoPink: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_Ural_Covered_CamoRed: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_Ural_Covered_CamoSmooth: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_Ural_Covered_CamoTerrain: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_Ural_Covered_CamoTieDie: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_Ural_Covered_CamoSkull: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_Ural_Covered_Money: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_Ural_Covered_PinkHair: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_Ural_Covered_Armor: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_Ural_Covered_FlatGreen: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_Ural_Covered_NeonCoral: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_Ural_Covered_Shield: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_Ural_Covered_SpilledNeon: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_Ural_Covered_CamoBWR: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_Ural_Covered_CamoUrbanBlue: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_Ural_Covered_CamoUrbanMixed: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_Ural_Covered_ZebraCamo: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Car_Van_Abstract;
	class Exile_Car_Van_Camo2: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_Van_1Camo1: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_Van_CamoAqua: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_Van_CamoDesert: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_Van_CamoGrey: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_Van_CamoPink: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_Van_CamoRed: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_Van_CamoSmooth: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_Van_CamoTerrain: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_Van_CamoTieDie: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_Van_CamoSkull: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_Van_Money: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_Van_PinkHair: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_Van_Armor: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_Van_FlatGreen: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_Van_NeonCoral: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_Van_Shield: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_Van_SpilledNeon: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_Van_CamoBWR: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_Van_CamoUrbanBlue: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_Van_CamoUrbanMixed: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_Van_ZebraCamo: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Car_Van_Box_Abstract;
	class Exile_Car_Van_Box_Camo2: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_Van_Box_1Camo1: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_Van_Box_CamoAqua: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_Van_Box_CamoDesert: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_Van_Box_CamoGrey: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_Van_Box_CamoPink: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_Van_Box_CamoRed: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_Van_Box_CamoSmooth: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_Van_Box_CamoTerrain: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_Van_Box_CamoTieDie: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_Van_Box_CamoSkull: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_Van_Box_Money: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_Van_Box_PinkHair: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_Van_Box_Armor: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_Van_Box_FlatGreen: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_Van_Box_NeonCoral: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_Van_Box_Shield: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_Van_Box_SpilledNeon: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_Van_Box_CamoBWR: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_Van_Box_CamoUrbanBlue: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_Van_Box_CamoUrbanMixed: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_Van_Box_ZebraCamo: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Car_Van_Fuel_Abstract;
	class Exile_Car_Van_Fuel_Camo2: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_Van_Fuel_1Camo1: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_Van_Fuel_CamoAqua: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_Van_Fuel_CamoDesert: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_Van_Fuel_CamoGrey: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_Van_Fuel_CamoPink: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_Van_Fuel_CamoRed: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_Van_Fuel_CamoSmooth: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_Van_Fuel_CamoTerrain: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_Van_Fuel_CamoTieDie: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_Van_Fuel_CamoSkull: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_Van_Fuel_Money: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_Van_Fuel_PinkHair: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_Van_Fuel_Armor: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_Van_Fuel_FlatGreen: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_Van_Fuel_NeonCoral: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_Van_Fuel_Shield: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_Van_Fuel_SpilledNeon: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_Van_Fuel_CamoBWR: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_Van_Fuel_CamoUrbanBlue: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_Van_Fuel_CamoUrbanMixed: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_Van_Fuel_ZebraCamo: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Car_Volha_Abstract;
	class Exile_Car_Volha_Camo2: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_Volha_1Camo1: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_Volha_CamoAqua: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_Volha_CamoDesert: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_Volha_CamoGrey: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_Volha_CamoPink: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_Volha_CamoRed: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_Volha_CamoSmooth: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_Volha_CamoTerrain: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_Volha_CamoTieDie: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_Volha_CamoSkull: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_Volha_Money: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_Volha_PinkHair: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_Volha_Armor: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_Volha_FlatGreen: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_Volha_NeonCoral: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_Volha_Shield: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_Volha_SpilledNeon: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_Volha_CamoBWR: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_Volha_CamoUrbanBlue: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_Volha_CamoUrbanMixed: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_Volha_ZebraCamo: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Car_Zamak_Abstract;
	class Exile_Car_Zamak_Camo2: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Car_Zamak_1Camo1: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Car_Zamak_CamoAqua: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Car_Zamak_CamoDesert: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Car_Zamak_CamoGrey: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Car_Zamak_CamoPink: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Car_Zamak_CamoRed: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Car_Zamak_CamoSmooth: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Car_Zamak_CamoTerrain: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Car_Zamak_CamoTieDie: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Car_Zamak_CamoSkull: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Car_Zamak_Money: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Car_Zamak_PinkHair: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Car_Zamak_Armor: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Car_Zamak_FlatGreen: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Car_Zamak_NeonCoral: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Car_Zamak_Shield: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Car_Zamak_SpilledNeon: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Car_Zamak_CamoBWR: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Car_Zamak_CamoUrbanBlue: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Car_Zamak_CamoUrbanMixed: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Car_Zamak_ZebraCamo: Exile_Car_Zamak_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Bike_QuadBike_Abstract;
	class Exile_Bike_QuadBike_Camo2: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Bike_QuadBike_1Camo1: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Bike_QuadBike_CamoAqua: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Bike_QuadBike_CamoDesert: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Bike_QuadBike_CamoGrey: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Bike_QuadBike_CamoPink: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Bike_QuadBike_CamoRed: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Bike_QuadBike_CamoSmooth: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Bike_QuadBike_CamoTerrain: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Bike_QuadBike_CamoTieDie: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Bike_QuadBike_CamoSkull: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Bike_QuadBike_Money: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Bike_QuadBike_PinkHair: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Bike_QuadBike_Armor: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Bike_QuadBike_FlatGreen: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Bike_QuadBike_NeonCoral: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Bike_QuadBike_Shield: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Bike_QuadBike_SpilledNeon: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Bike_QuadBike_CamoBWR: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Bike_QuadBike_CamoUrbanBlue: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Bike_QuadBike_CamoUrbanMixed: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Bike_QuadBike_ZebraCamo: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Chopper_Hellcat_Abstract;
	class Exile_Chopper_Hellcat_Camo2: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Chopper_Hellcat_1Camo1: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Chopper_Hellcat_CamoAqua: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Chopper_Hellcat_CamoDesert: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Chopper_Hellcat_CamoGrey: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Chopper_Hellcat_CamoPink: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Chopper_Hellcat_CamoRed: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Chopper_Hellcat_CamoSmooth: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Chopper_Hellcat_CamoTerrain: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Chopper_Hellcat_CamoTieDie: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Chopper_Hellcat_CamoSkull: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Chopper_Hellcat_Money: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Chopper_Hellcat_PinkHair: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Chopper_Hellcat_Armor: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Chopper_Hellcat_FlatGreen: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Chopper_Hellcat_NeonCoral: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Chopper_Hellcat_Shield: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Chopper_Hellcat_SpilledNeon: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Chopper_Hellcat_CamoBWR: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Chopper_Hellcat_CamoUrbanBlue: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Chopper_Hellcat_CamoUrbanMixed: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Chopper_Hellcat_ZebraCamo: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Chopper_Hummingbird_Abstract;
	class Exile_Chopper_Hummingbird_Camo2: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Chopper_Hummingbird_1Camo1: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Chopper_Hummingbird_CamoAqua: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Chopper_Hummingbird_CamoDesert: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Chopper_Hummingbird_CamoGrey: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Chopper_Hummingbird_CamoPink: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Chopper_Hummingbird_CamoRed: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Chopper_Hummingbird_CamoSmooth: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Chopper_Hummingbird_CamoTerrain: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Chopper_Hummingbird_CamoTieDie: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Chopper_Hummingbird_CamoSkull: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Chopper_Hummingbird_Money: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Chopper_Hummingbird_PinkHair: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Chopper_Hummingbird_Armor: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Chopper_Hummingbird_FlatGreen: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Chopper_Hummingbird_NeonCoral: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Chopper_Hummingbird_Shield: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Chopper_Hummingbird_SpilledNeon: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Chopper_Hummingbird_CamoBWR: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Chopper_Hummingbird_CamoUrbanBlue: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Chopper_Hummingbird_CamoUrbanMixed: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Chopper_Hummingbird_ZebraCamo: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Abstract;
	class Exile_Chopper_Hummingbird_Civillian_Camo2: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_1Camo1: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_CamoAqua: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_CamoDesert: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_CamoGrey: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_CamoPink: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_CamoRed: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_CamoSmooth: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_CamoTerrain: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_CamoTieDie: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_CamoSkull: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Money: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_PinkHair: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Armor: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_FlatGreen: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_NeonCoral: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Shield: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_SpilledNeon: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_CamoBWR: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_CamoUrbanBlue: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_CamoUrbanMixed: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Chopper_Hummingbird_Civillian_ZebraCamo: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Chopper_Huron_Abstract;
	class Exile_Chopper_Huron_Camo2: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Chopper_Huron_1Camo1: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Chopper_Huron_CamoAqua: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Chopper_Huron_CamoDesert: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Chopper_Huron_CamoGrey: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Chopper_Huron_CamoPink: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Chopper_Huron_CamoRed: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Chopper_Huron_CamoSmooth: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Chopper_Huron_CamoTerrain: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Chopper_Huron_CamoTieDie: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Chopper_Huron_CamoSkull: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Chopper_Huron_Money: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Chopper_Huron_PinkHair: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Chopper_Huron_Armor: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Chopper_Huron_FlatGreen: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Chopper_Huron_NeonCoral: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Chopper_Huron_Shield: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Chopper_Huron_SpilledNeon: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Chopper_Huron_CamoBWR: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Chopper_Huron_CamoUrbanBlue: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Chopper_Huron_CamoUrbanMixed: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Chopper_Huron_ZebraCamo: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Chopper_Mohawk_Abstract;
	class Exile_Chopper_Mohawk_Camo2: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Chopper_Mohawk_1Camo1: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Chopper_Mohawk_CamoAqua: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Chopper_Mohawk_CamoDesert: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Chopper_Mohawk_CamoGrey: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Chopper_Mohawk_CamoPink: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Chopper_Mohawk_CamoRed: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Chopper_Mohawk_CamoSmooth: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Chopper_Mohawk_CamoTerrain: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Chopper_Mohawk_CamoTieDie: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Chopper_Mohawk_CamoSkull: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Chopper_Mohawk_Money: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Chopper_Mohawk_PinkHair: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Chopper_Mohawk_Armor: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Chopper_Mohawk_FlatGreen: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Chopper_Mohawk_NeonCoral: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Chopper_Mohawk_Shield: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Chopper_Mohawk_SpilledNeon: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Chopper_Mohawk_CamoBWR: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Chopper_Mohawk_CamoUrbanBlue: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Chopper_Mohawk_CamoUrbanMixed: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Chopper_Mohawk_ZebraCamo: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Chopper_Orca_Abstract;
	class Exile_Chopper_Orca_Camo2: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Chopper_Orca_1Camo1: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Chopper_Orca_CamoAqua: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Chopper_Orca_CamoDesert: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Chopper_Orca_CamoGrey: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Chopper_Orca_CamoPink: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Chopper_Orca_CamoRed: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Chopper_Orca_CamoSmooth: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Chopper_Orca_CamoTerrain: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Chopper_Orca_CamoTieDie: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Chopper_Orca_CamoSkull: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Chopper_Orca_Money: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Chopper_Orca_PinkHair: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Chopper_Orca_Armor: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Chopper_Orca_FlatGreen: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Chopper_Orca_NeonCoral: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Chopper_Orca_Shield: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Chopper_Orca_SpilledNeon: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Chopper_Orca_CamoBWR: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Chopper_Orca_CamoUrbanBlue: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Chopper_Orca_CamoUrbanMixed: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Chopper_Orca_ZebraCamo: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Chopper_Taru_Abstract;
	class Exile_Chopper_Taru_Camo2: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Chopper_Taru_1Camo1: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Chopper_Taru_CamoAqua: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Chopper_Taru_CamoDesert: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Chopper_Taru_CamoGrey: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Chopper_Taru_CamoPink: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Chopper_Taru_CamoRed: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Chopper_Taru_CamoSmooth: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Chopper_Taru_CamoTerrain: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Chopper_Taru_CamoTieDie: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Chopper_Taru_CamoSkull: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Chopper_Taru_Money: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Chopper_Taru_PinkHair: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Chopper_Taru_Armor: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Chopper_Taru_FlatGreen: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Chopper_Taru_NeonCoral: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Chopper_Taru_Shield: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Chopper_Taru_SpilledNeon: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Chopper_Taru_CamoBWR: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Chopper_Taru_CamoUrbanBlue: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Chopper_Taru_CamoUrbanMixed: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Chopper_Taru_ZebraCamo: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Chopper_Taru_Covered_Abstract;
	class Exile_Chopper_Taru_Covered_Camo2: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Chopper_Taru_Covered_1Camo1: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Chopper_Taru_Covered_CamoAqua: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Chopper_Taru_Covered_CamoDesert: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Chopper_Taru_Covered_CamoGrey: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Chopper_Taru_Covered_CamoPink: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Chopper_Taru_Covered_CamoRed: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Chopper_Taru_Covered_CamoSmooth: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Chopper_Taru_Covered_CamoTerrain: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Chopper_Taru_Covered_CamoTieDie: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Chopper_Taru_Covered_CamoSkull: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Chopper_Taru_Covered_Money: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Chopper_Taru_Covered_PinkHair: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Chopper_Taru_Covered_Armor: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Chopper_Taru_Covered_FlatGreen: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Chopper_Taru_Covered_NeonCoral: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Chopper_Taru_Covered_Shield: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Chopper_Taru_Covered_SpilledNeon: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Chopper_Taru_Covered_CamoBWR: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Chopper_Taru_Covered_CamoUrbanBlue: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Chopper_Taru_Covered_CamoUrbanMixed: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Chopper_Taru_Covered_ZebraCamo: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Chopper_Taru_Transport_Abstract;
	class Exile_Chopper_Taru_Transport_Camo2: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Chopper_Taru_Transport_1Camo1: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Chopper_Taru_Transport_CamoAqua: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Chopper_Taru_Transport_CamoDesert: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Chopper_Taru_Transport_CamoGrey: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Chopper_Taru_Transport_CamoPink: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Chopper_Taru_Transport_CamoRed: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Chopper_Taru_Transport_CamoSmooth: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Chopper_Taru_Transport_CamoTerrain: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Chopper_Taru_Transport_CamoTieDie: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Chopper_Taru_Transport_CamoSkull: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Chopper_Taru_Transport_Money: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Chopper_Taru_Transport_PinkHair: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Chopper_Taru_Transport_Armor: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Chopper_Taru_Transport_FlatGreen: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Chopper_Taru_Transport_NeonCoral: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Chopper_Taru_Transport_Shield: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Chopper_Taru_Transport_SpilledNeon: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Chopper_Taru_Transport_CamoBWR: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Chopper_Taru_Transport_CamoUrbanBlue: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Chopper_Taru_Transport_CamoUrbanMixed: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Chopper_Taru_Transport_ZebraCamo: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};

	class Exile_Boat_MotorBoat_Abstract;
	class Exile_Boat_MotorBoat_Camo2: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_1Camo1: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_CamoAqua: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_CamoDesert: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_CamoGrey: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_CamoPink: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_CamoRed: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_CamoSmooth: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_CamoTerrain: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_CamoTieDie: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_CamoSkull: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_Money: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_PinkHair: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_Armor: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_FlatGreen: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_NeonCoral: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_Shield: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_SpilledNeon: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_CamoBWR: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_CamoUrbanBlue: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_CamoUrbanMixed: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class Exile_Boat_MotorBoat_ZebraCamo: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	
	class Exile_Boat_RubberDuck_Abstract;
	class Exile_Boat_RubberDuck_Camo2: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Boat_RubberDuck_1Camo1: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Boat_RubberDuck_CamoAqua: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Boat_RubberDuck_CamoDesert: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Boat_RubberDuck_CamoGrey: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Boat_RubberDuck_CamoPink: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Boat_RubberDuck_CamoRed: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Boat_RubberDuck_CamoSmooth: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Boat_RubberDuck_CamoTerrain: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Boat_RubberDuck_CamoTieDie: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Boat_RubberDuck_CamoSkull: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Boat_RubberDuck_Money: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Boat_RubberDuck_PinkHair: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Boat_RubberDuck_Armor: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Boat_RubberDuck_FlatGreen: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Boat_RubberDuck_NeonCoral: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Boat_RubberDuck_Shield: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Boat_RubberDuck_SpilledNeon: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Boat_RubberDuck_CamoBWR: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Boat_RubberDuck_CamoUrbanBlue: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Boat_RubberDuck_CamoUrbanMixed: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Boat_RubberDuck_ZebraCamo: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class Exile_Boat_SDV_Abstract;
	class Exile_Boat_SDV_Camo2: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class Exile_Boat_SDV_1Camo1: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class Exile_Boat_SDV_CamoAqua: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class Exile_Boat_SDV_CamoDesert: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class Exile_Boat_SDV_CamoGrey: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class Exile_Boat_SDV_CamoPink: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class Exile_Boat_SDV_CamoRed: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class Exile_Boat_SDV_CamoSmooth: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class Exile_Boat_SDV_CamoTerrain: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class Exile_Boat_SDV_CamoTieDie: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class Exile_Boat_SDV_CamoSkull: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class Exile_Boat_SDV_Money: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class Exile_Boat_SDV_PinkHair: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class Exile_Boat_SDV_Armor: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class Exile_Boat_SDV_FlatGreen: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class Exile_Boat_SDV_NeonCoral: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class Exile_Boat_SDV_Shield: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class Exile_Boat_SDV_SpilledNeon: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class Exile_Boat_SDV_CamoBWR: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class Exile_Boat_SDV_CamoUrbanBlue: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class Exile_Boat_SDV_CamoUrbanMixed: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class Exile_Boat_SDV_ZebraCamo: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	//Jets
	class DP_Jet_B_CAS_01_Abstract;
	class DP_Jet_B_CAS_01_Camo2: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class DP_Jet_B_CAS_01_1Camo1: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class DP_Jet_B_CAS_01_CamoAqua: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class DP_Jet_B_CAS_01_CamoDesert: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class DP_Jet_B_CAS_01_CamoGrey: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class DP_Jet_B_CAS_01_CamoPink: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class DP_Jet_B_CAS_01_CamoRed: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class DP_Jet_B_CAS_01_CamoSmooth: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class DP_Jet_B_CAS_01_CamoTerrain: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class DP_Jet_B_CAS_01_CamoTieDie: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class DP_Jet_B_CAS_01_CamoSkull: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class DP_Jet_B_CAS_01_Money: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class DP_Jet_B_CAS_01_PinkHair: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class DP_Jet_B_CAS_01_Armor: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class DP_Jet_B_CAS_01_FlatGreen: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class DP_Jet_B_CAS_01_NeonCoral: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class DP_Jet_B_CAS_01_Shield: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class DP_Jet_B_CAS_01_SpilledNeon: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class DP_Jet_B_CAS_01_CamoBWR: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class DP_Jet_B_CAS_01_CamoUrbanBlue: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class DP_Jet_B_CAS_01_CamoUrbanMixed: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class DP_Jet_B_CAS_01_ZebraCamo: DP_Jet_B_CAS_01_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	
		class DP_Jet_O_CAS_02_Abstract;
	class DP_Jet_O_CAS_02_Camo2: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class DP_Jet_O_CAS_02_1Camo1: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class DP_Jet_O_CAS_02_CamoAqua: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class DP_Jet_O_CAS_02_CamoDesert: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class DP_Jet_O_CAS_02_CamoGrey: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class DP_Jet_O_CAS_02_CamoPink: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class DP_Jet_O_CAS_02_CamoRed: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class DP_Jet_O_CAS_02_CamoSmooth: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class DP_Jet_O_CAS_02_CamoTerrain: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class DP_Jet_O_CAS_02_CamoTieDie: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class DP_Jet_O_CAS_02_CamoSkull: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class DP_Jet_O_CAS_02_Money: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class DP_Jet_O_CAS_02_PinkHair: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class DP_Jet_O_CAS_02_Armor: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class DP_Jet_O_CAS_02_FlatGreen: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class DP_Jet_O_CAS_02_NeonCoral: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class DP_Jet_O_CAS_02_Shield: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class DP_Jet_O_CAS_02_SpilledNeon: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class DP_Jet_O_CAS_02_CamoBWR: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class DP_Jet_O_CAS_02_CamoUrbanBlue: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class DP_Jet_O_CAS_02_CamoUrbanMixed: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class DP_Jet_O_CAS_02_ZebraCamo: DP_Jet_O_CAS_02_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	
	class DP_Jet_I_Fighter_03_CAS_F_Abstract;
	class DP_Jet_I_Fighter_03_CAS_F_Camo2: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_1Camo1: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_CamoAqua: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_CamoDesert: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_CamoGrey: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_CamoPink: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_CamoRed: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_CamoSmooth: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_CamoTerrain: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_CamoTieDie: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_CamoSkull: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_Money: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_PinkHair: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_Armor: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_FlatGreen: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_NeonCoral: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_Shield: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_SpilledNeon: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_CamoBWR: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_CamoUrbanBlue: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_CamoUrbanMixed: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class DP_Jet_I_Fighter_03_CAS_F_ZebraCamo: DP_Jet_I_Fighter_03_CAS_F_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	
	class DP_Jet_I_Fighter_03_AA_F_Abstract;
	class DP_Jet_I_Fighter_03_AA_F_Camo2: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_1Camo1: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_CamoAqua: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_CamoDesert: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_CamoGrey: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_CamoPink: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_CamoRed: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_CamoSmooth: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_CamoTerrain: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_CamoTieDie: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_CamoSkull: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_Money: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_PinkHair: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_Armor: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_FlatGreen: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_NeonCoral: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_Shield: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_SpilledNeon: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_CamoBWR: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class DP_Jet_I_Fighter_03_AA_F_CamoUrbanBlue: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_CamoUrbanMixed: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class DP_Jet_I_Fighter_03_AA_F_ZebraCamo: DP_Jet_I_Fighter_03_AA_F_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	
	class DP_Heli_Light_01_Armed_Abstract;
	class DP_Heli_Light_01_Armed_Camo2: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class DP_Heli_Light_01_Armed_1Camo1: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class DP_Heli_Light_01_Armed_CamoAqua: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class DP_Heli_Light_01_Armed_CamoDesert: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class DP_Heli_Light_01_Armed_CamoGrey: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class DP_Heli_Light_01_Armed_CamoPink: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class DP_Heli_Light_01_Armed_CamoRed: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class DP_Heli_Light_01_Armed_CamoSmooth: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class DP_Heli_Light_01_Armed_CamoTerrain: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class DP_Heli_Light_01_Armed_CamoTieDie: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class DP_Heli_Light_01_Armed_CamoSkull: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class DP_Heli_Light_01_Armed_Money: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class DP_Heli_Light_01_Armed_PinkHair: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class DP_Heli_Light_01_Armed_Armor: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class DP_Heli_Light_01_Armed_FlatGreen: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class DP_Heli_Light_01_Armed_NeonCoral: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class DP_Heli_Light_01_Armed_Shield: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class DP_Heli_Light_01_Armed_SpilledNeon: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class DP_Heli_Light_01_Armed_CamoBWR: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class DP_Heli_Light_01_Armed_CamoUrbanBlue: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class DP_Heli_Light_01_Armed_CamoUrbanMixed: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class DP_Heli_Light_01_Armed_ZebraCamo: DP_Heli_Light_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class DP_Heli_Light_02_v2_Abstract;
	class DP_Heli_Light_02_v2_Camo2: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class DP_Heli_Light_02_v2_1Camo1: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class DP_Heli_Light_02_v2_CamoAqua: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class DP_Heli_Light_02_v2_CamoDesert: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class DP_Heli_Light_02_v2_CamoGrey: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class DP_Heli_Light_02_v2_CamoPink: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class DP_Heli_Light_02_v2_CamoRed: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class DP_Heli_Light_02_v2_CamoSmooth: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class DP_Heli_Light_02_v2_CamoTerrain: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class DP_Heli_Light_02_v2_CamoTieDie: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class DP_Heli_Light_02_v2_CamoSkull: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class DP_Heli_Light_02_v2_Money: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class DP_Heli_Light_02_v2_PinkHair: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class DP_Heli_Light_02_v2_Armor: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class DP_Heli_Light_02_v2_FlatGreen: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class DP_Heli_Light_02_v2_NeonCoral: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class DP_Heli_Light_02_v2_Shield: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class DP_Heli_Light_02_v2_SpilledNeon: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class DP_Heli_Light_02_v2_CamoBWR: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class DP_Heli_Light_02_v2_CamoUrbanBlue: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class DP_Heli_Light_02_v2_CamoUrbanMixed: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class DP_Heli_Light_02_v2_ZebraCamo: DP_Heli_Light_02_v2_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class DP_Heli_Attack_01_Armed_Abstract;
	class DP_Heli_Attack_01_Armed_Camo2: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class DP_Heli_Attack_01_Armed_1Camo1: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class DP_Heli_Attack_01_Armed_CamoAqua: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class DP_Heli_Attack_01_Armed_CamoDesert: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class DP_Heli_Attack_01_Armed_CamoGrey: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class DP_Heli_Attack_01_Armed_CamoPink: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class DP_Heli_Attack_01_Armed_CamoRed: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class DP_Heli_Attack_01_Armed_CamoSmooth: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class DP_Heli_Attack_01_Armed_CamoTerrain: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class DP_Heli_Attack_01_Armed_CamoTieDie: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class DP_Heli_Attack_01_Armed_CamoSkull: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class DP_Heli_Attack_01_Armed_Money: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class DP_Heli_Attack_01_Armed_PinkHair: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class DP_Heli_Attack_01_Armed_Armor: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class DP_Heli_Attack_01_Armed_FlatGreen: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class DP_Heli_Attack_01_Armed_NeonCoral: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class DP_Heli_Attack_01_Armed_Shield: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class DP_Heli_Attack_01_Armed_SpilledNeon: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class DP_Heli_Attack_01_Armed_CamoBWR: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class DP_Heli_Attack_01_Armed_CamoUrbanBlue: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class DP_Heli_Attack_01_Armed_CamoUrbanMixed: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class DP_Heli_Attack_01_Armed_ZebraCamo: DP_Heli_Attack_01_Armed_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
/*	class DP_Car_Hunter_HMG_Abstract;
	class DP_Car_Hunter_HMG_Camo2: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class DP_Car_Hunter_HMG_1Camo1: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class DP_Car_Hunter_HMG_CamoAqua: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class DP_Car_Hunter_HMG_CamoDesert: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class DP_Car_Hunter_HMG_CamoGrey: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class DP_Car_Hunter_HMG_CamoPink: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class DP_Car_Hunter_HMG_CamoRed: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class DP_Car_Hunter_HMG_CamoSmooth: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class DP_Car_Hunter_HMG_CamoTerrain: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class DP_Car_Hunter_HMG_CamoTieDie: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class DP_Car_Hunter_HMG_CamoSkull: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class DP_Car_Hunter_HMG_Money: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class DP_Car_Hunter_HMG_PinkHair: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class DP_Car_Hunter_HMG_Armor: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class DP_Car_Hunter_HMG_FlatGreen: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class DP_Car_Hunter_HMG_NeonCoral: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class DP_Car_Hunter_HMG_Shield: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class DP_Car_Hunter_HMG_SpilledNeon: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class DP_Car_Hunter_HMG_CamoBWR: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class DP_Car_Hunter_HMG_CamoUrbanBlue: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class DP_Car_Hunter_HMG_CamoUrbanMixed: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class DP_Car_Hunter_HMG_ZebraCamo: DP_Car_Hunter_HMG_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	class DP_Car_Hunter_GMG_Abstract;
	class DP_Car_Hunter_GMG_Camo2: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Camo 2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo.jpg","a3_dpExile_Skins\skins\camo\camo.jpg"};
	};
	class DP_Car_Hunter_GMG_1Camo1: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "1Camo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camo1.jpg","a3_dpExile_Skins\skins\camo\camo1.jpg"};
	};
	class DP_Car_Hunter_GMG_CamoAqua: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Camo Aqua";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoaqua.jpg","a3_dpExile_Skins\skins\camo\camoaqua.jpg"};
	};
	class DP_Car_Hunter_GMG_CamoDesert: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Camo Desert";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camodesert.jpg","a3_dpExile_Skins\skins\camo\camodesert.jpg"};
	};
	class DP_Car_Hunter_GMG_CamoGrey: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Camo Grey";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camogrey.jpg","a3_dpExile_Skins\skins\camo\camogrey.jpg"};
	};
	class DP_Car_Hunter_GMG_CamoPink: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Camo Pink";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camopink.jpg","a3_dpExile_Skins\skins\camo\camopink.jpg"};
	};
	class DP_Car_Hunter_GMG_CamoRed: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Camo Red";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camored.jpg","a3_dpExile_Skins\skins\camo\camored.jpg"};
	};
	class DP_Car_Hunter_GMG_CamoSmooth: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Camo Smooth";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camosmooth.jpg","a3_dpExile_Skins\skins\camo\camosmooth.jpg"};
	};
	class DP_Car_Hunter_GMG_CamoTerrain: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Camo Terrain";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camoterrain.jpg","a3_dpExile_Skins\skins\camo\camoterrain.jpg"};
	};
	class DP_Car_Hunter_GMG_CamoTieDie: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Camo TieDie";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\camotiedie.jpg","a3_dpExile_Skins\skins\camo\camotiedie.jpg"};
	};
	class DP_Car_Hunter_GMG_CamoSkull: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Camo Skull";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\skullcamo.jpg","a3_dpExile_Skins\skins\camo\skullcamo.jpg"};
	};
	class DP_Car_Hunter_GMG_Money: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Money";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\moneycamo.jpg","a3_dpExile_Skins\skins\special\moneycamo.jpg"};
	};
	class DP_Car_Hunter_GMG_PinkHair: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Pink Hair";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\Pink-Hair.jpg","a3_dpExile_Skins\skins\special\Pink-Hair.jpg"};
	};
	class DP_Car_Hunter_GMG_Armor: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Armor";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\armor.jpg","a3_dpExile_Skins\skins\special\armor.jpg"};
	};
	class DP_Car_Hunter_GMG_FlatGreen: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Flat Green";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\flatgreen.jpg","a3_dpExile_Skins\skins\special\flatgreen.jpg"};
	};
	class DP_Car_Hunter_GMG_NeonCoral: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Neon Coral";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\neon_coral.jpg","a3_dpExile_Skins\skins\special\neon_coral.jpg"};
	};
	class DP_Car_Hunter_GMG_Shield: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Shield";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\shield.jpg","a3_dpExile_Skins\skins\special\shield.jpg"};
	};
	class DP_Car_Hunter_GMG_SpilledNeon: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Spilled Neon";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\special\spilled_neon.jpg","a3_dpExile_Skins\skins\special\spilled_neon.jpg"};
	};
	class DP_Car_Hunter_GMG_CamoBWR: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Devil's Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\blackredwhite.paa","a3_dpExile_Skins\skins\camo\blackredwhite.paa"};
	};
	class DP_Car_Hunter_GMG_CamoUrbanBlue: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Urban Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\bluecamo.jpg","a3_dpExile_Skins\skins\camo\bluecamo.jpg"};
	};
	class DP_Car_Hunter_GMG_CamoUrbanMixed: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Urban Mixed";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\urbancamo.jpg","a3_dpExile_Skins\skins\camo\urbancamo.jpg"};
	};
	class DP_Car_Hunter_GMG_ZebraCamo: DP_Car_Hunter_GMG_Abstract
	{
		scope = 2;
		skinName = "Zebra Camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3_dpExile_Skins\skins\camo\zebracamo.paa","a3_dpExile_Skins\skins\camo\zebracamo.paa"};
	};
	*/
};
class cfgMods
{
	author = "DonkeyPunch.INFO";
	timepacked = "1337000000";
};
//};
