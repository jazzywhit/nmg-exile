/**
  /////////////////////////////////////////////////////////////////////////////
  Exile Mod Loot Table Template
  /////////////////////////////////////////////////////////////////////////////
	
  Format of this file is the following:

  > LootTableName
  Spawn Chance %, Item Class Name

  You can add one item to multiple loot tables.

  Be careful with spawn chance values! They do not define how common an item is
  in general, but how common it is in relation to all the other items of that
  loot table. Values from 0..100 are allowed. The higher the chance, the more
  often will it spawn.
*/

///////////////////////////////////////////////////////////////////////////////
// Slums/Ghetto, Farms, Village Houses, Castle etc.
// Spawn Guerilla things :)
///////////////////////////////////////////////////////////////////////////////
> CivillianLowerClass

// Food
200, Exile_Item_PlasticBottleEmpty
50, Exile_Item_PlasticBottleFreshWater
30, Exile_Item_Energydrink
40, Exile_Item_Beer
150, Exile_Item_GloriousKnakworst
170, Exile_Item_SausageGravy
170, Exile_Item_ChristmasTinner
170, Exile_Item_BBQSandwich
190, Exile_Item_Surstromming
200, Exile_Item_Catfood

20, Exile_Item_ChristmasTinner_Cooked
20, Exile_Item_BBQSandwich_Cooked
20, Exile_Item_GloriousKnakworst_Cooked
20, Exile_Item_SausageGravy_Cooked
20, Exile_Item_Surstromming_Cooked
20, Exile_Item_Catfood_Cooked

// Pistols
80, hgun_ACPC2_F            // ACP-C2 .45
80, hgun_P07_F              // P07 9 mm
80, hgun_Rook40_F           // Rook-40 9 mm
50, hgun_Pistol_heavy_01_F  // 4-five .45
50, hgun_Pistol_heavy_02_F  // Zubr .45
50, hgun_Pistol_Signal_F    // Starter Pistol

// Pistol Magazines
90, 11Rnd_45ACP_Mag       // 4-five
90, 16Rnd_9x21_Mag        // PDW2000, P07, ROOK-40
90, 30Rnd_9x21_Mag        // Sting, PDW2000, P07, ROOK-40
60, 6Rnd_45ACP_Cylinder   // Zubr
30, 6Rnd_GreenSignal_F    // Starter Pistol
30, 6Rnd_RedSignal_F      // Starter Pistol 
90, 9Rnd_45ACP_Mag        // ACP-C2

// Pistol Items
50, muzzle_snds_L
50, muzzle_snds_acp
20, optic_Yorris      // No one needs this crap
20, optic_MRD

// SMG Ammo
40, 30Rnd_45ACP_Mag_SMG_01                // Vermin SMG
40, 30Rnd_45ACP_Mag_SMG_01_Tracer_Green   // Vermin SMG

// SMGs
30, SMG_01_F        // Vermin SMG .45 ACP
30, SMG_02_F        // Sting 9 mm
30, hgun_PDW2000_F  // PDW2000 9 mm

// SMG Items
50, optic_Holosight_smg
50, optic_ACO_grn_smg
50, optic_Aco_smg
50, optic_ACO_grn
50, optic_Aco
1, optic_Nightstalker

// Backpacks
75, B_OutdoorPack_blk
75, B_OutdoorPack_tan
75, B_OutdoorPack_blu

70, B_HuntingBackpack

60, B_AssaultPack_khk
60, B_AssaultPack_dgtl
60, B_AssaultPack_rgr
60, B_AssaultPack_sgg
60, B_AssaultPack_blk
60, B_AssaultPack_cbr
60, B_AssaultPack_mcamo
60, B_Kitbag_mcamo
60, B_Kitbag_sgg
60, B_Kitbag_cbr

50, B_FieldPack_blk
50, B_FieldPack_ocamo
50, B_FieldPack_oucamo
50, B_FieldPack_cbr
50, B_Bergen_sgg
50, B_Bergen_mcamo
50, B_Bergen_rgr
50, B_Bergen_blk

// Rifles
40, arifle_Katiba_F       // Katiba 6.5 mm
40, arifle_Katiba_GL_F    // Katiba GL 6.5 mm
30, arifle_SDAR_F         // SDAR 5.56 mm
40, arifle_TRG21_F        // TRG-21 5.56 mm
40, arifle_TRG20_F        // TRG-20 5.56 mm

