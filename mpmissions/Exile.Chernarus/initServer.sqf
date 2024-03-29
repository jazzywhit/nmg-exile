if (hasInterface || !isServer) exitWith {};

// Chernarus BAH Buildings
#include "customLocations\3cities.sqf";
#include "customLocations\northeastairfield.sqf";
#include "customLocations\northwestairfield.sqf";
#include "customLocations\vybor.sqf";
#include "customLocations\BorMilitaryBase.sqf";
#include "customLocations\DichinaMilitaryBase.sqf";
#include "customLocations\NovyLugMilitaryBase.sqf";
#include "customLocations\Zelenogorsk.sqf";
//#include "customLocations\ganjafarma.sqf";
//#include "customLocations\trader_guglovo.sqf";
#include "customLocations\cult.sqf";
//#include "customLocations\trader_klen.sqf";
//#include "customLocations\trader_cherno.sqf";
//#include "customLocations\trader_berezino.sqf";
//#include "customLocations\trader_sosnovy.sqf";
//#include "customLocations\trader_hero.sqf";
//#include "customLocations\trader_bandit.sqf";
//#include "customLocations\stary_tents.sqf";
#include "customLocations\GOC_LM_wlcr.sqf";

//Replace A2 Buildings with A3 Buildings
#include "code\buildingReplacement.sqf";

