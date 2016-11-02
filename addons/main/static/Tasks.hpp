// Task Objects
	ALIVE_taskObjects = [] call ALIVE_fnc_hashCreate;
	[ALIVE_taskObjects, "chairs", ["Land_CampingChair_V1_F","Land_CampingChair_V2_F","Land_ChairPlastic_F","Land_ChairWood_F"]] call ALIVE_fnc_hashSet;
	[ALIVE_taskObjects, "tables", ["Land_CampingTable_F","Land_TableDesk_F","Land_WoodenTable_large_F","Land_WoodenTable_small_F"]] call ALIVE_fnc_hashSet;
	[ALIVE_taskObjects, "documents", ["Land_Document_01_F","Land_File1_F","Land_FilePhotos_F","Land_File2_F","Land_File_research_F","Land_Photos_V1_F","Land_Photos_V2_F","Land_Photos_V3_F"]] call ALIVE_fnc_hashSet;
	[ALIVE_taskObjects, "treasure", ["Land_Money_F"]] call ALIVE_fnc_hashSet;
	[ALIVE_taskObjects, "medical", ["Land_Antibiotic_F","Land_Bandage_F","Land_BloodBag_F","Land_Defibrillator_F","Land_DisinfectantSpray_F","Land_HeatPack_F","Land_PainKillers_F","Land_VitaminBottle_F","Land_WaterPurificationTablets_F"]] call ALIVE_fnc_hashSet;
	[ALIVE_taskObjects, "electronics", ["Land_SatellitePhone_F","Land_PortableLongRangeRadio_F","Land_MobilePhone_smart_F","Land_MobilePhone_old_F","Land_HandyCam_F","Land_Laptop_F","Land_Laptop_device_F","Land_Laptop_unfolded_F","Land_FMradio_F","Land_SurvivalRadio_F"]] call ALIVE_fnc_hashSet;

// Generated Tasks
	private["_options","_tasksData","_taskData","_taskData"];

	ALIVE_generatedTasks = [] call ALIVE_fnc_hashCreate;

	ALIVE_autoGeneratedTasks = ["MilAssault","MilDefence","CivAssault","Assassination","TransportInsertion","DestroyVehicles","DestroyInfantry","SabotageBuilding","InsurgencyPatrol","InsurgencyDestroyAssets","Rescue","CSAR"];

