/*
	File: fn_HDTeam.sqf
	Author: HDTeam
*/
private _vehicle = param[0,objNull,[objNull]];

if(isNull _vehicle) exitWith {};
if(isNil {_vehicle getVariable "hdteam"}) exitWith {};

while {true} do
{
	if(!(_vehicle getVariable "hdteam")) exitWith {};
	if(count (crew (_vehicle)) == 0) then {_vehicle setVariable["hdteam",false,true]};
	if(!alive _vehicle) exitWith {};
	if(isNull _vehicle) exitWith {};

	_vehicle say3D "hdteam";
	sleep 8;

	if(!(_vehicle getVariable "hdteam")) exitWith {};
};