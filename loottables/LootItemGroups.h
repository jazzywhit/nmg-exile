/*
	///////////////////////////////////////////////////////////////////////////////
	// Class Names
	///////////////////////////////////////////////////////////////////////////////

	Remember that item class names, group names and loot table names cannot 
	contain spaces. Also be 100% sure to have the exact same name as in Arma,
	as they are *case sensive*.

	///////////////////////////////////////////////////////////////////////////////
	// Item Groups
	///////////////////////////////////////////////////////////////////////////////

	You can link one group of items to loot tables.
	One item should only be in one group.

	Syntax:
	> <Group Name>
	<Spawn Chance Within Group>,<Item Class Name>

	///////////////////////////////////////////////////////////////////////////////
	// Propability
	///////////////////////////////////////////////////////////////////////////////

	<Spawn Chance>,<Item>

	10, Banana
	20, Tomato
	30, Cherry

	Sum of chances:
	10 + 20 + 30 = 60 = 100%

	Spawn chances:
	Banana	10 : 60 = 10 * 100 / 60 = 16.67%
	Tomato	20 : 60 = 20 * 100 / 60 = 33.33%
	Cherry	30 : 60 = 30 * 100 / 60 = 50%

	In words: 
	If Exile should spawn an item of the above group, it has a 33.33%
	chance to spawn a Tomato.
*/
	
/*
	Item Groups
*/

///////////////////////////////////////////////////////////////////////////////
// Food & Drinks
///////////////////////////////////////////////////////////////////////////////

> Food
3, Exile_Item_CookingPot
5, Exile_Item_CanOpener
5, Exile_Item_Matches
3, Exile_Item_EMRE						// 75% Hunger
6, Exile_Item_GloriousKnakworst			// 60% Hunger
7, Exile_Item_Surstromming				// 55% Hunger
7, Exile_Item_SausageGravy				// 50% Hunger
7, Exile_Item_ChristmasTinner			// 40% Hunger
7, Exile_Item_BBQSandwich				// 40% Hunger
7, Exile_Item_CatFood					// 40% Hunger
7, Exile_Item_Dogfood					// 30% Hunger
7, Exile_Item_BeefParts					// 30% Hunger
7, Exile_Item_Cheathas					// 30% Hunger
7, Exile_Item_DsNuts					// 30% Hunger
7, Exile_Item_Noodles					// 25% Hunger
8, Exile_Item_CockONut					// 20% Hunger
8, Exile_Item_SeedAstics				// 20% Hunger
9, Exile_Item_Raisins					// 15% Hunger
9, Exile_Item_Moobar					// 10% Hunger
11, Exile_Item_InstantCoffee			//  5% Hunger

> Drinks
7, Exile_Item_PowerDrink					// +95% Thirst
12, Exile_Item_PlasticBottleFreshWater		// +80% Thirst
14, Exile_Item_Beer							// +75% Thirst
17, Exile_Item_EnergyDrink					// +75% Thirst
20, Exile_Item_MountainDupe					// +50% Thirst, spawns always twice!
30, Exile_Item_PlasticBottleDirtyWater		// +10% Thirst


///////////////////////////////////////////////////////////////////////////////
// Weapons & Attachments
///////////////////////////////////////////////////////////////////////////////

> Pistols
20, hgun_ACPC2_F			// ACP-C2 .45
21, hgun_P07_F				// P07 9 mm
20, hgun_Rook40_F			// Rook-40 9 mm
13, hgun_Pistol_heavy_01_F	// 4-five .45
13, hgun_Pistol_heavy_02_F	// Zubr .45
13, hgun_Pistol_Signal_F	// Starter Pistol

> PistolAmmo
20, 11Rnd_45ACP_Mag			// 4-five
10, 16Rnd_9x21_Mag			// PDW2000, P07, ROOK-40
20, 30Rnd_9x21_Mag			// Sting, PDW2000, P07, ROOK-40
16, 6Rnd_45ACP_Cylinder		// Zubr
7, 6Rnd_GreenSignal_F		// Starter Pistol
7, 6Rnd_RedSignal_F			// Starter Pistol
20, 9Rnd_45ACP_Mag			// ACP-C2

> PistolAttachments
36, muzzle_snds_L
36, muzzle_snds_acp
14, optic_Yorris		// No one needs this crap
14, optic_MRD

> SMG
34, SMG_01_F		// Vermin SMG .45 ACP
33, SMG_02_F		// Sting 9 mm
33, hgun_PDW2000_F	// PDW2000 9 mm

> SMGAmmo
50, 30Rnd_45ACP_Mag_SMG_01					// Vermin SMG
50, 30Rnd_45ACP_Mag_SMG_01_Tracer_Green		// Vermin SMG

> SMGAttachments
20, optic_Holosight_smg
20, optic_ACO_grn_smg
20, optic_Aco_smg
20, optic_ACO_grn
20, optic_Aco

> Rifles
10, arifle_Katiba_F			// Katiba 6.5 mm
8, arifle_Katiba_GL_F		// Katiba GL 6.5 mm
8, arifle_MXC_F				// MXC 6.5 mm
8, arifle_MX_F				// MX 6.5 mm
4, arifle_MX_GL_F			// MX 3GL 6.5 mm
6, arifle_MXM_F				// MXM 6.5 mm
3, arifle_MXM_Black_F		// MXM 6.5 mm (Black)
6, arifle_SDAR_F			// SDAR 5.56 mm
8, arifle_TRG21_F			// TRG-21 5.56 mm
8, arifle_TRG20_F			// TRG-20 5.56 mm
4, arifle_TRG21_GL_F		// TRG-21 EGLM 5.56 mm
7, arifle_Mk20_F			// Mk20 5.56 mm
7, arifle_Mk20C_F			// Mk20C 5.56 mm
4, arifle_Mk20_GL_F			// Mk20 EGLM 5.56 mm
3, arifle_MXC_Black_F		// MXC 6.5 mm (Black)
3, arifle_MX_Black_F		// MX 6.5 mm (Black)
3, arifle_MX_GL_Black_F		// MX 3GL 6.5 mm (Black)

> RifleAmmo
11, 20Rnd_556x45_UW_mag						// SDAR
15, 30Rnd_556x45_Stanag						// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
9, 30Rnd_556x45_Stanag_Tracer_Green			// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
9, 30Rnd_556x45_Stanag_Tracer_Red			// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
9, 30Rnd_556x45_Stanag_Tracer_Yellow		// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
15, 30Rnd_65x39_caseless_green				// Katiba
9, 30Rnd_65x39_caseless_green_mag_Tracer	// Katiba
9, 30Rnd_65x39_caseless_mag					// MX/C/M/SW/3GL
9, 30Rnd_65x39_caseless_mag_Tracer			// MX/C/M/SW/3GL

> RifleAttachments
10, muzzle_snds_M
10, muzzle_snds_H
10, optic_Arco
10, optic_Hamr
10, optic_Holosight
14, acc_flashlight
10, acc_pointer_IR
10, optic_MRCO
10, optic_DMS
5, optic_NVS

> LMG
25, arifle_MX_SW_Black_F	// MX SW 6.5 mm (Black)
25, arifle_MX_SW_F			// MX SW 6.5 mm
25, LMG_Mk200_F				// Mk200 6.5 mm
25, LMG_Zafir_F				// Zafir 7.62 mm

> LMGAmmo
12, 100Rnd_65x39_caseless_mag			// MX SW
10, 100Rnd_65x39_caseless_mag_Tracer	// MX SW
12, 150Rnd_762x54_Box					// Zafir
10, 150Rnd_762x54_Box_Tracer			// Zafir
5, 130Rnd_338_Mag
51, 150Rnd_93x64_Mag
10, 200Rnd_65x39_Belt					// Mk200
10, 200Rnd_65x39_Belt_Tracer_Green	// Mk200
10, 200Rnd_65x39_Belt_Tracer_Red		// Mk200
10, 200Rnd_65x39_Belt_Tracer_Yellow	// Mk200

> Snipers
28, srifle_DMR_01_F			// Rahim 7.62 mm
28, srifle_EBR_F			// Mk18 ABR 7.62 mm
22, srifle_GM6_F			// GM6 Lynx 12.7 mm
22, srifle_LRR_F			// M320 LRR .408

> SniperAmmo
28, 10Rnd_762x51_Mag		// Rahim
28, 20Rnd_762x51_Mag		// Mk18 ABR

> SniperAttachments
19, muzzle_snds_B
27, optic_DMS
26, optic_SOS
26, optic_LRPS

> DLCRifles
6, srifle_DMR_02_camo_F			//MAR10
6, srifle_DMR_02_F				//MAR10
6, srifle_DMR_02_sniper_F		//MAR10
3, srifle_DMR_03_F				//MK1EMR
3, srifle_DMR_03_khaki_F		//MK1EMR
3, srifle_DMR_03_tan_F			//MK1EMR
3, srifle_DMR_03_woodland_F		//MK1EMR
7, srifle_DMR_04_F				//ASP1KIR
7, srifle_DMR_04_Tan_F			//ASP1KIR
8, srifle_DMR_05_blk_F			//CYRUS
8, srifle_DMR_05_hex_F			//CYRUS
8, srifle_DMR_05_tan_F			//CYRUS
3, srifle_DMR_06_camo_F			//Mk14
3, srifle_DMR_06_olive_F		//Mk14

> DLCAmmo
16, 10Rnd_338_Mag			//MAR10
11, 20Rnd_762x51_Mag		//MK1EMR
14, 10Rnd_127x54_Mag		//ASP1KIR
16, 10Rnd_93x64_DMR_05_Mag	//CYRUS

> DLCOptics
14, optic_AMS
14, optic_AMS_khk
14, optic_AMS_snd
14, optic_KHS_blk
14, optic_KHS_hex
14, optic_KHS_old
14, optic_KHS_tan

> DLCSupressor
40, muzzle_snds_338_black
40, muzzle_snds_338_green
40, muzzle_snds_338_sand
40, muzzle_snds_93mmg
40, muzzle_snds_93mmg_tan
40, muzzle_snds_B

> Bipods
17, bipod_03_F_oli
17, bipod_03_F_blk
17, bipod_02_F_tan
16, bipod_02_F_hex
17, bipod_02_F_blk
17, bipod_01_F_snd
16, bipod_01_F_mtp
17, bipod_01_F_blk

> HEGrenades
67, 1Rnd_HE_Grenade_shell
33, 3Rnd_HE_Grenade_shell

> UGLFlares
8, 3Rnd_UGL_FlareGreen_F
8, 3Rnd_UGL_FlareRed_F
8, 3Rnd_UGL_FlareWhite_F
8, 3Rnd_UGL_FlareYellow_F
17, UGL_FlareGreen_F
17, UGL_FlareRed_F
17, UGL_FlareWhite_F
17, UGL_FlareYellow_F

> UGLSmokes
10, 1Rnd_Smoke_Grenade_shell
10, 1Rnd_SmokeBlue_Grenade_shell
10, 1Rnd_SmokeGreen_Grenade_shell
10, 1Rnd_SmokeOrange_Grenade_shell
10, 1Rnd_SmokePurple_Grenade_shell
10, 1Rnd_SmokeRed_Grenade_shell
10, 1Rnd_SmokeYellow_Grenade_shell
4, 3Rnd_Smoke_Grenade_shell
4, 3Rnd_SmokeBlue_Grenade_shell
4, 3Rnd_SmokeGreen_Grenade_shell
4, 3Rnd_SmokeOrange_Grenade_shell
4, 3Rnd_SmokePurple_Grenade_shell
4, 3Rnd_SmokeRed_Grenade_shell
4, 3Rnd_SmokeYellow_Grenade_shell

> HandGrenades
50, HandGrenade
50, MiniGrenade

> Explosives
12, DemoCharge_Remote_Mag
12, IEDUrbanSmall_Remote_Mag
12, IEDLandSmall_Remote_Mag
20, APERSMine_Range_Mag
20, APERSBoundingMine_Range_Mag
20, APERSTripMine_Wire_Mag
4, SatchelCharge_Remote_Mag

///////////////////////////////////////////////////////////////////////////////
// Clothing & Gear
///////////////////////////////////////////////////////////////////////////////

//Civilian

> CivilianItems
30, ItemWatch
30, ItemRadio
20, ItemGPS
20, Binocular
40, Exile_Item_Heatpack
40, ItemMap

> CivilianClothing
9, U_C_Poor_1
9, U_C_Poor_2
9, U_C_Poor_shorts_1
9, U_C_HunterBody_grn
7, U_C_Poloshirt_salmon
7, U_C_Poloshirt_tricolour
7, U_C_Poloshirt_stripped
7, U_C_Poloshirt_burgundy
7, U_C_Poloshirt_blue
9, U_C_Journalist
9, U_C_Scientist
9, U_Rangemaster
1, U_OrestesBody
1, U_NikosBody
1, U_NikosAgedBody

> CivilianBackpacks
10, B_OutdoorPack_blk
9, B_OutdoorPack_tan
9, B_OutdoorPack_blu
8, B_HuntingBackpack
7, B_AssaultPack_khk
7, B_AssaultPack_dgtl
7, B_AssaultPack_rgr
7, B_AssaultPack_sgg
7, B_AssaultPack_blk
7, B_AssaultPack_cbr
7, B_AssaultPack_mcamo
5, B_Kitbag_mcamo
5, B_Kitbag_sgg
5, B_Kitbag_cbr

> CivilianVests
50, V_Rangemaster_belt
25, V_Press_F
25, V_TacVest_blk_POLICE

> CivilianHeadgear
5, H_Bandanna_surfer
5, H_Beret_blk_POLICE
5, H_Cap_blk
5, H_Cap_blk_Raven
5, H_Cap_blu
5, H_Cap_grn
5, H_Cap_headphones
5, H_Cap_oli
6, H_Cap_press
6, H_Cap_red
6, H_Cap_tan
6, H_Hat_blue
6, H_Hat_brown
6, H_Hat_checker
6, H_Hat_grey
6, H_Hat_tan
6, H_StrawHat
6, H_StrawHat_dark

