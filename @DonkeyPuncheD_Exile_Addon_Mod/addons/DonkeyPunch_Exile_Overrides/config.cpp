////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// 	DonkeyPunch Arma 3 for Exile Addon Mod
// 	by DirtySanchez (aka. =RAV=MusTanG)
//	DonkeyPunch_Exile_Overrides
//	config.cpp
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DonkeyPunch_Exile_Overrides_DS
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","DonkeyPunch_Exile_Addons_Security"};
	};
};
class CfgFunctions 
{
	class DonkeyPunch_Exile_Functions_Init 
	{
		class bootstrap 
		{
			file = "\DonkeyPunch_Exile_Overrides\bootstrap";
			class preInit 
			{
				preInit = 1;
			};
		};
	};
};
#include "code\CfgHints.hpp"
#include "code\CfgLocationTypes.hpp"
#include "code\CfgWorlds.hpp"
//#include "code\CfgXM8.hpp"
class RscText;
class RscStructuredText;
class RscPicture;
class RscVignette;
class RscProgress;
class ProgressMap;
class RscMapControl;
class RscListBox;
class RscButton;
class RscControlsGroup;
class RscPictureKeepAspect;
#include "code\RscExileLoadingScreen.hpp"
#include "code\RscExileSelectSpawnLocationDialog.hpp"
class RscTitles
{
	titles[] = {};
	
	#include "code\RscTitles\RscExileConstructionMode.hpp"
	#include "code\RscTitles\RscExileHUD.hpp"
	#include "code\RscTitles\RscExileRulezMode.hpp"
	#include "code\RscTitles\RscExileKeyLegendMode.hpp"
	
};