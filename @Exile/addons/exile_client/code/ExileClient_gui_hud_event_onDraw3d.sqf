/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_icon"];
if (ExileHudIsVisible) then
{
	call ExileClient_gui_hud_renderStatsPanel;
	call ExileClient_gui_hud_renderWeaponPanel;
	call ExileClient_gui_hud_renderGroupPanel;
	call ExileClient_gui_hud_renderVehiclePanel;
	call ExileClient_gui_hud_renderGrenadePanel;
	call ExileClient_gui_notification_thread_notificationProcessor;
	if (ExileClientIsInConstructionMode) then
	{
		if (ExileClientConstructionMode == 3) then
		{
			_icon = if (ExileClientConstructionIsInSelectSnapObjectMode) then { "\exile_client\texture\ui\snap_blue_ca.paa" } else { "\exile_client\texture\ui\snap_yellow_ca.paa" };
			{
				drawIcon3D [_icon, [1, 1, 1, 1], _x, 1, 1, 0];
			}
			forEach ExileClientConstructionPossibleSnapPositions;
		};
	};
};
true