//Guerilla

> GuerillaItems
25, Rangefinder
25, NVGoggles
50, ItemCompass

> GuerillaClothing
16, U_IG_Guerilla1_1
16, U_IG_Guerilla2_1
16, U_IG_Guerilla2_2
16, U_IG_Guerilla2_3
15, U_IG_Guerilla3_1
15, U_IG_Guerilla3_2
4, U_IG_leader
2, U_I_G_resistanceLeader_F

> GuerillaBackpacks
14, B_FieldPack_blk
14, B_FieldPack_ocamo
14, B_FieldPack_oucamo
14, B_FieldPack_cbr
11, B_Bergen_sgg
11, B_Bergen_mcamo
11, B_Bergen_rgr
11, B_Bergen_blk

> GuerillaVests
7, V_BandollierB_khk
7, V_BandollierB_cbr
7, V_BandollierB_rgr
7, V_BandollierB_blk
7, V_BandollierB_oli
5, V_Chestrig_khk
5, V_Chestrig_rgr
5, V_Chestrig_blk
5, V_Chestrig_oli
7, V_HarnessO_brn
7, V_HarnessOGL_brn
7, V_HarnessO_gry
7, V_HarnessOGL_gry
7, V_HarnessOSpec_brn
7, V_HarnessOSpec_gry
3, V_I_G_resistanceLeader_F

> GuerillaHeadgear
4, Exile_Headgear_GasMask
4, H_Booniehat_khk
4, H_Booniehat_indp
4, H_Booniehat_mcamo
4, H_Booniehat_grn
4, H_Booniehat_tan
4, H_Booniehat_dirty
4, H_Booniehat_dgtl
4, H_Booniehat_khk_hs
3, H_Bandanna_khk
3, H_Bandanna_khk_hs
3, H_Bandanna_cbr
3, H_Bandanna_sgg
3, H_Bandanna_gry
3, H_Bandanna_camo
3, H_Bandanna_mcamo
3, H_BandMask_blk
1, H_Beret_blk
1, H_Beret_red
1, H_Beret_grn
1, H_Beret_grn_SF
1, H_Beret_brn_SF
1, H_Beret_ocamo
1, H_Beret_02
1, H_Beret_Colonel
3, H_Hat_camo
3, H_Cap_brn_SPECOPS
3, H_Cap_tan_specops_US
3, H_Cap_khaki_specops_UK
3, H_Watchcap_blk
3, H_Watchcap_khk
2, H_Watchcap_camo
2, H_Watchcap_sgg
2, H_TurbanO_blk
2, H_Shemag_khk
2, H_Shemag_tan
2, H_Shemag_olive
2, H_Shemag_olive_hs
2, H_ShemagOpen_khk
2, H_ShemagOpen_tan

//Military

> MilitaryItems
100, Laserdesignator

> MilitaryClothing
5, U_B_CTRG_1						// CTRG Combat Uniform (UBACS)
5, U_B_CTRG_2						// CTRG Combat Uniform (UBACS2)
5, U_B_CTRG_3						// CTRG Combat Uniform (Tee)
5, U_B_CombatUniform_mcam			// Combat Fatigues (MTP)
5, U_B_CombatUniform_mcam_tshirt	// Combat Fatigues (MTP) (Tee)
5, U_B_CombatUniform_mcam_vest		// Recon Fatigues (MTP)
5, U_B_CombatUniform_mcam_worn		// Worn Combat Fatigues (MTP)
3, U_B_SpecopsUniform_sgg			// Specop Fatigues (Sage)
2, U_O_OfficerUniform_ocamo			// Officer Fatigues (Hex)
2, U_I_OfficerUniform				// Combat Fatigues [AAF] (Tee)
4, U_I_CombatUniform				// Combat Fatigues [AAF]
4, U_I_CombatUniform_tshirt			// Combat Fatigues [AAF] (Tee)
4, U_I_CombatUniform_shortsleeve	// Combat Fatigues [AAF]
4, U_B_HeliPilotCoveralls			// Heli Pilot Coveralls
4, U_O_PilotCoveralls				// Pilot Coveralls [CSAT]
4, U_B_PilotCoveralls				// Pilot Coveralls [NATO]
4, U_I_pilotCoveralls				// Pilot Coveralls [AAF]
4, U_I_HeliPilotCoveralls			// Heli Pilot Coveralls
2, U_B_Wetsuit						// Wetsuit [NATO]
2, U_O_Wetsuit						// Wetsuit [CSAT]
2, U_I_Wetsuit						// Wetsuit [AAF]
2, U_O_CombatUniform_ocamo			// Heli Pilot Coveralls
2, U_O_CombatUniform_oucamo			// Fatigues (Urban) [CSAT]
2, U_O_SpecopsUniform_ocamo			// Recon Fatigues (Hex)
2, U_O_SpecopsUniform_blk			// Recon Fatigues (Black)

> MilitaryBackpacks
15, B_Carryall_ocamo
15, B_Carryall_oucamo
15, B_Carryall_mcamo
18, B_Carryall_oli
18, B_Carryall_khk
19, B_Carryall_cbr

> MilitaryVests
10, V_PlateCarrier1_blk
10, V_PlateCarrier1_rgr
10, V_PlateCarrier2_rgr
10, V_PlateCarrier3_rgr
10, V_PlateCarrierGL_rgr
10, V_PlateCarrierIA1_dgtl
10, V_PlateCarrierIA2_dgtl
10, V_PlateCarrierIAGL_dgtl
10, V_PlateCarrierSpec_rgr
5, V_PlateCarrierL_CTRG
5, V_PlateCarrierH_CTRG

> MilitaryHeadgear
4, Exile_Headgear_GasMask
4, H_MilCap_ocamo
4, H_MilCap_mcamo
4, H_MilCap_oucamo
4, H_MilCap_blue
4, H_MilCap_rucamo
4, H_MilCap_dgtl
3, H_HelmetB
3, H_HelmetB_paint
3, H_HelmetB_light
3, H_HelmetB_plain_blk
3, H_HelmetSpecB
3, H_HelmetSpecB_paint1
3, H_HelmetSpecB_paint2
3, H_HelmetSpecB_blk
3, H_HelmetIA
2, H_HelmetIA_net
2, H_HelmetIA_camo
2, H_HelmetB_grass
2, H_HelmetB_snakeskin
2, H_HelmetB_desert
2, H_HelmetB_black
2, H_HelmetB_sand
2, H_HelmetB_light_grass
2, H_HelmetB_light_snakeskin
2, H_HelmetB_light_desert
2, H_HelmetB_light_black
2, H_HelmetB_light_sand
1, H_HelmetCrew_B
1, H_HelmetCrew_O
1, H_HelmetCrew_I
1, H_PilotHelmetFighter_B
1, H_PilotHelmetFighter_O
1, H_PilotHelmetFighter_I
1, H_PilotHelmetHeli_B
1, H_PilotHelmetHeli_O
1, H_PilotHelmetHeli_I
1, H_HelmetB_camo
1, H_CrewHelmetHeli_B
1, H_CrewHelmetHeli_O
1, H_CrewHelmetHeli_I
2, H_BandMask_khk
2, H_BandMask_reaper
2, H_BandMask_demon
1, H_HelmetO_oucamo
1, H_HelmetLeaderO_oucamo
1, H_HelmetSpecO_ocamo
1, H_HelmetSpecO_blk
1, H_HelmetO_ocamo
1, H_HelmetLeaderO_ocamo

> Ghillies
1, U_B_GhillieSuit			// Ghillie Suit [NATO]
1, U_O_GhillieSuit			// Ghillie Suit [CSAT]
1, U_I_GhillieSuit			// Ghillie Suit [AAF]

> DLCGhillies
1, U_B_FullGhillie_ard
1, U_B_FullGhillie_lsh
1, U_B_FullGhillie_sard
1, U_O_FullGhillie_ard
1, U_O_FullGhillie_lsh
1, U_O_FullGhillie_sard
1, U_I_FullGhillie_ard
1, U_I_FullGhillie_lsh
1, U_I_FullGhillie_sard

> DLCVests
1, V_PlateCarrierGL_blk
1, V_PlateCarrierGL_mtp
1, V_PlateCarrierGL_rgr
1, V_PlateCarrierIAGL_dgtl
1, V_PlateCarrierIAGL_oli
1, V_PlateCarrierSpec_blk
1, V_PlateCarrierSpec_mtp
1, V_PlateCarrierSpec_rgr

> Rebreathers
1, V_RebreatherB
1, V_RebreatherIR
1, V_RebreatherIA

///////////////////////////////////////////////////////////////////////////////
// Other Items
///////////////////////////////////////////////////////////////////////////////

> MedicalItems
2, Exile_Item_InstaDoc
5, Exile_Item_Bandage
10, Exile_Item_Vishpirin
10, Exile_Item_Heatpack

> IndustrialItems
2, Exile_Item_Knife
1, Exile_Item_ThermalScannerPro
3, Exile_Item_FloodLightKit
3, Exile_Item_PortableGeneratorKit
4, Exile_Item_MetalBoard
11, Exile_Item_JunkMetal
8, Exile_Item_ExtensionCord
4, Exile_Item_Rope
9, Exile_Item_LightBulb
13, Exile_Item_Handsaw
13, Exile_Item_Pliers
22, Exile_Melee_Axe
4, Exile_Item_CamoTentKit
20, Exile_Item_ZipTie
8, Exile_Item_CordlessScrewdriver
18, Exile_Item_Screwdriver
5, Exile_Item_Knife
15, Exile_Item_MetalWire
16, Exile_Item_Hammer
14, Exile_Item_Foolbox
7, Exile_Item_Grinder

> Vehicle
40, Exile_Item_FuelCanisterFull
50, Exile_Item_FuelCanisterEmpty
10, Exile_Item_DuctTape
50, Exile_Item_MetalScrews
22, Exile_Item_OilCanister
18, Exile_Item_CarWheel
21, Exile_Item_Wrench

// Throwables

> Chemlights
1, Chemlight_blue
1, Chemlight_green
1, Chemlight_red
1, Chemlight_yellow

> RoadFlares
1, FlareGreen_F
1, FlareRed_F
1, FlareWhite_F
1, FlareYellow_F

> SmokeGrenades
1, SmokeShell
1, SmokeShellRed
1, SmokeShellGreen
1, SmokeShellYellow
1, SmokeShellPurple
1, SmokeShellBlue
1, SmokeShellOrange

> Restraints
1, Exile_Item_ZipTie

> Electronics
1, Exile_Item_Laptop
1, Exile_Item_BaseCameraKit

 // Trash or items not currently being used

> Trash
4, Exile_Item_Can_Empty
4, Exile_Item_ToiletPaper
4, Exile_Item_PlasticBottleEmpty			// Nothing :)
1, Exile_Item_Magazine01
1, Exile_Item_Magazine02
1, Exile_Item_Magazine03

> Unused
3, Exile_Item_CordlessScrewdriver
3, Exile_Item_FireExtinguisher
7, Exile_Item_Foolbox
10, Exile_Item_OilCanister
14, Exile_Item_Hammer
14, Exile_Item_Shovel
17, Exile_Item_Screws
3, Exile_Item_Cement
5, Exile_Item_Sand
5, Exile_Item_Carwheel
5, Exile_Item_SleepingMat
5, Exile_Item_Defibrillator

> CUPPointerAttachments
12, CUP_acc_Glock17_Flashlight
12, CUP_acc_ANPEQ_15
12, CUP_acc_ANPEQ_2
12, CUP_acc_Flashlight
12, CUP_acc_Flashlight_wdl
12, CUP_acc_Flashlight_desert
12, CUP_acc_XM8_light_module
12, CUP_acc_ANPEQ_2_camo
12, CUP_acc_ANPEQ_2_desert
12, CUP_acc_ANPEQ_2_grey
12, CUP_acc_CZ_M3X

> CUPMuzzleAttachments
12, CUP_muzzle_snds_AWM
12, CUP_muzzle_snds_SCAR_H
12, CUP_muzzle_mfsup_SCAR_H
12, CUP_muzzle_snds_XM8
12, CUP_muzzle_snds_G36_black
12, CUP_muzzle_snds_G36_desert
12, CUP_muzzle_snds_L85
12, CUP_muzzle_snds_M16_camo
12, CUP_muzzle_snds_M16
12, CUP_muzzle_snds_SCAR_L
12, CUP_muzzle_mfsup_SCAR_L
12, CUP_muzzle_PBS4
12, CUP_muzzle_PB6P9
12, CUP_muzzle_Bizon
12, CUP_muzzle_snds_M110
12, CUP_muzzle_snds_M14
12, CUP_muzzle_snds_M9
12, CUP_muzzle_snds_MicroUzi

> CUPOpticAttachments
12, CUP_optic_PSO_1
12, CUP_optic_PSO_3
12, CUP_optic_Kobra
12, CUP_optic_GOSHAWK
12, CUP_optic_NSPU
12, CUP_optic_PechenegScope
12, CUP_optic_HoloBlack
12, CUP_optic_HoloWdl
12, CUP_optic_HoloDesert
12, CUP_optic_Eotech533
12, CUP_optic_Eotech533Grey
12, CUP_optic_CompM4
12, CUP_optic_SUSAT
12, CUP_optic_CWS
12, CUP_optic_RCO
12, CUP_optic_RCO_desert
12, CUP_optic_CompM2_Woodland2
12, CUP_optic_CompM2_Woodland
12, CUP_optic_CompM2_Black
12, CUP_optic_CompM2_Desert
12, CUP_optic_ACOG
12, CUP_optic_SB_3_12x50_PMII
12, CUP_optic_AN_PAS_13c2
12, CUP_optic_AN_PVS_4
12, CUP_optic_AN_PVS_10
12, CUP_optic_LeupoldMk4
12, CUP_optic_LeupoldM3LR
12, CUP_optic_LeupoldMk4_CQ_T
12, CUP_optic_LeupoldMk4_MRT_tan
12, CUP_optic_LeupoldMk4_10x40_LRT_Desert
12, CUP_optic_LeupoldMk4_10x40_LRT_Woodland
12, CUP_optic_Leupold_VX3
12, CUP_optic_ElcanM145
12, CUP_optic_ELCAN_SpecterDR
12, CUP_optic_AN_PAS_13c1
12, CUP_optic_SB_11_4x20_PM
12, CUP_optic_ZDDot
12, CUP_optic_MRad
12, CUP_optic_TrijiconRx01_black
12, CUP_optic_TrijiconRx01_desert

