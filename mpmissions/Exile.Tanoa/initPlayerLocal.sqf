///////////////////////////////////////////////////////////////////////////////
// Static Objects
///////////////////////////////////////////////////////////////////////////////

// Taken away for now
//#include "initServer.sqf"

if (!hasInterface || isServer) exitWith {};

///////////////////////////////////////////////////////////////////////////
// Hardware Trader
///////////////////////////////////////////////////////////////////////////
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 269.261;
_workBench setPosATL [10067.4,11765.8,0.219421];

_trader =
[
    "Exile_Trader_Hardware",
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Fast Food Trader
///////////////////////////////////////////////////////////////////////////
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 178.904;
_cashDesk setPosATL [10050.9,11780.8,0.561279];

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;
_microwave disableCollisionWith _cashDesk;
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;
_ketchup disableCollisionWith _cashDesk;
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;
_mustard disableCollisionWith _cashDesk;
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

_trader =
[
    "Exile_Trader_Food",
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Armory Trader
///////////////////////////////////////////////////////////////////////////
_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setDir 179.67;
_chair setPosATL [10017.4,11792.5,0.604218];

_trader =
[
    "Exile_Trader_Armory",
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    180,
    _chair
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Equipment Trader
///////////////////////////////////////////////////////////////////////////
_trader =
[
    "Exile_Trader_Equipment",
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["InBaseMoves_Lean1"],
    [10016.8,11778.8,0.504333],
    0
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Specops Trader
///////////////////////////////////////////////////////////////////////////
_trader =
[
    "Exile_Trader_SpecialOperations",
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [10025.3,11771.6,0.0437317],
    0
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Office Trader
///////////////////////////////////////////////////////////////////////////
_trader =
[
    "Exile_Trader_Office",
    "Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [10049.9,11793.4,0.60376],
    33.8611
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Waste Dump Trader
///////////////////////////////////////////////////////////////////////////
_trader =
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [10097.6,11797.5,0.1633],
    257.718
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Aircraft Trader
///////////////////////////////////////////////////////////////////////////
_trader =
[
    "Exile_Trader_Aircraft",
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [9943.3,11786.9,0.0974121],
    92.0921
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Aircraft Customs Trader
///////////////////////////////////////////////////////////////////////////
_trader =
[
    "Exile_Trader_AircraftCustoms",
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [9945.57,11791.9,0.0966187],
    120.515
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Vehicle Trader01
///////////////////////////////////////////////////////////////////////////

_trader =
[
    "Exile_Trader_Vehicle",
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [10091.4,11749.3,0.15329],
	95.4504
]
call ExileClient_object_trader_create;

//_carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
//_carWreck setDir 355.455;
//_carWreck setPosATL [14605.6, 16877.3, 0.0208359];

///////////////////////////////////////////////////////////////////////////
// Vehicle Trader02
///////////////////////////////////////////////////////////////////////////

_trader =
[
    "Exile_Trader_Vehicle",
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [10088.5,11748.2,0.154144],
	273.595
]
call ExileClient_object_trader_create;

//_carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
//_carWreck setDir 355.455;
//_carWreck setPosATL [14605.6, 16877.3, 0.0208359];

///////////////////////////////////////////////////////////////////////////
// Vehicle Customs Trader
///////////////////////////////////////////////////////////////////////////
_trader =
[
    "Exile_Trader_VehicleCustoms",
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [10082.4,11751.3,0.158813],
    62.5279
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Russian Roulette
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_RussianRoulette",
    "",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [9958.05, 11770.1, 0.00143433],
    25.4631
]
call ExileClient_object_trader_create;





//////////////////////////////////////////////////////////////////
/////////////////////////WASTE TRADERS////////////////////////////
//////////////////////////////////////////////////////////////////



//////////////////////////////////
///////////WASTE TRADER///////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [13987.3,10001.9,0.0022583],
    237.834
]
call ExileClient_object_trader_create;



//////////////////////////////////
///////////WASTE TRADER///////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [9820.68,6404.42,0.00130558],
    166.035
]
call ExileClient_object_trader_create;



//////////////////////////////////
///////////WASTE TRADER///////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [4649.66,8445.58,0.00224471],
    311.109
]
call ExileClient_object_trader_create;



//////////////////////////////////
///////////WASTE TRADER///////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [2676.48,12309,0.00143433],
    0.161803
]
call ExileClient_object_trader_create;



//////////////////////////////////
///////////WASTE TRADER///////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [4703.23,3154.68,-0.0056076],
    166.258
]
call ExileClient_object_trader_create;



//////////////////////////////////
///////////WASTE TRADER///////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [11024.9,4216.51,0.00143433],
    156.311
]
call ExileClient_object_trader_create;



//////////////////////////////////
///////////WASTE TRADER///////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [6920.44,7495.86,0.145415],
    198.769
]
call ExileClient_object_trader_create;



//////////////////////////////////////////////////////////////////
////////////////////////AIRCRAFT TRADERS//////////////////////////
//////////////////////////////////////////////////////////////////



//////////////////////////////////
/////////AIRCRAFT TRADER//////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_Aircraft",
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [2297.37,13394.9,0.0966854],
    140.409
]
call ExileClient_object_trader_create;