// Military Objective Assault Task

	_options = [];

	_tasksData = [] call ALIVE_fnc_hashCreate;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Assault Objective"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Assault the objective, neutralising all enemy and denying any weapons and materiel."] call ALIVE_fnc_hashSet;
	[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Establish Overwatch"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Proceed to an overwatch position near %1 in order to confirm enemy dispositions prior to assaulting the objective."] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","Establish overwatch at position near %1 and prepare to assault the objective, Over"],["PLAYERS","Roger Out"]]] call ALIVE_fnc_hashSet;
	[_tasksData,"Travel",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Neutralise Enemy"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Neutralise all enemy in the vicinity in order to secure the objective"] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["PLAYERS","My callsign established in overwatch position, Over"],["HQ","Assault Objective"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_success",[["PLAYERS","All enemy area have been neutralised, objective is secure, Over"],["HQ","Roger, send SITREP and standby for further tasking, Out."]]] call ALIVE_fnc_hashSet;
	[_taskData,"reward",["forcePool",10]] call ALIVE_fnc_hashSet;
	[_tasksData,"Destroy",_taskData] call ALIVE_fnc_hashSet;

	_options set [count _options,_tasksData];

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Attack Emplacement"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Attack the enemy held position in order to deny mission critical assets."] call ALIVE_fnc_hashSet;
	[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Move to Forming Up Point"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Move to an FUP near %1 in preparation for conducting an assault on the enemy held emplacement."] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","Move to an FUP near %1 and prepare to assault the emplacement, Over"],["PLAYERS","Roger Out"]]] call ALIVE_fnc_hashSet;
	[_tasksData,"Travel",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Attack Objective"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Attack the objective and neutralise all enemy forces in the vicinity."] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["PLAYERS","Am at FUP standing by, over."],["HQ","Attack Emplacement"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_success",[["PLAYERS","Objective secure, standing by for further orders, over"],["HQ","Roger, send SITREP and await taskings, Out."]]] call ALIVE_fnc_hashSet;
	[_taskData,"reward",["forcePool",10]] call ALIVE_fnc_hashSet;
	[_tasksData,"Destroy",_taskData] call ALIVE_fnc_hashSet;

	_options set [count _options,_tasksData];

	[ALIVE_generatedTasks, "MilAssault", ["Military Objective Assault",_options]] call ALIVE_fnc_hashSet;

// Military Objective Defence Task

	_options = [];

	_tasksData = [] call ALIVE_fnc_hashCreate;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Defend Objective"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Defend the friendly objective."] call ALIVE_fnc_hashSet;
	[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Proceed to the objective"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Move to the objective near %1, establish a defensive position and prepare for incoming enemy forces"] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","Move to the objective near %1, establish a defensive position and prepare for incoming enemy forces"],["PLAYERS","Roger Out"]]] call ALIVE_fnc_hashSet;
	[_tasksData,"Travel",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Hold the objective"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Hold position and defeat the incoming enemy attack."] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["PLAYERS","My callsign established in defence at objective location, Over"],["HQ","Hold the objective"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_success",[["PLAYERS","Enemy forces have been defeated in detail, objective is secure, Over"],["HQ","Roger, send SITREP and standby for further tasking, Out."]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_missile_strike",[["HQ","Critical information: suspected missile strike inbound your location, take cover, Over"],["PLAYERS","Roger, Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"reward",["forcePool",20]] call ALIVE_fnc_hashSet;
	[_tasksData,"DefenceWave",_taskData] call ALIVE_fnc_hashSet;

	_options set [count _options,_tasksData];

	[ALIVE_generatedTasks, "MilDefence", ["Military Objective Defence",_options]] call ALIVE_fnc_hashSet;

// Civilian Objective Assault Task

	_options = [];

	_tasksData = [] call ALIVE_fnc_hashCreate;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Attack the civilian objective"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Attack the enemy held civlian objective."] call ALIVE_fnc_hashSet;
	[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Clear the town"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Clear all enemy forces from the town near %1."] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","Clear all enemy forces from the town near %1"],["PLAYERS","Roger Out."]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_success",[["PLAYERS","Town cleared of enemy forces, objective secure, over"],["HQ","Roger, reorg and send STIREP. Standby for further orders, Out."]]] call ALIVE_fnc_hashSet;
	[_taskData,"reward",["forcePool",10]] call ALIVE_fnc_hashSet;
	[_tasksData,"Destroy",_taskData] call ALIVE_fnc_hashSet;

	_options set [count _options,_tasksData];

	[ALIVE_generatedTasks, "CivAssault", ["Civilian Objective Assault",_options]] call ALIVE_fnc_hashSet;

// HVT Task

	_options = [];

	_tasksData = [] call ALIVE_fnc_hashCreate;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Kill the HVT"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Kill the high value target."] call ALIVE_fnc_hashSet;
	[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Eliminate the target"] call ALIVE_fnc_hashSet;
	[_taskData,"description","We received HUMINT of an High Value Target (HVT) near %1! Eliminate the target as quickly as possible!"] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","We received HUMINT of an High Value Target (HVT) near %1! Eliminate the target as quickly as possible!"],["PLAYERS","Roger that"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_success",[["PLAYERS","High Value Target neutralised, Over"],["HQ","Roger, well done, Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_failed",[["PLAYERS","Mission aborted, HVT has escaped, Over"],["HQ","Roger, better luck next time, Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_cancelled",[["PLAYERS","Callsign compromised, mission aborted, Over"],["HQ","Roger, break contact and withdraw. Send SITREP when ready, Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"reward",["forcePool",10]] call ALIVE_fnc_hashSet;
	[_tasksData,"Destroy",_taskData] call ALIVE_fnc_hashSet;

	_options set [count _options,_tasksData];

	[ALIVE_generatedTasks, "Assassination", ["HVT Assassination",_options]] call ALIVE_fnc_hashSet;

// Rescue Task

	_options = [];

	_tasksData = [] call ALIVE_fnc_hashCreate;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Hostage Rescue"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Rescue the hostage before they are killed."] call ALIVE_fnc_hashSet;
	[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Rescue the hostage"] call ALIVE_fnc_hashSet;
	[_taskData,"description","We have received HUMINT that indicates enemy forces have captured an allied commander in the vicinity of %1. You are to find and recover the officer as quickly as possible!"] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","HUMINT indicates enemy forces have captured an allied commander in the vicinity of %1. Find and recover the officer as quickly as possible!"],["PLAYERS","Roger that"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_update",[["HQ","All callsigns, SITREP, hostage (%1) location has been confirmed at GR%2. Int indicates enemy forces will execute hostage within the hour."],["PLAYERS","Roger, Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_success",[["PLAYERS","The package is secure, Over"],["HQ","Roger, well done, Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_failed",[["HQ","Mission aborted, hostage has been killed, Over"],["PLAYERS","Dammit! Rest in peace, we're RTB, Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_cancelled",[["PLAYERS","Callsign compromised, mission aborted, Over"],["HQ","Roger, break contact and withdraw. Send SITREP when ready, Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"reward",["forcePool",20]] call ALIVE_fnc_hashSet;
	[_tasksData,"Rescue",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Return Hostage"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Escort the hostage to the safe location near %1."] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","Immediately escort package to safe house near %1"],["PLAYERS","Roger, moving now, Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_failed",[["HQ","Hostage has been killed, abort mission and RTB immediately, Over"],["PLAYERS","Roger Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_success",[["PLAYERS","Package has been returned to the safe location"],["HQ","Roger, great job! Well done, Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"reward",["forcePool",20]] call ALIVE_fnc_hashSet;
	[_tasksData,"Return",_taskData] call ALIVE_fnc_hashSet;

	_options set [count _options,_tasksData];

	[ALIVE_generatedTasks, "Rescue", ["Hostage Rescue",_options]] call ALIVE_fnc_hashSet;

// Combat Search and Rescue Tasks

	_options = [];

	// Downed Pilot
		_tasksData = [] call ALIVE_fnc_hashCreate;
		_taskData = [] call ALIVE_fnc_hashCreate;
		[_taskData,"title","Combat Search and Rescue"] call ALIVE_fnc_hashSet;
		[_taskData,"description","Rescue downed crew isolated behind enemy lines."] call ALIVE_fnc_hashSet;
		[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

		_taskData = [] call ALIVE_fnc_hashCreate;
		[_taskData,"title","Locate Crew"] call ALIVE_fnc_hashSet;
		[_taskData,"description","We have received reports that a %1 has been shot down in enemy territory. It is believed the crew ejected and landed in the vicinity of %2. Conduct a thorough search in order to locate, secure and recover any survivors as quickly as possible!"] call ALIVE_fnc_hashSet;
		[_taskData,"chat_start",[["HQ","Reports confirmed! %1 has been shot down over enemy territory. Move immediately to locate and rescue surviving crew."],["PLAYERS","Roger that"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_update",[["HQ","All callsigns, SITREP. We've picked up an emergency beacon at grid %1. Beacon has been authenticated. Look for IR strobe. Proceed with urgency."],["PLAYERS","Roger, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_success",[["PLAYERS","Crew secured, we are RTB, Over"],["HQ","Roger, well done, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_failed",[["HQ","Mission aborted. Crew have been killed, Over"],["PLAYERS","Roger, we are RTB, out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_cancelled",[["PLAYERS","Callsign compromised, mission aborted, Over"],["HQ","Roger, break contact and withdraw. Send SITREP when ready, out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"reward",["forcePool",20]] call ALIVE_fnc_hashSet;
		[_tasksData,"Rescue",_taskData] call ALIVE_fnc_hashSet;

		_taskData = [] call ALIVE_fnc_hashCreate;
		[_taskData,"title","Secure Survivors"] call ALIVE_fnc_hashSet;
		[_taskData,"description","Recover the survivors and ensure the position is safe prior to extraction."] call ALIVE_fnc_hashSet;
		[_taskData,"chat_start",[["HQ","Int indicates enemy forces are rapidly closing on your position. It is essential that you secure the area, prepare to defend,  over."],["PLAYERS","Roger, we are preparing to defend. Out."]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_clear",[["HQ","SIGINT indicates enemy forces within 200m of your position. It is essential that you clear the area, over."],["PLAYERS","Roger, we are preparing to clear. Out."]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_success",[["PLAYERS","Crew are safe, area is clear and objective is secure, Over"],["HQ","Roger, prepare to recover crew to safe location, Out."]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_leftArea",[["PLAYERS","Crew are safe, we are clear of the area and moving to extract, Over"],["HQ","Roger, move crew to safe location, Out."]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_failed",[["HQ","Mission aborted, crew have been killed, Over"],["PLAYERS","Roger, we are RTB, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"reward",["forcePool",20]] call ALIVE_fnc_hashSet;
		[_tasksData,"DefenceWave",_taskData] call ALIVE_fnc_hashSet;

		_taskData = [] call ALIVE_fnc_hashCreate;
		[_taskData,"title","Return Survivors"] call ALIVE_fnc_hashSet;
		[_taskData,"description","Return the surviving crew to safe location near %1."] call ALIVE_fnc_hashSet;
		[_taskData,"chat_start",[["HQ","Return surviving crew to safe location near %1"],["PLAYERS","Roger, moving now, out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_failed",[["HQ","Surviving crew have been killed, abort mission and RTB immediately, Over"],["PLAYERS","Roger, out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_success",[["PLAYERS","Crew has been returned to base, over."],["HQ","Roger, great job! Well done, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"reward",["forcePool",20]] call ALIVE_fnc_hashSet;
		[_tasksData,"Return",_taskData] call ALIVE_fnc_hashSet;

		_options set [count _options,_tasksData];

	// Crashsite
		_tasksData = [] call ALIVE_fnc_hashCreate;
		_taskData = [] call ALIVE_fnc_hashCreate;
		[_taskData,"title","Combat Search and Rescue"] call ALIVE_fnc_hashSet;
		[_taskData,"description","Secure crashsite and rescue surviving crew."] call ALIVE_fnc_hashSet;
		[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

		_taskData = [] call ALIVE_fnc_hashCreate;
		[_taskData,"title","Locate and Rescue Crew"] call ALIVE_fnc_hashSet;
		[_taskData,"description","We have confirmation that a %1 has crashed in enemy territory near %2. SIGINT indicates there are survivors. Secure and rescue survivors as quickly as possible!"] call ALIVE_fnc_hashSet;
		[_taskData,"chat_start",[["HQ","Confirmed! A %1 has been shot down over enemy territory and crashed near %2. Secure and rescue the crew as quickly as possible!"],["PLAYERS","Roger, moving now, Out."]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_success",[["PLAYERS","Crew has been found alive but injured, Over"],["HQ","Roger, well done, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_failed",[["HQ","Mission aborted, crew have been killed, Over"],["PLAYERS","Sorry to hear that, we are RTB, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_cancelled",[["PLAYERS","Callsign compromised, mission aborted, Over"],["HQ","Roger, break contact and withdraw. Send SITREP when ready, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"reward",["forcePool",20]] call ALIVE_fnc_hashSet;
		[_tasksData,"Rescue",_taskData] call ALIVE_fnc_hashSet;

		_taskData = [] call ALIVE_fnc_hashCreate;
		[_taskData,"title","Secure Crash Site"] call ALIVE_fnc_hashSet;
		[_taskData,"description","Ensure the vehicle is destroyed and secure the position before extracting."] call ALIVE_fnc_hashSet;
		[_taskData,"chat_start",[["HQ","Int indicates enemy forces are rapidly closing on your position. Prepare to hold the position, over."],["PLAYERS","Roger, securing crash site now, Out."]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_clear",[["HQ","SIGINT indicates enemy forces within 200m of your position. It is essential that you clear the area, over."],["PLAYERS","Roger, we are preparing to clear. Out."]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_success",[["PLAYERS","Vehicle is destroyed and objective is secure, Over"],["HQ","Roger, prepare to recover crew to safe location, Out."]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_leftArea",[["PLAYERS","Crew are safe, we are clear of the area and moving to extract, Over"],["HQ","Roger, move crew to safe location, Out."]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_failed",[["HQ","Mission aborted, crew have been killed, Over"],["PLAYERS","Roger, we are RTB, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"reward",["forcePool",20]] call ALIVE_fnc_hashSet;
		[_tasksData,"DefenceWave",_taskData] call ALIVE_fnc_hashSet;

		_taskData = [] call ALIVE_fnc_hashCreate;
		[_taskData,"title","Return Survivors"] call ALIVE_fnc_hashSet;
		[_taskData,"description","Return the surviving crew to our location near %1."] call ALIVE_fnc_hashSet;
		[_taskData,"chat_start",[["HQ","Return surviving crew to our location near %1"],["PLAYERS","Roger, moving now, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_failed",[["HQ","Surviving crew have been killed, abort mission and RTB immediately, Over"],["PLAYERS","Roger, Out."]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_success",[["PLAYERS","Crew has been returned to base, over."],["HQ","Roger, great job! Well done, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"reward",["forcePool",20]] call ALIVE_fnc_hashSet;
		[_tasksData,"Return",_taskData] call ALIVE_fnc_hashSet;

		_options set [count _options,_tasksData];

	[ALIVE_generatedTasks, "CSAR", ["Combat Search and Rescue",_options]] call ALIVE_fnc_hashSet;

// Troop Insertion Task

	_options = [];

	_tasksData = [] call ALIVE_fnc_hashCreate;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Troop Transport Insertion"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Provide insertion for troops."] call ALIVE_fnc_hashSet;
	[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Pick up the troops"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Move to the Pick Up Point near %1."] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","Move to the Pick Up Point near %1"],["PLAYERS","Roger that"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_failed",[["HQ","Local commander reports insufficient load capacity, RTB and standby for further tasking"],["PLAYERS","Roger Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_cancelled",[["HQ","Contact lost with ground forces, assume location is compromised. RTB immediately, Over"],["PLAYERS","Roger Out"]]] call ALIVE_fnc_hashSet;
	[_tasksData,"Pickup",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Insert the troops"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Travel to the Drop Off Point near %1."] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","Travel to the Drop Off Point near %1"],["PLAYERS","Roger, moving now, Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_failed",[["HQ","Too many casualties sustained, abort mission and RTB immediately, Over"],["PLAYERS","Roger Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_success",[["PLAYERS","Units inserted at Drop Off Point"],["HQ","Roger, well done, Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"reward",["forcePool",10]] call ALIVE_fnc_hashSet;
	[_tasksData,"Insertion",_taskData] call ALIVE_fnc_hashSet;

	_options set [count _options,_tasksData];

	[ALIVE_generatedTasks, "TransportInsertion", ["Transport Insertion",_options]] call ALIVE_fnc_hashSet;

/* Recover Asset Tasks

	_options = [];

	// Recover Device

		_tasksData = [] call ALIVE_fnc_hashCreate;

		_taskData = [] call ALIVE_fnc_hashCreate;
		[_taskData,"title","Recover Device"] call ALIVE_fnc_hashSet;
		[_taskData,"description","Recove the military device before it falls into enemy hands"] call ALIVE_fnc_hashSet;
		[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

		_taskData = [] call ALIVE_fnc_hashCreate;
		[_taskData,"title","Secure the Device"] call ALIVE_fnc_hashSet;
		[_taskData,"description","A secret military device has gone missing in the vicinity of %1. You are to find and recover the device as quickly as possible!"] call ALIVE_fnc_hashSet;
		[_taskData,"chat_start",[["HQ","We have reports that we have lost contact with a truck carrying a highly sensitive military device in the vicinity of %1. Find and recover the device as quickly as possible!"],["PLAYERS","Roger that"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_update",[["HQ","All callsigns, SITREP, device location has been confirmed at GR%2. Int indicates enemy forces are closing in on the device within the hour."],["PLAYERS","Roger, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_success",[["PLAYERS","The package is secure, Over"],["HQ","Roger, well done, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_failed",[["HQ","Mission aborted, device has been recovered by the enemy, Over"],["PLAYERS","Roger that, we're RTB, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_cancelled",[["PLAYERS","Callsign compromised, mission aborted, Over"],["HQ","Roger, break contact and withdraw. Send SITREP when ready, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"reward",["forcePool",20]] call ALIVE_fnc_hashSet;
		[_tasksData,"Rescue",_taskData] call ALIVE_fnc_hashSet;

		_taskData = [] call ALIVE_fnc_hashCreate;
		[_taskData,"title","Recover the Device"] call ALIVE_fnc_hashSet;
		[_taskData,"description","Recover the device to the safe location near %1."] call ALIVE_fnc_hashSet;
		[_taskData,"chat_start",[["HQ","Immediately recover the device to safe house near %1"],["PLAYERS","Roger, moving now, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_failed",[["HQ","Device has been recovered by the enemy, abort mission and RTB immediately, Over"],["PLAYERS","Roger Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"chat_success",[["PLAYERS","Package has been returned to the safe location"],["HQ","Roger, great job! Well done, Out"]]] call ALIVE_fnc_hashSet;
		[_taskData,"reward",["forcePool",20]] call ALIVE_fnc_hashSet;
		[_tasksData,"Return",_taskData] call ALIVE_fnc_hashSet;

		_options set [count _options,_tasksData];

		[ALIVE_generatedTasks, "Rescue", ["Recover Device",_options]] call ALIVE_fnc_hashSet;

	// Steal Device

	// Recover Vehicle

	// Steal Vehicle

	// Recover Item

	// Steal Item
*/

// Destroy Vehicles Task

	_options = [];

	_tasksData = [] call ALIVE_fnc_hashCreate;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Search and Destroy Vehicles"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Int indicates an enemy group of %1 in the vicinity of %2."] call ALIVE_fnc_hashSet;
	[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Destroy the vehicles"] call ALIVE_fnc_hashSet;
	[_taskData,"description","We have reliable intelligence of a %1 vehicle group operating in the area near %2.  Find, fix and destroy the vehicles before they leave the area."] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","We have reliable intelligence of a %1 vehicle group operating in the area near %2.  Find, fix and destroy the vehicles before they leave the area, Over!"],["PLAYERS","Roger, moving to location now, Out"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_success",[["PLAYERS","Enemy vehicles confirmed neutralised, Over"],["HQ","Roger, well done.  Standby for further taskings, Out!"]]] call ALIVE_fnc_hashSet;
	[_taskData,"reward",["forcePool",10]] call ALIVE_fnc_hashSet;
	[_tasksData,"Destroy",_taskData] call ALIVE_fnc_hashSet;

	_options set [count _options,_tasksData];

	[ALIVE_generatedTasks, "DestroyVehicles", ["Destroy the Vehicles",_options]] call ALIVE_fnc_hashSet;

// Destroy Infantry Task

	_options = [];

	_tasksData = [] call ALIVE_fnc_hashCreate;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Destroy the infantry"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Intelligence suggests a group of infantry in the area near %1."] call ALIVE_fnc_hashSet;
	[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Destroy the infantry"] call ALIVE_fnc_hashSet;
	[_taskData,"description","We received intelligence about infantry units near %1! Destroy the infantry!"] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","We received intelligence about infantry units near %1! Destroy the infantry!"],["PLAYERS","Roger that"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_success",[["PLAYERS","Infantry units have been destroyed"],["HQ","Roger that, well done!"]]] call ALIVE_fnc_hashSet;
	[_taskData,"reward",["forcePool",10]] call ALIVE_fnc_hashSet;
	[_tasksData,"Destroy",_taskData] call ALIVE_fnc_hashSet;

	_options set [count _options,_tasksData];

	[ALIVE_generatedTasks, "DestroyInfantry", ["Destroy the Infantry Units",_options]] call ALIVE_fnc_hashSet;

// Sabotage Building Task

	_options = [];

	_tasksData = [] call ALIVE_fnc_hashCreate;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Sabotage in %1"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Destroy the %2 in %1!"] call ALIVE_fnc_hashSet;
	[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Destroy %1"] call ALIVE_fnc_hashSet;
	[_taskData,"description","We received intelligence about a strategically important %3 near %1! Destroy the %2!"] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","We received intelligence about a strategically relevant position near %1! Destroy the objective!"],["PLAYERS","Roger that"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_success",[["PLAYERS","The objective has been destroyed!"],["HQ","Roger that, well done!"]]] call ALIVE_fnc_hashSet;
	[_taskData,"reward",["forcePool",10]] call ALIVE_fnc_hashSet;
	[_tasksData,"Destroy",_taskData] call ALIVE_fnc_hashSet;

	_options set [count _options,_tasksData];

	[ALIVE_generatedTasks, "SabotageBuilding", ["Sabotage Installation",_options]] call ALIVE_fnc_hashSet;

// Insurgency Patrol Task

	_options = [];

	_tasksData = [] call ALIVE_fnc_hashCreate;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Insurgent Patrol"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Patrol the area for suspected insurgency activity"] call ALIVE_fnc_hashSet;
	[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Proceed to patrol staging area"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Proceed to the patrol staging area."] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","Proceed to the staging area, Over"],["PLAYERS","Roger Out"]]] call ALIVE_fnc_hashSet;
	[_tasksData,"Travel",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Patrol %1"] call ALIVE_fnc_hashSet;
	[_taskData,"description","We received intelligence about insurgents near %1! Patrol the Area!"] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","We received intelligence about insurgent activity near %1! Patrol the area!"],["PLAYERS","Roger that"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_success",[["PLAYERS","The patrol has been completed!"],["HQ","Roger that, well done!"]]] call ALIVE_fnc_hashSet;
	[_taskData,"reward",["forcePool",10]] call ALIVE_fnc_hashSet;
	[_tasksData,"Patrol",_taskData] call ALIVE_fnc_hashSet;

	_options set [count _options,_tasksData];

	[ALIVE_generatedTasks, "InsurgencyPatrol", ["Insurgency Patrol",_options]] call ALIVE_fnc_hashSet;

// Insurgency Destroy Assets

	_options = [];

	_tasksData = [] call ALIVE_fnc_hashCreate;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Insurgent %1 Located"] call ALIVE_fnc_hashSet;
	[_taskData,"description","Destroy the %1 near %2"] call ALIVE_fnc_hashSet;
	[_tasksData,"Parent",_taskData] call ALIVE_fnc_hashSet;

	_taskData = [] call ALIVE_fnc_hashCreate;
	[_taskData,"title","Destroy the %1"] call ALIVE_fnc_hashSet;
	[_taskData,"description","We received intelligence about insurgents %1 near %2! Destroy the building!"] call ALIVE_fnc_hashSet;
	[_taskData,"chat_start",[["HQ","We received intelligence about an insurgent %1 near %2! Destory the building!"],["PLAYERS","Roger that"]]] call ALIVE_fnc_hashSet;
	[_taskData,"chat_success",[["PLAYERS","The building has been destroyed!"],["HQ","Roger that, well done!"]]] call ALIVE_fnc_hashSet;
	[_taskData,"reward",["forcePool",10]] call ALIVE_fnc_hashSet;
	[_tasksData,"Destroy",_taskData] call ALIVE_fnc_hashSet;

	_options set [count _options,_tasksData];

	[ALIVE_generatedTasks, "InsurgencyDestroyAssets", ["Insurgency Destroy Assets",_options]] call ALIVE_fnc_hashSet;