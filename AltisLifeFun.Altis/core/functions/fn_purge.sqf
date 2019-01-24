/*	
Author: Demigod		
Description:	Purge Server Event setup. Sends a faction announcement, 
plays a sound file from an object	and toggles a variable.
*/
private["_message"];
if(FETCH_CONST(life_adminlevel) < 5) exitWith {closeDialog 0; hint "You need to be an Admin to use this function.";};
if(life_event) exitWith {closeDialog 0; hint "There is already a server event under-way.";};
life_event = true;
_message = "Die Purge ist nur in Kavala      Das ist kein Test. Dies ist Ihre Notfall-Sendung System Ankündigung der Beginn der jährlichen Purge sanktioniert durch die HDTeam Regierung. Wenn du nicht teilnehmen willst, verlasse die Stadt und laufe zum Stadtrand oder bleibe in einem kleinen Raum in deinem Haus. Alle Notdienste müssen ihre Schicht beenden und nach Hause gehen.";
[[_message,name player,6],"TON_fnc_clientMessage",true,false] spawn life_fnc_MP;
[[Tower1, "purge",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
[[Tower2, "purge",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
//[[Tower3, "purge",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
//[[Tower4, "purge",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
//[[Tower5, "purge",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
//[[Tower6, "purge",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
//[[Tower7, "purge",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
//[[Tower8, "purge",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
//[[Tower9, "purge",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
//[[Tower10, "purge",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
//[[Tower11, "purge",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
//[[Tower12, "purge",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
sleep 70;
_message = "Die Purge ist nur in Kavala     Die Purge beginnt JETZT! Es werden Nachrichten gesendet, die Sie benachrichtigt haben, wie lange für das Ereignis übrig ist. Kämpfen oder verbergen, das ist deine Wahl.<br/><br/>Lassen Sie die Tötung ...<br/><br/><t size='2.5'><t color='#FF1500'>START!!</t></t>";
[[_message,name player,6],"TON_fnc_clientMessage",civilian,false] spawn life_fnc_MP;
sleep 180; 
//For some reason, anything over 250 wouldn't work, so i split them up.
sleep 180;
sleep 180;
_message = "Die Purge ist auf halbem Weg durch! Es sind nur noch 15 Minuten übrig!";
[[_message,name player,6],"TON_fnc_clientMessage",civilian,false] spawn life_fnc_MP;
sleep 180;
sleep 180;
sleep 180;
sleep 180;
sleep 180;
_message = "Die Purge wird nur noch 5 Minuten dauern!";
[[_message,name player,6],"TON_fnc_clientMessage",civilian,false] spawn life_fnc_MP;
sleep 150;
sleep 150;
_message = "Die Purge ist nun offiziell beendet. Vielen Dank für die Teilnahme, wir hoffen, dass Sie sich genossen haben und gereinigt werden. Alle Notdienste werden nun aktiv und alle Verbrechen sind illegal.<br/><br/><t size='2.5'><t color='#FF1500'>Alle Serverregeln sind nun wieder aktiv.</t></t>";
[[_message,name player,6],"TON_fnc_clientMessage",civilian,false] spawn life_fnc_MP;
[[3,"STR_ISTR_Item_Alert",true,[profileName]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
life_event = false; 