> CUPAmmunition
12, CUP_100Rnd_556x45_BetaCMag
12, CUP_100Rnd_TE4_Green_Tracer_556x45_M249
12, CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
12, CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
12, CUP_10Rnd_762x51_CZ750
12, CUP_10Rnd_762x54_SVD_M
12, CUP_10Rnd_9x19_Compact
12, CUP_10Rnd_9x39_SP5_VSS_M
12, CUP_10x_303_M
12, CUP_15Rnd_9x19_M9
12, CUP_17Rnd_9x19_glock17
12, CUP_18Rnd_9x19_Phantom
12, CUP_1Rnd_HE_GP25_M
12, CUP_1Rnd_HEDP_M203
12, CUP_1Rnd_SMOKE_GP25_M
12, CUP_1Rnd_Smoke_M203
12, CUP_1Rnd_SmokeGreen_M203
12, CUP_1Rnd_SmokeRed_M203
12, CUP_1Rnd_SmokeYellow_M203
12, CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1
12, CUP_200Rnd_TE4_Green_Tracer_556x45_M249
12, CUP_20Rnd_762x51_DMR
12, CUP_20Rnd_762x51_FNFAL_M
12, CUP_20Rnd_762x51_B_SCAR
12, CUP_20Rnd_762x51_B_M110
12, CUP_20Rnd_762x51_CZ805B
12, CUP_30Rnd_9x19_EVO
12, CUP_20Rnd_B_AA12_Pellets
12, CUP_20Rnd_B_AA12_74Slug
12, CUP_20Rnd_B_AA12_HE
12, CUP_30Rnd_545x39_AK_M
12, CUP_30Rnd_556x45_G36
12, CUP_30Rnd_556x45_Stanag
12, CUP_30Rnd_762x39_AK47_M
12, CUP_30Rnd_Sa58_M
12, CUP_30Rnd_9x19_MP5
12, CUP_5Rnd_127x108_KSVK_M
12, CUP_5Rnd_127x99_as50_M
12, CUP_5Rnd_762x51_M24
12, CUP_5Rnd_86x70_L115A1
12, CUP_5x_22_LR_17_HMR_M
12, CUP_64Rnd_9x19_Bizon_M
12, CUP_6Rnd_45ACP_M
12, CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
12, CUP_7Rnd_45ACP_1911
12, CUP_8Rnd_9x18_Makarov_M
12, CUP_8Rnd_9x18_MakarovSD_M
12, CUP_8Rnd_B_Beneli_74Slug
12, CUP_50Rnd_UK59_762x54R_Tracer
12, CUP_8Rnd_B_Saiga12_74Slug_M
12, CUP_AT13_M
12, CUP_HandGrenade_L109A1_HE
12, CUP_Dragon_EP1_M
12, CUP_FlareGreen_M203
12, CUP_FlareRed_GP25_M
12, CUP_FlareWhite_GP25_M
12, CUP_FlareWhite_M203
12, CUP_HandGrenade_RGD5
12, CUP_HandGrenade_M67
12, CUP_6Rnd_HE_M203
12, CUP_1Rnd_HE_M203
12, CUP_Mine_M
12, CUP_PipeBomb_M
12, CUP_6Rnd_Smoke_M203

> CUPPistols
12, CUP_hgun_Colt1911
12, CUP_hgun_Compact
12, CUP_hgun_Makarov
12, CUP_hgun_MicroUzi
12, CUP_hgun_TaurusTracker455
12, CUP_hgun_TaurusTracker455_gold
12, CUP_hgun_M9
12, CUP_hgun_SA61
12, CUP_hgun_Duty
12, CUP_hgun_Phantom
12, CUP_hgun_PB6P9
12, CUP_hgun_Glock17

> CUPSubMachineGuns
12, CUP_smg_MP5SD6
12, CUP_smg_MP5A5
12, CUP_smg_EVO
12, CUP_smg_bizon

> CUPLightMachineGuns
12, CUP_lmg_M249_para
12, CUP_lmg_Mk48_des
12, CUP_lmg_Mk48_wdl
12, CUP_lmg_L110A1
12, CUP_lmg_Pecheneg
12, CUP_lmg_UK59
12, CUP_lmg_L7A2
12, CUP_lmg_M60E4
12, CUP_lmg_M240
12, CUP_lmg_M249
12, CUP_lmg_PKM

> CUPAssaultRifles
12, CUP_arifle_Mk16_CQC_FG
12, CUP_arifle_Mk16_CQC_SFG
12, CUP_arifle_Mk16_CQC_EGLM
12, CUP_arifle_Mk16_STD
12, CUP_arifle_Mk16_STD_FG
12, CUP_arifle_Mk16_STD_SFG
12, CUP_arifle_Mk16_STD_EGLM
12, CUP_arifle_Mk16_SV
12, CUP_arifle_Mk17_CQC
12, CUP_arifle_Mk17_CQC_FG
12, CUP_arifle_Mk17_CQC_SFG
12, CUP_arifle_Mk17_CQC_EGLM
12, CUP_arifle_Mk17_STD
12, CUP_arifle_Mk17_STD_FG
12, CUP_arifle_Mk17_STD_SFG
12, CUP_arifle_Mk17_STD_EGLM
12, CUP_arifle_Mk20
12, CUP_arifle_XM8_Compact_Rail
12, CUP_arifle_XM8_Railed
12, CUP_arifle_M16A4_Base
12, CUP_arifle_M4A1_BUIS_GL
12, CUP_arifle_M4A1_BUIS_camo_GL
12, CUP_arifle_M4A1_BUIS_desert_GL
12, CUP_arifle_M4A1_black
12, CUP_arifle_M4A1_desert
12, CUP_arifle_L85A2
12, CUP_arifle_L85A2_GL
12, CUP_arifle_L86A2
12, CUP_arifle_FNFAL_railed
12, CUP_arifle_AK107_GL
12, CUP_arifle_Sa58P_des
12, CUP_arifle_Sa58V_camo
12, CUP_arifle_Sa58RIS1
12, CUP_arifle_Sa58RIS1_des
12, CUP_arifle_Sa58RIS2
12, CUP_arifle_Sa58RIS2_camo
12, CUP_arifle_CZ805_A1
12, CUP_arifle_CZ805_GL
12, CUP_arifle_CZ805_B_GL
12, CUP_arifle_CZ805_B
12, CUP_arifle_XM8_Carbine
12, CUP_arifle_XM8_Carbine_FG
12, CUP_arifle_XM8_Carbine_GL
12, CUP_arifle_XM8_Compact
12, CUP_arifle_xm8_SAW
12, CUP_arifle_xm8_sharpshooter
12, CUP_arifle_Mk16_CQC
12, CUP_arifle_Sa58P
12, CUP_arifle_Sa58V
12, CUP_arifle_M16A2
12, CUP_arifle_M16A2_GL
12, CUP_arifle_M16A4_GL
12, CUP_arifle_M4A1
12, CUP_arifle_M4A1_camo
12, CUP_arifle_FNFAL
12, CUP_arifle_G36A
12, CUP_arifle_G36A_camo
12, CUP_arifle_G36K
12, CUP_arifle_G36K_camo
12, CUP_arifle_G36C
12, CUP_arifle_G36C_camo
12, CUP_arifle_MG36
12, CUP_arifle_MG36_camo
12, CUP_arifle_AK74
12, CUP_arifle_AK107
12, CUP_arifle_AKS74
12, CUP_arifle_AKS74U
12, CUP_arifle_AK74_GL
12, CUP_arifle_AKM
12, CUP_arifle_AKS
12, CUP_arifle_AKS_Gold
12, CUP_arifle_RPK74
12, CUP_arifle_AK74_GL_kobra
12, CUP_arifle_CZ805_A2

> CUPSniperRifles
12, CUP_srifle_SVD_wdl_ghillie
12, CUP_srifle_SVD_des_ghillie_pso
12, CUP_srifle_DMR
12, CUP_srifle_ksvk
12, CUP_srifle_M110
12, CUP_srifle_M14
12, CUP_srifle_M24_des
12, CUP_srifle_M24_wdl
12, CUP_srifle_M24_ghillie
12, CUP_srifle_SVD
12, CUP_srifle_SVD_des
12, CUP_srifle_VSSVintorez
12, CUP_srifle_CZ750
12, CUP_srifle_Mk12SPR
12, CUP_srifle_AS50
12, CUP_srifle_AWM_des
12, CUP_srifle_AWM_wdl
12, CUP_srifle_CZ550
12, CUP_srifle_LeeEnfield
12, CUP_srifle_M40A3

> CUPShotgun
12, CUP_sgun_AA12
12, CUP_sgun_M1014
12, CUP_sgun_Saiga12K

> CUPLaunchers
12, CUP_glaunch_M32
12, CUP_glaunch_M79
12, CUP_glaunch_Mk13

> CUPLauncherAmmo
12, CUP_RPG18_M
12, CUP_SMAW_HEAA_M
12, CUP_SMAW_HEDP_M
12, CUP_Stinger_M
12, CUP_Strela_2_M
12, CUP_NLAW_M
12, CUP_OG7_M
12, CUP_PG7VL_M
12, CUP_PG7VR_M
12, CUP_Igla_M
12, CUP_Javelin_M
12, CUP_M136_M
12, CUP_MAAWS_HEAT_M
12, CUP_MAAWS_HEDP_M

> HLCMuzzleAttachments
12, hlc_muzzle_545SUP_AK
12, hlc_muzzle_762SUP_AK
12, hlc_muzzle_snds_fal
12, hlc_muzzle_snds_HK33
12, hlc_muzzle_snds_G3
12, hlc_muzzle_snds_M14
12, hlc_muzzle_556NATO_KAC
12, hlc_muzzle_300blk_KAC
12, hlc_muzzle_Agendasix
12, hlc_muzzle_Tundra
12, hlc_muzzle_Agendasix10mm
12, hlc_muzzle_snds_AUG
12, hlc_muzzle_snds_a6AUG

> HLCOpticAttachments
12, hlc_Optic_PSO1
12, hlc_Optic_1p29
12, hlc_optic_kobra
12, hlc_optic_PVS4FAL
12, hlc_optic_suit
12, hlc_Optic_ZFSG1
12, hlc_optic_accupoint_g3
12, hlc_optic_artel_m14
12, hlc_optic_LRT_m14

> HLCLightMachineGuns
12, hlc_rifle_RPK12
12, hlc_rifle_rpk
12, hlc_lmg_m60
12, hlc_lmg_M60E4

> HLCAssaultRifles
12, hlc_rifle_ak12
12, hlc_rifle_ak47
12, hlc_rifle_aek971
12, hlc_rifle_aks74
12, hlc_rifle_aks74_GL
12, hlc_rifle_aks74u
12, hlc_rifle_ak74
12, hlc_rifle_akm
12, hlc_rifle_akmgl
12, hlc_rifle_l1a1slr
12, hlc_rifle_SLR
12, hlc_rifle_STG58F
12, hlc_rifle_FAL5061
12, hlc_rifle_c1A1
12, hlc_rifle_LAR
12, hlc_rifle_SLRchopmod
12, hlc_rifle_falosw
12, hlc_rifle_osw_GL
12, hlc_rifle_g3sg1
12, hlc_rifle_g3a3
12, hlc_rifle_g3ka4
12, hlc_Rifle_g3ka4_GL
12, hlc_rifle_hk51
12, hlc_rifle_hk53
12, hlc_rifle_RU556
12, hlc_rifle_RU5562
12, hlc_rifle_Colt727
12, hlc_rifle_Colt727_GL
12, hlc_rifle_bcmjack
12, hlc_rifle_Bushmaster300
12, hlc_rifle_vendimus
12, hlc_rifle_SAMR
12, hlc_rifle_samr2
12, hlc_rifle_honeybadger
12, hlc_rifle_aug
12, hlc_rifle_auga1carb
12, hlc_rifle_aughbar
12, hlc_rifle_auga2
12, hlc_rifle_auga2carb
12, hlc_rifle_auga2lsw
12, hlc_rifle_augsr
12, hlc_rifle_augsrcarb
12, hlc_rifle_augsrhbar
12, hlc_rifle_auga3
12, hlc_rifle_auga3_GL
12, hlc_rifle_CQBR
12, hlc_rifle_m4m203
12, hlc_rifle_M4

> HLCSniperRifles
12, hlc_rifle_M21
12, hlc_rifle_psg1
12, hlc_rifle_awmagnum_BL

