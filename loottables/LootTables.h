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
	= <Group Name>
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
	chance to spawn a Banana.

	///////////////////////////////////////////////////////////////////////////////
	// Loot Tables
	///////////////////////////////////////////////////////////////////////////////

	Defines which item group spawns in which building type. The loot table itself
	is linked with a building in exile_server_config.pbo/config/CfgBuildings. Spawn
	chances work like for items.

	Syntax:
	> <Loot Table Name>
	<Spawn Chance Within Loot Table>,<Group Name>
*/



/*
	Loot Tables
*/

///////////////////////////////////////////////////////////////////////////////
// Slums/Ghetto, Farms, Village Houses, Castle etc.
// Spawn Guerilla things :)
///////////////////////////////////////////////////////////////////////////////
> CivillianLowerClass
10, Trash
28, Food
25, Drinks
24, Pistols
22, PistolAmmo
23, PistolAttachments
20, SMG
20, SMGAmmo
3, SMGAttachments
20, CivilianClothing
11, CivilianBackpacks
5, CivilianVests
20, CivilianHeadgear
10, CivilianItems
1, Restraints
10, Chemlights
10, RoadFlares
15, GuerillaClothing
14, GuerillaBackpacks
13, GuerillaVests
13, GuerillaHeadgear
20, CUPShotgun

///////////////////////////////////////////////////////////////////////////////
// Apartments, Offices etc.
///////////////////////////////////////////////////////////////////////////////
> CivillianUpperClass
10, Trash
30, Food
20, Drinks
8, Pistols
5, PistolAmmo
3, PistolAttachments
14, SMG
13, SMGAmmo
13, SMGAttachments
20, CUPAssaultRifles
20, CUPAmmunition
6, RifleAttachments
20, CivilianClothing
11, CivilianBackpacks
9, CivilianVests
20, CivilianHeadgear
10, CivilianItems
10, Chemlights
8, DLCOptics
10, RoadFlares
1, Restraints
18, GuerillaClothing
18, GuerillaBackpacks
18, GuerillaVests
18, GuerillaHeadgear

///////////////////////////////////////////////////////////////////////////////
// Kiosks, Supermarkets etc.
///////////////////////////////////////////////////////////////////////////////
> Shop
20, Trash
25, Food
25, Drinks
10, Pistols
2, PistolAmmo
1, PistolAttachments
15, SMG
11, SMGAmmo
10, SMGAttachments
5, CivilianBackpacks
1, CivilianClothing
3, CivilianHeadgear
1, CivilianVests
7, CivilianItems
5, Chemlights
5, RoadFlares
4, SmokeGrenades
3, IndustrialItems
3, Restraints
3, MedicalItems

///////////////////////////////////////////////////////////////////////////////
// Construction Sites, Warehouses, Research etc.
///////////////////////////////////////////////////////////////////////////////
> Industrial
20, Trash
40, IndustrialItems
25, Vehicle
15, RoadFlares
5, Restraints
10, Pistols
2, PistolAmmo
5, SMG
5, SMGAmmo
5, SMGAttachments

///////////////////////////////////////////////////////////////////////////////
// Factories
///////////////////////////////////////////////////////////////////////////////
> Factories
10, Electronics
40, Trash
50, IndustrialItems
15, SMG
11, SMGAmmo
5, SMGAttachments

///////////////////////////////////////////////////////////////////////////////
// Fuel Stations, Garages, Workshops etc.
///////////////////////////////////////////////////////////////////////////////
> VehicleService
20, Trash
25, IndustrialItems
40, Vehicle
15, RoadFlares
5, Restraints
4, SmokeGrenades
5, Chemlights
10, CUPShotgun
10, CUPAmmunition
8, Pistols
5, PistolAmmo
3, PistolAttachments
17, SMG
17, SMGAmmo
17, SMGAttachments

///////////////////////////////////////////////////////////////////////////////
// Towers, Barracks, Hangars etc.
///////////////////////////////////////////////////////////////////////////////
> Military
20, Trash
4, CivilianItems
24, GuerillaItems
13, HEGrenades
23, UGLFlares
23, UGLSmokes
13, HandGrenades
23, SmokeGrenades
5, Restraints
5, MedicalItems
25, GuerillaClothing
35, MilitaryClothing
24, GuerillaBackpacks
33, MilitaryBackpacks
23, GuerillaVests
33, MilitaryVests
33, DLCVests
23, GuerillaHeadgear
33, MilitaryHeadgear
1, Rebreathers
39, Rifles
39, RifleAmmo
33, RifleAttachments
25, LMG
25, LMGAmmo
23, Snipers
22, SniperAmmo
12, SniperAttachments
22, DLCRifles
25, DLCAmmo
17, DLCOptics
21, DLCSupressor
20, Bipods
5, Explosives
25, CUPSniperRifles
5, CUPAmmunition

///////////////////////////////////////////////////////////////////////////////
// Hospital, Medevac etc. (Does not spawn on Altis!)
///////////////////////////////////////////////////////////////////////////////
> Medical
30, Trash
70, MedicalItems

///////////////////////////////////////////////////////////////////////////////
// Light Houses + Life Guard Towers + Castles
///////////////////////////////////////////////////////////////////////////////
> Tourist
14, GuerillaItems
15, GuerillaClothing
14, GuerillaBackpacks
13, GuerillaVests
13, GuerillaHeadgear
10, MilitaryBackpacks
10, MilitaryHeadgear
25, Food
25, Drinks
8, Pistols
5, PistolAmmo
3, PistolAttachments
8, CUPPistols
4, CUPAmmunition
1, DLCGhillies
2, SniperAmmo
2, SniperAttachments
2, DLCAmmo
2, DLCOptics
2, DLCSupressor
20, CivilianItems
4, HandGrenades
4, Restraints
15, MedicalItems
1, Explosives