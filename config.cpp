class CfgPatches
{
	class JSO_Drone_Packing
	{
		units[]={
			
			};
		weapons[]={
			
		};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class JSO_Drone_Packing: NO_CATEGORY {
		displayName="Drone Packing";
	};
};

class CfgVehicles {
	//ACE Self-Actions for Drone Deployment
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class JDP_Drone_Management
				{
					displayName = "Drones";
					condition = "";
					statement = "";
					exceptions[] = {"isNotDragging","isNotSwimming","notOnMap","isNotOnLadder", "isNotInside"};
					icon = "";
					
					//BLUFOR Drone Deploy
					class JDP_Deploy_B_UAV_01_F {
						displayName = "Deploy AR-2 Darter [NATO]";
						condition = "'JDP_B_UAV_01_F_DroneKit' in items _player";
						statement = "['B_UAV_01_F', 'JDP_B_UAV_01_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_B_UAV_06_F {
						displayName = "Deploy AL-6 Pelican [NATO]";
						condition = "'JDP_B_UAV_06_F_DroneKit' in items _player";
						statement = "['B_UAV_06_F', 'JDP_B_UAV_06_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_B_UAV_06_medical_F {
						displayName = "Deploy AL-6 Pelican (Medical) [NATO]";
						condition = "'JDP_B_UAV_06_medical_F_DroneKit' in items _player";
						statement = "['B_UAV_06_medical_F', 'JDP_B_UAV_06_medical_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_B_UGV_02_Demining_F {
						displayName = "Deploy ED-1D Pelter [NATO]";
						condition = "'JDP_B_UGV_02_Demining_F_DroneKit' in items _player";
						statement = "['B_UGV_02_Demining_F', 'JDP_B_UGV_02_Demining_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_B_UGV_02_Science_F {
						displayName = "Deploy ED-1E Roller [NATO]";
						condition = "'JDP_B_UGV_02_Science_F_DroneKit' in items _player";
						statement = "['B_UGV_02_Science_F', 'JDP_B_UGV_02_Science_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_B_JSO_UAV_01_F {
						displayName = "Deploy AR-2 Darter [JSO]";
						condition = "'JDP_B_JSO_UAV_01_F_DroneKit' in items _player";
						statement = "['B_JSO_UAV_01_F', 'JDP_B_JSO_UAV_01_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					//OPFOR Drone Deploy
					class JDP_Deploy_O_UAV_01_F {
						displayName = "Deploy Tayran AR-2 [CSAT]";
						condition = "'JDP_O_UAV_01_F_DroneKit' in items _player";
						statement = "['O_UAV_01_F', 'JDP_O_UAV_01_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_O_UAV_06_F {
						displayName = "Deploy Jinaah AL-6 [CSAT]";
						condition = "'JDP_O_UAV_06_F_DroneKit' in items _player";
						statement = "['O_UAV_06_F', 'JDP_O_UAV_06_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_O_UAV_06_medical_F {
						displayName = "Deploy Jinaah AL-6 (Medical) [CSAT]";
						condition = "'JDP_O_UAV_06_medical_F_DroneKit' in items _player";
						statement = "['O_UAV_06_medical_F', 'JDP_O_UAV_06_medical_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_O_UGV_02_Demining_F {
						displayName = "Deploy Akinaka ED-1D [CSAT]";
						condition = "'JDP_O_UGV_02_Demining_F_DroneKit' in items _player";
						statement = "['O_UGV_02_Demining_F', 'JDP_O_UGV_02_Demining_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_O_UGV_02_Science_F {
						displayName = "Deploy Sayyah ED-1E [CSAT]";
						condition = "'JDP_O_UGV_02_Science_F_DroneKit' in items _player";
						statement = "['O_UGV_02_Science_F', 'JDP_O_UGV_02_Science_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
				
					//IND Drone Deploy
					class JDP_Deploy_I_UAV_01_F {
						displayName = "Deploy AR-2 Darter [AAF]";
						condition = "'JDP_I_UAV_01_F_DroneKit' in items _player";
						statement = "['I_UAV_01_F', 'JDP_I_UAV_01_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_I_UAV_06_F {
						displayName = "Deploy AL-6 Pelican [AAF]";
						condition = "'JDP_I_UAV_06_F_DroneKit' in items _player";
						statement = "['I_UAV_06_F', 'JDP_I_UAV_06_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_I_UAV_06_medical_F {
						displayName = "Deploy AL-6 Pelican (Medical) [AAF]";
						condition = "'JDP_I_UAV_06_medical_F_DroneKit' in items _player";
						statement = "['I_UAV_06_medical_F', 'JDP_I_UAV_06_medical_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_I_UGV_02_Demining_F {
						displayName = "Deploy ED-1D Pelter [AAF]";
						condition = "'JDP_I_UGV_02_Demining_F_DroneKit' in items _player";
						statement = "['I_UGV_02_Demining_F', 'JDP_I_UGV_02_Demining_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_I_UGV_02_Science_F {
						displayName = "Deploy ED-1E Roller [AAF]";
						condition = "'JDP_I_UGV_02_Science_F_DroneKit' in items _player";
						statement = "['I_UGV_02_Science_F', 'JDP_I_UGV_02_Science_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_I_E_UAV_01_F {
						displayName = "Deploy AR-2 Darter [LDF]";
						condition = "'JDP_I_E_UAV_01_F_DroneKit' in items _player";
						statement = "['I_E_UAV_01_F', 'JDP_I_E_UAV_01_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_I_E_UAV_06_F {
						displayName = "Deploy AL-6 Pelican [LDF]";
						condition = "'JDP_I_E_UAV_06_F_DroneKit' in items _player";
						statement = "['I_E_UAV_06_F', 'JDP_I_E_UAV_06_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_I_E_UAV_06_medical_F {
						displayName = "Deploy AL-6 Pelican (Medical) [LDF]";
						condition = "'JDP_I_E_UAV_06_medical_F_DroneKit' in items _player";
						statement = "['I_E_UAV_06_medical_F', 'JDP_I_E_UAV_06_medical_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_I_E_UGV_02_Demining_F {
						displayName = "Deploy ED-1D Pelter [LDF]";
						condition = "'JDP_I_E_UGV_02_Demining_F_DroneKit' in items _player";
						statement = "['I_E_UGV_02_Demining_F', 'JDP_I_E_UGV_02_Demining_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_I_E_UGV_02_Science_F {
						displayName = "Deploy ED-1E Roller [LDF]";
						condition = "'JDP_I_E_UGV_02_Science_F_DroneKit' in items _player";
						statement = "['I_E_UGV_02_Science_F', 'JDP_I_E_UGV_02_Science_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_I_INDMDFF_AR_2Darter {
						displayName = "Deploy AR-2 Darter [MDF]";
						condition = "'JDP_I_INDMDFF_AR_2Darter_DroneKit' in items _player";
						statement = "['I_INDMDFF_AR_2Darter', 'JDP_I_INDMDFF_AR_2Darter_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_I_INDMPDF_AR_2Darter {
						displayName = "Deploy AR-2 Darter [MPD]";
						condition = "'JDP_I_INDMPDF_AR_2Darter_DroneKit' in items _player";
						statement = "['I_INDMPDF_AR_2Darter', 'JDP_I_INDMPDF_AR_2Darter_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
				
					//CIV Drone Deploy
					class JDP_Deploy_C_UAV_06_F {
						displayName = "Deploy Utility Drone";
						condition = "'JDP_C_UAV_06_F_DroneKit' in items _player";
						statement = "['C_UAV_06_F', 'JDP_C_UAV_06_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_C_UAV_06_medical_F {
						displayName = "Deploy Utility Drone (Medical)";
						condition = "'JDP_C_UAV_06_medical_F_DroneKit' in items _player";
						statement = "['C_UAV_06_medical_F', 'JDP_C_UAV_06_medical_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					class JDP_Deploy_C_IDAP_UAV_01_F {
						displayName = "Deploy Drone [IDAP]";
						condition = "'JDP_C_IDAP_UAV_01_F_DroneKit' in items _player";
						statement = "['C_IDAP_UAV_01_F', 'JDP_C_IDAP_UAV_01_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_C_IDAP_UAV_06_F {
						displayName = "Deploy Utility Drone [IDAP]";
						condition = "'JDP_C_IDAP_UAV_06_F_DroneKit' in items _player";
						statement = "['C_IDAP_UAV_06_F', 'JDP_C_IDAP_UAV_06_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_C_IDAP_UAV_06_medical_F {
						displayName = "Deploy Utility Drone (Medical) [IDAP]";
						condition = "'JDP_C_IDAP_UAV_06_medical_F_DroneKit' in items _player";
						statement = "['C_IDAP_UAV_06_medical_F', 'JDP_C_IDAP_UAV_06_medical_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_C_IDAP_UGV_02_Demining_F {
						displayName = "Deploy Demining UGV [IDAP]";
						condition = "'JDP_C_IDAP_UGV_02_Demining_F_DroneKit' in items _player";
						statement = "['C_IDAP_UGV_02_Demining_F', 'JDP_C_IDAP_UGV_02_Demining_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
					
					class JDP_Deploy_C_IDAP_UAV_06_antimine_F {
						displayName = "Deploy Demining Drone [IDAP]";
						condition = "'JDP_C_IDAP_UAV_06_antimine_F_DroneKit' in items _player";
						statement = "['C_IDAP_UAV_06_antimine_F', 'JDP_C_IDAP_UAV_06_antimine_F_DroneKit', _player] call JSO_DRONE_PACKING_fnc_unpackDrone";
						icon = "";
					};
				};
			};
		};
	}
	
	//In-world Drone Kit Item Box
	class Item_Base_F;
	
	class JDP_Item_Base_DroneKit: Item_Base_F {
		author = "Karnax";
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_PlasticCase_01_medium_black_F.jpg";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
	};
	
	//BLUFOR In-world Drone Kit Item Boxes
	class JDP_Item_B_UAV_01_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (AR-2 Darter) [NATO]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_B_UAV_01_F_DroneKit {
				count = 1
				name = "JDP_B_UAV_01_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_B_UAV_06_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (AL-6 Pelican) [NATO]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_B_UAV_06_F_DroneKit {
				count = 1
				name = "JDP_B_UAV_06_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_B_UAV_06_medical_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (AL-6 Pelican, Medical) [NATO]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_B_UAV_06_medical_F_DroneKit {
				count = 1
				name = "JDP_B_UAV_06_medical_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_B_UGV_02_Demining_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (ED-1D Pelter) [NATO]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_B_UGV_02_Demining_F_DroneKit {
				count = 1
				name = "JDP_B_UGV_02_Demining_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_B_UGV_02_Science_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (ED-1E Roller) [NATO]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_B_UGV_02_Science_F_DroneKit {
				count = 1
				name = "JDP_B_UGV_02_Science_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_B_JSO_UAV_01_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (AR-2 Darter) [JSO]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_B_JSO_UAV_01_F_DroneKit {
				count = 1
				name = "JDP_B_JSO_UAV_01_F_DroneKit";
			};		
		};
	};
	
	//OPFOR In-world Drone Kit Item Boxes
	
	class JDP_Item_O_UAV_01_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (Tayran AR-2) [CSAT]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_O_UAV_01_F_DroneKit {
				count = 1
				name = "JDP_O_UAV_01_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_O_UAV_06_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (Jinaah AL-6) [CSAT]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_O_UAV_06_F_DroneKit {
				count = 1
				name = "JDP_O_UAV_06_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_O_UAV_06_medical_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (Jinaah AL-6, Medical) [CSAT]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_O_UAV_06_medical_F_DroneKit {
				count = 1
				name = "JDP_O_UAV_06_medical_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_O_UGV_02_Demining_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (Akinaka ED-1D) [CSAT]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_O_UGV_02_Demining_F_DroneKit {
				count = 1
				name = "JDP_O_UGV_02_Demining_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_O_UGV_02_Science_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (Sayyah ED-1E) [CSAT]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_O_UGV_02_Science_F_DroneKit {
				count = 1
				name = "JDP_O_UGV_02_Science_F_DroneKit";
			};		
		};
	};
	
	//IND In-world Drone Kit Item Boxes
	class JDP_Item_I_UAV_01_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (AR-2 Darter) [AAF]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_I_UAV_01_F_DroneKit {
				count = 1
				name = "JDP_I_UAV_01_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_I_UAV_06_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (AL-6 Pelican) [AAF]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_I_UAV_06_F_DroneKit {
				count = 1
				name = "JDP_I_UAV_06_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_I_UAV_06_medical_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (AL-6 Pelican, Medical) [AAF]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_I_UAV_06_medical_F_DroneKit {
				count = 1
				name = "JDP_I_UAV_06_medical_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_I_UGV_02_Demining_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (ED-1D Pelter) [AAF]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_I_UGV_02_Demining_F_DroneKit {
				count = 1
				name = "JDP_I_UGV_02_Demining_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_I_UGV_02_Science_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (ED-1E Roller) [AAF]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_I_UGV_02_Science_F_DroneKit {
				count = 1
				name = "JDP_I_UGV_02_Science_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_I_E_UAV_01_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (AR-2 Darter) [LDF]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_I_E_UAV_01_F_DroneKit {
				count = 1
				name = "JDP_I_E_UAV_01_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_I_E_UAV_06_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (AL-6 Pelican) [LDF]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_I_E_UAV_06_F_DroneKit {
				count = 1
				name = "JDP_I_E_UAV_06_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_I_E_UAV_06_medical_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (AL-6 Pelican, Medical) [LDF]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_I_E_UAV_06_medical_F_DroneKit {
				count = 1
				name = "JDP_I_E_UAV_06_medical_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_I_E_UGV_02_Demining_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (ED-1D Pelter) [LDF]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_I_E_UGV_02_Demining_F_DroneKit {
				count = 1
				name = "JDP_I_E_UGV_02_Demining_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_I_E_UGV_02_Science_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (ED-1E Roller) [LDF]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_I_E_UGV_02_Science_F_DroneKit {
				count = 1
				name = "JDP_I_E_UGV_02_Science_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_I_INDMDFF_AR_2Darter_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (AR-2 Darter) [MDF]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_I_INDMDFF_AR_2Darter_DroneKit {
				count = 1
				name = "JDP_I_INDMDFF_AR_2Darter_DroneKit";
			};		
		};
	};
	
	class JDP_Item_I_INDMPDF_AR_2Darter_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (AR-2 Darter) [MPD]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_I_INDMPDF_AR_2Darter_DroneKit {
				count = 1
				name = "JDP_I_INDMPDF_AR_2Darter_DroneKit";
			};		
		};
	};
	
	//CIV In-world Drone Kit Item Boxes
	class JDP_Item_C_UAV_06_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (Utility)";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_C_UAV_06_F_DroneKit {
				count = 1
				name = "JDP_C_UAV_06_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_C_UAV_06_medical_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (Utility, Medical)";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_C_UAV_06_medical_F_DroneKit {
				count = 1
				name = "JDP_C_UAV_06_medical_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_C_IDAP_UAV_01_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (Drone) [IDAP]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_C_IDAP_UAV_01_F_DroneKit {
				count = 1
				name = "JDP_C_IDAP_UAV_01_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_C_IDAP_UAV_06_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (Utility Drone) [IDAP]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_C_IDAP_UAV_06_F_DroneKit {
				count = 1
				name = "JDP_C_IDAP_UAV_06_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_C_IDAP_UAV_06_medical_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (Utility Drone, Medical) [IDAP]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_C_IDAP_UAV_06_medical_F_DroneKit {
				count = 1
				name = "JDP_C_IDAP_UAV_06_medical_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_C_IDAP_UGV_02_Demining_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (Demining UGV) [IDAP]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_C_IDAP_UGV_02_Demining_F_DroneKit {
				count = 1
				name = "JDP_C_IDAP_UGV_02_Demining_F_DroneKit";
			};		
		};
	};
	
	class JDP_Item_C_IDAP_UAV_06_antimine_F_DroneKit: JDP_Item_Base_DroneKit {
		displayName = "Drone Kit (Demining Drone)";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			class JDP_C_UAV_06_antimine_F_DroneKit {
				count = 1
				name = "JDP_C_IDAP_UAV_06_antimine_F_DroneKit";
			};		
		};
	};
	
	//Air Class Inheritance (for ACE Actions)
	class Air;
    class Helicopter: Air {
        class ACE_Actions {
            class ACE_MainActions {};
        };
    };
	
    class Helicopter_Base_F: Helicopter {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {};
        };
    };
	
	//Ground Class Inheritance (for ACE Actions)
	class Land;
	class LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {};
		};
	};
	class Tank: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {};
		};
	};
	
	class Tank_F: Tank {
		class ACE_Actions {
			class ACE_MainActions {};
		};
	};
		
	//Drone Base Inheritance (for ACE Actions)
	class UAV_01_base_F: Helicopter_Base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {};
		};
	};
	
	class UAV_06_base_F: Helicopter_Base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {};
		};
	};
	
	class UAV_06_medical_base_F: UAV_06_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {};
		};
	};
	
	class UGV_02_Base_F: Tank_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {};
		};
	};
	
	class UGV_02_Demining_Base_F: UGV_02_Base_F {
		class ACE_Actions: ACE_Actions {
				class ACE_MainActions: ACE_MainActions {};
		};
	};
		
	class UGV_02_Science_Base_F: UGV_02_Base_F {
		class ACE_Actions: ACE_Actions {
				class ACE_MainActions: ACE_MainActions {};
		};
	};
			
	//BLUFOR Drone Packing
	class B_UAV_01_F: UAV_01_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_B_UAV_01_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_B_UAV_01_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class B_UAV_06_F: UAV_06_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_B_UAV_06_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_B_UAV_06_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class B_UAV_06_medical_F: UAV_06_medical_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_B_UAV_06_medical_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_B_UAV_06_medical_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class B_UGV_02_Demining_F: UGV_02_Demining_Base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_B_UGV_02_Demining_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_B_UGV_02_Demining_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class B_UGV_02_Science_F: UGV_02_Science_Base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_B_UGV_02_Science_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_B_UGV_02_Science_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class B_JSO_UAV_01_F: B_UAV_01_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_B_UAV_01_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_B_JSO_UAV_01_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	//OPFOR Drone Packing
	class O_UAV_01_F: UAV_01_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_O_UAV_01_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_O_UAV_01_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class O_UAV_06_F: UAV_06_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_O_UAV_06_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_O_UAV_06_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class O_UAV_06_medical_F: UAV_06_medical_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_O_UAV_06_medical_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_O_UAV_06_medical_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class O_UGV_02_Demining_F: UGV_02_Demining_Base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_O_UGV_02_Demining_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_O_UGV_02_Demining_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class O_UGV_02_Science_F: UGV_02_Science_Base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_O_UGV_02_Science_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_O_UGV_02_Science_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	//IND Drone Packing
	class I_UAV_01_F: UAV_01_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_I_UAV_01_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_I_UAV_01_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class I_UAV_06_F: UAV_06_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_I_UAV_06_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_I_UAV_06_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class I_UAV_06_medical_F: UAV_06_medical_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_I_UAV_06_medical_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_I_UAV_06_medical_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class I_UGV_02_Demining_F: UGV_02_Demining_Base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_I_UGV_02_Demining_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_I_UGV_02_Demining_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class I_UGV_02_Science_F: UGV_02_Science_Base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_I_UGV_02_Science_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_I_UGV_02_Science_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class I_E_UAV_01_F: UAV_01_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_I_E_UAV_01_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_I_E_UAV_01_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class I_E_UAV_06_F: UAV_06_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_I_E_UAV_06_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_I_E_UAV_06_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class I_E_UAV_06_medical_F: UAV_06_medical_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_I_E_UAV_06_medical_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_I_E_UAV_06_medical_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class I_E_UGV_02_Demining_F: UGV_02_Demining_Base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_I_E_UGV_02_Demining_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_I_E_UGV_02_Demining_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class I_E_UGV_02_Science_F: UGV_02_Science_Base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_I_E_UGV_02_Science_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_I_E_UGV_02_Science_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class I_INDMDFF_AR_2Darter: UAV_01_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_IINDMDFF_AR_2Darter {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_I_INDMDFF_AR_2Darter_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class I_INDMPDF_AR_2Darter: UAV_01_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_I_INDMPDF_AR_2Darter {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_I_INDMPDF_AR_2Darter_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	//CIV Drone Packing
	class C_UAV_06_F: UAV_06_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_C_UAV_06_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_C_UAV_06_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class C_UAV_06_medical_F: UAV_06_medical_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_C_UAV_06_medical_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_C_UAV_06_medical_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class C_IDAP_UAV_01_F: UAV_01_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_C_IDAP_UAV_01_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_C_IDAP_UAV_01_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class C_IDAP_UAV_06_F: UAV_06_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_C_IDAP_UAV_06_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_C_IDAP_UAV_06_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class C_IDAP_UAV_06_medical_F: UAV_06_medical_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_C_IDAP_UAV_06_medical_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_C_IDAP_UAV_06_medical_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class C_IDAP_UGV_02_Demining_F: UGV_02_Demining_Base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_C_IDAP_UGV_02_Demining_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_C_IDAP_UGV_02_Demining_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
	class C_IDAP_UAV_06_antimine_F: UAV_06_base_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class JDP_Pack_C_IDAP_UAV_06_antimine_F {
					displayName = "Pack drone";
					condition = "alive _target";
					statement = "['JDP_Item_C_IDAP_UAV_06_antimine_F_DroneKit', _player, _target] call JSO_DRONE_PACKING_fnc_packDrone";
					icon = "";
				};
			};
		};
	};
	
};