> HLCAmmunition
12, hlc_100Rnd_762x51_B_M60E4
12, hlc_100Rnd_762x51_T_M60E4
12, hlc_100Rnd_762x51_M_M60E4
12, hlc_30Rnd_545x39_B_AK
12, hlc_30Rnd_545x39_T_AK
12, hlc_30Rnd_545x39_EP_AK
12, hlc_30Rnd_545x39_S_AK
12, hlc_45Rnd_545x39_t_rpk
12, hlc_30Rnd_762x39_b_ak
12, hlc_30Rnd_762x39_t_ak
12, hlc_45Rnd_762x39_t_rpk
12, hlc_45Rnd_762x39_m_rpk
12, hlc_75Rnd_762x39_m_rpk
12, hlc_20Rnd_762x51_B_fal
12, hlc_20Rnd_762x51_t_fal
12, hlc_20Rnd_762x51_S_fal
12, hlc_50rnd_762x51_M_FAL
12, hlc_20Rnd_762x51_B_G3
12, hlc_20rnd_762x51_T_G3
12, hlc_50rnd_762x51_M_G3
12, hlc_30rnd_556x45_b_HK33
12, hlc_30rnd_556x45_t_HK33
12, hlc_30rnd_556x45_epr_HK33
12, hlc_30rnd_556x45_sost_HK33
12, hlc_20Rnd_762x51_B_M14
12, hlc_20rnd_762x51_T_M14
12, 29rnd_300BLK_STANAG
12, 29rnd_300BLK_STANAG_T
12, 29rnd_300BLK_STANAG_S
12, hlc_30rnd_556x45_EPR
12, hlc_30rnd_556x45_SOST
12, hlc_30rnd_556x45_SPR
12, hlc_30Rnd_9x19_B_MP5
12, hlc_30Rnd_9x19_GD_MP5
12, hlc_30Rnd_9x19_SD_MP5
12, hlc_30Rnd_10mm_B_MP5
12, hlc_30Rnd_10mm_JHP_MP5
12, hlc_30Rnd_556x45_B_AUG
12, hlc_30Rnd_556x45_SOST_AUG
12, hlc_30Rnd_556x45_SPR_AUG
12, hlc_30Rnd_556x45_T_AUG
12, hlc_40Rnd_556x45_B_AUG
12, hlc_40Rnd_556x45_SOST_AUG
12, hlc_40Rnd_556x45_SPR_AUG
12, hlc_25Rnd_9x19mm_M882_AUG
12, hlc_25Rnd_9x19mm_JHP_AUG
12, hlc_25Rnd_9x19mm_subsonic_AUG
12, hlc_10rnd_12g_buck_S12
12, hlc_10rnd_12g_slug_S12
12, hlc_VOG25_AK
12, hlc_GRD_White
12, hlc_5rnd_300WM_FMJ_AWM

> MASHeadgear
12, G_mas_wpn_gog
12, G_mas_wpn_gog_d
12, G_mas_wpn_gog_m
12, G_mas_wpn_gog_md
12, G_mas_wpn_gog_g
12, G_mas_wpn_gog_gd
12, G_mas_wpn_mask
12, G_mas_wpn_mask_b
12, G_mas_wpn_wrap
12, G_mas_wpn_wrap_f
12, G_mas_wpn_wrap_t
12, G_mas_wpn_wrap_b
12, G_mas_wpn_wrap_c
12, G_mas_wpn_wrap_g
12, G_mas_wpn_wrap_gog
12, G_mas_wpn_wrap_gog_f
12, G_mas_wpn_wrap_gog_t
12, G_mas_wpn_wrap_gog_b
12, G_mas_wpn_wrap_gog_c
12, G_mas_wpn_wrap_gog_g
12, G_mas_wpn_wrap_mask
12, G_mas_wpn_wrap_mask_t
12, G_mas_wpn_wrap_mask_f
12, G_mas_wpn_wrap_mask_b
12, G_mas_wpn_wrap_mask_c
12, G_mas_wpn_wrap_mask_g
12, G_mas_wpn_bala
12, G_mas_wpn_bala_b
12, G_mas_wpn_bala_t
12, G_mas_wpn_bala_gog
12, G_mas_wpn_bala_gog_b
12, G_mas_wpn_bala_gog_t
12, G_mas_wpn_bala_mask
12, G_mas_wpn_bala_mask_b
12, G_mas_wpn_bala_mask_t
12, G_mas_wpn_shemag
12, G_mas_wpn_shemag_r
12, G_mas_wpn_shemag_w
12, G_mas_wpn_shemag_gog
12, G_mas_wpn_shemag_mask
12, G_mas_wpn_gasmask

> MASPointerAttachments
12, acc_mas_flash_gun
12, acc_mas_pointer_gun_IR
12, acc_mas_pointer_IR
12, acc_mas_pointer_IR_b
12, acc_mas_pointer_IR_top
12, acc_mas_pointer_IR_top_b
12, acc_mas_pointer_IR2
12, acc_mas_pointer_IR2_top
12, acc_mas_pointer_IR2c
12, acc_mas_pointer_IR2c_top

> MASMuzzleAttachments
12, muzzle_mas_snds_L
12, muzzle_mas_snds_LM
12, muzzle_mas_snds_C
12, muzzle_mas_snds_MP5SD6
12, muzzle_mas_snds_M
12, muzzle_mas_snds_Mc
12, muzzle_mas_snds_MP7
12, muzzle_mas_snds_AK
12, muzzle_mas_snds_SM
12, muzzle_mas_snds_SMc
12, muzzle_mas_snds_SH
12, muzzle_mas_snds_SHc
12, muzzle_mas_snds_SV
12, muzzle_mas_snds_SVc
12, muzzle_mas_snds_SVD
12, muzzle_mas_snds_KSVK

> MASOpticAttachments
12, optic_mas_DMS
12, optic_mas_DMS_c
12, optic_mas_Holosight_blk
12, optic_mas_Holosight_camo
12, optic_mas_Arco_blk
12, optic_mas_Arco_camo
12, optic_mas_Hamr_camo
12, optic_mas_Aco_camo
12, optic_mas_ACO_grn_camo
12, optic_mas_MRCO_camo
12, optic_mas_zeiss
12, optic_mas_zeiss_c
12, optic_mas_zeiss_eo
12, optic_mas_zeiss_eo_c
12, optic_mas_acog
12, optic_mas_acog_c
12, optic_mas_acog_eo
12, optic_mas_acog_eo_c
12, optic_mas_acog_rd
12, optic_mas_acog_rd_c
12, optic_mas_handle
12, optic_mas_aim
12, optic_mas_aim_c
12, optic_mas_PSO
12, optic_mas_PSO_c
12, optic_mas_PSO_eo
12, optic_mas_PSO_eo_c
12, optic_mas_PSO_nv
12, optic_mas_PSO_nv_c
12, optic_mas_PSO_nv_eo
12, optic_mas_PSO_nv_eo_c
12, optic_mas_PSO_day
12, optic_mas_PSO_nv_day
12, optic_mas_term
12, optic_mas_MRD
12, optic_mas_LRPS
12, optic_mas_kobra
12, optic_mas_kobra_c
12, optic_mas_nspu
12, optic_mas_goshawk
12, optic_mas_PSO_kv
12, optic_mas_PSO_kv_c

> MASTools
12, NVGoggles_mas_h
12, Rangefinder_mas_h
12, Laserdesignator_mas_h

> MASBackpacks
12, B_mas_m_Bergen_us
12, B_mas_m_Bergen_us_g
12, B_mas_m_Bergen_us_m
12, B_mas_m_Bergen_us_b
12, B_mas_m_Bergen_us_w
12, B_mas_m_Bergen_acr
12, B_mas_m_Bergen_acr_c
12, B_mas_m_Bergen_acr_g
12, B_mas_m_Bergen_acr_w
12, B_mas_m_Bergen_rpg
12, B_mas_m_Bergen_rpg_b
12, B_mas_m_Bergen_al
12, B_mas_AssaultPack_mul
12, B_mas_Kitbag_mul
12, B_mas_Bergen_mul
12, B_mas_AssaultPack_des
12, B_mas_Kitbag_des
12, B_mas_Bergen_des
12, B_mas_AssaultPack_black
12, B_mas_Kitbag_black
12, B_mas_Bergen_black
12, B_mas_AssaultPack_wint
12, B_mas_Kitbag_wint
12, B_mas_Bergen_wint
12, B_mas_AssaultPack_rng
12, B_mas_Kitbag_rng
12, B_mas_Bergen_rng
12, O_mas_Bergen_flo
12, O_mas_Bergen_blk
12, O_mas_Bergen_rtan

> MASAmmunition
12, 30Rnd_mas_556x45_Stanag
12, 30Rnd_mas_556x45_T_Stanag
12, 30Rnd_mas_556x45sd_Stanag
12, 200Rnd_mas_556x45_Stanag
12, 200Rnd_mas_556x45_T_Stanag
12, 100Rnd_mas_762x51_Stanag
12, 100Rnd_mas_762x51_T_Stanag
12, 100Rnd_mas_762x54_mag
12, 100Rnd_mas_762x54_T_mag
12, 100Rnd_mas_762x39_mag
12, 100Rnd_mas_762x39_T_mag
12, 30Rnd_mas_545x39_mag
12, 30Rnd_mas_545x39_T_mag
12, 100Rnd_mas_545x39_mag
12, 100Rnd_mas_545x39_T_mag
12, 20Rnd_mas_762x51_Stanag
12, 20Rnd_mas_762x51_T_Stanag
12, 20Rnd_mas_762x51sd_Stanag
12, 5Rnd_mas_762x51_Stanag
12, 5Rnd_mas_762x51_T_Stanag
12, 10Rnd_mas_338_Stanag
12, 10Rnd_mas_338_T_Stanag
12, 30Rnd_mas_762x39_mag
12, 30Rnd_mas_762x39_T_mag
12, 10Rnd_mas_762x54_mag
12, 10Rnd_mas_762x54_T_mag
12, 5Rnd_mas_127x99_Stanag
12, 5Rnd_mas_127x99_T_Stanag
12, 5Rnd_mas_127x108_mag
12, 5Rnd_mas_127x108_T_mag
12, 30Rnd_mas_9x21_Stanag
12, 30Rnd_mas_9x21d_Stanag
12, 12Rnd_mas_45acp_Mag
12, 10Rnd_mas_45acp_Mag
12, 8Rnd_mas_45acp_Mag
12, 15Rnd_mas_9x21_Mag
12, 17Rnd_mas_9x21_Mag
12, 13Rnd_mas_9x21_Mag
12, 8Rnd_mas_9x18_mag
12, 7Rnd_mas_12Gauge_Slug
12, 7Rnd_mas_12Gauge_Pellets
12, 10Rnd_mas_12Gauge_Slug
12, 10Rnd_mas_12Gauge_Pellets
12, 64Rnd_mas_9x18_mag
12, 20Rnd_mas_765x17_Mag
12, 25Rnd_mas_9x19_Mag
12, 40Rnd_mas_46x30_Mag
12, 20Rnd_mas_12Gauge_Slug
12, 20Rnd_mas_12Gauge_Pellets
12, 150Rnd_mas_556x45_Stanag
12, 150Rnd_mas_556x45_T_Stanag
12, 30Rnd_mas_9x39_mag
12, 20Rnd_mas_9x39_mag

> MASPistols
12, hgun_mas_mp7p_F
12, hgun_mas_uzi_F
12, hgun_mas_sa61_F
12, hgun_mas_m9_F
12, hgun_mas_bhp_F
12, hgun_mas_glock_F
12, hgun_mas_p226_F
12, hgun_mas_acp_F
12, hgun_mas_usp_F
12, hgun_mas_usp_l_F
12, hgun_mas_glocksf_F
12, hgun_mas_grach_F
12, hgun_mas_mak_F
12, hgun_mas_mak_F_sd

> MASSubMachineGuns
12, arifle_mas_mp40
12, arifle_mas_mp40_o
12, arifle_mas_sten
12, arifle_mas_m1014
12, arifle_mas_aa12
12, arifle_mas_mp5
12, arifle_mas_mp5_v
12, arifle_mas_mp5_d
12, arifle_mas_mp5sd_ds
12, hgun_mas_mp7_F

> MASLightMachineGuns
12, arifle_mas_m27
12, arifle_mas_m27m
12, arifle_mas_m27_v
12, arifle_mas_m27m_v
12, arifle_mas_m27_d
12, arifle_mas_m27m_d
12, LMG_mas_Mk200_F
12, LMG_mas_M249_F
12, LMG_mas_M249_F_v
12, LMG_mas_M249_F_d
12, LMG_mas_M249a_F
12, LMG_mas_Mk48_F
12, LMG_mas_Mk48_F_v
12, LMG_mas_Mk48_F_d
12, LMG_mas_M240_F
12, LMG_mas_mg3_F
12, LMG_mas_M60_F
12, LMG_mas_m72_F
12, LMG_mas_rpk_F
12, LMG_mas_pkm_F
12, LMG_mas_pech_F

> MASAssaultRifles
12, arifle_mas_hk416
12, arifle_mas_hk416_gl
12, arifle_mas_hk416_m203
12, arifle_mas_hk416_v
12, arifle_mas_hk416_gl_v
12, arifle_mas_hk416_m203_v
12, arifle_mas_hk416_d
12, arifle_mas_hk416_gl_d
12, arifle_mas_hk416_m203_d
12, arifle_mas_hk416c
12, arifle_mas_hk416_m203c
12, arifle_mas_hk416c_v
12, arifle_mas_hk416_m203c_v
12, arifle_mas_hk416c_d
12, arifle_mas_hk416_m203c_d
12, arifle_mas_m4
12, arifle_mas_m4_gl
12, arifle_mas_m4_m203
12, arifle_mas_m4_v
12, arifle_mas_m4_gl_v
12, arifle_mas_m4_m203_v
12, arifle_mas_m4_d
12, arifle_mas_m4_gl_d
12, arifle_mas_m4_m203_d
12, arifle_mas_m4vlt
12, arifle_mas_m4c
12, arifle_mas_m4_m203c
12, arifle_mas_m4c_v
12, arifle_mas_m4_m203c_v
12, arifle_mas_m4c_d
12, arifle_mas_m4_m203c_d
12, arifle_mas_m16
12, arifle_mas_m16_gl
12, arifle_mas_l119
12, arifle_mas_l119c
12, arifle_mas_l119_gl
12, arifle_mas_l119_m203
12, arifle_mas_l119_v
12, arifle_mas_l119c_v
12, arifle_mas_l119_gl_v
12, arifle_mas_l119_m203_v
12, arifle_mas_l119_d
12, arifle_mas_l119c_d
12, arifle_mas_l119_gl_d
12, arifle_mas_l119_m203_d
12, arifle_mas_g36c
12, arifle_mas_mk16
12, arifle_mas_mk16_gl
12, arifle_mas_mk16_l
12, arifle_mas_mk16_l_gl
12, arifle_mas_mk17
12, arifle_mas_mk17_gl
12, arifle_mas_arx
12, arifle_mas_arx_gl
12, arifle_mas_arx_l
12, arifle_mas_arx_l_gl
12, arifle_mas_g3
12, arifle_mas_g3_m203
12, arifle_mas_g3s
12, arifle_mas_g3s_m203
12, arifle_mas_fal
12, arifle_mas_fal_m203
12, arifle_mas_ak_74m
12, arifle_mas_ak_74m_gl
12, arifle_mas_ak_74m_c
12, arifle_mas_ak_74m_gl_c
12, arifle_mas_aks74
12, arifle_mas_aks74_gl
12, arifle_mas_ak74
12, arifle_mas_ak74_gl
12, arifle_mas_ak_74m_sf
12, arifle_mas_ak_74m_sf_gl
12, arifle_mas_ak_74m_sf_c
12, arifle_mas_ak_74m_sf_gl_c
12, arifle_mas_aks_74_sf
12, arifle_mas_aks_74_sf_gl
12, arifle_mas_ak12_sf
12, arifle_mas_ak12_sf_gl
12, arifle_mas_akms
12, arifle_mas_akms_gl
12, arifle_mas_akms_c
12, arifle_mas_akms_gl_c
12, arifle_mas_akm
12, arifle_mas_akm_gl
12, arifle_mas_m70
12, arifle_mas_m70_gl
12, arifle_mas_m70ab
12, arifle_mas_m70ab_gl
12, arifle_mas_asval
12, arifle_mas_asval_ds
12, arifle_mas_aks74u
12, arifle_mas_aks74u_c

