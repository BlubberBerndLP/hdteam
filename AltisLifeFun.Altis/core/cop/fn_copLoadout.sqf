/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: Itsyuka
    
    Description:
    Loads the cops out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

if((call life_coplevel) == 1) then
{
	player addUniform "U_Rangemaster";
	player addVest "V_TacVest_blk_POLICE";
	player addBackpack "B_Carryall_cbr";
	[player, "hgun_P07_snds_F", 2] call BIS_fnc_addWeapon;
};
 
if((call life_coplevel) == 2) then
{
	player addUniform "U_Rangemaster";
	player addVest "V_TacVest_blk_POLICE";
	player addBackpack "B_Carryall_cbr";
	[player, "hgun_P07_snds_F", 2] call BIS_fnc_addWeapon;
};
 
if((call life_coplevel) == 3) then
{
	player addUniform "U_Rangemaster";
	player addVest "V_TacVest_blk_POLICE";
	player addBackpack "B_Carryall_cbr";
	[player, "hgun_P07_snds_F", 2] call BIS_fnc_addWeapon;
};
 
if((call life_coplevel) == 4) then
{
	player addUniform "U_Rangemaster";
	player addVest "V_TacVest_blk_POLICE";
	player addBackpack "B_Carryall_cbr";
	[player, "Binocular", 1] call BIS_fnc_addWeapon;
	[player, "hgun_P07_snds_F", 2] call BIS_fnc_addWeapon;
};

if((call life_coplevel) == 5) then
{
	player addUniform "U_Rangemaster";
	player addVest "V_TacVest_blk_POLICE";
	player addBackpack "B_Carryall_cbr";
	[player, "Binocular", 1] call BIS_fnc_addWeapon;
	[player, "hgun_P07_snds_F", 2] call BIS_fnc_addWeapon;
};
 
if((call life_coplevel) == 6) then
{
	player addUniform "U_B_CombatUniform_mcam_vest";
	player addVest "V_PlateCarrier1_blk";
	player addBackpack "B_Carryall_cbr";
	[player, "Binocular", 1] call BIS_fnc_addWeapon;
	[player, "arifle_MX_SW_Hamr_pointer_F", 5] call BIS_fnc_addWeapon;
	[player, "hgun_P07_snds_F", 5] call BIS_fnc_addWeapon;
};


if((call life_coplevel) == 7) then
{
	player addUniform "U_Rangemaster";
	player addVest "V_TacVest_blk_POLICE";
	player addBackpack "B_Carryall_cbr";
	[player, "hgun_P07_snds_F", 5] call BIS_fnc_addWeapon;
	[player, "Rangefinder", 1] call BIS_fnc_addWeapon;
};

if((call life_coplevel) == 8) then
{
	player addUniform "U_Rangemaster";
	player addVest "V_TacVest_blk_POLICE";
	player addBackpack "B_Carryall_cbr";
	[player, "Rangefinder", 1] call BIS_fnc_addWeapon;
	[player, "hgun_P07_snds_F", 5] call BIS_fnc_addWeapon;
	[player, "Rangefinder", 1] call BIS_fnc_addWeapon;
};


/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;