//////////////////////////////////
/////////AIRCRAFT TRADER//////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_Aircraft",
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [11745,13094,0.0966854],
    50.5575
]
call ExileClient_object_trader_create;


//////////////////////////////////
/////////AIRCRAFT TRADER//////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_Aircraft",
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [6945.5,7501.4,0.0981259],
    169.939
]
call ExileClient_object_trader_create;


//////////////////////////////////
/////////AIRCRAFT TRADER//////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_Aircraft",
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [2114.8,3438.03,0.0966854],
    74.8337
]
call ExileClient_object_trader_create;


//////////////////////////////////
/////////AIRCRAFT TRADER//////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_Aircraft",
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [11673.5,3176.13,0.204403],
    215.471
]
call ExileClient_object_trader_create;




//////////////////////////////////////////////////////////////////
///////////////AIRCRAFT CUSTOM TRADERS TRADERS////////////////////
//////////////////////////////////////////////////////////////////



//////////////////////////////////
/////AIRCRAFT CUSTOM TRADER///////
//////////////////////////////////
_trader =
[
    "Exile_Trader_AircraftCustoms",
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [11743.4,13099.1,0.0966854],
    78.5459
]
call ExileClient_object_trader_create;



//////////////////////////////////
/////AIRCRAFT CUSTOM TRADER///////
//////////////////////////////////
_trader =
[
    "Exile_Trader_AircraftCustoms",
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [6950.79,7499.89,0.0973558],
    190.816
]
call ExileClient_object_trader_create;



//////////////////////////////////
/////AIRCRAFT CUSTOM TRADER///////
//////////////////////////////////
_trader =
[
    "Exile_Trader_AircraftCustoms",
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [11676.5,3171.5,0.1554],
    225.753
]
call ExileClient_object_trader_create;



//////////////////////////////////
/////AIRCRAFT CUSTOM TRADER///////
//////////////////////////////////
_trader =
[
    "Exile_Trader_AircraftCustoms",
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [2116.63,3443.38,0.0966635],
    88.4464
]
call ExileClient_object_trader_create;



//////////////////////////////////
/////AIRCRAFT CUSTOM TRADER///////
//////////////////////////////////
_trader =
[
    "Exile_Trader_AircraftCustoms",
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [2302.22,13396.6,0.0966854],
    144.011
]
call ExileClient_object_trader_create;



//////////////////////////////////////////////////////////////////
//////////////////////////BOAT TRADERS////////////////////////////
//////////////////////////////////////////////////////////////////



//////////////////////////////////
//////////BOAT TRADER/////////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_Boat",
    "Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [3260.17,11002.9,4.82499],
    55.7135
]
call ExileClient_object_trader_create;


//////////////////////////////////
//////////BOAT TRADER/////////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_Boat",
    "Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [2155.15,4679.78,3.27639],
    100.617
]
call ExileClient_object_trader_create;


//////////////////////////////////
//////////BOAT TRADER/////////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_Boat",
    "Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [9492.7,4273.09,11.5124],
    187.041
]
call ExileClient_object_trader_create;


//////////////////////////////////
//////////BOAT TRADER/////////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_Boat",
    "Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [11077.6,13393.1,10.0318],
    187.041
]
call ExileClient_object_trader_create;


//////////////////////////////////
//////////BOAT TRADER/////////////
//////////////////////////////////
_trader =
[
    "Exile_Trader_Boat",
    "Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [9407.28,6184.33,2.37481],
    74.1984
]
call ExileClient_object_trader_create;