> MASSniperRifles
12, arifle_mas_hk417c
12, arifle_mas_hk417_m203c
12, arifle_mas_hk417c_v
12, arifle_mas_hk417_m203c_v
12, arifle_mas_hk417c_d
12, arifle_mas_hk417_m203c_d
12, arifle_mas_m14
12, arifle_mas_lee
12, srifle_mas_hk417
12, srifle_mas_hk417_v
12, srifle_mas_hk417_d
12, srifle_mas_sr25
12, srifle_mas_sr25_v
12, srifle_mas_sr25_d
12, srifle_mas_ebr
12, srifle_mas_mk17s
12, srifle_mas_m110
12, srifle_mas_m107
12, srifle_mas_m107_v
12, srifle_mas_m107_d
12, srifle_mas_m24
12, srifle_mas_m24_v
12, srifle_mas_m24_d
12, srifle_mas_lrr
12, srifle_mas_m91
12, srifle_mas_svd
12, srifle_mas_vss
12, srifle_mas_ksvk
12, srifle_mas_ksvk_c

> MASExplosive
12, arifle_mas_aa12
12, arifle_mas_m79

> MASLaunchers
12, mas_launch_maaws_F
12, mas_launch_smaw_F
12, mas_launch_NLAW_F
12, mas_launch_LAW_F
12, mas_launch_M136_F
12, mas_launch_TitanS_F
12, mas_launch_RPG7_F
12, mas_launch_RPG18_F
12, mas_launch_Metis_F
12, mas_launch_pzf60_F
12, mas_launch_Stinger_F
12, mas_launch_Strela_F

> MASLauncherAmmo
12, mas_MAAWS
12, mas_MAAWS_HE
12, mas_SMAW
12, mas_SMAW_HE
12, mas_SMAW_NE
12, mas_NLAW
12, mas_NLAW_HE
12, mas_LAW
12, mas_M136
12, mas_M136_HE
12, mas_TitanS
12, mas_TitanS_HE
12, mas_PG7V
12, mas_OG7
12, mas_PG7L
12, mas_PG7VR
12, mas_TBG7V
12, mas_PG18
12, mas_Metis
12, mas_Metis_HE
12, mas_pzf60
12, mas_Stinger
12, mas_Strela

> R3FPointerAttachments
12, R3F_LAMPE_SURB
12, R3F_LAMPE_SURB_DES
12, R3F_POINTEUR_SURB
12, R3F_POINTEUR_SURB_DES
12, R3F_PIRAT
12, R3F_PIRAT_DES

> R3FBipodAttachments
12, R3F_BIPIED_HK417
12, R3F_BIPIED_HK417_DES

> R3FMuzzleAttachments
12, R3F_SILENCIEUX_FAMAS
12, R3F_SILENCIEUX_FAMAS_DES
12, R3F_SILENCIEUX_MINIMI
12, R3F_SILENCIEUX_MINIMI_DES
12, R3F_SILENCIEUX_HK416
12, R3F_SILENCIEUX_HK416_DES
12, R3F_SILENCIEUX_FRF2
12, R3F_SILENCIEUX_FRF2_DES
12, R3F_SILENCIEUX_HK417
12, R3F_SILENCIEUX_HK417_DES

> R3FOpticAttachments
12, R3F_AIMPOINT
12, R3F_AIMPOINT_DES
12, R3F_EOTECH
12, R3F_EOTECH_DES
12, R3F_J4
12, R3F_J4_DES
12, R3F_J8
12, R3F_J8_DES
12, R3F_J8_MILDOT
12, R3F_J8_MILDOT_DES
12, R3F_J10
12, R3F_J10_DES
12, R3F_J10_MILDOT
12, R3F_J10_MILDOT_DES
12, R3F_NF
12, R3F_NF_DES
12, R3F_NF42
12, R3F_NF42_DES
12, R3F_ZEISS
12, R3F_ZEISS_DES
12, R3F_OB50

> R3FAmmunition
12, R3F_25Rnd_556x45_FAMAS
12, R3F_25Rnd_556x45_TRACER_FAMAS
12, R3F_30Rnd_556x45_FAMAS
12, R3F_30Rnd_556x45_TRACER_FAMAS
12, R3F_30Rnd_556x45_HK416
12, R3F_30Rnd_556x45_TRACER_HK416
12, R3F_10Rnd_762x51_FRF2
12, R3F_7Rnd_127x99_PGM
12, R3F_7Rnd_127x99_PEI_PGM
12, R3F_10Rnd_127x99_M107
12, R3F_10Rnd_127x99_PEI_M107
12, R3F_5Rnd_127x99_TAC50
12, R3F_200Rnd_556x45_MINIMI
12, R3F_100Rnd_762x51_MINIMI
12, R3F_20Rnd_762x51_HK417
12, R3F_20Rnd_762x51_TRACER_HK417
12, R3F_30Rnd_9x19_MP5
12, R3F_7Rnd_M4S90

> R3FPistols
12, R3F_PAMAS

> R3FSubMachineGuns
12, R3F_MP5A5
12, R3F_MP5SD

> R3FLightMachineGuns
12, R3F_Minimi
12, R3F_Minimi_HG
12, R3F_Minimi_762
12, R3F_Minimi_762_HG

> R3FAssaultRifles
12, R3F_Famas_F1
12, R3F_Famas_F1_DES
12, R3F_Famas_F1_HG
12, R3F_Famas_F1_HG_DES
12, R3F_Famas_F1_M203
12, R3F_Famas_F1_M203_DES
12, R3F_Famas_G2
12, R3F_Famas_G2_DES
12, R3F_Famas_G2_HG
12, R3F_Famas_G2_HG_DES
12, R3F_Famas_G2_M203
12, R3F_Famas_G2_M203_DES
12, R3F_Famas_surb_HG
12, R3F_Famas_surb_HG_DES
12, R3F_Famas_surb
12, R3F_Famas_surb_DES
12, R3F_Famas_surb_M203
12, R3F_Famas_surb_M203_DES
12, R3F_Famas_felin
12, R3F_Famas_felin_DES
12, R3F_HK417L
12, R3F_HK417L_DES
12, R3F_HK417M
12, R3F_HK417M_DES
12, R3F_HK417M_HG
12, R3F_HK417M_HG_DES
12, R3F_HK417S_HG
12, R3F_HK417S_HG_DES
12, R3F_HK416M
12, R3F_HK416M_DES
12, R3F_HK416M_HG
12, R3F_HK416M_HG_DES
12, R3F_HK416M_M203
12, R3F_HK416M_M203_DES

> R3FSniperRifles
12, R3F_TAC50
12, R3F_M107_DES
12, R3F_M107
12, R3F_PGM_Hecate_II_POLY
12, R3F_PGM_Hecate_II_DES
12, R3F_PGM_Hecate_II
12, R3F_FRF2_DES
12, R3F_FRF2

> R3FLaunchers
12, 3F_AT4CS
12, R3F_ERYX
12, R3F_STINGER

> R3FLauncherAmmo
12, R3F_APAV40
12, R3F_AC58
12, R3F_FUM40
12, R3F_ECL40

> RHSUniforms
12, rhs_uniform_cu_ocp
12, rhs_uniform_cu_ucp
12, rhs_uniform_cu_ocp_101st
12, rhs_uniform_df15
12, rhs_uniform_m88_patchless
12, rhs_uniform_emr_patchless
12, rhs_uniform_flora_patchless
12, rhs_uniform_flora_patchless_alt
12, rhs_uniform_FROG01_m81
12, rhs_uniform_FROG01_d
12, rhs_uniform_FROG01_wd
12, rhs_uniform_mflora_patchless
12, rhs_uniform_vdv_mflora
12, rhs_uniform_vdv_emr_des
12, rhs_uniform_msv_emr
12, rhs_uniform_flora
12, rhs_uniform_vdv_flora
12, rhs_uniform_gorka_r_g
12, rhs_uniform_gorka_r_y
12, rhs_chdkz_uniform_5
12, rhs_chdkz_uniform_4
12, rhs_chdkz_uniform_3
12, rhs_chdkz_uniform_2
12, rhs_chdkz_uniform_1
12, rhs_uniform_mvd_izlom
12, rhs_uniform_cu_ocp_10th
12, rhs_uniform_cu_ocp_1stcav
12, rhs_uniform_cu_ocp_82nd
12, rhs_uniform_cu_ucp_101st
12, rhs_uniform_cu_ucp_10th
12, rhs_uniform_cu_ucp_1stcav
12, rhs_uniform_cu_ucp_82nd

> RHSVests
12, rhs_6sh92_headset
12, rhs_6sh92_radio
12, rhs_6sh92_vog
12, rhs_6sh92_vog_headset
12, rhs_vydra_3m
12, rhs_6sh92_digi
12, rhs_6b13_6sh92_vog
12, rhs_6b13_6sh92_radio
12, rhs_6b23_digi_6sh92_vog_headset
12, rhs_6b13_Flora
12, rhs_6b13_Flora_6sh92
12, rhs_6b13_Flora_6sh92_headset_mapcase
12, rhs_6b13_Flora_6sh92_vog
12, rhs_6b13_Flora_crewofficer
12, rhs_6b23
12, rhs_6b23_6sh92
12, rhs_6b23_6sh92_headset
12, rhs_6b23_6sh92_headset_mapcase
12, rhs_6b23_6sh92_radio
12, rhs_6b23_6sh92_vog
12, rhs_6b23_6sh92_vog_headset
12, rhs_6b23_crew
12, rhs_6b23_engineer
12, rhs_6b23_rifleman
12, rhs_6b23_sniper
12, rhs_6b23_ML
12, rhs_6b23_ML_6sh92
12, rhs_6b23_ML_6sh92_headset
12, rhs_6b23_ML_6sh92_headset_mapcase
12, rhs_6b23_ML_6sh92_radio
12, rhs_6b23_ML_6sh92_vog
12, rhs_6b23_ML_6sh92_vog_headset
12, rhs_6b23_ML_crewofficer
12, rhs_6b23_ML_crew
12, rhs_6b23_ML_engineer
12, rhs_6b23_ML_rifleman
12, rhs_6b23_ML_sniper
12, rhs_6sh46
12, rhsusf_iotv_ocp
12, rhsusf_iotv_ucp
12, rhsusf_iotv_ocp_Medic
12, rhsusf_iotv_ucp_Medic
12, rhsusf_iotv_ocp_Repair
12, rhsusf_iotv_ucp_Repair
12, rhsusf_iotv_ocp_Rifleman
12, rhsusf_iotv_ucp_Rifleman
12, rhsusf_iotv_ocp_SAW
12, rhsusf_iotv_ucp_SAW
12, rhsusf_iotv_ocp_Squadleader
12, rhsusf_iotv_ucp_Squadleader
12, rhsusf_iotv_ocp_Teamleader
12, rhsusf_iotv_ucp_Teamleader
12, rhsusf_iotv_ocp_Grenadier
12, rhsusf_iotv_ucp_Grenadier

