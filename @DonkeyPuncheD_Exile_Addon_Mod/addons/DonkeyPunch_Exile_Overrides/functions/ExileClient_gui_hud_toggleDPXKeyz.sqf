/**
 * ExileClient_gui_hud_toggleDPXKeyz
 *
 * DonkeyPuncheD Exile Mod
 * DonkeyPunch.INFO
 * © 2016 DirtySanchez
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
 
private["_stopPropagation"];
	if (ExileKeyZisVisible) then
		{
			("ExileClientKeyLegendModeLayer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"]; ; 
			ExileKeyZisVisible = false;
			_stopPropagation = true; 
		}
		else 
		{
			("ExileClientKeyLegendModeLayer" call BIS_fnc_rscLayer) cutRsc ["RscExileKeyLegendMode", "PLAIN", 1, false];
			ExileKeyZisVisible = true;
			_stopPropagation = true; 
		};