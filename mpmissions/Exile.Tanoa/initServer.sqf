_objects = 
[
    //no objects yet
];

{
    private ["_object"];

    _object = (_x select 0) createVehicle [0,0,0];
    _object setDir (_x select 2);
    _object setPosATL (_x select 1);
    _object allowDamage false;
    _object enableSimulationGlobal false; // :)
}
forEach _objects;