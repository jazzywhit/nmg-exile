////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// 	DonkeyPunch Arma 3 for Exile Addon Mod
// 	by DirtySanchez (aka. =RAV=MusTanG)
//	a3_dpExile_A3Addons_Structures_Mini
//	config.cpp
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DonkeyPunch_Exile_Addons_Security
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets"};
	};
};
class CfgFunctions 
{
	class DonkeyPunch_Security 
	{
		class bootstrap 
		{
			file = "\a3_dpExile_A3Addons_Structures_Mini\bootstrap";
			class preInit 
			{
				preInit = 1;
			};
		};
	};
};