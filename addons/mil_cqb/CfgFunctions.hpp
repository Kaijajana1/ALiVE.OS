class cfgFunctions {
        class PREFIX {
                class COMPONENT {
                        class CQB {
                                description = "The main class";
                                file = "\x\alive\addons\mil_cqb\fnc_CQB.sqf";
                                RECOMPILE;
                        };
                        class CQBInit {
                                description = "The module initialisation function";
                                file = "\x\alive\addons\mil_cqb\fnc_CQBInit.sqf";
                                RECOMPILE;
                        };
                        class CQBsortStrategicHouses {
                                description = "The CQB blacklist function";
                                file = "\x\alive\addons\mil_cqb\fnc_CQBsortStrategicHouses.sqf";
                                RECOMPILE;
                        };
                        class CQBSaveData {
                                description = "CQB save data to DB";
                                file = "\x\alive\addons\mil_cqb\fnc_CQBSaveData.sqf";
                                RECOMPILE;
                        };
                        class CQBLoadData {
                                description = "CQB load data to DB";
                                file = "\x\alive\addons\mil_cqb\fnc_CQBLoadData.sqf";
                                RECOMPILE;
                        };
                        class CQBMenuDef {
                                description = "CQB Menu Definition";
                                file = "\x\alive\addons\mil_cqb\fnc_CQBMenuDef.sqf";
                                                                RECOMPILE;
                        };
                        class addCQBPositions {
                                description = "Enables CQB positions within the given radius of a position";
                                file = "\x\alive\addons\mil_cqb\fnc_addCQBPositions.sqf";
                                RECOMPILE;
                        };
                        class removeCQBPositions{
                                description = "Disables CQB positions within the given radius of a position";
                                file = "\x\alive\addons\mil_cqb\fnc_removeCQBPositions.sqf";
                                RECOMPILE;
                        };
                        class resetCQB {
                                description = "Resets CQB to run in the background without houses";
                                file = "\x\alive\addons\mil_cqb\fnc_resetCQB.sqf";
                                RECOMPILE;
                        };
                };
        };
};
