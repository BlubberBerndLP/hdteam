/*
	File: welcome.sqf
	Author: Losifga
*/
waitUntil{ !isNull(findDisplay 38500)};
waitUntil{ isNull(findDisplay 38500)};


_onScreenTime = 4;

_role1 = "Willkommen auf";
_role1names = ["HDTeam Life"];
_role2 = "[Funserver]";
_role2names = ["Version 3.1"];
_role4 = "RDM und VDM ist VERBOTEN";
_role4names = ["Serverregeln findet ihr auf der HDTeam.de"];

{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='1.00' color='#2EFEF7' align='middle'>%1<br /></t>", _memberFunction];
_finalText = _finalText + "<t size='1.00' color='##000000' align='middle'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.5);
[
_finalText,
[safezoneX + safezoneW - 0.8,0.50], //DEFAULT: 0.5,0.35
[safezoneY + safezoneH - 0.8,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [
//The list below should have exactly the same amount of roles as the list above
[_role1, _role1names],
[_role2, _role2names],
[_role4, _role4names],
];


