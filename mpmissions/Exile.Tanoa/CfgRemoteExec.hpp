class CfgRemoteExec
{
	class Functions
	{
		mode = 1;
		jip = 0;
		class fnc_AdminReq { allowedTargets=2; };
		class ExileServer_system_network_dispatchIncomingMessage { allowedTargets=2; };
		class AVS_fnc_rearmVehicle									{ allowedTargets=2; };
        class AVS_fnc_refuelVehicle									{ allowedTargets=2; };
        class AVS_fnc_fillCanister									{ allowedTargets=2; };
        class bloodlust_onunithitpart                               { allowedTargets=0; }; //TODO test this with other values
	};
	class Commands
	{
		mode=0;
		jip=0;
	};
};