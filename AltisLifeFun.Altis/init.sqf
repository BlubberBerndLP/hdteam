/*
    File: init.sqf
    Author: HDTeam
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "script\welcome.sqf";
[] execVM "script\Sideoff.sqf";
[] execVM "script\gas.sqf";



MAC_fnc_switchMove = {
    private["_object","_anim"];
    _object = _this select 0;
    _anim = _this select 1;

    _object switchMove _anim;
    
};

StartProgress = true;