// Rifle Items
30, muzzle_snds_M
30, muzzle_snds_H
30, optic_Arco
30, optic_Hamr
30, optic_Holosight
40, acc_flashlight
30, acc_pointer_IR
30, optic_MRCO
30, optic_DMS
5, optic_NVS
1, optic_tws

// Rifle Ammo
50, 20Rnd_556x45_UW_mag            // SDAR
70, 30Rnd_556x45_Stanag            // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
70, 30Rnd_556x45_Stanag_Tracer_Green     // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
70, 30Rnd_556x45_Stanag_Tracer_Red     // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
70, 30Rnd_556x45_Stanag_Tracer_Yellow    // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
70, 30Rnd_65x39_caseless_green       // Katiba
70, 30Rnd_65x39_caseless_green_mag_Tracer  // Katiba

// Items
15, Binocular
10, Exile_Item_CamoTentKit
65, Exile_Item_CookingPot
40, Exile_Item_DuctTape
40, Exile_Item_LightBulb
200, Exile_Item_Matches
15, Exile_Item_InstaDoc
25, ItemGPS

// Chem lights
100, Chemlight_blue
100, Chemlight_green
100, Chemlight_red
100, Chemlight_yellow

// Road flares
80, FlareGreen_F
80, FlareRed_F
80, FlareWhite_F
80, FlareYellow_F

// Uniforms
50, U_C_Poor_1
50, U_C_Poor_2
50, U_C_Poor_shorts_1
50, U_C_HunterBody_grn

40, U_C_Poloshirt_salmon
40, U_C_Poloshirt_tricolour
40, U_C_Poloshirt_stripped
40, U_C_Poloshirt_burgundy
40, U_C_Poloshirt_blue

// Guerilla Headgear
30, H_Booniehat_khk
30, H_Booniehat_indp
30, H_Booniehat_mcamo
30, H_Booniehat_grn
30, H_Booniehat_tan
30, H_Booniehat_dirty
30, H_Booniehat_dgtl
30, H_Booniehat_khk_hs

20, H_Bandanna_khk
20, H_Bandanna_khk_hs
20, H_Bandanna_cbr
20, H_Bandanna_sgg
20, H_Bandanna_gry
20, H_Bandanna_camo
20, H_Bandanna_mcamo
20, H_BandMask_blk

10, H_Beret_blk
10, H_Beret_red
10, H_Beret_grn
10, H_Beret_grn_SF
10, H_Beret_brn_SF
10, H_Beret_ocamo
10, H_Beret_02
10, H_Beret_Colonel

15, H_Hat_camo
15, H_Cap_brn_SPECOPS
15, H_Cap_tan_specops_US
15, H_Cap_khaki_specops_UK
15, H_Watchcap_blk
15, H_Watchcap_khk
15, H_Watchcap_camo
15, H_Watchcap_sgg
15, H_TurbanO_blk

10, H_Shemag_khk
10, H_Shemag_tan
10, H_Shemag_olive
10, H_Shemag_olive_hs
10, H_ShemagOpen_khk
10, H_ShemagOpen_tan

// Guerilla Vests
15, V_BandollierB_khk
15, V_BandollierB_cbr
15, V_BandollierB_rgr
15, V_BandollierB_blk
15, V_BandollierB_oli
10, V_Chestrig_khk
10, V_Chestrig_rgr
10, V_Chestrig_blk
10, V_Chestrig_oli
15, V_HarnessO_brn
15, V_HarnessOGL_brn
15, V_HarnessO_gry
15, V_HarnessOGL_gry
15, V_HarnessOSpec_brn
15, V_HarnessOSpec_gry

5, V_I_G_resistanceLeader_F

// Guerilla Uniforms
40, U_IG_Guerilla1_1
40, U_IG_Guerilla2_1
40, U_IG_Guerilla2_2
40, U_IG_Guerilla2_3
40, U_IG_Guerilla3_1
40, U_IG_Guerilla3_2

10, U_IG_leader
5, U_I_G_resistanceLeader_F

///////////////////////////////////////////////////////////////////////////////
// Apartments, Offices etc.
///////////////////////////////////////////////////////////////////////////////
> CivillianUpperClass