class CfgWeapons {
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	
	//Drone Kit Base
	class JDP_Base_DroneKit: CBA_MiscItem {
		author = "Karnax";
		model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_medium_F.p3d";
		hiddenSelections[] = {"Camo","Camo2"};
		hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa"};
		picture = "\jso_drone_packing\ui\icons\jdp_blackbox.paa";
	};
	
	//Base Drone Kit Mass
	class JDP_UAV_01_F_DroneKit: JDP_Base_DroneKit {
		class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 120;
		};
	};
	
	class JDP_UAV_06_F_DroneKit: JDP_Base_DroneKit {
		class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 130;
		};
	};
	
	class JDP_UGV_02_F_DroneKit: JDP_Base_DroneKit {
		class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 120;
		};
	};
	
	//BLUFOR Inventory Drone Kits
	class JDP_B_UAV_01_F_DroneKit: JDP_UAV_01_F_DroneKit {
		displayName = "Drone Kit (AR-2 Darter) [NATO]";
		scope = 2;
	};
	
	class JDP_B_UAV_06_F_DroneKit: JDP_UAV_06_F_DroneKit {
		displayName = "Drone Kit (AL-6 Pelican) [NATO]";
		scope = 2;
	};
	
	class JDP_B_UAV_06_medical_F_DroneKit: JDP_UAV_06_F_DroneKit {
		displayName = "Drone Kit (AL-6 Pelican, Medical) [NATO]";
		scope = 2;
	};
	
	class JDP_B_UGV_02_Demining_F_DroneKit: JDP_UGV_02_F_DroneKit {
		displayName = "Drone Kit (ED-1D Pelter) [NATO]";
		scope = 2;
	};
	
	class JDP_B_UGV_02_Science_F_DroneKit: JDP_UGV_02_F_DroneKit {
		displayName = "Drone Kit (ED-1E Roller) [NATO]";
		scope = 2;
	};
	
	class JDP_B_JSO_UAV_01_F_DroneKit: JDP_UAV_01_F_DroneKit {
		displayName = "Drone Kit (AR-2 Darter) [JSO]";
		scope = 2;
	};
	
	//OPFOR Inventory Drone Kits
	class JDP_O_UAV_01_F_DroneKit: JDP_UAV_01_F_DroneKit {
		displayName = "Drone Kit (Tayran AR-2) [CSAT]";
		scope = 2;
	};
	
	class JDP_O_UAV_06_F_DroneKit: JDP_UAV_06_F_DroneKit {
		displayName = "Drone Kit (Jinaah AL-6) [CSAT]";
		scope = 2;
	};
	
	class JDP_O_UAV_06_medical_F_DroneKit: JDP_UAV_06_F_DroneKit {
		displayName = "Drone Kit (Jinaah AL-6, Medical) [CSAT]";
		scope = 2;
	};
	
	class JDP_O_UGV_02_Demining_F_DroneKit: JDP_UGV_02_F_DroneKit {
		displayName = "Drone Kit (Akinaka ED-1D) [CSAT]";
		scope = 2;
	};
	
	class JDP_O_UGV_02_Science_F_DroneKit: JDP_UGV_02_F_DroneKit {
		displayName = "Drone Kit (Sayyah ED-1E) [CSAT]";
		scope = 2;
	};
	
	//IND Inventory Drone Kits
	class JDP_I_UAV_01_F_DroneKit: JDP_UAV_01_F_DroneKit {
		displayName = "Drone Kit (AR-2 Darter) [AAF]";
		scope = 2;
	};
	
	class JDP_I_UAV_06_F_DroneKit: JDP_UAV_06_F_DroneKit {
		displayName = "Drone Kit (AL-6 Pelican) [AAF]";
		scope = 2;
	};
	
	class JDP_I_UAV_06_medical_F_DroneKit: JDP_UAV_06_F_DroneKit {
		displayName = "Drone Kit (AL-6 Pelican, Medical) [AAF]";
		scope = 2;
	};
	
	class JDP_I_UGV_02_Demining_F_DroneKit: JDP_UGV_02_F_DroneKit {
		displayName = "Drone Kit (ED-1D Pelter) [AAF]";
		scope = 2;
	};
	
	class JDP_I_UGV_02_Science_F_DroneKit: JDP_UGV_02_F_DroneKit {
		displayName = "Drone Kit (ED-1E Roller) [AAF]";
		scope = 2;
	};
	
	class JDP_I_E_UAV_01_F_DroneKit: JDP_UAV_01_F_DroneKit {
		displayName = "Drone Kit (AR-2 Darter) [LDF]";
		scope = 2;
	};
	
	class JDP_I_E_UAV_06_F_DroneKit: JDP_UAV_06_F_DroneKit {
		displayName = "Drone Kit (AL-6 Pelican) [LDF]";
		scope = 2;
	};
	
	class JDP_I_E_UAV_06_medical_F_DroneKit: JDP_UAV_06_F_DroneKit {
		displayName = "Drone Kit (AL-6 Pelican, Medical) [LDF]";
		scope = 2;
	};
	
	class JDP_I_E_UGV_02_Demining_F_DroneKit: JDP_UGV_02_F_DroneKit {
		displayName = "Drone Kit (ED-1D Pelter) [LDF]";
		scope = 2;
	};
	
	class JDP_I_E_UGV_02_Science_F_DroneKit: JDP_UGV_02_F_DroneKit {
		displayName = "Drone Kit (ED-1E Roller) [LDF]";
		scope = 2;
	};
	
	class JDP_I_INDMDFF_AR_2Darter_DroneKit: JDP_UAV_01_F_DroneKit {
		displayName = "Drone Kit (AR-2 Darter) [MDF]";
		scope = 2;
	};
		
	class JDP_I_INDMPDF_AR_2Darter_DroneKit: JDP_UAV_01_F_DroneKit {
		displayName = "Drone Kit (AR-2 Darter) [MPD]";
		scope = 2;
	};
	
	//CIV Inventory Drone Kits
	class JDP_C_UAV_06_F_DroneKit: JDP_UAV_06_F_DroneKit {
		displayName = "Drone Kit (Utility)";
		scope = 2;
	};
	
	class JDP_C_UAV_06_medical_F_DroneKit: JDP_UAV_06_F_DroneKit {
		displayName = "Drone Kit (Utility, Medical)";
		scope = 2;
	};
	
	class JDP_C_IDAP_UAV_01_F_DroneKit: JDP_UAV_01_F_DroneKit {
		displayName = "Drone Kit (Drone) [IDAP]";
		scope = 2;
	};
	
	class JDP_C_IDAP_UAV_06_F_DroneKit: JDP_UAV_06_F_DroneKit {
		displayName = "Drone Kit (Utility Drone) [IDAP]";
		scope = 2;
	};
	
	class JDP_C_IDAP_UAV_06_medical_F_DroneKit: JDP_UAV_06_F_DroneKit {
		displayName = "Drone Kit (Utility Drone, Medical) [IDAP]";
		scope = 2;
	};
	
	class JDP_C_IDAP_UGV_02_Demining_F_DroneKit: JDP_UGV_02_F_DroneKit {
		displayName = "Drone Kit (Demining UGV) [IDAP]";
		scope = 2;
	};
	
	class JDP_C_IDAP_UAV_06_antimine_F_DroneKit: JDP_UAV_06_F_DroneKit {
		displayName = "Drone Kit (Demining Drone) [IDAP]";
		scope = 2;
	};
};

class cfgFunctions
{
	class JSO_Drone_Packing
	{
		class functions
		{
			file="jso_drone_packing\functions";
			class packDrone {
			};
			class unpackDrone {
			};
			class getWeaponStanceState {
			};
		};
	};
};

class cfgMods {
	author="Karnax";
};
