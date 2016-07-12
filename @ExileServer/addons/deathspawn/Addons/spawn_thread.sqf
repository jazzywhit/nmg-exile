uiSleep 60;

[ZMB_SpawnCycle, JohnO_fnc_fixedZombieSpawn, [], true] call ExileServer_system_thread_addtask;
[ZMB_SpawnCycle, JohnO_fnc_dynamicZombieSpawn, [], true] call ExileServer_system_thread_addtask;

diag_log "Zombie spawns added to EXILE thread handle";