200, Exile_Item_PlasticBottleEmpty
50, Exile_Item_PlasticBottleFreshWater
30, Exile_Item_Energydrink
40, Exile_Item_Beer
150, Exile_Item_GloriousKnakworst
170, Exile_Item_SausageGravy
170, Exile_Item_ChristmasTinner
170, Exile_Item_BBQSandwich
190, Exile_Item_Surstromming
200, Exile_Item_Catfood
20, Exile_Item_ChristmasTinner_Cooked
20, Exile_Item_BBQSandwich_Cooked
20, Exile_Item_GloriousKnakworst_Cooked
20, Exile_Item_SausageGravy_Cooked
20, Exile_Item_Surstromming_Cooked
20, Exile_Item_Catfood_Cooked

// Pistols
70, hgun_ACPC2_F              // ACP-C2 .45
70, hgun_P07_F                // P07 9 mm
70, hgun_Rook40_F             // Rook-40 9 mm
50, hgun_Pistol_heavy_01_F    // 4-five .45
50, hgun_Pistol_heavy_02_F    // Zubr .45
35, hgun_Pistol_Signal_F      // Starter Pistol

// Pistol Magazines
80, 11Rnd_45ACP_Mag      // 4-five
80, 16Rnd_9x21_Mag       // PDW2000, P07, ROOK-40
80, 30Rnd_9x21_Mag       // Sting, PDW2000, P07, ROOK-40
70, 6Rnd_45ACP_Cylinder  // Zubr
50, 6Rnd_GreenSignal_F   // Starter Pistol
50, 6Rnd_RedSignal_F     // Starter Pistol 
70, 9Rnd_45ACP_Mag       // ACP-C2

// Pistol Items
25, muzzle_snds_L
25, muzzle_snds_acp
10, optic_Yorris
10, optic_MRD

// Backpacks
85, B_OutdoorPack_blk
85, B_OutdoorPack_tan
85, B_OutdoorPack_blu
70, B_HuntingBackpack

// Uniforms
100, U_C_Poloshirt_salmon
100, U_C_Poloshirt_tricolour
100, U_C_Poloshirt_stripped
100, U_C_Poloshirt_burgundy
100, U_C_Poloshirt_blue

50, U_C_Journalist
50, U_C_Scientist
50, U_Rangemaster

5, U_OrestesBody
5, U_NikosBody
5, U_NikosAgedBody

// Vests
50, V_Rangemaster_belt
50, V_Press_F
50, V_TacVest_blk_POLICE

// Headgear
60, H_Bandanna_surfer
60, H_Beret_blk_POLICE
60, H_Cap_blk
60, H_Cap_blk_Raven
60, H_Cap_blu
60, H_Cap_grn
60, H_Cap_headphones
60, H_Cap_oli
60, H_Cap_press
60, H_Cap_red
60, H_Cap_tan
60, H_Hat_blue
60, H_Hat_brown
60, H_Hat_checker
60, H_Hat_grey
60, H_Hat_tan
60, H_StrawHat
60, H_StrawHat_dark

// Rifles
70, arifle_Katiba_F       // Katiba 6.5 mm
60, arifle_MXC_F          // MXC 6.5 mm
60, arifle_MX_F           // MX 6.5 mm
60, arifle_MX_GL_F        // MX 3GL 6.5 mm
50, arifle_MXM_F          // MXM 6.5 mm
50, arifle_SDAR_F         // SDAR 5.56 mm
70, arifle_TRG21_F        // TRG-21 5.56 mm
70, arifle_TRG20_F        // TRG-20 5.56 mm
70, arifle_Mk20_F         // Mk20 5.56 mm
70, arifle_Mk20C_F        // Mk20C 5.56 mm

// Rifle Items
25, muzzle_snds_M
25, muzzle_snds_H
40, optic_Arco
40, optic_Hamr
40, optic_Holosight
70, acc_flashlight
70, acc_pointer_IR
60, optic_MRCO
60, optic_DMS
5, optic_NVS
1, optic_Nightstalker
1, optic_tws

// Rifle Ammo
60, 20Rnd_556x45_UW_mag                     // SDAR
80, 30Rnd_556x45_Stanag                     // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
50, 30Rnd_556x45_Stanag_Tracer_Green        // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
50, 30Rnd_556x45_Stanag_Tracer_Red          // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
50, 30Rnd_556x45_Stanag_Tracer_Yellow       // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
80, 30Rnd_65x39_caseless_green              // Katiba
50, 30Rnd_65x39_caseless_green_mag_Tracer   // Katiba
80, 30Rnd_65x39_caseless_mag                // MX/C/M/SW/3GL
50, 30Rnd_65x39_caseless_mag_Tracer         // MX/C/M/SW/3GL

