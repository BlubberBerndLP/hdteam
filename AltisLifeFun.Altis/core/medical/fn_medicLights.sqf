/*
	@Version: 1.0
	@Author: Tonic
	@Edited: 28.08.2013
*/
private ["_vehicle","_lightRed","_lightBlue","_lightleft","_lightright","_leftRed","_brightness","_attach"];

_vehicle = _this select 0;

if (isNil "_vehicle" || isNull _vehicle || !(_vehicle getVariable "lights")) exitWith {};

switch (typeOf _vehicle) do {
	case "B_MRAP_01_F": {_attach = [[-1, -2.8, 0.55], [1, -2.8, 0.55]]; }; 
    case "C_Hatchback_01_grey_F": { _attach = [[-0.6, 2, -0.95], [0.6, 2, -0.95]]; };
	case "C_Hatchback_01_sport_F": { _attach = [[-0.6, 2, -0.95], [0.6, 2, -0.95]]; };
	case "C_Hatchback_01_sport_blue_F": { _attach = [[-0.6, 2, -0.95], [0.6, 2, -0.95]]; };
	case "C_Offroad_01_F": { _attach = [[-0.37, 0.0, 0.56], [0.37, 0.0, 0.56]]; };
	case "C_SUV_01_F": { _attach = [[-0.4, 2.3, -0.55], [0.4, 2.3, -0.52]]; };
	case "SUV_01_base_grey_F": { _attach = [[-0.4, 2.3, -0.55], [0.4, 2.3, -0.52]]; };
	case "SUV_01_base_orange_F": { _attach = [[-0.4, 2.3, -0.55], [0.4, 2.3, -0.52]]; };
	case "SUV_01_base_black_F": { _attach = [[-0.4, 2.3, -0.55], [0.4, 2.3, -0.52]]; };
	case "C_Van_01_box_F": {_attach =  [[-0.7, -0.25, 1.5],[0.7, -0.25, 1.5]];};
};

_lightRed = [0.1, 0.1, 20];
_lightBlue = [0.1, 0.1, 20];

_lightleft = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
sleep 0.001;
_lightleft setLightColor _lightRed;
_lightleft setLightBrightness 0;
_lightleft lightAttachObject [_vehicle, _attach select 0];
_lightleft setLightAttenuation [0.181, 0, 1000, 130];
_lightleft setLightIntensity 20;
_lightleft setLightFlareSize 0.38;
_lightleft setLightFlareMaxDistance 150;
_lightleft setLightUseFlare true;
_lightleft setLightDayLight true;

_lightright = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
sleep 0.002;
_lightright setLightColor _lightBlue;
_lightright setLightBrightness 0;
_lightright lightAttachObject [_vehicle, _attach select 1];
_lightright setLightAttenuation [0.181, 0, 1000, 130];
_lightright setLightIntensity 20;
_lightright setLightFlareSize 0.38;
_lightright setLightFlareMaxDistance 150;
_lightright setLightUseFlare true;
_lightright setLightDayLight true;

if (sunOrMoon < 1) then {
	_brightness = 10;
} else {
	_brightness = 11;
};

_leftRed = true;  
while {(alive _vehicle)} do { 
	if (!(_vehicle getVariable "lights")) exitWith {};
	if (_leftRed) then {  
		_leftRed = false;  
		_lightright setLightBrightness 0;  
		sleep 0.009;
		_lightleft setLightBrightness _brightness;  
	} else {  
		_leftRed = true;  
		_lightleft setLightBrightness 0;  
		sleep 0.009;
		_lightright setLightBrightness _brightness;  
	};
	sleep 0.22;  
};  
deleteVehicle _lightleft;
deleteVehicle _lightright;