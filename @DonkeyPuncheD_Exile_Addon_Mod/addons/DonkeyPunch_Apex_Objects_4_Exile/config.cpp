/*
	DonkeyPunch Addon for Exile
	A total customization addon for a mod ;)
	by DirtySanchez (aka. =RAV=MusTanG)
	DonkeyPunch_Apex_Objects_4_Exile
*/
#define _ARMA_

class CfgPatches
{
	class DonkeyPunch_AO4E_Buildables
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","DonkeyPunch_Exile_Addons_Security"};
	};
};
#include "Config\CfgMagazines.hpp"

class AbstractConstruction
{
	staticObject = "";
	previewObject = "";
	kitMagazine = "";
	upgradeObject = "";
	refundObjects[] = {};
	requiresTerritory = 1;
	canBePlacedOnRoad = 1;
	class SnapPositions{};
	class SnapObjects{};
};

#include "Config\CfgConstruction.hpp"
class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

class CfgVehicles {
	class ThingX;
	class NonStrategic;
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class House_Small_F: House_F{};
	class Industry_base_F;
	class Infrastructure_base_F;
	class Wall_F;
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
	class Exile_Construction_Abstract_Static: NonStrategic
	{
		scope = 1;
		author = "Exile Mod Team";
		mapSize = 1;
		armor = 10000;
		cost = 1000;
		icon = "iconObject_1x1";
		destrType = "DestructBuilding";
		vehicleclass = "ExileConstructions";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		exileRequiresSimulation = 0;
	};

	#include "Config\CfgApexVehicles.hpp"
	
};