///////////////////////////////////////////////////////////////////////////////
// Kiosks, Supermarkets etc.
///////////////////////////////////////////////////////////////////////////////
> Shop

// Smoke Nades
 50, SmokeShell
 50, SmokeShellRed
 50, SmokeShellGreen
 50, SmokeShellYellow
 50, SmokeShellPurple
 50, SmokeShellBlue
 50, SmokeShellOrange

// Pistols
100, hgun_ACPC2_F             // ACP-C2 .45
100, hgun_Rook40_F            // Rook-40 9 mm
100, hgun_P07_F               // P07 9 mm
70, hgun_Pistol_heavy_01_F    // 4-five .45
70, hgun_Pistol_heavy_02_F    // Zubr .45
50, hgun_Pistol_Signal_F      // Starter Pistol

// Pistol Magazines
80, 11Rnd_45ACP_Mag    // 4-five
80, 16Rnd_9x21_Mag       // PDW2000, P07, ROOK-40
80, 30Rnd_9x21_Mag       // Sting, PDW2000, P07, ROOK-40
70, 6Rnd_45ACP_Cylinder  // Zubr
60, 6Rnd_GreenSignal_F     // Starter Pistol
60, 6Rnd_RedSignal_F   // Starter Pistol 
80, 9Rnd_45ACP_Mag       // ACP-C2

// Pistol Items
25, muzzle_snds_L
25, muzzle_snds_acp
10, optic_Yorris
10, optic_MRD

200, Exile_Item_PlasticBottleEmpty
50, Exile_Item_PlasticBottleFreshWater
30, Exile_Item_Energydrink
40, Exile_Item_Beer
150, Exile_Item_GloriousKnakworst
170, Exile_Item_SausageGravy
170, Exile_Item_ChristmasTinner
170, Exile_Item_BBQSandwich
190, Exile_Item_Surstromming
200, Exile_Item_Catfood

20, Exile_Item_ChristmasTinner_Cooked
20, Exile_Item_BBQSandwich_Cooked
20, Exile_Item_GloriousKnakworst_Cooked
20, Exile_Item_SausageGravy_Cooked
20, Exile_Item_Surstromming_Cooked
20, Exile_Item_Catfood_Cooked

15, Binocular
10, Exile_Item_CamoTentKit
65, Exile_Item_CookingPot
40, Exile_Item_DuctTape
80, Exile_Item_LightBulb
200, Exile_Item_Matches
50, Exile_Item_InstaDoc
25, ItemGPS

///////////////////////////////////////////////////////////////////////////////
// Factories, Construction Sites, Warehouses, Research etc.
///////////////////////////////////////////////////////////////////////////////
> Industrial

10, Exile_Item_DuctTape
30, Exile_Item_ExtensionCord
5, Exile_Item_FloodLightKit
50, Exile_Item_FuelCanisterEmpty
40, Exile_Item_FuelCanisterFull
25, Exile_Item_JunkMetal
20, Exile_Item_LightBulb
10, Exile_Item_MetalBoard
5, Exile_Item_PortableGeneratorKit
10, Exile_Item_Rope
50, Exile_Melee_Axe
30, Exile_Item_Matches
1, Exile_Item_ThermalScannerPro

///////////////////////////////////////////////////////////////////////////////
// Fuel Stations, Garages, Workshops etc.
///////////////////////////////////////////////////////////////////////////////
> VehicleService

10, Exile_Item_DuctTape
50, Exile_Item_FuelCanisterEmpty
40, Exile_Item_FuelCanisterFull
25, Exile_Item_JunkMetal
20, Exile_Item_LightBulb
10, Exile_Item_MetalBoard
1, Exile_Item_ThermalScannerPro

///////////////////////////////////////////////////////////////////////////////
// Towers, Barracks, Hangars etc.
///////////////////////////////////////////////////////////////////////////////
> Military

// LMGs
50, arifle_MX_SW_Black_F   // MX SW 6.5 mm (Black)
50, arifle_MX_SW_F       // MX SW 6.5 mm
50, LMG_Mk200_F        // Mk200 6.5 mm
50, LMG_Zafir_F        // Zafir 7.62 mm

