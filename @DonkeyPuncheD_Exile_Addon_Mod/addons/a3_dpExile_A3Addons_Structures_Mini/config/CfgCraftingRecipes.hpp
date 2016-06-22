class CfgCraftingRecipes
{
	
class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftBushKitGreen: Exile_AbstractCraftingRecipe
{
	name = "Craft a Bush Kit (Green)";
	pictureItem = "Exile_Item_BushKit_Green";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_BushKit_Green"}
	};
	components[] = 
	{
		{10, "Exile_Item_Leaves"},
		{5, "Exile_Item_WoodSticks"},
		{1, "Exile_Item_Rope"}
	};
};
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"}
	};
};
class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	components[] = 
	{
		{20, "Exile_Item_PlasticBottleEmpty"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
/*
class CraftWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Draw-Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Rope"}
	};
};
*/
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
};
class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
// Custom Recipes

class TiefromRope: Exile_AbstractCraftingRecipe
{
    name = "Craft Restraint";
    pictureItem = "Exile_Item_ZipTie";
    returnedItems[] =
    {
        {1, "Exile_Item_ZipTie"}
    };
    components[] =
    {
        {1, "Exile_Item_Rope"}
    };
};

class TiefromTape: Exile_AbstractCraftingRecipe
{
    name = "Craft Restraint";
    pictureItem = "Exile_Item_ZipTie";
    returnedItems[] =
    {
        {1, "Exile_Item_ZipTie"}
    };
    components[] =
    {
        {1, "Exile_Item_DuctTap"}
    };
};


class IEDLandSmall_Remote_Mag: Exile_AbstractCraftingRecipe
{
	name = "Small Crafted IED";
	pictureItem = "IEDLandSmall_Remote_Mag";
	returnedItems[] = 
	{
		{1, "CUP_IED_V3_M"}
	};
	components[] = 
	{
		{2, "Exile_Item_Metalboard"},
		{4, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_DuctTape"}
	};
};
class IEDLandbig_Remote_Mag: Exile_AbstractCraftingRecipe
{
	name = "Large Crafted IED";
	pictureItem = "IEDLandBig_Remote_Mag";
	returnedItems[] = 
	{
		{1, "CUP_IED_V4_M"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"},
		{10, "Exile_Item_JunkMetal"},
		{5, "Exile_Item_FuelCanisterFull"},
		{2, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_DuctTape"}
	};
};
class Exile_Item_CookingPot: Exile_AbstractCraftingRecipe
{
    name = "Craft Cookingpot";
    pictureItem = "Exile_Item_CookingPot";
    returnedItems[] =
    {
        {1, "Exile_Item_CookingPot"}
    };
    components[] =
    {
        {1, "Exile_Item_JunkMetal"}
    };
};

class Exile_melee_Axe: Exile_AbstractCraftingRecipe
{
    name = "Craft Axe";
    pictureItem = "Exile_melee_Axe";

    returnedItems[] =
    {
        {1, "Exile_melee_Axe"}
    };
    components[] =
    {
        {2, "Exile_Item_JunkMetal"},
        {1, "Exile_Item_WoodLog"}
    };
};

class Exile_Item_SafeKit: Exile_AbstractCraftingRecipe
{
    name = "Craft Safe";
    pictureItem = "Exile_Item_SafeKit";
    requiresFire = 1;
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "Exile_Item_SafeKit"}
    };
    components[] =
    {
        {2, "Exile_Item_MetalPole"},
        {5, "Exile_Item_MetalBoard"},
        {1, "Exile_Item_Codelock"}
    };
};

class Exile_Item_Camo_TentKit: Exile_AbstractCraftingRecipe
{
    name = "Craft Camo Tent";
    pictureItem = "Exile_Item_Camo_TentKit";
    returnedItems[] =
    {
        {1, "Exile_Item_Camo_TentKit"}
    };
    components[] =
    {
        {2, "Exile_Item_DuctTape"},
        {4, "Exile_Item_WoodPlank"},
        {2, "Exile_Item_Rope"}
    };
};

class Rangefinder: Exile_AbstractCraftingRecipe
{
    name = "Craft Rangefinder";
    pictureItem = "rangefinder";
    requiresFire = 1;
    returnedItems[] =
    {
        {1, "Rangefinder"}
    };
    components[] =
    {
        {2, "Exile_Item_LightBulb"},
        {1, "Exile_Item_JunkMetal"},
        {1, "Exile_Item_Rope"}
    };
};

//Medical Items
class CraftBandage: Exile_AbstractCraftingRecipe
{
    name = "Craft Bandage";
    pictureItem = "Exile_Item_Bandage";
    returnedItems[] =
    {
        {1, "Exile_Item_Bandage"}
    };
    components[] =
    {

        {2, "Exile_Item_ToiletPaper"}
        
    };
};
	
class CraftVishpirin: Exile_AbstractCraftingRecipe
{
    name = "Craft Vishpirin";
    pictureItem = "Exile_Item_Vishpirin";
    returnedItems[] =
    {
        {1, "Exile_Item_Vishpirin"}
    };
    components[] =
    {

        {5, "Exile_Item_Bandage"}
        
    };
};
	
class CraftInstaDoc: Exile_AbstractCraftingRecipe
{
    name = "Craft InstaDoc";
    pictureItem = "Exile_Item_InstaDoc";
    returnedItems[] =
    {
        {1, "Exile_Item_InstaDoc"}
    };
    components[] =
    {

        {4, "Exile_Item_Vishpirin"}
        
    };
};

class CraftCanOpener: Exile_AbstractCraftingRecipe
{
    name = "Craft Can Opener";
    pictureItem = "Exile_Item_CanOpener";
    returnedItems[] =
    {
        {1, "Exile_Item_CanOpener"}
    };
    components[] =
    {

        {1, "Exile_Item_Can_Empty"}
        
    };
};

//DP Crafting
	class DP_Craft_HBarrier_3: Exile_AbstractCraftingRecipe
	{
		name = "Craft HBarrier 3 Kit";
		pictureItem = "Land_HBarrier_3_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_HBarrier_3_F_Kit"}
		};
		components[] = 
		{
			{3, "DP_Item_HBarrier_1_F_Kit"}
		};
	};
	class DP_Craft_HBarrier_5: Exile_AbstractCraftingRecipe
	{
		name = "Craft HBarrier 5 Kit";
		pictureItem = "Land_HBarrier_5_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_HBarrier_5_F_Kit"}
		};
		components[] = 
		{
			{5, "DP_Item_HBarrier_1_F_Kit"}
		};
	};
	class DP_Craft_HBarrierTower: Exile_AbstractCraftingRecipe
	{
		name = "Craft HBarrier Tower";
		pictureItem = "Land_HBarrierTower_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_HBarrierTower_F_Kit"}
		};
		components[] = 
		{
			{3, "DP_Item_HBarrier_3_F_Kit"},
			{5, "DP_Item_HBarrier_1_F_Kit"}
		};
	};
	class DP_Craft_HBarrierWall_corner: Exile_AbstractCraftingRecipe
	{
		name = "Craft HBarrier Wall corner";
		pictureItem = "Land_HBarrierWall_corner_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_HBarrierWall_corner_F_Kit"}
		};
		components[] = 
		{
			{3, "DP_Item_HBarrier_3_F_Kit"},
			{2, "DP_Item_HBarrier_1_F_Kit"}
		};
	};
	class DP_Craft_HBarrierWall_corridor1: Exile_AbstractCraftingRecipe
	{
		name = "Craft HBarrier Wall Corridor";
		pictureItem = "Land_HBarrierWall_corridor_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_HBarrierWall_corridor_F_Kit"}
		};
		components[] = 
		{
			{4, "DP_Item_HBarrier_Big_F_Kit"}
		};
	};
	class DP_Craft_HBarrierWall_corridor2: Exile_AbstractCraftingRecipe
	{
		name = "Craft HBarrier Wall Corridor";
		pictureItem = "Land_HBarrierWall_corridor_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_HBarrierWall_corridor_F_Kit"}
		};
		components[] = 
		{
			{4, "DP_Item_HBarrierBig_F_Kit"}
		};
	};
	class DP_Craft_HBarrierWall41: Exile_AbstractCraftingRecipe
	{
		name = "Craft HBarrier Wall 4";
		pictureItem = "Land_HBarrierWall4_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_HBarrierWall4_F_Kit"}
		};
		components[] = 
		{
			{3, "DP_Item_HBarrier_Big_F_Kit"}
		};
	};
	class DP_Craft_HBarrierWall42: Exile_AbstractCraftingRecipe
	{
		name = "Craft HBarrier Wall 4";
		pictureItem = "Land_HBarrierWall4_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_HBarrierWall4_F_Kit"}
		};
		components[] = 
		{
			{3, "DP_Item_HBarrierBig_F_Kit"}
		};
	};
	class DP_Craft_HBarrierWall6: Exile_AbstractCraftingRecipe
	{
		name = "Craft HBarrier Wall 6";
		pictureItem = "Land_HBarrierWall6_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_HBarrierWall6_F_Kit"}
		};
		components[] = 
		{
			{6, "DP_Item_HBarrier_3_F_Kit"}
		};
	};
	class DP_Craft_BagFence_Short: Exile_AbstractCraftingRecipe
	{
		name = "Craft BagFence Short Kit";
		pictureItem = "Land_BagFence_Short_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_BagFence_Short_F_Kit"}
		};
		components[] = 
		{
			{3, "DP_Item_BagFence_End_F_Kit"}
		};
	};
	class DP_Craft_BagFence_Corner_F: Exile_AbstractCraftingRecipe
	{
		name = "Craft BagFence Corner Kit";
		pictureItem = "Land_BagFence_Corner_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_BagFence_Corner_F_Kit"}
		};
		components[] = 
		{
			{3, "DP_Item_BagFence_End_F_Kit"}
		};
	};
	class DP_Craft_BagFence_Round_F: Exile_AbstractCraftingRecipe
	{
		name = "Craft BagFence Round Kit";
		pictureItem = "Land_BagFence_Round_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_BagFence_Round_F_Kit"}
		};
		components[] = 
		{
			{3, "DP_Item_BagFence_End_F_Kit"}
		};
	};
	class DP_Craft_BagFence_Long1: Exile_AbstractCraftingRecipe
	{
		name = "Craft BagFence Long Kit";
		pictureItem = "Land_BagFence_Long_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_BagFence_Long_F_Kit"}
		};
		components[] = 
		{
			{6, "DP_Item_BagFence_End_F_Kit"}
		};
	};
	class DP_Craft_BagFence_Long2: Exile_AbstractCraftingRecipe
	{
		name = "Craft BagFence Long Kit";
		pictureItem = "Land_BagFence_Long_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_BagFence_Long_F_Kit"}
		};
		components[] = 
		{
			{2, "DP_Item_BagFence_Short_F_Kit"}
		};
	};
	class DP_Craft_WoodShelf_Khaki: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Shelf Khaki";
		pictureItem = "Land_ShelvesWooden_khaki_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_ShelvesWooden_khaki_MaD"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodPlank"},
			{4, "Exile_Item_MetalPole"}
		};
	};
	class DP_Craft_WoodShelf: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Shelf";
		pictureItem = "Land_ShelvesWooden_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_ShelvesWooden_MaD"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodPlank"},
			{4, "Exile_Item_MetalPole"}
		};
	};
	class DP_Craft_WoodShelf_Blue: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Shelf Blue";
		pictureItem = "Land_ShelvesWooden_blue_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_ShelvesWooden_blue_MaD"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodPlank"},
			{4, "Exile_Item_MetalPole"}
		};
	};
	class DP_Craft_MetalShelf: Exile_AbstractCraftingRecipe
	{
		name = "Craft Metal Shelf";
		pictureItem = "Land_ShelvesMetal_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_ShelvesMetal_MaD"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodPlank"},
			{4, "Exile_Item_MetalPole"}
		};
	};
	class DP_Craft_Wood_Rack: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wooden Rack";
		pictureItem = "Land_Metal_wooden_rack_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_Metal_wooden_rack_MaD"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodPlank"},
			{4, "Exile_Item_MetalPole"}
		};
	};
	class DP_Craft_Metal_rack_Tall: Exile_AbstractCraftingRecipe
	{
		name = "Craft Metal Rack Tall";
		pictureItem = "Land_Metal_rack_Tall_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_Metal_rack_Tall_MaD"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodPlank"},
			{4, "Exile_Item_MetalPole"}
		};
	};
	class DP_Craft_Metal_rack: Exile_AbstractCraftingRecipe
	{
		name = "Craft Metal Rack";
		pictureItem = "Land_Metal_rack_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_Metal_rack_MaD"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodPlank"},
			{4, "Exile_Item_MetalPole"}
		};
	};
	class DP_Craft_CNC_4Wall_Kit: Exile_AbstractCraftingRecipe
	{
		name = "Craft CNC 4 Wall Kit";
		pictureItem = "Land_Metal_rack_F";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "DP_Item_Land_CncWall4_F_Kit"}
		};
		components[] = 
		{
			{4, "DP_Item_Land_CncWall1_F_Kit"}
		};
	};
};