> RHSHeadgear
12, rhs_6b27m_digi
12, rhs_6b27m_digi_bala
12, rhs_6b27m_digi_ess
12, rhs_6b27m
12, rhs_6b27m_ess
12, rhs_6b27m_bala
12, rhs_6b27m_ess_bala
12, rhs_6b27m_ml
12, rhs_6b27m_ml_bala
12, rhs_6b27m_ml_ess
12, rhs_6b27m_ML_ess_bala
12, rhs_6b26_green
12, rhs_6b26_bala_green
12, rhs_6b26_ess_green
12, rhs_6b26_ess_bala_green
12, rhs_6b26
12, rhs_6b26_bala
12, rhs_6b26_ess
12, rhs_6b26_ess_bala
12, rhs_6b27m_green
12, rhs_6b27m_green_bala
12, rhs_6b27m_green_ess
12, rhs_6b27m_green_ess_bala
12, rhs_6b27m_digi_ess_bala
12, rhs_6b28_green
12, rhs_6b28_green_bala
12, rhs_6b28_green_ess
12, rhs_6b28_green_ess_bala
12, rhs_6b28
12, rhs_6b28_bala
12, rhs_6b28_ess
12, rhs_6b28_ess_bala
12, rhs_6b28_flora
12, rhs_6b28_flora_bala
12, rhs_6b28_flora_ess
12, rhs_6b28_flora_ess_bala
12, rhs_Booniehat_digi
12, rhs_Booniehat_flora
12, rhs_ssh68
12, rhs_Booniehat_m81
12, rhs_Booniehat_marpatd
12, rhs_Booniehat_marpatwd
12, rhs_Booniehat_ocp
12, rhs_Booniehat_ucp
12, rhsusf_Bowman
12, rhsusf_ach_bare
12, rhsusf_ach_bare_des
12, rhsusf_ach_bare_des_ess
12, rhsusf_ach_bare_des_headset
12, rhsusf_ach_bare_des_headset_ess
12, rhsusf_ach_bare_ess
12, rhsusf_ach_bare_headset
12, rhsusf_ach_bare_headset_ess
12, rhsusf_ach_bare_semi
12, rhsusf_ach_bare_semi_ess
12, rhsusf_ach_bare_semi_headset
12, rhsusf_ach_bare_semi_headset_ess
12, rhsusf_ach_bare_tan
12, rhsusf_ach_bare_tan_ess
12, rhsusf_ach_bare_tan_headset
12, rhsusf_ach_bare_tan_headset_ess
12, rhsusf_ach_bare_wood
12, rhsusf_ach_bare_wood_ess
12, rhsusf_ach_bare_wood_headset
12, rhsusf_ach_bare_wood_headset_ess
12, rhsusf_ach_helmet_ESS_ocp
12, rhsusf_ach_helmet_ESS_ucp
12, rhsusf_ach_helmet_M81
12, rhsusf_ach_helmet_camo_ocp
12, rhsusf_ach_helmet_headset_ess_ocp
12, rhsusf_ach_helmet_headset_ess_ucp
12, rhsusf_ach_helmet_headset_ocp
12, rhsusf_ach_helmet_headset_ucp
12, rhsusf_ach_helmet_ocp
12, rhsusf_ach_helmet_ocp_norotos
12, rhsusf_ach_helmet_ucp
12, rhsusf_ach_helmet_ucp_norotos
12, rhsusf_bowman_cap
12, rhsusf_lwh_helmet_M1942
12, rhsusf_lwh_helmet_marpatd
12, rhsusf_lwh_helmet_marpatd_ess
12, rhsusf_lwh_helmet_marpatd_headset
12, rhsusf_lwh_helmet_marpatwd
12, rhsusf_lwh_helmet_marpatwd_ess
12, rhsusf_lwh_helmet_marpatwd_headset
12, rhsusf_mich_bare
12, rhsusf_mich_bare_alt
12, rhsusf_mich_bare_alt_semi
12, rhsusf_mich_bare_alt_tan
12, rhsusf_mich_bare_headset
12, rhsusf_mich_bare_norotos
12, rhsusf_mich_bare_norotos_alt
12, rhsusf_mich_bare_norotos_alt_headset
12, rhsusf_mich_bare_norotos_alt_semi
12, rhsusf_mich_bare_norotos_alt_semi_headset
12, rhsusf_mich_bare_norotos_alt_tan
12, rhsusf_mich_bare_norotos_alt_tan_headset
12, rhsusf_mich_bare_norotos_arc
12, rhsusf_mich_bare_norotos_arc_alt
12, rhsusf_mich_bare_norotos_arc_alt_headset
12, rhsusf_mich_bare_norotos_arc_alt_semi
12, rhsusf_mich_bare_norotos_arc_alt_semi_headset
12, rhsusf_mich_bare_norotos_arc_alt_tan
12, rhsusf_mich_bare_norotos_arc_alt_tan_headset
12, rhsusf_mich_bare_norotos_arc_headset
12, rhsusf_mich_bare_norotos_arc_semi
12, rhsusf_mich_bare_norotos_arc_semi_headset
12, rhsusf_mich_bare_norotos_arc_tan
12, rhsusf_mich_bare_norotos_headset
12, rhsusf_mich_bare_norotos_semi
12, rhsusf_mich_bare_norotos_semi_headset
12, rhsusf_mich_bare_norotos_tan
12, rhsusf_mich_bare_norotos_tan_headset
12, rhsusf_mich_bare_semi
12, rhsusf_mich_bare_semi_headset
12, rhsusf_mich_bare_tan
12, rhsusf_mich_bare_tan_headset
12, rhsusf_mich_helmet_marpatd_alt_headset
12, rhsusf_mich_helmet_marpatd_headset
12, rhsusf_mich_helmet_marpatd_norotos
12, rhsusf_mich_helmet_marpatd_norotos_arc
12, rhsusf_mich_helmet_marpatd_norotos_arc_headset
12, rhsusf_mich_helmet_marpatd_norotos_headset
12, rhsusf_mich_helmet_marpatwd
12, rhsusf_mich_helmet_marpatwd_alt
12, rhsusf_mich_helmet_marpatwd_alt_headset
12, rhsusf_mich_helmet_marpatwd_headset
12, rhsusf_mich_helmet_marpatwd_norotos
12, rhsusf_mich_helmet_marpatwd_norotos_arc
12, rhsusf_mich_helmet_marpatwd_norotos_arc_headset
12, rhsusf_mich_helmet_marpatwd_norotos_headset

> RHSPointerAttachments
12, rhsusf_acc_anpeq15side
12, rhsusf_acc_anpeq15
12, rhsusf_acc_anpeq15A
12, rhsusf_acc_anpeq15_light

> RHSBipodAttachments
12, rhsusf_acc_harris_bipod
12, rhs_bipod

> RHSMuzzleAttachments
12, rhsusf_acc_rotex5_grey
12, rhsusf_acc_rotex5_tan
12, rhsusf_acc_nt4_black
12, rhsusf_acc_nt4_tan
12, rhsusf_acc_SF3P556
12, rhsusf_acc_SFMB556
12, rhsusf_acc_SR25S
12, rhsusf_acc_M2010S
12, rhs_acc_dtk4short
12, rhs_acc_dtk4long
12, rhs_acc_dtk4screws
12, rhs_acc_tgpa
12, rhs_acc_pbs1
12, rhs_acc_dtk3
12, rhs_acc_dtk1
12, rhs_acc_dtk
12, rhs_acc_dtk1l
12, rhs_acc_ak5

> RHSOpticAttachments
12, rhsusf_acc_eotech_552
12, rhsusf_acc_LEUPOLDMK4
12, rhsusf_acc_ELCAN
12, rhsusf_acc_ELCAN_pip
12, rhsusf_acc_ACOG
12, rhsusf_acc_ACOG_pip
12, rhs_acc_1pn93_2
12, rhsusf_acc_ACOG2
12, rhsusf_acc_ACOG_USMC
12, rhsusf_acc_ACOG2_USMC
12, rhsusf_acc_ACOG3_USMC
12, rhsusf_acc_LEUPOLDMK4_2
12, rhsusf_acc_EOTECH
12, rhs_acc_1p29
12, rhs_acc_1p78
12, rhs_acc_pkas
12, rhs_acc_1p63
12, rhs_acc_ekp1
12, rhs_acc_pso1m2
12, rhs_acc_pgo7v
12, rhs_acc_1pn93_1

> RHSPistols
12, rhs_weap_pya
12, rhs_weap_makarov_pmm
12, rhsusf_weap_m1911a1

> RHSLightMachineGuns
12, rhs_weap_m249_pip_L
12, rhs_weap_m249_pip_L_para
12, rhs_weap_m249_pip_L_vfg
12, rhs_weap_m249_pip_S
12, rhs_weap_m249_pip_S_para
12, rhs_weap_m249_pip_S_vfg
12, rhs_weap_m240B
12, rhs_weap_m240B_CAP
12, rhs_weap_m240G
12, rhs_weap_pkm
12, rhs_weap_pkp

> RHSAssaultRifles
12, rhs_weap_m16a4
12, rhs_weap_m16a4_carryhandle
12, rhs_weap_m16a4_carryhandle_grip
12, rhs_weap_m16a4_carryhandle_grip_pmag
12, rhs_weap_m16a4_carryhandle_M203
12, rhs_weap_m16a4_carryhandle_pmag
12, rhs_weap_m16a4_grip
12, rhs_weap_m4
12, rhs_weap_m4_grip2
12, rhs_weap_m4_carryhandle
12, rhs_weap_m4_carryhandle_pmag
12, rhs_weap_m4_grip
12, rhs_weap_m4_m203
12, rhs_weap_m4_m320
12, rhs_weap_m4a1_carryhandle
12, rhs_weap_m4a1_carryhandle_grip2
12, rhs_weap_m4a1_carryhandle_pmag
12, rhs_weap_m4a1_carryhandle_m203
12, rhs_weap_m4a1
12, rhs_weap_m4a1_grip2
12, rhs_weap_m4a1_grip
12, rhs_weap_m4a1_m203
12, rhs_weap_m4a1_m320
12, rhs_weap_m4a1_blockII
12, rhs_weap_m4a1_blockII_KAC
12, rhs_weap_m4a1_blockII_grip2
12, rhs_weap_m4a1_blockII_grip2_KAC
12, rhs_weap_m4a1_blockII_M203
12, rhs_weap_mk18
12, rhs_weap_mk18_KAC
12, rhs_weap_mk18_grip2
12, rhs_weap_mk18_grip2_KAC
12, rhs_weap_mk18_m320
12, rhs_weap_ak103
12, rhs_weap_ak103_npz
12, rhs_weap_ak103_1
12, rhs_weap_ak74m
12, rhs_weap_ak74m_2mag
12, rhs_weap_ak74m_2mag_camo
12, rhs_weap_ak74m_2mag_npz
12, rhs_weap_ak74m_camo
12, rhs_weap_ak74m_desert
12, rhs_weap_ak74m_desert_npz
12, rhs_weap_ak74m_desert_folded
12, rhs_weap_ak74m_plummag_folded
12, rhs_weap_ak74m_folded
12, rhs_weap_ak74m_camo_folded
12, rhs_weap_ak74m_gp25
12, rhs_weap_ak74m_gp25_npz
12, rhs_weap_ak74m_npz
12, rhs_weap_ak74m_plummag
12, rhs_weap_ak74m_plummag_npz
12, rhs_weap_akm
12, rhs_weap_akm_gp25
12, rhs_weap_akms
12, rhs_weap_akms_gp25

> RHSSniperRifles
12, rhs_weap_sr25
12, rhs_weap_sr25_ec
12, rhs_weap_m14ebrri
12, rhs_weap_XM2010
12, rhs_weap_XM2010_wd
12, rhs_weap_XM2010_d
12, rhs_weap_XM2010_sa
12, rhs_weap_svd
12, rhs_weap_svdp_wd
12, rhs_weap_svdp_wd_npz
12, rhs_weap_svdp_npz
12, rhs_weap_svds
12, rhs_weap_svds_npz

> RHSAmmunition
12, rhsusf_mag_7x45acp_MHP
12, rhs_mag_9x18_12_57N181S
12, rhs_mag_9x19_17
12, rhs_mag_30Rnd_556x45_Mk318_Stanag
12, rhs_mag_30Rnd_556x45_Mk262_Stanag
12, rhs_mag_30Rnd_556x45_M855A1_Stanag
12, rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer
12, rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
12, rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green
12, rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow
12, rhs_200rnd_556x45_M_SAW
12, rhs_200rnd_556x45_B_SAW
12, rhs_200rnd_556x45_T_SAW
12, rhsusf_50Rnd_762x51
12, rhsusf_50Rnd_762x51_m993
12, rhsusf_50Rnd_762x51_m80a1epr
12, rhsusf_100Rnd_762x51
12, rhsusf_100Rnd_762x51_m993
12, rhsusf_100Rnd_762x51_m80a1epr
12, rhsusf_8Rnd_00Buck
12, rhsusf_8Rnd_Slug
12, rhsusf_20Rnd_762x51_m993_Mag
12, rhsusf_5Rnd_300winmag_xm2010
12, rhs_30Rnd_762x39mm
12, rhs_30Rnd_762x39mm_tracer
12, rhs_30Rnd_762x39mm_89
12, rhs_30Rnd_545x39_AK
12, rhs_30Rnd_545x39_AK_no_tracers
12, rhs_30Rnd_545x39_7N10_AK
12, rhs_30Rnd_545x39_7N22_AK
12, rhs_30Rnd_545x39_AK_green
12, rhs_45Rnd_545X39_AK
12, rhs_45Rnd_545X39_7N10_AK
12, rhs_45Rnd_545X39_7N22_AK
12, rhs_45Rnd_545X39_AK_Green
12, rhs_100Rnd_762x54mmR
12, rhs_100Rnd_762x54mmR_green
12, rhs_10Rnd_762x54mmR_7N1

> RHSLaunchers
12, rhs_weap_rpg26
12, rhs_weap_rpg7
12, rhs_weap_rshg2

> RHSLauncherAmmo
12, rhs_rpg26_mag
12, rhs_rshg2_mag
12, rhs_rpg18_mag
12, rhs_rpg7_PG7VL_mag
12, rhs_rpg7_PG7VR_mag
12, rhs_rpg7_TBG7V_mag
12, rhs_rpg7_OG7V_mag
12, rhs_mag_9k32_rocket
12, rhs_mag_9k38_rocket

> RHSMines
12, rhs_mine_pmn2_mag
12, rhs_mine_tm62m_mag
12, rhsusf_m112_mag
12, rhsusf_m112x4_mag
12, rhs_mine_m19_mag