// LMG Ammo
70, 100Rnd_65x39_caseless_mag      // MX SW
60, 100Rnd_65x39_caseless_mag_Tracer   // MX SW
70, 150Rnd_762x54_Box          // Zafir
60, 150Rnd_762x54_Box_Tracer       // Zafir
//60, 200Rnd_65x39_Belt          // Mk200
//50, 200Rnd_65x39_Belt_Tracer_Green   // Mk200
//50, 200Rnd_65x39_Belt_Tracer_Red     // Mk200
//50, 200Rnd_65x39_Belt_Tracer_Yellow    // Mk200
30, 130Rnd_338_Mag
300, 150Rnd_93x64_Mag

// Rifles
80, arifle_Katiba_F    // Katiba 6.5 mm
70, arifle_Katiba_GL_F   // Katiba GL 6.5 mm
70, arifle_MXC_F     // MXC 6.5 mm
70, arifle_MX_F      // MX 6.5 mm
35, arifle_MX_GL_F     // MX 3GL 6.5 mm
50, arifle_MXM_F     // MXM 6.5 mm
20, arifle_MXM_Black_F // MXM 6.5 mm (Black)
60, arifle_SDAR_F    // SDAR 5.56 mm
70, arifle_TRG21_F     // TRG-21 5.56 mm
70, arifle_TRG20_F     // TRG-20 5.56 mm
30, arifle_TRG21_GL_F  // TRG-21 EGLM 5.56 mm
60, arifle_Mk20_F    // Mk20 5.56 mm
60, arifle_Mk20C_F   // Mk20C 5.56 mm
30, arifle_Mk20_GL_F   // Mk20 EGLM 5.56 mm
20, arifle_MXC_Black_F   // MXC 6.5 mm (Black)
20, arifle_MX_Black_F  // MX 6.5 mm (Black)
20, arifle_MX_GL_Black_F // MX 3GL 6.5 mm (Black)

// Rifle Items
25, muzzle_snds_M
25, muzzle_snds_H
50, optic_Arco
50, optic_Hamr
50, optic_Holosight
60, acc_pointer_IR
50, optic_MRCO
70, acc_flashlight
5, optic_NVS
1, optic_Nightstalker
1, optic_tws
1, optic_tws_mg

// Rifle Ammo
35, 20Rnd_556x45_UW_mag            // SDAR
50, 30Rnd_556x45_Stanag            // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
40, 30Rnd_556x45_Stanag_Tracer_Green     // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
40, 30Rnd_556x45_Stanag_Tracer_Red     // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
40, 30Rnd_556x45_Stanag_Tracer_Yellow    // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
50, 30Rnd_65x39_caseless_green       // Katiba
40, 30Rnd_65x39_caseless_green_mag_Tracer  // Katiba
50, 30Rnd_65x39_caseless_mag         // MX/C/M/SW/3GL
40, 30Rnd_65x39_caseless_mag_Tracer      // MX/C/M/SW/3GL

// Snipers
25, srifle_DMR_01_F  // Rahim 7.62 mm
25, srifle_EBR_F // Mk18 ABR 7.62 mm
20, srifle_GM6_F   // GM6 Lynx 12.7 mm
20, srifle_LRR_F // M320 LRR .408

// Sniper Ammo
25, 5Rnd_127x108_Mag     // GM6 Lynx
25, 7Rnd_408_Mag       // M320 LRR
40, 10Rnd_762x51_Mag     // Rahim
40, 20Rnd_762x51_Mag     // Mk18 ABR
15, 5Rnd_127x108_APDS_Mag  // GM6 Lynx 

// Sniper Items
25, muzzle_snds_B
35, optic_DMS
35, optic_SOS
35, optic_LRPS

// Noob Tube Nades
30, 1Rnd_HE_Grenade_shell
15, 3Rnd_HE_Grenade_shell

// Smoke Nades
35, SmokeShell
35, SmokeShellRed
35, SmokeShellGreen
35, SmokeShellYellow
35, SmokeShellPurple
35, SmokeShellBlue
35, SmokeShellOrange

// Noob Tube Flares
15, 3Rnd_UGL_FlareGreen_F
15, 3Rnd_UGL_FlareRed_F
15, 3Rnd_UGL_FlareWhite_F
15, 3Rnd_UGL_FlareYellow_F
35, UGL_FlareGreen_F
35, UGL_FlareRed_F
35, UGL_FlareWhite_F
35, UGL_FlareYellow_F

