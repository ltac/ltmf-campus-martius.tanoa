
// F3 - F3 Folk ARPS Assign Gear
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================
_unit = _this select 0;

if (!(local _unit)) exitWith {};

_faction = tolower (faction _unit);
//Check variable f_gear, otherwise default to typeof
_loadout = _unit getVariable ["F_Gear", (typeOf _unit)];
_factionpath = missionConfigFile >> "CfgLoadouts" >> _faction;
_path = missionConfigFile >> "CfgLoadouts" >> _faction >> _loadout;

if (!isClass(_path)) then {
    _path = missionConfigFile >> "CfgLoadouts" >> _faction >> "fallback";
};

if (!isClass(_path)) exitWith {
    systemChat format ["No loadout found for %1 (typeOf %2)", _unit, (typeof _unit)];
};

_faces = getArray(_factionpath >> "faces");
_uniforms = getArray(_path >> "uniform");
_vests = getArray(_path >> "vest");
_headgears = getArray(_path >> "headgear");
_facewears = getArray(_path >> "facewear");
_backpack = getArray(_path >> "backpack");
_backpackItems = getArray(_path >> "backpackItems");
_weapons = getArray(_path >> "weapons");
_launchers = getArray(_path >> "launchers");
_handguns = getArray(_path >> "handguns");
_magazines = getArray(_path >> "magazines");
_items = getArray(_path >> "items");
_linkedItems = getArray(_path >> "linkedItems");
_attachments = getArray(_path >> "attachments");
_radios = getArray(_path >> "radios");

removeAllWeapons _unit;
removeAllAssignedItems _unit;
removeAllItemsWithMagazines _unit;

// ====================================================================================
// Clothes
//Random Uniform:
if ((count _uniforms) == 0) then {
    removeUniform _unit;
} else {
    _toAdd = _uniforms call BIS_fnc_selectRandom;
    if ((!isNil "_toAdd") && {isClass (configFile >> "CfgWeapons" >> _toAdd)}) then {
        if (_unit isUniformAllowed _toAdd) then {
            _unit addUniform _toAdd;
        } else {
            _unit forceAddUniform _toAdd;
        };
    } else {
        diag_log text format ["[LT] %1 Uniform (%2) not found using default (%3)", _loadout, _toAdd, (uniform _unit)];
    };
};
//Random Vest:
if ((count _vests) == 0) then {
    removeVest _unit;
} else {
    _toAdd = _vests call BIS_fnc_selectRandom;
    if ((!isNil "_toAdd") && {isClass (configFile >> "CfgWeapons" >> _toAdd)}) then {
        removeVest _unit;
        _unit addVest _toAdd;
    } else {
        diag_log text format ["[LT] %1 Vest (%2) not found using default (%3)", _loadout, _toAdd, (vest _unit)];
    };
};
//Random Backpack:
if ((count _backpack) == 0) then {
    removeBackpack _unit;
} else {
    _toAdd = _backpack call BIS_fnc_selectRandom;
    if ((!isNil "_toAdd") && {isClass (configFile >> "CfgVehicles" >> _toAdd)}) then {
        removeBackpack _unit;
        _unit addBackpack _toAdd;
    } else {
        diag_log text format ["[LT] %1 Backpack (%2) not found using default (%3)", _loadout, _toAdd, (backpack _unit)];
    };
};
//Random Headgear:
if ((count _headgears) == 0) then {
    removeHeadgear _unit;
} else {
    _toAdd = _headgears call BIS_fnc_selectRandom;
    if ((!isNil "_toAdd") && {isClass (configFile >> "CfgWeapons" >> _toAdd)}) then {
        removeHeadgear _unit;
        _unit addHeadgear _toAdd;
    } else {
        diag_log text format ["[LT] %1 Headgear (%2) not found using default (%3)", _loadout, _toAdd, (headgear _unit)];
    };
};
//Random Facewear:
if ((count _facewears) == 0) then {
    removeGoggles _unit;
} else {
    _toAdd = _facewears call BIS_fnc_selectRandom;
    if ((!isNil "_toAdd") && {isClass (configFile >> "CfgWeapons" >> _toAdd)}) then {
        removeGoggles _unit;
        _unit addGoggles _toAdd;
    } else {
        diag_log text format ["[LT] %1 Facewear (%2) not found using default (%3)", _loadout, _toAdd, (goggles _unit)];
    };
};
//Random Face:
if ((count _faces) != 0) then {
    _toAdd = _faces call BIS_fnc_selectRandom;
    if (!isNil "_toAdd") then {
        _unit setFace _toAdd
    } else {
        diag_log text format ["[LT] %1 Face (%2) not found using default", _loadout, _toAdd];
    };
};
//Clear backpack
clearAllItemsFromBackpack _unit;


