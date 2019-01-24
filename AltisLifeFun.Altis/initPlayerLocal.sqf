#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author: HDTeam

    Description:
    Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
    [] call compile PreprocessFileLineNumbers "\life_hc\initHC.sqf";
}; //This is a headless client.

#define CONST(var1,var2) var1 = compileFinal (if (var2 isEqualType "") then {var2} else {str(var2)})
#define LIFE_SETTINGS(TYPE,SETTING) TYPE(missionConfigFile >> "Life_Settings" >> SETTING)


[] execVM "core\init.sqf";

_msg = ["Du hast Fragen oder ein Problem? Wir helfen dir via Teamspeak! GrandTheftAltis.net","Restart immer um: 00:00 04:00 08:00 12:00 16:00 20:00:)",""]; //Die Nachrichten
_zeitabstand = 2000; //

_i = 0;
while { true } do
{
systemChat ( _msg select _i );
_i = _i + 1;
if ( _i == count _msg ) then { _i = 0; };
sleep _zeitabstand;
}