> TRYKUniforms
12, TRYK_HRP_UCP
12, TRYK_HRP_USMC
12, TRYK_HRP_khk
12, TRYK_U_B_OD_OD_CombatUniform
12, TRYK_U_B_OD_OD_R_CombatUniform
12, TRYK_U_B_TANTAN_CombatUniform
12, TRYK_U_B_TANTAN_R_CombatUniform
12, TRYK_U_B_BLKBLK_CombatUniform
12, TRYK_U_B_BLKBLK_R_CombatUniform
12, TRYK_U_B_GRYOCP_CombatUniform
12, TRYK_U_B_GRYOCP_R_CombatUniformTshirt
12, TRYK_U_B_TANOCP_CombatUniform
12, TRYK_U_B_TANOCP_R_CombatUniformTshirt
12, TRYK_U_B_BLKOCP_CombatUniform
12, TRYK_U_B_BLKOCP_R_CombatUniformTshirt
12, TRYK_U_B_BLKTAN_CombatUniform
12, TRYK_U_B_BLKTANR_CombatUniformTshirt
12, TRYK_U_B_ODTAN_CombatUniform
12, TRYK_U_B_ODTANR_CombatUniformTshirt
12, TRYK_U_B_GRTAN_CombatUniform
12, TRYK_U_B_GRTANR_CombatUniformTshirt
12, TRYK_U_B_wood_CombatUniform
12, TRYK_U_B_woodR_CombatUniformTshirt
12, TRYK_U_B_wood3c_CombatUniform
12, TRYK_U_B_wood3c_CombatUniformTshirt
12, TRYK_U_B_MARPAT_WOOD_CombatUniform
12, TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt
12, TRYK_U_B_WOOD_MARPAT_CombatUniform
12, TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt
12, TRYK_U_B_woodtan_CombatUniform
12, TRYK_U_B_woodtanR_CombatUniformTshirt
12, TRYK_U_B_JSDF_CombatUniform
12, TRYK_U_B_JSDF_CombatUniformTshirt
12, TRYK_U_B_3CD_Delta_BDU
12, TRYK_U_B_3CD_Delta_BDUTshirt
12, TRYK_U_B_3CD_Ranger_BDU
12, TRYK_U_B_3CD_Ranger_BDUTshirt
12, TRYK_U_B_3CD_BLK_BDUTshirt
12, TRYK_U_B_3CD_BLK_BDUTshirt2
12, TRYK_U_B_ACU
12, TRYK_U_B_ACUTshirt
12, TRYK_U_B_MARPAT_Wood
12, TRYK_U_B_MARPAT_Wood_Tshirt
12, TRYK_U_B_MARPAT_Desert
12, TRYK_U_B_MARPAT_Desert_Tshirt
12, TRYK_U_B_MARPAT_Desert2
12, TRYK_U_B_MARPAT_Desert2_Tshirt
12, TRYK_U_B_3c
12, TRYK_U_B_3cr
12, TRYK_U_B_Sage_Tshirt
12, TRYK_U_B_BLK3CD
12, TRYK_U_B_BLK3CD_Tshirt
12, TRYK_U_B_BLK
12, TRYK_U_B_BLK_Tshirt
12, TRYK_U_B_BLKTAN
12, TRYK_U_B_BLKTAN_Tshirt
12, TRYK_U_B_ODTAN
12, TRYK_U_B_ODTAN_Tshirt
12, TRYK_U_B_BLK_OD
12, TRYK_U_B_BLK_OD_Tshirt
12, TRYK_U_B_C01_Tsirt
12, TRYK_U_B_C02_Tsirt
12, TRYK_U_B_OD_BLK
12, TRYK_U_B_OD_BLK_2
12, TRYK_U_B_BLK_TAN_1
12, TRYK_U_B_BLK_TAN_2
12, TRYK_U_B_wh_tan_Rollup_CombatUniform
12, TRYK_U_B_wh_OD_Rollup_CombatUniform
12, TRYK_U_B_wh_blk_Rollup_CombatUniform
12, TRYK_U_B_BLK_tan_Rollup_CombatUniform
12, TRYK_U_B_BLK_OD_Rollup_CombatUniform
12, TRYK_U_B_NATO_UCP_GRY_CombatUniform
12, TRYK_U_B_NATO_UCP_GRY_R_CombatUniform
12, TRYK_U_B_NATO_UCP_CombatUniform
12, TRYK_U_B_NATO_UCP_R_CombatUniform
12, TRYK_U_B_NATO_OCP_c_BLK_CombatUniform
12, TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform
12, TRYK_U_B_NATO_OCP_BLK_CombatUniform
12, TRYK_U_B_NATO_OCP_BLK_R_CombatUniform
12, TRYK_U_B_NATO_OCPD_CombatUniform
12, TRYK_U_B_NATO_OCPD_R_CombatUniform
12, TRYK_U_B_NATO_OCP_CombatUniform
12, TRYK_U_B_NATO_OCP_R_CombatUniform
12, TRYK_U_B_AOR1_Rollup_CombatUniform
12, TRYK_U_B_AOR2_Rollup_CombatUniform
12, TRYK_U_B_MTP_CombatUniform
12, TRYK_U_B_MTP_R_CombatUniform
12, TRYK_U_B_MTP_BLK_CombatUniform
12, TRYK_U_B_MTP_BLK_R_CombatUniform
12, TRYK_U_B_Woodland
12, TRYK_U_B_Woodland_Tshirt
12, TRYK_U_B_WDL_GRY_CombatUniform
12, TRYK_U_B_WDL_GRY_R_CombatUniform
12, TRYK_U_B_ARO1_GR_CombatUniform
12, TRYK_U_B_ARO1_GR_R_CombatUniform
12, TRYK_U_B_ARO1_GRY_CombatUniform
12, TRYK_U_B_ARO1_GRY_R_CombatUniform
12, TRYK_U_B_ARO1_CombatUniform
12, TRYK_U_B_ARO1R_CombatUniform
12, TRYK_U_B_ARO1_BLK_CombatUniform
12, TRYK_U_B_ARO1_BLK_R_CombatUniform
12, TRYK_U_B_ARO1_CBR_CombatUniform
12, TRYK_U_B_ARO1_CBR_R_CombatUniform
12, TRYK_U_B_ARO2_CombatUniform
12, TRYK_U_B_ARO2R_CombatUniform
12, TRYK_U_B_AOR2_BLK_CombatUniform
12, TRYK_U_B_AOR2_BLK_R_CombatUniform
12, TRYK_U_B_AOR2_OD_CombatUniform
12, TRYK_U_B_AOR2_OD_R_CombatUniform
12, TRYK_U_B_AOR2_GRY_CombatUniform
12, TRYK_U_B_AOR2_GRY_R_CombatUniform
12, TRYK_U_B_Snow_CombatUniform
12, TRYK_U_B_Snowt
12, TRYK_U_B_Denim_T_WH
12, TRYK_U_B_Denim_T_BK
12, TRYK_U_B_BLK_T_WH
12, TRYK_U_B_BLK_T_BK
12, TRYK_U_B_RED_T_BR
12, TRYK_U_B_Denim_T_BG_WH
12, TRYK_U_B_Denim_T_BG_BK
12, TRYK_U_B_BLK_T_BG_WH
12, TRYK_U_B_BLK_T_BG_BK
12, TRYK_U_B_RED_T_BG_BR
12, TRYK_U_B_fleece
12, TRYK_U_B_fleece_UCP
12, TRYK_U_B_UCP_PCUs
12, TRYK_U_B_GRY_PCUs
12, TRYK_U_B_Wood_PCUs
12, TRYK_U_B_PCUs
12, TRYK_U_B_UCP_PCUs_R
12, TRYK_U_B_GRY_PCUs_R
12, TRYK_U_B_Wood_PCUs_R
12, TRYK_U_B_PCUs_R
12, TRYK_U_B_PCUGs
12, TRYK_U_B_PCUODs
12, TRYK_U_B_PCUGs_gry
12, TRYK_U_B_PCUGs_BLK
12, TRYK_U_B_PCUGs_OD
12, TRYK_U_B_PCUGs_gry_R
12, TRYK_U_B_PCUGs_BLK_R
12, TRYK_U_B_PCUGs_OD_R
12, TRYK_U_Bts_GRYGRY_PCUs
12, TRYK_U_Bts_UCP_PCUs
12, TRYK_U_Bts_Wood_PCUs
12, TRYK_U_Bts_PCUs
12, TRYK_U_pad_j
12, TRYK_U_pad_j_blk
12, TRYK_U_pad_hood_Cl
12, TRYK_U_pad_hood_Cl_blk
12, TRYK_U_pad_hood_tan
12, TRYK_U_pad_hood_Blk
12, TRYK_U_pad_hood_CSATBlk
12, TRYK_U_pad_hood_Blod
12, TRYK_U_pad_hood_odBK
12, TRYK_U_pad_hood_BKT2
12, TRYK_hoodie_Blk
12, TRYK_hoodie_FR
12, TRYK_hoodie_Wood
12, TRYK_hoodie_3c
12, TRYK_T_camo_tan
12, TRYK_T_camo_3c
12, TRYK_T_camo_Wood
12, TRYK_T_camo_wood_marpat
12, TRYK_T_camo_Desert_marpat
12, TRYK_T_camo_3c_BG
12, TRYK_T_camo_Wood_BG
12, TRYK_T_camo_wood_marpat_BG
12, TRYK_T_camo_desert_marpat_BG
12, TRYK_T_PAD
12, TRYK_T_OD_PAD
12, TRYK_T_TAN_PAD
12, TRYK_T_BLK_PAD
12, TRYK_T_T2_PAD
12, TRYK_T_CSAT_PAD
12, TRYK_U_nohoodPcu_gry
12, TRYK_U_hood_nc
12, TRYK_U_hood_mc
12, TRYK_U_denim_hood_blk
12, TRYK_U_denim_hood_mc
12, TRYK_U_denim_hood_3c
12, TRYK_U_denim_hood_nc
12, TRYK_U_denim_jersey_blu
12, TRYK_U_denim_jersey_blk
12, TRYK_shirts_PAD
12, TRYK_shirts_OD_PAD
12, TRYK_shirts_TAN_PAD
12, TRYK_shirts_BLK_PAD
12, TRYK_shirts_PAD_BK
12, TRYK_shirts_OD_PAD_BK
12, TRYK_shirts_TAN_PAD_BK
12, TRYK_shirts_BLK_PAD_BK
12, TRYK_shirts_PAD_BLW
12, TRYK_shirts_OD_PAD_BLW
12, TRYK_shirts_TAN_PAD_BLW
12, TRYK_shirts_BLK_PAD_BLW
12, TRYK_shirts_PAD_YEL
12, TRYK_shirts_OD_PAD_YEL
12, TRYK_shirts_TAN_PAD_YEL
12, TRYK_shirts_BLK_PAD_YEL
12, TRYK_shirts_PAD_RED2
12, TRYK_shirts_OD_PAD_RED2
12, TRYK_shirts_TAN_PAD_RED2
12, TRYK_shirts_BLK_PAD_RED2
12, TRYK_shirts_PAD_BLU3
12, TRYK_shirts_OD_PAD_BLU3
12, TRYK_shirts_TAN_PAD_BLU3
12, TRYK_shirts_BLK_PAD_BLU3
12, TRYK_shirts_DENIM_R
12, TRYK_shirts_DENIM_BL
12, TRYK_shirts_DENIM_BK
12, TRYK_shirts_DENIM_WH
12, TRYK_shirts_DENIM_BWH
12, TRYK_shirts_DENIM_RED2
12, TRYK_shirts_DENIM_WHB
12, TRYK_shirts_DENIM_ylb
12, TRYK_shirts_DENIM_od
12, TRYK_shirts_DENIM_R_Sleeve
12, TRYK_shirts_DENIM_BL_Sleeve
12, TRYK_shirts_DENIM_BK_Sleeve
12, TRYK_shirts_DENIM_WH_Sleeve
12, TRYK_shirts_DENIM_BWH_Sleeve
12, TRYK_shirts_DENIM_RED2_Sleeve
12, TRYK_shirts_DENIM_WHB_Sleeve
12, TRYK_shirts_DENIM_ylb_Sleeve
12, TRYK_shirts_DENIM_od_Sleeve
12, TRYK_shirts_PAD_BL
12, TRYK_shirts_OD_PAD_BL
12, TRYK_shirts_TAN_PAD_BL
12, TRYK_shirts_BLK_PAD_BL
12, TRYK_U_taki_wh
12, TRYK_U_taki_COY
12, TRYK_U_taki_BL
12, TRYK_U_taki_BLK
12, TRYK_U_Bts_PCUGs
12, TRYK_U_Bts_PCUODs
12, TRYK_U_taki_G_WH
12, TRYK_U_taki_G_COY
12, TRYK_U_taki_G_BL
12, TRYK_U_taki_G_BLK
12, TRYK_U_B_PCUHs
12, TRYK_U_B_PCUGHs
12, TRYK_U_B_PCUODHs
12, TRYK_B_USMC_R
12, TRYK_B_USMC_R_ROLL
12, TRYK_ZARATAKI
12, TRYK_ZARATAKI2
12, TRYK_ZARATAKI3
12, TRYK_B_TRYK_UCP_T
12, TRYK_B_TRYK_3C_T
12, TRYK_B_TRYK_MTP_T
12, TRYK_B_TRYK_OCP_T
12, TRYK_B_TRYK_OCP_D_T
12, TRYK_DMARPAT_T
12, TRYK_C_AOR2_T
12, TRYK_U_B_Sage_T
12, TRYK_U_B_Wood_T
12, TRYK_U_B_BLTAN_T
12, TRYK_U_B_BLOD_T
12, TRYK_OVERALL_flesh
12, TRYK_OVERALL_nok_flesh
12, TRYK_OVERALL_SAGE_BLKboots
12, TRYK_OVERALL_SAGE_BLKboots_nk_blk
12, TRYK_OVERALL_SAGE_BLKboots_nk
12, TRYK_OVERALL_SAGE_BLKboots_nk_blk2
12, TRYK_OVERALL_SAGE
12, TRYK_SUITS_BLK_F
12, TRYK_SUITS_BR_F
12, TRYK_H_ghillie_top_headless3glass
12, TRYK_shoulder_armor_BK
12, TRYK_shoulder_armor_OD
12, TRYK_shoulder_armor_CY
12, TRYK_H_ghillie_top_headless3
12, TRYK_U_B_PCUHsW
12, TRYK_U_B_PCUHsW2
12, TRYK_U_B_PCUHsW3
12, TRYK_U_B_PCUHsW3nh
12, TRYK_U_B_PCUHsW4
12, TRYK_U_B_PCUHsW5
12, TRYK_U_B_PCUHsW6

