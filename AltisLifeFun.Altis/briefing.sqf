waitUntil {!isNull player && player == player};
if(player diarySubjectExists "rules")exitwith{};

player createDiarySubject ["sealteamsloth","GrandTheftAltis.net"];
player createDiarySubject ["serverrules","Serverregeln"];
player createDiarySubject ["controls","Steuerung"];

// Server Rules Section
	player createDiaryRecord ["serverrules",
		[
			"Serverregeln", 
				"
				Serverregeln<br/><br/>
				- Die aktuellen Serverregeln findest du in unserem<br/>
				  unter Forum.GrandTheftAltis.net im Bereich<br/>
				  Server Regeln.<br/>
				 
				"
		]
	];

	
// Seal Team Sloth Section

	player createDiaryRecord ["sealteamsloth",
		[
			"Website/Forum",
				"
				 Patchnotes, Ankündigungen und vieles mehr<br/>
				 findest du auf unserer Homepage<br/>
				 
				 www.hd-team.xobor.de/
				 
				"
		]
	];
	
	player createDiaryRecord ["sealteamsloth",
		[
			"Teamspeak",
				"
				Auf unserem Teamspeak werden dir<br/>
				Zivilisten Channel sowie ein<br/>
				Ingame Support zur verfügung gestellt.<br/><br/>
				
				GrandTheftAltis.net
				
				"
		]
	];
	
	player createDiaryRecord ["sealteamsloth",
		[
			"Werde VIP",
				"
				
				Spenden in jeglicher Form und Höhe helfen<br/>
				den Server am Laufen zu halten.<br/><br/>
				
				Alle nötigen Informationen zum Spenden<br/>
				erhälst du in unserem TeamSpeak Channel unter<br/><br/>
				
				GrandTheftAltis.net 'Spenden?'<br/><br/>
				
				"
		]
	];
		
	
	
	

	
// Controls Section

	player createDiaryRecord ["controls",
		[
			"Steuerung",
				"
				Z: Spieler-Menü öffnen<br/>
				U: Fahrzeuge abschließen und öffnen<br/>
				F: Polizeisirene (Polizei)<br/>
				Shift + O: Ohropax einsetzen<br/>
				Left Shift + R: Festnehmen<br/>
				Left Shift + B: Ergeben<br/>
				Left Ctrl + G: Niederschlagen<br/>
				Left Shift + H: Holstern / Schultern<br/>
				Ö: Yelp (Polizei)<br/>
				Ä: Sirene (Polizei)<br/>
				"
		]
	];