// ====================================================================================
// Radio

if (count _radios != 0) then {
    [_unit, _radios] call L_fnc_getRadiosACRE;
};

// Backpack Items
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    if ((count _arr) > 0) then {
        _classname = _arr select 0;
        _amt = if (count _arr > 1) then {parseNumber (_arr select 1);} else {1};
        for [{_i=1},{_i<=_amt},{_i=_i+1}] do {
            if (_unit canAddItemToBackpack _classname) then {
                _unit addItemToBackpack _classname;
            } else {
                _unit addItem _classname;
            };
        };
    };
} foreach _backpackItems;

// ====================================================================================
// Items
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    if ((count _arr) > 0) then {
        _classname = _arr select 0;
        _amt = if (count _arr > 1) then {parseNumber (_arr select 1);} else {1};
        for [{_i=1},{_i<=_amt},{_i=_i+1}] do {
            _unit additem _classname;
        };
    };
} foreach _items;
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    if ((count _arr) > 0) then {
        _classname = _arr select 0;
        _amt = if (count _arr > 1) then {parseNumber (_arr select 1);} else {1};
        if ("Binocular" in ([(configFile >> "CfgWeapons" >> _classname), true] call BIS_fnc_returnParents)) then {
            _unit addWeapon _classname;
        } else {
            for [{_i=1},{_i<=_amt},{_i=_i+1}] do {
                _unit linkItem _classname;
            };
        };
    };
} foreach _linkedItems;


// Magazines
_magazinesNotAdded = [];
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    if ((count _arr) > 0) then {
        _classname = _arr select 0;
        _amt = if (count _arr > 1) then {parseNumber (_arr select 1);} else {1};
        _unit addMagazines [_classname, _amt];
        _notAdded = _amt - ({_x == _classname} count (magazines _unit));
        for "_index" from 0 to (_notAdded - 1) do {
            _magazinesNotAdded pushBack _classname;
        };
    };
} foreach _magazines;

// ====================================================================================
// Weapons
if ((count _weapons) > 0) then {_unit addWeapon (_weapons call BIS_fnc_selectRandom);};
if ((count _launchers) > 0) then {_unit addWeapon (_launchers call BIS_fnc_selectRandom);};
if ((count _handguns) > 0) then {_unit addWeapon (_handguns call BIS_fnc_selectRandom);};

// ====================================================================================
// attachments
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    if ((count _arr) > 0) then {
        _classname = _arr select 0;
        _amt = if (count _arr > 1) then {parseNumber (_arr select 1);} else {1};
        for [{_i=1},{_i<=_amt},{_i=_i+1}] do {
            _unit addPrimaryWeaponItem _classname;
            _unit addSecondaryWeaponItem _classname;
            _unit addHandgunItem _classname;
        };
    };
} foreach _attachments;

//Try to add missing magazines:
{
    if (_unit canAdd _x) then {
        _unit addMagazines [_x, 1];
    } else {
        if (isNil "F_GEAR_ERROR_LOADOUTS") then {F_GEAR_ERROR_LOADOUTS = [];};
        diag_log text format ["[LT] %1 - No room for magazine %2", _loadout, _x];
        if (!(_loadout in F_GEAR_ERROR_LOADOUTS)) then {
            F_GEAR_ERROR_LOADOUTS pushBack _loadout;
            diag_log text format ["[LT] Failed To add Magazine %1 to %2", _x, _loadout];
        };
    };
} forEach _magazinesNotAdded;

_a = _path >> "init";
if (isText _a) then {
    _unit call compile ("this = _this;"+ getText _a);
};

//  ====================================================================================
// Medic unit ~~things~~

// List of medic units
_medicUnits = [
"B_medic_F",
"O_medic_F",
"I_medic_F"
];

{
  if((typeOf _unit) == _x) then {
    _unit setVariable ["f_var_assignGear","m",true];
  };
} forEach _medicUnits;


// ====================================================================================
// This variable simply tracks the progress of the gear assignation process, for other
// scripts to reference.
_unit setVariable ["f_var_assignGear_done",true,true];