> TRYKVests
12, TRYK_Hrp_vest_ucp
12, TRYK_V_PlateCarrier_JSDF
12, TRYK_V_ArmorVest_AOR1
12, TRYK_V_ArmorVest_AOR2
12, TRYK_V_ArmorVest_coyo
12, TRYK_V_ArmorVest_Brown
12, TRYK_V_ArmorVest_CBR
12, TRYK_V_ArmorVest_khk
12, TRYK_V_ArmorVest_rgr
12, TRYK_V_ArmorVest_green
12, TRYK_V_ArmorVest_tan
12, TRYK_V_ArmorVest_Delta
12, TRYK_V_ArmorVest_Ranger
12, TRYK_V_ArmorVest_AOR1_2
12, TRYK_V_ArmorVest_AOR2_2
12, TRYK_V_ArmorVest_coyo2
12, TRYK_V_ArmorVest_Brown2
12, TRYK_V_ArmorVest_cbr2
12, TRYK_V_ArmorVest_khk2
12, TRYK_V_ArmorVest_rgr2
12, TRYK_V_ArmorVest_green2
12, TRYK_V_ArmorVest_tan2
12, TRYK_V_ArmorVest_Delta2
12, TRYK_V_ArmorVest_Ranger2
12, TRYK_V_PlateCarrier_blk
12, TRYK_V_PlateCarrier_coyo
12, TRYK_V_PlateCarrier_wood
12, TRYK_V_PlateCarrier_ACU
12, TRYK_V_TacVest_coyo
12, TRYK_V_harnes_blk_L
12, TRYK_V_harnes_od_L
12, TRYK_V_harnes_TAN_L
12, TRYK_V_PlateCarrier_blk_L
12, TRYK_V_PlateCarrier_wood_L
12, TRYK_V_PlateCarrier_ACU_L
12, TRYK_V_PlateCarrier_coyo_L
12, TRYK_V_ChestRig_L
12, TRYK_V_ChestRig
12, TRYK_V_Bulletproof
12, TRYK_V_Bulletproof_BLK
12, TRYK_V_Bulletproof_BL
12, TRYK_V_IOTV_BLK
12, TRYK_V_tacv1M_BK
12, TRYK_V_tacv1MLC_BK
12, TRYK_V_tacv1
12, TRYK_V_tacv1_CY
12, TRYK_V_tacv1_BK
12, TRYK_V_tacv1_P_BK
12, TRYK_V_tacv1_SHERIFF_BK
12, TRYK_V_tacv1_FBI_BK
12, TRYK_V_tacv1LP_BK
12, TRYK_V_tacv1LSRF_BK
12, TRYK_V_tacv1LC_BK
12, TRYK_V_tacv1LC_CY
12, TRYK_V_tacv1LC_OD
12, TRYK_V_tacv1LC_FBI_BK
12, TRYK_V_tacv1LC_SRF_BK
12, TRYK_V_tacv1LC_SRF_OD
12, TRYK_V_tacv1LC_P_BK
12, TRYK_V_PlateCarrier_POLICE
12, TRYK_V_ArmorVest_HRT_B
12, TRYK_V_ArmorVest_HRT_OD
12, TRYK_V_ArmorVest_HRT2_B
12, TRYK_V_ArmorVest_HRT2_OD
12, TRYK_V_ArmorVest_Winter
12, TRYK_V_Sheriff_BA_OD
12, TRYK_V_tacv10_BK
12, TRYK_V_tacv10_OD
12, TRYK_V_tacv10_TN
12, TRYK_V_tacv10LC_BK
12, TRYK_V_tacv10LC_OD
12, TRYK_V_tacv10LC_TN
12, TRYK_V_tacv1L_BK
12, TRYK_V_tacv1L_OD
12, TRYK_V_tacv1L_CY
12, TRYK_V_tacv1LC_FBI2_BK
12, TRYK_V_tacv1LC_SRF2_BK
12, TRYK_V_tacv1LC_SRF2_OD
12, TRYK_V_tacv1LC_P2_BK
12, TRYK_V_tacv1_MSL_BK
12, TRYK_V_tacv1_MSL_NV
12, TRYK_V_tacv1LMSL_BK
12, TRYK_V_tacv1LMSL_NV
12, TRYK_V_tacv1LC_MSL_BK
12, TRYK_V_tacv1LC_MSL_NV
12, TRYK_V_tacSVD_BK
12, TRYK_V_tacSVD_OD
12, TRYK_V_Sheriff_BA_TL
12, TRYK_V_Sheriff_BA_TBL
12, TRYK_V_Sheriff_BA_TCL
12, TRYK_V_Sheriff_BA_TL2
12, TRYK_V_Sheriff_BA_TBL2
12, TRYK_V_Sheriff_BA_TCL2
12, TRYK_V_Sheriff_BA_T
12, TRYK_V_Sheriff_BA_TB
12, TRYK_V_Sheriff_BA_T2
12, TRYK_V_Sheriff_BA_TB2
12, TRYK_V_Sheriff_BA_T3
12, TRYK_V_Sheriff_BA_TB3
12, TRYK_V_Sheriff_BA_T4
12, TRYK_V_Sheriff_BA_TB4
12, TRYK_V_Sheriff_BA_T5
12, TRYK_V_Sheriff_BA_TB5
12, TRYK_V_Sheriff_BA_TBL3_BK
12, TRYK_V_Sheriff_BA_TBL3_OD
12, TRYK_V_Sheriff_BA_TBL3_TN
12, TRYK_LOC_AK_chestrig_OD
12, TRYK_LOC_AK_chestrig_TAN

> TRYKHeadgear
12, TRYK_US_ESS_Glasses
12, TRYK_US_ESS_Glasses_WH
12, TRYK_US_ESS_Glasses_BLK
12, TRYK_US_ESS_Glasses_TAN
12, TRYK_US_ESS_Glasses_TAN_BLK
12, TRYK_SPGEAR_Glasses
12, TRYK_headset_Glasses
12, TRYK_SpsetG_Glasses
12, TRYK_Spset_PHC1_Glasses
12, TRYK_Spset_PHC2_Glasses
12, TRYK_US_ESS_Glasses_H
12, TRYK_US_ESS_Glasses_Cover
12, TRYK_headset2_glasses
12, TRYK_US_ESS_Glasses_NV
12, TRYK_US_ESS_Glasses_TAN_NV
12, TRYK_ESS_BLKTAN_NV
12, TRYK_ESS_BLKBLK_NV
12, TRYK_G_Shades_Black_NV
12, TRYK_G_Shades_Blue_NV
12, TRYK_G_bala_ess_NV
12, TRYK_bandana_NV
12, TRYK_SPgearG_NV
12, TRYK_SPgear_PHC1_NV
12, TRYK_SPgear_PHC2_NV
12, TRYK_G_bala_wh_NV
12, TRYK_ESS_wh_NV
12, TRYK_ESS_CAP_OD
12, TRYK_ESS_CAP_tan
12, TRYK_R_CAP_BLK
12, TRYK_R_CAP_TAN
12, TRYK_R_CAP_OD_US
12, TRYK_r_cap_tan_Glasses
12, TRYK_r_cap_blk_Glasses
12, TRYK_r_cap_od_Glasses
12, TRYK_H_headsetcap_Glasses
12, TRYK_H_headsetcap_blk_Glasses
12, TRYK_H_headsetcap_od_Glasses
12, TRYK_TAC_EARMUFF_SHADE
12, TRYK_TAC_EARMUFF
12, TRYK_NOMIC_TAC_EARMUFF
12, TRYK_headset2
12, TRYK_TAC_EARMUFF_Gs
12, TRYK_TAC_SET_bn
12, TRYK_NOMIC_TAC_EARMUFF_Gs
12, TRYK_TAC_EARMUFF_SHADE_Gs
12, TRYK_TAC_SET_TAN
12, TRYK_TAC_SET_OD
12, TRYK_TAC_SET_WH
12, TRYK_TAC_SET_MESH
12, TRYK_TAC_SET_TAN_2
12, TRYK_TAC_SET_OD_2
12, TRYK_TAC_SET_WH_2
12, TRYK_TAC_SET_MESH_2
12, TRYK_bandana_g
12, TRYK_H_PASGT_BLK
12, TRYK_H_PASGT_OD
12, TRYK_H_PASGT_COYO
12, TRYK_H_PASGT_TAN
12, TRYK_H_Helmet_Snow
12, TRYK_H_WH
12, TRYK_H_GR
12, TRYK_H_AOR1
12, TRYK_H_AOR2
12, TRYK_H_EARMUFF
12, TRYK_H_TACEARMUFF_H
12, TRYK_H_Bandana_H
12, TRYK_H_Bandana_wig
12, TRYK_H_Bandana_wig_g
12, TRYK_H_wig
12, TRYK_H_headset2
12, TRYK_H_ghillie_over
12, TRYK_H_ghillie_top
12, TRYK_H_ghillie_top_headless
12, TRYK_H_ghillie_over_green
12, TRYK_H_ghillie_top_green
12, TRYK_H_ghillie_top_headless_green
12, TRYK_H_woolhat
12, TRYK_H_woolhat_CW
12, TRYK_H_woolhat_WH
12, TRYK_H_woolhat_br
12, TRYK_H_woolhat_cu
12, TRYK_H_woolhat_tan
12, TRYK_H_headsetcap
12, TRYK_H_headsetcap_blk
12, TRYK_H_headsetcap_od
12, TRYK_H_pakol
12, TRYK_H_pakol2
12, TRYK_H_LHS_HEL_G
12, TRYK_H_Helmet_Winter
12, TRYK_H_Helmet_Winter_2
12, TRYK_Headphone_NV
12, TRYK_HRPIGEAR_NV
12, TRYK_Headset_NV
12, TRYK_TAC_boonie_SET_NV
12, TRYK_TAC_SET_NV_TAN
12, TRYK_TAC_SET_NV_OD
12, TRYK_TAC_SET_NV_WH
12, TRYK_TAC_SET_NV_MESH
12, TRYK_TAC_SET_NV_TAN_2
12, TRYK_TAC_SET_NV_OD_2
12, TRYK_TAC_SET_NV_WH_2
12, TRYK_TAC_SET_NV_MESH_2
12, TRYK_H_DELTAHELM_NV
12, TRYK_Shemagh_shade_MESH
12, TRYK_Shemagh_shade_N
12, TRYK_Shemagh_shade_G_N
12, TRYK_Shemagh_shade_WH_N
12, TRYK_kio_balaclava_WH
12, TRYK_kio_balaclava_BLK
12, TRYK_kio_balaclavas
12, TRYK_kio_balaclava_BLK_ear
12, TRYK_kio_balaclava_ear
12, TRYK_kio_balaclava_ESS
12, TRYK_Shemagh
12, TRYK_Shemagh_mesh
12, TRYK_Shemagh_G
12, TRYK_Shemagh_WH
12, TRYK_Shemagh_shade
12, TRYK_Shemagh_shade_G
12, TRYK_Shemagh_shade_WH
12, TRYK_Shemagh_shade_MH
12, TRYK_Shemagh_ESS
12, TRYK_Shemagh_ESS_G
12, TRYK_Shemagh_ESS_WH
12, TRYK_Shemagh_EAR_TAN
12, TRYK_Shemagh_EAR_WH
12, TRYK_balaclava_BLACK_NV
12, TRYK_balaclava_NV
12, TRYK_balaclava_BLACK_EAR_NV
12, TRYK_balaclava_EAR_NV
12, TRYK_Shemagh_TAN_NV
12, TRYK_Shemagh_MESH_NV
12, TRYK_Shemagh_G_NV
12, TRYK_Shemagh_WH_NV
12, TRYK_Shemagh_EAR_NV
12, TRYK_Shemagh_EAR_G_NV
12, TRYK_Shemagh_EAR_WH_NV
12, TRYK_ShemaghESSTAN_NV
12, TRYK_ShemaghESSOD_NV
12, TRYK_ShemaghESSWH_NV

> TRYKBackpacks
12, TRYK_B_AssaultPack_UCP
12, TRYK_B_AssaultPack_Type2camo
12, TRYK_B_AssaultPack_MARPAT_Desert
12, TRYK_B_AssaultPack_MARPAT_Wood
12, TRYK_B_Kitbag_Base
12, TRYK_B_Kitbag_blk
12, TRYK_B_Kitbag_aaf
12, TRYK_B_Carryall_blk
12, TRYK_B_Carryall_wh
12, TRYK_B_Carryall_wood
12, TRYK_B_Carryall_JSDF
12, TRYK_B_Kitbag_Base_JSDF
12, TRYK_B_Coyotebackpack
12, TRYK_B_Coyotebackpack_OD
12, TRYK_B_Coyotebackpack_BLK
12, TRYK_B_Coyotebackpack_WH
12, TRYK_B_Alicepack
12, TRYK_B_Medbag
12, TRYK_B_Medbag_OD
12, TRYK_B_Medbag_BK
12, TRYK_B_Medbag_ucp
12, TRYK_B_Belt
12, TRYK_B_Belt_BLK
12, TRYK_B_Belt_CYT
12, TRYK_B_Belt_tan
12, TRYK_B_Belt_br
12, TRYK_B_Belt_GR
12, TRYK_B_Belt_AOR1
12, TRYK_B_Belt_AOR2
12, TRYK_B_BAF_BAG_BLK
12, TRYK_B_BAF_BAG_CYT
12, TRYK_B_BAF_BAG_OD
12, TRYK_B_BAF_BAG_rgr
12, TRYK_B_BAF_BAG_mcamo
12, TRYK_B_tube_cyt
12, TRYK_B_tube_od
12, TRYK_B_tube_blk
12, TRYK_B_FieldPack_Wood
12, TRYK_Winter_pack