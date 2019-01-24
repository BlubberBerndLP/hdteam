/*
	Author: Marlon | HDTeam
	Do not touch below
*/
[] spawn {
    if(getNumber(missionConfigFile >> "HDTeam_Purge" >> "Auto") != 1 || !isServer) exitWith {};
    [0] remoteExec ["ht_Purge_fnc_Purge"];
};