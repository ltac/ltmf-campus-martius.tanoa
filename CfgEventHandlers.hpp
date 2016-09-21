//Extended Event Handlers:
class Extended_Init_EventHandlers {
    class CAManBase {
        class F_AssignGear {            
            onRespawn = true;
            init ="_this call F_fnc_assignGearMan;";        
        };
    };
};
class Extended_InitPost_EventHandlers {
    
	class Car {
        class F_AssignVehicleGear {
					serverInit  = "[(_this select 0), 'Car'] call F_fnc_assignGearVehicle;";
				};
    };
    class Tank {
        class F_AssignVehicleGear {
					serverInit  = "[(_this select 0), 'Tank'] call F_fnc_assignGearVehicle;";
				};
    };
    class Helicopter {
        class F_AssignVehicleGear {
					serverInit  = "[(_this select 0), 'Helicopter'] call F_fnc_assignGearVehicle;";
				};
    };
    class Plane {
        class F_AssignVehicleGear {
					serverInit  = "[(_this select 0), 'Plane'] call F_fnc_assignGearVehicle;";
			};
    };
    class Ship_F {
        class F_AssignVehicleGear {
					serverInit  = "[(_this select 0), 'Ship_F'] call F_fnc_assignGearVehicle;";
			};
    };
};