// No Infrared for now
//UGL_FlareCIR_F    
//3Rnd_UGL_FlareCIR_F

// Noob Tube Smokes
35, 1Rnd_Smoke_Grenade_shell
35, 1Rnd_SmokeBlue_Grenade_shell
35, 1Rnd_SmokeGreen_Grenade_shell
35, 1Rnd_SmokeOrange_Grenade_shell
35, 1Rnd_SmokePurple_Grenade_shell
35, 1Rnd_SmokeRed_Grenade_shell
35, 1Rnd_SmokeYellow_Grenade_shell
15, 3Rnd_Smoke_Grenade_shell
15, 3Rnd_SmokeBlue_Grenade_shell
15, 3Rnd_SmokeGreen_Grenade_shell
15, 3Rnd_SmokeOrange_Grenade_shell
15, 3Rnd_SmokePurple_Grenade_shell
15, 3Rnd_SmokeRed_Grenade_shell
15, 3Rnd_SmokeYellow_Grenade_shell

// Explosives
25, HandGrenade
25, MiniGrenade

// Items
70, Binocular
50, ItemRadio
40, ItemGPS
50, NVGoggles
50, Exile_Item_InstaDoc

// Backpacks
70, B_OutdoorPack_blk
70, B_OutdoorPack_tan
70, B_OutdoorPack_blu
60, B_HuntingBackpack

50, B_AssaultPack_khk
50, B_AssaultPack_dgtl
50, B_AssaultPack_rgr
50, B_AssaultPack_sgg
50, B_AssaultPack_blk
50, B_AssaultPack_cbr
50, B_AssaultPack_mcamo

40, B_Kitbag_mcamo
40, B_Kitbag_sgg
40, B_Kitbag_cbr

20, B_FieldPack_blk
20, B_FieldPack_ocamo
20, B_FieldPack_oucamo
20, B_FieldPack_cbr

15, B_Bergen_sgg
15, B_Bergen_mcamo
15, B_Bergen_rgr
15, B_Bergen_blk

// Headgear
70, H_MilCap_ocamo
70, H_MilCap_mcamo
70, H_MilCap_oucamo
70, H_MilCap_blue
70, H_MilCap_rucamo
70, H_MilCap_dgtl

// Does not exist in ARMA anymore?
//  H_HelmetB_plain_mcamo

70, H_HelmetB
70, H_HelmetB_paint
70, H_HelmetB_light
70, H_HelmetB_plain_blk
70, H_HelmetSpecB
70, H_HelmetSpecB_paint1
70, H_HelmetSpecB_paint2
70, H_HelmetSpecB_blk
70, H_HelmetIA
70, H_HelmetIA_net
70, H_HelmetIA_camo
70, H_HelmetB_grass
70, H_HelmetB_snakeskin
70, H_HelmetB_desert
70, H_HelmetB_black
70, H_HelmetB_sand
70, H_HelmetB_light_grass
70, H_HelmetB_light_snakeskin
70, H_HelmetB_light_desert
70, H_HelmetB_light_black
70, H_HelmetB_light_sand

40, H_HelmetCrew_B
40, H_HelmetCrew_O
40, H_HelmetCrew_I

30, H_PilotHelmetFighter_B
30, H_PilotHelmetFighter_O
30, H_PilotHelmetFighter_I

30, H_PilotHelmetHeli_B
30, H_PilotHelmetHeli_O
30, H_PilotHelmetHeli_I

25, H_HelmetB_camo

30, H_CrewHelmetHeli_B
30, H_CrewHelmetHeli_O
30, H_CrewHelmetHeli_I

25, H_BandMask_khk
25, H_BandMask_reaper
25, H_BandMask_demon

10, H_HelmetO_oucamo
10, H_HelmetLeaderO_oucamo
10, H_HelmetSpecO_ocamo
10, H_HelmetSpecO_blk
10, H_HelmetO_ocamo
10, H_HelmetLeaderO_ocamo

// Vests
70, V_Rangemaster_belt
70, V_PlateCarrier1_blk
70, V_PlateCarrier1_rgr
70, V_PlateCarrier2_rgr
70, V_PlateCarrier3_rgr
70, V_PlateCarrierGL_rgr
70, V_PlateCarrierIA1_dgtl
70, V_PlateCarrierIA2_dgtl
70, V_PlateCarrierIAGL_dgtl
70, V_PlateCarrierSpec_rgr