_objects =
[
    ["ZavoraAnim",[4084.43,11655.7,0],17.3713,[[0.298563,0.95439,0],[0,0,1]],false],
    ["Land_Hlidac_Budka_EP1",[4091.78,11659.7,-0.139038],200.763,[[-0.354503,-0.935055,0],[-0,0,1]],false],
    ["Hhedgehog_concreteBig",[4080,11646.7,-0.0551147],108.116,[[0.950429,-0.310942,0],[0,-0,1]],false],
    ["Hhedgehog_concreteBig",[4098.91,11661.2,-0.0551147],108.116,[[0.950429,-0.310942,0],[0,-0,1]],false],
    ["Land_Market_stalls_01_EP1",[6300.68,7794.98,-0.00488281],212.923,[[-0.543512,-0.839402,0],[-0,0,1]],false],
    ["Land_Garaz_mala",[6287.11,7808.02,0.04776],299.614,[[-0.869374,0.494155,0],[0,0,1]],false],
    ["Land_Garaz_mala",[6293.11,7818.34,0.0489502],299.2,[[-0.872922,0.48786,0],[0,0,1]],false],
    ["Land_fort_bagfence_round",[6285.18,7815.96,-0.0683289],299.614,[[-0.869374,0.494155,0],[0,0,1]],false],
    ["CDF_WarfareBBarrier10xTall",[6295.38,7829.33,0],298.373,[[-0.879873,0.475209,0],[0,0,1]],false],
    ["CDF_WarfareBBarrier10xTall",[6286.08,7799.32,0],32.6746,[[0.539867,0.84175,0],[0,0,1]],false],
    ["Land_HBarrier1",[6282.01,7806.71,0.0304565],31.4338,[[0.521513,0.853243,0],[0,0,1]],false],
    ["Land_HBarrier1",[6282.03,7806.62,0],31.4338,[[0.521513,0.853243,0],[0,0,1]],false],
    ["Land_HBarrier1",[6281.18,7805.17,0.0803223],31.4338,[[0.521513,0.853243,0],[0,0,1]],false],
    ["CDF_WarfareBBarrier10xTall",[6299.35,7790.85,0],32.6746,[[0.539867,0.84175,0],[0,0,1]],false],
    ["CDF_WarfareBBarrier10xTall",[6312.63,7782.3,-0.0758972],32.6746,[[0.539867,0.84175,0],[0,0,1]],false],
    ["CDF_WarfareBBarrier10xTall",[6325.76,7773.83,0],32.6746,[[0.539867,0.84175,0],[0,0,1]],false],
    ["Land_Market_stalls_01_EP1",[6307.45,7806.07,0.119141],28.0423,[[0.470123,0.882601,0],[0,0,1]],false],
    ["CDF_WarfareBBarrier10xTall",[6304.24,7813.49,0.0209351],211.517,[[-0.522752,-0.852485,0],[-0,0,1]],false],
    ["CDF_WarfareBBarrier10xTall",[6317.62,7805.27,0.0209351],211.517,[[-0.522752,-0.852485,0],[-0,0,1]],false],
    ["Misc_cargo_cont_net1",[6319.6,7781.44,0],0,[[0,1,0],[0,0,1]],false],
    ["PowGen_Big",[6305.58,7819.9,0],0,[[0,1,0],[0,0,1]],false],
    ["Land_tent_east",[6318.27,7815.07,0],31.8474,[[0.527659,0.849456,0],[0,0,1]],false],
    ["Land_tent_east",[6339.1,7801.1,0.0643311],31.8474,[[0.527659,0.849456,0],[0,0,1]],false],
    ["Misc_cargo_cont_net1",[6322.39,7779.64,0],0,[[0,1,0],[0,0,1]],false],
    ["Misc_cargo_cont_net1",[6321.49,7783.24,0],0,[[0,1,0],[0,0,1]],false],
    ["Misc_cargo_cont_net1",[6313.01,7785.28,0],0,[[0,1,0],[0,0,1]],false],
    ["Misc_cargo_cont_net1",[6315.81,7786.28,0],0,[[0,1,0],[0,0,1]],false],
    ["Land_CncBarrier_F",[6323.91,7797.85,-0.327026],265.285,[[-0.996616,-0.0821992,0],[-0,0,1]],false],
    ["Land_CncBarrier_F",[6324.3,7794.14,-0.314545],263.217,[[-0.993001,-0.118109,0],[-0,0,1]],false],
    ["Land_CncBarrier_F",[6324.69,7790.54,-0.295929],263.217,[[-0.993001,-0.118109,0],[-0,0,1]],false],
    ["Land_CncBarrier_F",[6325.1,7786.67,-0.307251],267.353,[[-0.998933,-0.0461824,0],[-0,0,1]],false],
    ["Land_CncBarrier_F",[6325.32,7782.91,-0.308167],268.594,[[-0.999699,-0.024537,0],[-0,0,1]],false],
    ["Land_CncBarrier_F",[6325.07,7779.24,-0.304657],280.175,[[-0.984273,0.176655,0],[0,0,1]],false],
    ["Land_CratesWooden_F",[6320.99,7808.21,0],0,[[0,1,0],[0,0,1]],false],
    ["Land_CratesWooden_F",[6325.32,7814.16,0],122.178,[[0.846398,-0.532552,0],[0,-0,1]],false],
    ["CampEast",[6293.6,7849.87,-0.111481],30.6066,[[0.509141,0.860683,0],[0,0,1]],false],
    ["Land_TBox_F",[6355.6,7798.04,0.138367],120.358,[[0.862884,-0.505401,0],[0,-0,1]],false],
    ["Land_Water_source_F",[6351.32,7791.04,0],31.0202,[[0.51534,0.856986,0],[0,0,1]],false],
    ["INS_WarfareBFieldhHospital",[6306.65,7841.44,-0.02948],29.3658,[[0.490384,0.871507,0],[0,0,1]],false],
    ["CampEast",[6330.92,7825.31,-0.111481],30.6066,[[0.509141,0.860683,0],[0,0,1]],false],
    ["CampEast",[6320.95,7831.16,-0.111481],30.6066,[[0.509141,0.860683,0],[0,0,1]],false],
    ["Exile_Sign_VehicleCustoms",[6287.58,7816.85,-0.463257],120.524,[[0.861416,-0.507899,0],[0,-0,1]],false],
    ["Land_Garaz_mala",[4031.69,11671.2,0.317261],88.511,[[0.999662,0.0259853,0],[0,0,1]],false],
    ["Land_Wreck_CarDismantled_F",[4039.45,11667.2,0],30.6066,[[0.509141,0.860683,0],[0,0,1]],false],
    ["Land_Wreck_Van_F",[4029.23,11679.5,0],47.978,[[0.742888,0.669416,0],[0,0,1]],false],
    ["Land_Wreck_Truck_dropside_F",[4027.65,11664.5,0],299.2,[[-0.872922,0.48786,0],[0,0,1]],false],
    ["Land_CratesWooden_F",[4068.72,11680.9,-0.0673523],304.164,[[-0.827433,0.561564,0],[0,0,1]],false],
    ["Land_CratesWooden_F",[4066.37,11677.8,0.0309448],200.184,[[-0.345036,-0.938589,0],[-0,0,1]],false],
    ["Land_CratesShabby_F",[4053.41,11660,-0.0562439],0,[[0,1,0],[0,0,1]],false],
    ["Land_CratesPlastic_F",[4053.19,11661.7,0],7.85844,[[0.136726,0.990609,0],[0,0,1]],false],
    ["Land_Cages_F",[4060.42,11658.5,0],0,[[0,1,0],[0,0,1]],false],
    ["Land_WoodenCart_F",[4083.36,11678,0],47.5643,[[0.738035,0.674762,0],[0,0,1]],false],
    ["Land_Timbers_F",[4056.08,11682.9,0.00183105],308.713,[[-0.780288,0.62542,0],[0,0,1]],false],
    ["Land_WorkStand_F",[4063.41,11684.9,0],172.224,[[0.1353,-0.990805,0],[0,-0,1]],false],
    ["Land_ToiletBox_F",[4093.48,11678.2,0.0613098],56.25,[[0.83147,0.55557,0],[0,0,1]],false],
    ["Land_Pallet_F",[4059.14,11684.4,0],0,[[0,1,0],[0,0,1]],false],
    ["Land_Pallets_F",[4061.77,11678.8,0],0,[[0,1,0],[0,0,1]],false],
    ["Land_CinderBlocks_F",[4076.07,11679.9,-0.0705261],0,[[0,1,0],[0,0,1]],false],
    ["Land_Sacks_goods_F",[4055.04,11661.4,-0.0897522],0,[[0,1,0],[0,0,1]],false],
    ["Land_CratesWooden_F",[4078.49,11678.2,-0.0989075],258.254,[[-0.97906,-0.203573,0],[-0,0,1]],false],
    ["Land_dumpster_trash",[4089.81,11665.4,-0.00634766],150.303,[[0.495413,-0.868657,0],[0,-0,1]],false],
    ["FoldTable",[4076.16,11675.2,-0.148163],0,[[0,1,0],[0,0,1]],false],
    ["Land_Canister_EP1",[4077.95,11681.4,0],0,[[0,1,0],[0,0,1]],false],
    ["CamoNet_BLUFOR_Curator_F",[4074,11678.9,0],0,[[0,1,0],[0,0,1]],false],
    ["FoldTable",[4071.28,11675,-0.085968],355.864,[[-0.0721231,0.997396,0],[0,0,1]],false],
    ["Exile_Sign_Equipment_Small",[4069.16,11678,-1.18954],319.053,[[-0.65536,0.755316,0],[0,0,1]],false],
    ["Exile_Sign_Hardware_Small",[4079.57,11674.9,-1.16467],0,[[0,1,0],[0,0,1]],false],
    ["Exile_Sign_Food_Small",[4053.62,11663.3,-1.078],230.956,[[-0.776663,-0.629917,0],[-0,0,1]],false],
    ["Bunker_PMC",[4079.38,11696.9,-1.05383],2.89529,[[0.0505109,0.998724,0],[0,0,1]],false],
    ["Barrel1",[4067.13,11682.2,0],0,[[0,1,0],[0,0,1]],false],
    ["Land_Crates_stack_EP1",[4062.37,11661.5,0],0,[[0,1,0],[0,0,1]],false],
    ["ShootingRange_ACR",[4058.13,11662.3,0.512543],101.912,[[0.978466,-0.206409,0],[0,-0,1]],false],
    ["Misc_TyreHeap",[4032.17,11676.3,0],0,[[0,1,0],[0,0,1]],false],
    ["Fort_Crate_wood",[4072.93,11680.5,-0.0548096],0,[[0,1,0],[0,0,1]],false],
    ["Land_stand_small_EP1",[4057.11,11662.6,0.0726624],279.761,[[-0.985524,0.169539,0],[0,0,1]],false],
    ["Barrel1",[4074.25,11677.7,0],0,[[0,1,0],[0,0,1]],false],
    ["Land_CratesPlastic_F",[4060.49,11661,0],7.85843,[[0.136726,0.990609,0],[0,0,1]],false],
    ["Land_PaperBox_open_empty_F",[4052.83,11678.4,0],0,[[0,1,0],[0,0,1]],false],
    ["PowGen_Big",[4068.95,11663.7,0.0177307],134.173,[[0.717239,-0.696827,0],[0,-0,1]],false],
    ["Land_CamoNet_EAST",[4045.51,11679.4,0],0,[[0,1,0],[0,0,1]],false],
    ["Exile_Sign_WasteDump_Small",[4050.52,11676.5,-1.04648],334.77,[[-0.426253,0.904604,0],[0,0,1]],false],
    ["Exile_Sign_Office_Small",[4038.64,11675.8,-0.794769],329.807,[[-0.502914,0.864336,0],[0,0,1]],false],
    ["Exile_Sign_Vehicles_Small",[4036.43,11669.2,-0.979065],267.767,[[-0.999241,-0.038963,0],[-0,0,1]],false],
    ["FoldTable",[4041.65,11676.4,-0.0683289],357.467,[[-0.0441944,0.999023,0],[0,0,1]],false],
    ["FoldTable",[4047.87,11675.9,-0.0824585],350.849,[[-0.159037,0.987273,0],[0,0,1]],false],
    ["FoldTable",[4058.96,11664.2,-0.0184631],9.09933,[[0.158147,0.987416,0],[0,0,1]],false],
    ["Land_HelipadRescue_F",[3993.62,11653.4,0],0,[[0,1,0],[0,0,1]],false],
    ["Land_fort_rampart",[4054.75,11652,0.426453],204.899,[[-0.42102,-0.907051,0],[-0,0,1]],false],
    ["Land_fort_rampart",[4037.39,11660.5,0.362701],204.899,[[-0.42102,-0.907051,0],[-0,0,1]],false],
    ["Wooden_barrels",[12066,12636.7,0],0,0,0,false],
    ["Fort_Crate_wood",[12059.3,12640,0],0,0,0,false],
    ["Land_FireExtinguisher_F",[12064.7,12642.1,0],0,0,0,false],
    ["Land_TableDesk_F",[12063.6,12642.5,0],198.529,0,0,false],
    ["Wooden_barrels",[12065.9,12634.7,0],0,0,0,false],
    ["Wooden_barrels",[12067.8,12634.9,0],0,0,0,false],
    ["Fort_Crate_wood",[12060.1,12636.2,0],0,0,0,false],
    ["Land_CratesWooden_F",[12059.8,12638,0],0,0,0,false],
    ["Land_PalletTrolley_01_khaki_F",[12064.3,12636.6,0],0,0,0,false],
    ["Land_TableDesk_F",[12018.2,12657.7,0],198.529,0,0,false],
    ["Land_CratesWooden_F",[12020.1,12649.8,0],0,0,0,false],
    ["Land_CratesShabby_F",[12012.9,12655.4,0],0,0,0,false],
    ["Land_CratesPlastic_F",[12013.5,12657,0],0,0,0,false],
    ["Land_StallWater_F",[12011.5,12656.9,0.0536346],0,0,0,false],
    ["Land_PalletTrolley_01_khaki_F",[12020.1,12651.3,0],0,0,0,false],
    ["Land_CratesWooden_F",[12018,12648.6,0],66.1765,0,0,false],
    ["Land_WaterCooler_01_old_F",[13614.6,6324.48,0.0094142],161.305,0,0,false],
    ["SmallTable",[13614.4,6327.24,-0.0154896],308.713,0,0,false],
    ["Land_ChairPlastic_F",[13615.7,6324.32,-0.0106578],261.563,0,0,false],
    ["Land_CratesWooden_F",[13618.4,6328.87,0],0,0,0,false],
    ["Land_CratesWooden_F",[4355.34,2261.7,0.0568106],0,0,0,false],
    ["SmallTable",[4351.23,2257.18,0],0,0,0,false],
    ["Land_Castle_01_wall_14_F",[11504.9,11319,-1.4595],0,0,0,false],
    ["Land_Market_stalls_02_EP1",[11491.5,11323.2,0.110321],182.151,0,0,false],
    ["Land_Market_stalls_02_EP1",[11490.7,11313,0.0624695],0,0,0,false],
    ["Land_i_Garage_V2_F",[11480.3,11298.3,0],0,0,0,false],
    ["Land_Wreck_CarDismantled_F",[11478.5,11291.4,0],40.9467,0,0,false],
    ["PowGen_Big",[11479.5,11335.2,-0.0136414],39.2923,0,0,false],
    ["Land_Helfenburk",[11473.3,11366.8,-0.4664],271.075,0,0,false],
    ["Land_i_Garage_V1_F",[12039.2,12646.4,0],289.274,0,0,false],
    ["Ins_WarfareBContructionSite",[13614.9,6335.98,0.0309217],37.2243,0,0,false],
    ["USMC_WarfareBContructionSite",[13622,6336.02,0],307.472,0,0,false],
    ["Ins_WarfareBContructionSite1",[13617.1,6339.7,0],306.645,0,0,false],
    ["RU_WarfareBContructionSite",[13612.4,6326.38,0],352.969,0,0,false],
    ["Land_WheelCart_F",[13610.5,6339.8,0],0,0,0,false],
    ["Land_WorkStand_F",[13622.5,6326.37,0],0,0,0,false],
    ["Land_ToiletBox_F",[13607.4,6342.91,0],0,0,0,false],
    ["Land_Pipes_small_F",[13618.7,6322.24,0],125.735,0,0,false],
    ["Land_Pallets_stack_F",[13607,6330.45,0],0,0,0,false],
    ["Land_CratesWooden_F",[13616.2,6324.76,0],0,0,0,false],
    ["Land_CratesShabby_F",[13617.9,6336.05,0],0,0,0,false],
    ["Land_Cages_F",[13622.3,6331.72,0],0,0,0,false],
    ["Land_CratesWooden_F",[13615.5,6327.58,0],293.824,0,0,false],
    ["Land_CratesWooden_F",[4343.47,2265.41,0],0,0,0,false],
    ["Land_WoodenCart_F",[4338.35,2266.47,0],0,0,0,false],
    ["Land_CratesShabby_F",[4357.9,2260.7,0],0,0,0,false],
    ["Land_CratesShabby_F",[4343.89,2263.68,0],0,0,0,false],
    ["Land_CratesPlastic_F",[4350.32,2259.4,0.0245302],0,0,0,false],
    ["Land_Basket_F",[4356.61,2260.36,0],0,0,0,false],
    ["Land_CratesWooden_F",[4354.39,2265.77,0],0,0,0,false],
    ["Land_CratesWooden_F",[4352.19,2262.19,0],319.467,0,0,false],
    ["76n6ClamShell",[8208.05,9030.87,0],0,0,0,false],
    ["Land_tent_east",[8130.43,8980.41,0.522461],355.45,0,0,false],
    ["Land_Budova4_in",[8137.7,9066.9,0.327972],0,0,0,false],
    ["Land_wpp_Turbine_V1_F",[8138.45,9096.74,0],302.096,0,0,false],
    ["Land_ReservoirTower_F",[8168.16,9069,0],0,0,0,false],
    ["Land_pila",[8174.9,8989.08,0.323883],88.511,0,0,false],
    ["Land_tent_east",[8129.58,8996.28,0.522461],355.45,0,0,false],
    ["Land_tent_east",[8198.9,9049.69,0.522461],355.45,0,0,false],
    ["Land_tent_east",[8197.46,9078.48,0.522461],355.45,0,0,false],
    ["Land_nav_pier_m_F",[13088.6,3640.77,6.60963],238.814,0,0,false],
    ["Land_Pier_Box_F",[13065.6,3652.11,12.5869],148.649,0,0,false],
    ["Land_nav_pier_m_F",[13068,3674.77,6.3384],238.814,0,0,false],
    ["Land_nav_pier_m_F",[13047.3,3708.96,2.78477],238.814,0,0,false],
    ["Land_Pier_Box_F",[13089.3,3666.53,12.5869],148.649,0,0,false],
    ["Land_nav_pier_m_F",[13109.3,3606.65,6.60963],238.814,0,0,false],
    ["Land_nav_pier_m_F",[13129.9,3572.59,6.60963],238.814,0,0,false],
    ["Land_nav_pier_m_F",[13150.5,3538.46,6.60963],238.814,0,0,false],
    ["Land_nav_pier_m_F",[13171.2,3504.29,6.60963],238.814,0,0,false],
    ["Land_nav_pier_m_F",[13211.5,3437.77,6.51415],238.814,0,0,false],
    ["Land_nav_pier_m_F",[13230.7,3406.11,5.04383],238.814,0,0,false],
    ["Land_nav_pier_m_F",[13249.5,3374.94,-2.43785],58.8972,0,0,false],
    ["Land_LampHarbour_F",[13021.2,3745.75,0.778914],57.0772,0,0,false],
    ["Land_LampHarbour_F",[13035.1,3735.65,3.60204],238.401,0,0,false],
    ["Land_nav_pier_m_F",[13026.9,3742.64,-4.33198],238.814,0,0,false],
    ["Land_Airport_Tower_F",[13068.5,3649.21,12.5674],238.814,0,0,false],
    ["Land_Pier_Box_F",[13120,3562.83,12.5869],148.649,0,0,false],
    ["Land_Airport_Tower_F",[13146.1,3574.48,12.6013],238.814,0,0,false],
    ["Land_Airport_Tower_F",[13176.5,3470.49,12.6137],238.814,0,0,false],
    ["Land_Pier_Box_F",[13143.5,3577.11,12.5869],148.649,0,0,false],
    ["Land_Pier_Box_F",[13173.9,3473.18,12.5869],148.649,0,0,false],
    ["Land_Pier_Box_F",[13197.4,3487.57,12.5869],148.649,0,0,false],
    ["Land_LampHarbour_F",[13037.5,3718.56,6.87211],58.4835,0,0,false],
    ["Misc_concrete_High",[13197.4,3462.4,12.4293],32.261,0,0,false],
    ["Land_Ind_BoardsPack2",[13125.5,3562.65,12.5586],58.7316,0,0,false],
    ["Land_Bricks_V1_F",[13122.4,3568.17,12.5132],0,0,0,false],
    ["Land_BarGate_F",[13020.8,3751.86,0],148.07,0,0,false],
    ["Land_Pipe_fence_4m_F",[13019.2,3747.8,0.553742],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13021.4,3744.24,1.2009],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13025.7,3737.13,2.65463],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13027.9,3733.57,3.42684],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13023.6,3740.69,1.90741],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13030,3730.02,4.2549],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13034.4,3722.91,5.97455],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13036.5,3719.35,6.8097],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13032.2,3726.46,5.09489],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13038.7,3715.8,7.4835],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13040.8,3712.24,8.17311],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13043,3708.69,8.78787],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13045.1,3705.13,9.3829],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13047.3,3701.57,9.91854],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13049.5,3698.02,10.4534],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13051.6,3694.46,10.9056],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13053.8,3690.91,11.3391],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13055.9,3687.35,11.6981],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13058.1,3683.8,12.0147],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13060.3,3680.24,12.2433],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13062.4,3676.68,12.4433],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13064.6,3673.13,12.603],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13066.7,3669.57,12.7028],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13068.3,3667.08,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13025.9,3751.83,0.553742],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13067.4,3664.24,12.793],328.566,0,0,false],
    ["Land_Pipe_fence_4m_F",[13060.3,3659.9,12.8229],328.566,0,0,false],
    ["Land_Pipe_fence_4m_F",[13056.8,3657.73,12.8265],328.566,0,0,false],
    ["Land_Pipe_fence_4m_F",[13063.9,3662.07,12.8035],328.566,0,0,false],
    ["Land_Pipe_fence_4m_F",[13053.5,3653.09,12.8265],238.814,0,0,false],
    ["Land_Pipe_fence_4m_F",[13055.6,3649.53,12.8409],238.814,0,0,false],
    ["Land_Pipe_fence_4m_F",[13057.8,3645.97,12.8484],238.814,0,0,false],
    ["Land_Pipe_fence_4m_F",[13059.9,3642.41,12.849],238.814,0,0,false],
    ["Land_Pipe_fence_4m_F",[13061.5,3639.87,12.849],238.401,0,0,false],
    ["Land_Pipe_fence_4m_F",[13064.4,3639.29,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13067.9,3641.45,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13071.5,3643.62,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13075,3645.78,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13077.6,3647.35,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13080.6,3646.84,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13028,3748.27,1.17602],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13030.2,3744.72,1.88175],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13032.4,3741.16,2.61881],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13034.5,3737.61,3.4036],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13036.7,3734.05,4.20469],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13038.8,3730.49,5.05226],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13041,3726.94,5.90204],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13043.1,3723.38,6.75474],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13051.8,3709.11,9.30736],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13049.6,3712.66,8.74451],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13047.4,3716.22,8.14944],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13045.3,3719.77,7.55346],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13053.9,3705.55,9.86183],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13056.1,3702,10.3639],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13058.2,3698.44,10.8574],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13060.4,3694.88,11.2592],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13062.4,3691.46,11.6383],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13064.6,3687.89,11.9579],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13066.7,3684.31,12.2048],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13068.8,3680.74,12.402],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13071,3677.17,12.5507],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13073.1,3673.63,12.673],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13074.8,3670.97,12.7347],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13093.8,3677.82,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13096,3674.27,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13098.2,3670.67,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13100.3,3667.16,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13101.9,3664.57,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13091,3678.6,12.793],328.566,0,0,false],
    ["Land_Pipe_fence_4m_F",[13087.5,3676.43,12.793],328.566,0,0,false],
    ["Land_Pipe_fence_4m_F",[13083.9,3674.26,12.793],328.566,0,0,false],
    ["Land_Pipe_fence_4m_F",[13080.4,3672.09,12.793],328.566,0,0,false],
    ["Land_Pipe_fence_4m_F",[13101.1,3661.7,12.793],328.566,0,0,false],
    ["Land_Pipe_fence_4m_F",[13097.5,3659.53,12.793],328.566,0,0,false],
    ["Land_Pipe_fence_4m_F",[13094,3657.36,12.793],328.566,0,0,false],
    ["Land_Pipe_fence_4m_F",[13091,3655.53,12.793],328.566,0,0,false],
    ["Land_Pipe_fence_4m_F",[13088,3653.68,12.793],328.566,0,0,false],
    ["Land_Pipe_fence_4m_F",[13082.7,3643.29,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13084.9,3639.73,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13087,3636.18,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13089.2,3632.62,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13091.3,3629.07,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13093.5,3625.51,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13095.7,3621.95,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13097.8,3618.4,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13100,3614.84,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13102.1,3611.29,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13104.3,3607.73,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13106.5,3604.18,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13108.6,3600.62,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13110.8,3597.06,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13112.9,3593.51,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13115.1,3589.95,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13117.3,3586.4,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13119.4,3582.84,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13121.6,3579.29,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13122.4,3577.86,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13134.8,3557.29,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13107.9,3563.88,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13110.1,3560.33,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13112.2,3556.77,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13114.1,3553.73,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13115.9,3550.72,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13121.8,3574.95,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13118.3,3572.78,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13114.7,3570.62,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13111.2,3568.45,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13118.8,3550.14,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13122.4,3552.31,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13125.9,3554.47,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13129.5,3556.63,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13131.8,3558.08,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13137,3553.73,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13139.1,3550.18,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13141.3,3546.62,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13143.4,3543.06,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13145.6,3539.51,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13147.8,3535.95,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13149.9,3532.4,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13152.1,3528.84,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13154.2,3525.29,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13156.4,3521.73,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13158.6,3518.18,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13160.7,3514.62,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13162.9,3511.06,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13165,3507.51,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13167.2,3503.95,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13169.3,3500.4,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13171.5,3496.84,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13173.7,3493.29,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13175.8,3489.73,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13189,3467.62,12.8535],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13176.1,3485.47,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13172.5,3483.31,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13168.9,3481.14,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13165.4,3478.98,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13172.7,3460.37,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13161.7,3474.19,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13163.9,3470.64,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13166.1,3467.08,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13168.2,3463.52,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13169.7,3461.06,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13176.2,3462.54,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13179.8,3464.7,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13183.3,3466.87,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13186.1,3468.52,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13087.1,3650.72,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13089.2,3647.16,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13091.4,3643.6,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13093.5,3640.13,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13095.7,3636.49,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13097.9,3632.94,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13100,3629.38,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13102.2,3625.83,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13104.3,3622.27,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13106.5,3618.72,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13108.7,3615.16,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13110.8,3611.6,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13113,3608.05,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13115.1,3604.49,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13117.3,3600.94,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13119.4,3597.38,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13121.6,3593.83,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13123.8,3590.27,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13125.9,3586.71,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13128.1,3583.16,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13129,3581.6,12.7749],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13148,3588.43,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13134.4,3582.56,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13138,3584.73,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13141.6,3586.89,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13145.1,3589.05,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13155.3,3572.27,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13150.2,3584.87,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13152.4,3581.32,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13154.5,3577.76,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13156.1,3575.19,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13151.7,3570.11,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13148.2,3567.95,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13144.6,3565.78,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13141.9,3564.13,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13141.3,3561.03,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13143.5,3557.48,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13145.7,3553.92,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13147.8,3550.37,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13150,3546.81,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13152.1,3543.26,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13154.3,3539.65,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13156.4,3536.14,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13158.6,3532.59,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13160.8,3529.03,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13162.9,3525.48,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13165.1,3521.92,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13167.2,3518.37,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13169.4,3514.81,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13171.6,3511.26,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13173.7,3507.7,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13175.9,3504.14,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13178,3500.59,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13180.2,3497.03,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13182.4,3493.48,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13183.3,3491.83,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13188.3,3492.89,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13191.8,3495.06,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13195.4,3497.22,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13199,3499.39,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13209.1,3482.69,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13202,3498.8,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13204.1,3495.24,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13206.3,3491.68,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13208.4,3488.13,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13209.9,3485.64,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13205.6,3480.52,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13202,3478.36,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13198.5,3476.2,12.854],148.649,0,0,false],
    ["Land_Pipe_fence_4m_F",[13196,3474.69,12.854],148.649,0,0,false],
    ["Land_nav_pier_m_F",[13190.8,3471.98,6.62399],238.814,0,0,false],
    ["Land_Pipe_fence_4m_F",[13176.6,3488.38,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13191.1,3464.05,12.8535],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13193.2,3460.48,12.8535],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13195.4,3456.91,12.8535],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13197.5,3453.33,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13199.7,3449.77,12.8535],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13201.8,3446.22,12.844],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13206.2,3439.1,12.8097],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13208.3,3435.55,12.7822],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13210.5,3431.99,12.7338],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13212.6,3428.44,12.6791],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13214.8,3424.87,12.5934],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13216.9,3421.3,12.4823],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13219.1,3417.74,12.321],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13221.2,3414.15,12.125],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13204,3442.66,12.8308],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13223.4,3410.57,11.84],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13225.5,3407.02,11.5063],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13227.7,3403.46,11.0963],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13229.9,3399.9,10.5829],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13232,3396.34,9.96566],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13234.2,3392.79,9.20327],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13236.3,3389.23,8.41114],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13238.5,3385.68,7.42999],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13240.6,3382.12,6.4202],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13242.8,3378.57,5.27352],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13245,3375.01,4.12592],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13195.4,3471.76,12.8535],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13197.6,3468.19,12.8535],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13199.7,3464.71,12.8535],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13201.8,3461.12,12.8535],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13204,3457.52,12.8535],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13206.2,3453.91,12.8535],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13208.3,3450.33,12.8535],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13210.5,3446.74,12.8535],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13212.7,3443.15,12.8342],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13214.8,3439.55,12.8096],59.1452,0,0,false],
    ["Land_Pipe_fence_4m_F",[13217,3435.95,12.77],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13219.2,3432.39,12.7108],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13221.3,3428.84,12.6411],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13223.5,3425.28,12.537],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13227.8,3418.17,12.2267],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13230,3414.58,12.0002],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13232.2,3410.99,11.6951],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13234.4,3407.41,11.3066],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13236.5,3403.85,10.8713],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13238.7,3400.3,10.2901],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13240.9,3396.74,9.64574],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13243,3393.19,8.83338],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13245.2,3389.63,8.00261],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13247.3,3386.07,6.9854],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13249.5,3382.52,5.97036],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13251.6,3378.96,4.84241],58.7316,0,0,false],
    ["Land_Pipe_fence_4m_F",[13225.6,3421.73,12.405],58.7316,0,0,false],
    ["Land_LampHarbour_F",[13080.3,3648.14,12.661],58.4835,0,0,false],
    ["Land_LampHarbour_F",[13072.8,3673.13,12.4638],238.566,0,0,false],
    ["Land_LampHarbour_F",[13056.1,3688,11.4559],58.4835,0,0,false],
    ["Land_LampHarbour_F",[13052,3707.71,9.28533],237.739,0,0,false],
    ["Land_LampHarbour_F",[13092.8,3640.33,12.661],239.393,0,0,false],
    ["Land_LampHarbour_F",[13094.4,3625.07,12.661],58.4835,0,0,false],
    ["Land_LampHarbour_F",[13107,3616.8,12.661],239.393,0,0,false],
    ["Land_LampHarbour_F",[13109,3600.78,12.661],58.4835,0,0,false],
    ["Land_LampHarbour_F",[13122.4,3591.4,12.661],239.807,0,0,false],
    ["Land_LampHarbour_F",[13123.6,3576.82,12.661],58.4835,0,0,false],
    ["Land_LampHarbour_F",[13139.7,3562.82,12.661],240.634,0,0,false],
    ["Land_LampHarbour_F",[13141.1,3547.73,12.661],58.4835,0,0,false],
    ["Land_LampHarbour_F",[13154.7,3538.12,12.661],241.461,0,0,false],
    ["Land_LampHarbour_F",[13156.3,3522.82,12.661],58.4835,0,0,false],
    ["Land_LampHarbour_F",[13169.5,3513.58,12.661],238.153,0,0,false],
    ["Land_LampHarbour_F",[13171.9,3497.16,12.661],58.4835,0,0,false],
    ["Land_LampHarbour_F",[13183.6,3490.32,12.661],239.393,0,0,false],
    ["Land_LampHarbour_F",[13188.2,3469.76,12.661],58.4835,0,0,false],
    ["Land_LampHarbour_F",[13202.1,3459.49,12.661],239.807,0,0,false],
    ["Land_LampHarbour_F",[13204.1,3443.49,12.661],58.4835,0,0,false],
    ["Land_LampHarbour_F",[13217.7,3433.88,12.4934],240.221,0,0,false],
    ["Land_LampHarbour_F",[13219.6,3417.89,12.1039],58.4835,0,0,false],
    ["Land_LampHarbour_F",[13232.8,3408.94,11.2375],239.807,0,0,false],
    ["Land_LampHarbour_F",[13234.4,3393.53,9.0932],58.4835,0,0,false],
    ["Land_LampHarbour_F",[13250.7,3379.13,4.71357],240.634,0,0,false],
    ["Misc_concrete_High",[13092.5,3672.47,12.4293],76.5165,0,0,false],
    ["Misc_concrete_High",[13085.2,3659.38,12.4293],32.261,0,0,false],
    ["Misc_concrete_High",[13093.1,3665.71,12.4293],141.866,0,0,false],
    ["Misc_concrete_High",[13156.4,3529.64,12.4293],64.1084,0,0,false],
    ["Land_Ind_BoardsPack1",[13204.9,3486.08,12.5385],0,0,0,false],
    ["Land_Ind_BoardsPack1",[13192.8,3481.79,12.5385],53.7684,0,0,false],
    ["Land_Ind_BoardsPack1",[13194.2,3491.79,12.5385],224.338,0,0,false],
    ["Land_Ind_BoardsPack1",[13197.7,3485.88,12.5385],276.866,0,0,false],
    ["Land_Ind_BoardsPack1",[13102.3,3619.13,12.5385],0,0,0,false],
    ["Land_Ind_BoardsPack2",[13114.3,3557.15,12.5586],58.7316,0,0,false],
    ["Land_Ind_BoardsPack2",[13115.4,3564.39,12.5586],355.864,0,0,false],
    ["Land_Ind_BoardsPack2",[13129.8,3571.79,12.5586],6.61764,0,0,false],
    ["Land_Bricks_V1_F",[13123.4,3556.64,12.5132],0,0,0,false],
    ["Land_Bricks_V1_F",[13183,3482.79,12.5132],0,0,0,false],
    ["Land_Bricks_V1_F",[13089.5,3661.19,12.5132],0,0,0,false],
    ["Misc_concrete_High",[13025.6,3748.01,0.356706],21.5073,0,0,false],
    ["Misc_concrete_High",[13024.9,3744.5,1.12669],56.6636,0,0,false]
];

{
    private ["_object"];

    _object = (_x select 0) createVehicle [0,0,0];
    _object setDir (_x select 2);
    _object setPosATL (_x select 1);
    _object allowDamage false;
    _object enableSimulationGlobal false; // :)
}
forEach _objects;