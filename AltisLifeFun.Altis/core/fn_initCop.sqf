#include "..\script_macros.hpp"
/*
    File: fn_initCop.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Cop Initialization file.
*/
private "_end";
player addRating 9999999;
if(playerSide in [west,independent]) then {(unitBackpack player) setObjectTextureGlobal [0,""];};
waitUntil {!(isNull (findDisplay 46))};
_end = false;

if (life_blacklisted) exitWith {
    ["Blacklisted",false,true] call BIS_fnc_endMission;
    sleep 30;
};

if (!(str(player) in [""])) then {
    if ((FETCH_CONST(life_coplevel) isEqualTo 0) && (FETCH_CONST(life_adminlevel) isEqualTo 0)) then {
        ["NotWhitelisted",false,true] call BIS_fnc_endMission;
        sleep 35;
    };
};

[] spawn life_fnc_placeablesInit;

player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.

[] spawn
{
      while {true} do
      {
           waitUntil {uniform player == "U_B_CombatUniform_mcam_tshirt"};
           player setObjectTextureGlobal [0,"textures\cop\human\polizei_uniform.paa"];
            waitUntil {uniform player != "U_B_CombatUniform_mcam_tshirt"};
     };
};

[] spawn
{
      while {true} do
      {
           waitUntil {uniform player == "U_B_CombatUniform_mcam"};
           player setObjectTextureGlobal [0,"textures\cop\human\polizei_uniform.paa"];
            waitUntil {uniform player != "U_B_CombatUniform_mcam"};
     };
};

[] spawn
{
      while {true} do
      {
           waitUntil {uniform player == "U_B_CombatUniform_mcam_vest"};
           player setObjectTextureGlobal [0,"textures\cop\human\sek.paa"];
            waitUntil {uniform player != "U_B_CombatUniform_mcam_vest"};
     };
};

[] spawn
{
      while {true} do
      {
           waitUntil {uniform player == "U_B_CombatUniform_mcam_worn"};
           player setObjectTextureGlobal [0,"textures\cop\human\prasen.paa"];
            waitUntil {uniform player != "U_B_CombatUniform_mcam_worn"};
     };
};

if(playerSide in [west,independent]) then {(unitBackpack player) setObjectTextureGlobal [0,""];};