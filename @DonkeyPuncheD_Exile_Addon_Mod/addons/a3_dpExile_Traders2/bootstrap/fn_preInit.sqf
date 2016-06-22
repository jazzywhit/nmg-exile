/**
 * Pre-Initialization
 *
 * Arma 3 for Exile Mod Addon by DonkeyPunch.INFO
 * www.DonkeyPunch.INFO
 * © 2015 DirtySanchez
 *
 * 
 */
 
private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;

    if (isText (missionConfigFile >> 'CfgExileCustomCode' >> _function)) then
    {
        _file = getText (missionConfigFile >> 'CfgExileCustomCode' >> _function);
    };

    _code = compileFinal (preprocessFileLineNumbers _file);                    

    missionNamespace setVariable [_function, _code];
}
forEach 
[
	['ExileClient_gui_traderDialog_show_BlackMarket', 'a3_dpExile_Traders2\code\ExileClient_gui_traderDialog_show_BlackMarket.sqf'],
	['ExileClient_gui_vehicletraderDialog_show_BlackMarket', 'a3_dpExile_Traders2\code\ExileClient_gui_vehicletraderDialog_show_BlackMarket.sqf'],
	['ExileClient_gui_wasteDumpDialog_show_BlackMarket', 'a3_dpExile_Traders2\code\ExileClient_gui_wasteDumpDialog_show_BlackMarket.sqf'],
	['ExileClient_gui_purchaseTerritoryDialog_show_BlackMarket', 'a3_dpExile_Traders2\code\ExileClient_gui_purchaseTerritoryDialog_show_BlackMarket.sqf'],
	['ExileClient_gui_payTerritoryProtectionMoneyDialog_show_BlackMarket', 'a3_dpExile_Traders2\code\ExileClient_gui_payTerritoryProtectionMoneyDialog_show_BlackMarket.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_show_BlackMarket', 'a3_dpExile_Traders2\code\ExileClient_gui_vehicleCustomsDialog_show_BlackMarket.sqf']
];