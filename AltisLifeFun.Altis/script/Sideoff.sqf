// **********  Disclaimer *********** //
//   Script modified by ThirtySeven             
//     Nur mit genehmigung von           
//        ThirtySeven nutzbar
// 		Sollten sie dagegen Verstoßen
//  Werden wir rechtliche Schritte gegen
// 			Sie einleiten
//
//
// 			Original by
//		Team-Atomic Thanks for Use! 
// **********  Disclaimer *********** //
[] spawn {
	disableSerialization;
	DS_really_loud_sounds = {[60,15] call TON_fnc_usec_pitchWhine;for "_i" from 1 to 15 do {playSound format ["%1",_this select 0];};};
	DS_double_cut = {1 cutText [format ["%1",_this select 0],"PLAIN DOWN"];2 cutText [format ["%1",_this select 0],"PLAIN"];};
	DS_slap_them = {_randomnr = [2,-1] call BIS_fnc_selectRandom;(vehicle player) SetVelocity [_randomnr * random (4) * cos getdir (vehicle player), _randomnr * random (4) * cos getdir (vehicle player), random (4)];};
	
	TON_fnc_usec_pitchWhine = 
	{
		_visual = _this select 0;
		_sound = _this select 1;
		//affect the player
		0 fadeSound 0;
		playMusic ["PitchWhine",0];
		if (!r_player_unconscious) then 
		{
			_visual call fnc_usec_bulletHit;
			_sound fadeSound 1;
		};
		r_pitchWhine = true;
		[] spawn 
		{
			sleep 32;
			r_pitchWhine = false;
		};
	};
	
	while {true} do {
		waitUntil {sleep 1;((!isNull findDisplay 63) && (!isNull findDisplay 55))};
		if (ctrlText ((findDisplay 55) displayCtrl 101) == "\A3\ui_f\data\igui\rscingameui\rscdisplayvoicechat\microphone_ca.paa") then 
		{
			if (ctrlText ((findDisplay 63) displayCtrl 101) == "Side Channel") then 
			{
				[] spawn {
					if (isNil "reset_timer") then {
						reset_timer = true;
						sleep 90;
						disconnect_me = nil;
						warn_one = nil;
						warn_last = nil;
						reset_timer = nil;
					};
				};
				if (isNil "disconnect_me") then {disconnect_me = 0;} else {disconnect_me = disconnect_me + 1;};
				if (disconnect_me == 0) then {
					if (isNil "warn_one") then {
						warn_one = true;
						systemChat ("Im Side-Chat wird nicht gesprochen. Das ist die erste und letzte Warnung!");
						[] spawn DS_slap_them;
						//["beat04"] spawn DS_really_loud_sounds;
						["IM SIDE-CHAT WIRD NICHT GESPROCHEN"] spawn DS_double_cut;
					};
				};
				if (disconnect_me >= 1) then {
					if (isNil "warn_last") then {
						warn_last = true;
						playMusic ["PitchWhine",0];
						[] spawn DS_slap_them;
						["Bye"] spawn DS_really_loud_sounds;
						["Du wolltest es ja so..."] spawn DS_double_cut;
						1 fademusic 10;
						1 fadesound 10;
						disableUserInput true;
						systemChat ("Du wurdest gewarnt.");
						sleep 15;
						disableUserInput false;
						endMission "END1";
					};
				};
			};
		};
		sleep 1;
	};
};