/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
 * Modified by: Narrow Minded Gaming
 * Not intended for distribution
 */

if (!(isMultiplayer)) exitWith {};
"onPlayerKilled - Player was disabled..." call ExileClient_util_log;
if(ExilePlayerInSafezone)then
{
	call ExileClient_object_player_event_onLeaveSafezone;
};
true