50, V_TacVest_blk
50, V_TacVest_brn
50, V_TacVest_camo
50, V_TacVest_khk
50, V_TacVest_oli
50, V_TacVestCamo_khk
50, V_TacVestIR_blk

30, V_RebreatherB
30, V_RebreatherIR
30, V_RebreatherIA

10, V_PlateCarrierL_CTRG
10, V_PlateCarrierH_CTRG

// Uniforms
70, U_B_CTRG_1             // CTRG Combat Uniform (UBACS)
70, U_B_CTRG_2             // CTRG Combat Uniform (UBACS2)
70, U_B_CTRG_3             // CTRG Combat Uniform (Tee)
50, U_B_CombatUniform_mcam       // Combat Fatigues (MTP)
70, U_B_CombatUniform_mcam_tshirt  // Combat Fatigues (MTP) (Tee)
70, U_B_CombatUniform_mcam_vest  // Recon Fatigues (MTP)
90, U_B_CombatUniform_mcam_worn  // Worn Combat Fatigues (MTP)
30, U_B_SpecopsUniform_sgg       // Specop Fatigues (Sage)
20, U_O_OfficerUniform_ocamo     // Officer Fatigues (Hex)
20, U_I_OfficerUniform         // Combat Fatigues [AAF] (Tee)
35, U_I_CombatUniform        // Combat Fatigues [AAF]
35, U_I_CombatUniform_tshirt     // Combat Fatigues [AAF] (Tee)
35, U_I_CombatUniform_shortsleeve  // Combat Fatigues [AAF]

15, U_B_GhillieSuit        // Ghillie Suit [NATO]
15, U_O_GhillieSuit        // Ghillie Suit [CSAT]
15, U_I_GhillieSuit        // Ghillie Suit [AAF]

35, U_B_HeliPilotCoveralls       // Heli Pilot Coveralls
35, U_O_PilotCoveralls         // Pilot Coveralls [CSAT]
35, U_B_PilotCoveralls         // Pilot Coveralls [NATO]
35, U_I_pilotCoveralls         // Pilot Coveralls [AAF]
35, U_I_HeliPilotCoveralls       // Heli Pilot Coveralls

25, U_B_Wetsuit          // Wetsuit [NATO]
25, U_O_Wetsuit          // Wetsuit [CSAT]
25, U_I_Wetsuit          // Wetsuit [AAF]

15, U_O_CombatUniform_ocamo    // Heli Pilot Coveralls
15, U_O_CombatUniform_oucamo     // Fatigues (Urban) [CSAT]
15, U_O_SpecopsUniform_ocamo     // Recon Fatigues (Hex)
15, U_O_SpecopsUniform_blk       // Recon Fatigues (Black)    

///////////////////////////////////////////////////////////////////////////////
// Hospital, Medevac etc.
///////////////////////////////////////////////////////////////////////////////
> Medical

100, Exile_Item_InstaDoc

///////////////////////////////////////////////////////////////////////////////
// Light Houses + Life Guard Towers + Castles
///////////////////////////////////////////////////////////////////////////////
> Tourist

// The ONLY place to find the BEST backpacks :)
10, B_Carryall_ocamo
10, B_Carryall_oucamo
10, B_Carryall_mcamo
10, B_Carryall_oli
10, B_Carryall_khk
10, B_Carryall_cbr

// Snipers
80, srifle_DMR_01_F  // Rahim 7.62 mm
80, srifle_EBR_F // Mk18 ABR 7.62 mm
70, srifle_GM6_F   // GM6 Lynx 12.7 mm
70, srifle_LRR_F // M320 LRR .408

// Sniper Ammo
50, 5Rnd_127x108_Mag     // GM6 Lynx
50, 7Rnd_408_Mag       // M320 LRR
60, 10Rnd_762x51_Mag     // Rahim
60, 20Rnd_762x51_Mag     // Mk18 ABR
40, 5Rnd_127x108_APDS_Mag  // GM6 Lynx 

// Sniper Items
70, muzzle_snds_B
70, acc_flashlight
70, acc_pointer_IR
70, optic_DMS
70, optic_SOS
70, optic_LRPS

80, Binocular
75, Rangefinder
50, Laserdesignator
50, ItemRadio
40, ItemGPS
50, NVGoggles
50, Exile_Item_InstaDoc

// Explosives
25, HandGrenade
25, MiniGrenade
