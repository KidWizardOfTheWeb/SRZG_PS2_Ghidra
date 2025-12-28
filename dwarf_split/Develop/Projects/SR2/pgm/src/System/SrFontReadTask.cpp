/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\System\SrFontReadTask.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class clsSrFontRead_Task * m_tapcTask[21]; // size: 0x54, address: 0xBFB320
struct /* @anon1 */ {
    // total size: 0x30
} __vt__18clsSrFontRead_Task; // size: 0x30, address: 0x6D0570
struct /* @anon0 */ {
    // total size: 0x30
} __vt__7clsTask; // size: 0x30, address: 0x6B59F0
class clsTaskManager * m_tpcSingleton; // size: 0x4, address: 0x6E69D0
class clsPfFileMgr * m_tpcSingleton; // size: 0x4, address: 0x703C48
class clsPack * m_tpcSingleton; // size: 0x4, address: 0xB0A950
struct /* @anon2 */ {
    // total size: 0x2C
} __vt__9clsOOTask; // size: 0x2C, address: 0x6B58B0
static float FLYACTION_DESCENT_PITCH_GRAVITY; // size: 0x4, address: 0x0
static float FLYACTION_FALL_PITCH_GRAVITY; // size: 0x4, address: 0x0
static float FLYACTION_DEFAULT_PITCH_GRAVITY; // size: 0x4, address: 0x0
static float FLYACTION_MIN_PITCH; // size: 0x4, address: 0x0
static float FLYACTION_MAX_PITCH; // size: 0x4, address: 0x0
static float FLYACTION_LEFT_RIGHT_ROT; // size: 0x4, address: 0x0
static float FLYACTION_UP_DOWN_ROT; // size: 0x4, address: 0x0
static float toaf32GpUsedRate[5]; // size: 0x14, address: 0x0
static float toaf32ItemBox[3]; // size: 0xC, address: 0x0
static float toaf32BonusGLink[3]; // size: 0xC, address: 0x0
static float toaf32BonusPower[6]; // size: 0x18, address: 0x0
static float toaf32BonusFly[3]; // size: 0xC, address: 0x0
static float toaf32BonusSpeed[3]; // size: 0xC, address: 0x0
static float toaf32BonusTrick[7]; // size: 0x1C, address: 0x0
enum enmRet aoeRet[3]; // size: 0xC, address: 0x655000
static unsigned char ChkComUseData[1]; // size: 0x1, address: 0x0
static unsigned char ChkCourseUseData[1]; // size: 0x1, address: 0x0
static unsigned char chk__enum__enmMotion_nakawatari_SizeOver[1]; // size: 0x1, address: 0x0
static unsigned char chk__enum__notSkateModelType_nakawatari_NotEqual[1]; // size: 0x1, address: 0x0
static unsigned char chk__enum__enmMotionType_nakawatari_SizeOver[1]; // size: 0x1, address: 0x0
static unsigned char chk__enum__enmLevel_nakawatari_SizeOver[1]; // size: 0x1, address: 0x0
static float tosUnitMatrix[4][4]; // size: 0x40, address: 0x0
static class NNS_VECTOR tosUnitScaleVec; // size: 0xC, address: 0x0
static class NNS_VECTOR tosZVec; // size: 0xC, address: 0x0
static class NNS_VECTOR tosYVec; // size: 0xC, address: 0x0
static class NNS_VECTOR tosXVec; // size: 0xC, address: 0x0
static class NNS_VECTOR tosZeroVec; // size: 0xC, address: 0x0
static class NNS_VECTORFAST tosUnitScaleVecFast; // size: 0x10, address: 0x0
static class NNS_VECTORFAST tosZVecFast; // size: 0x10, address: 0x0
static class NNS_VECTORFAST tosYVecFast; // size: 0x10, address: 0x0
static class NNS_VECTORFAST tosXVecFast; // size: 0x10, address: 0x0
static class NNS_VECTORFAST tosZeroVecFast; // size: 0x10, address: 0x0
unsigned int oau32DebugColor[16]; // size: 0x40, address: 0x655010
char * oapc8Str[2]; // size: 0x8, address: 0x5F2198
char * oapc8Str[2]; // size: 0x8, address: 0x0
char * oapc8Str[2]; // size: 0x8, address: 0x0
char * oapc8Str[2]; // size: 0x8, address: 0x5F21B0
unsigned char oau8Mask[2]; // size: 0x2, address: 0x0
unsigned short oau16Mask[2]; // size: 0x4, address: 0x0
unsigned int oau32Mask[2]; // size: 0x8, address: 0x655050
unsigned int oau32Col[2]; // size: 0x8, address: 0x655058
class Fuid fuid; // size: 0x10, address: 0x0
class __deque_deleter_common : private __deque_buf {
    // total size: 0x18
public:
    class compressed_pair buf_; // offset 0x0, size 0x10
    unsigned int start_; // offset 0x10, size 0x4
    unsigned int size_; // offset 0x14, size 0x4
};
class __list_imp : private __list_deleter {
    // total size: 0x14
};
class allocator {
    // total size: 0x1
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class SJCK {
    // total size: 0x8
public:
    signed char * data; // offset 0x0, size 0x4
    signed int len; // offset 0x4, size 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class clsSrFontSystem : public clsPfFontSystem, public clsSingleton {
    // total size: 0x40C
public:
    class stcFontObjData m_asFontObjData[21]; // offset 0x50, size 0x348
    class clsPfSplitTexture * m_pcBtnData; // offset 0x398, size 0x4
    void * m_pvBtnDataBuff; // offset 0x39C, size 0x4
    void (* m_fFontLoadFunc)(unsigned int, signed int, class clsSrFontSystem *, enum enmFontNo, signed int, void *, unsigned char, void *); // offset 0x3A0, size 0x4
    void (* m_fCancelLoadFont)(enum enmFontNo); // offset 0x3A4, size 0x4
    signed int (* m_fStrCreate)(signed int, unsigned short *, signed int *); // offset 0x3A8, size 0x4
    float m_af32Data[8]; // offset 0x3AC, size 0x20
    signed int m_as32Data[8]; // offset 0x3CC, size 0x20
    void * m_apovData[8]; // offset 0x3EC, size 0x20
};
class stcPoint2d {
    // total size: 0x8
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
};
class clsSrFontRead_Task : public clsTask {
    // total size: 0x74
public:
    class clsSrFontSystem * m_pcFontSystem; // offset 0x54, size 0x4
    enum enmFontNo m_enFontNo; // offset 0x58, size 0x4
    signed int m_s32FontFileNo; // offset 0x5C, size 0x4
    unsigned char m_bBtnLoad; // offset 0x60, size 0x1
    unsigned char m_bFontBuffDelFlag; // offset 0x61, size 0x1
    void * m_pvFontDataBuff; // offset 0x64, size 0x4
    enum enmRet m_eFontDataBuff_Ret; // offset 0x68, size 0x4
    void * m_pvBtnDataBuff; // offset 0x6C, size 0x4
    enum enmRet m_eBtnDataBuff_Ret; // offset 0x70, size 0x4
};
class sceGsTex0 {
    // total size: 0x8
public:
    unsigned long TBP0 : 14; // offset 0x0, size 0x4
    unsigned long TBW : 6; // offset 0x0, size 0x4
    unsigned long PSM : 6; // offset 0x0, size 0x4
    unsigned long TW : 4; // offset 0x0, size 0x4
    unsigned long TH : 4; // offset 0x0, size 0x4
    unsigned long TCC : 1; // offset 0x0, size 0x4
    unsigned long TFX : 2; // offset 0x0, size 0x4
    unsigned long CBP : 14; // offset 0x0, size 0x4
    unsigned long CPSM : 4; // offset 0x0, size 0x4
    unsigned long CSM : 1; // offset 0x0, size 0x4
    unsigned long CSA : 5; // offset 0x0, size 0x4
    unsigned long CLD : 3; // offset 0x0, size 0x4
};
class clsPfTexture : public clsOOTexture, public clsPfTextureBase {
    // total size: 0x20
};
enum enm {
    NONE = -1,
    CHARA_0 = 0,
    ENTRY_CHARA_1 = 1,
    CHARA_SUPER_SONIC_MODEL_3 = 3,
    GEAR_10 = 10,
    ENTRY_GEAR_11 = 11,
    MAP_100 = 100,
    MAP_MISSION_101 = 101,
    MAP_SURVIVALBALL_102 = 102,
    MAP_TUTORIAL_103 = 103,
    MAP_SURVIVALBATTLE_104 = 104,
    MAP_SURVIVALRELAY_105 = 105,
    REFLECT_MAP_110 = 110,
    REFLECT_DIVMAP_111 = 111,
    MAP_BURN_LIGHT_150 = 150,
    SKY_200 = 200,
    SKY_THUNDER_250 = 250,
    START_CAMERA_MOTION_300 = 300,
    START_CAMERA_MOTION_301 = 301,
    SET_DATA_1000 = 1000,
    MISSION_DATA_1010 = 1010,
    TUTORIAL_DATA_1011 = 1011,
    GAME_2D_1020 = 1020,
    GAME_2D_1025 = 1025,
    GAME_2D_1026 = 1026,
    GAME_2D_1027 = 1027,
    MISSION_2D_1028 = 1028,
    SUVIVALBALL_2D_1029 = 1029,
    TUTORIAL_2D_1030 = 1030,
    NETRANKING_2D_1031 = 1031,
    SUVIVALBATTLE_2D_1032 = 1032,
    TIMEATTACK_2D_1033 = 1033,
    SURVIVALMESSAGE_2D_1034 = 1034,
    SUVIVALBATTLE_MAP2D_1035 = 1035,
    MISSION_STAGE_2D_1036 = 1036,
    ETC_BINARY_STAGE_DATA_1050 = 1050,
    OBJ_PORTAL_1090 = 1090,
    PATH__PLAYER_1100 = 1100,
    PATH__GIMMICK_1101 = 1101,
    PATH__RAIL_1102 = 1102,
    PATH__TRICK_1103 = 1103,
    PATH__GRAVITY_1104 = 1104,
    PATH__RANK_1105 = 1105,
    PATH__DIVE_1106 = 1106,
    PATH__COURSE_1110 = 1110,
    PATH__COM_1111 = 1111,
    TUTORIAL_GHOST_1200 = 1200,
    SET_SE_3D_1900 = 1900,
    SET_SE_2D_1901 = 1901,
    START_GIMMICK = 2000,
    START_UNION_GIMMICK = 2000,
    RING_2000 = 2000,
    ITEM_BOX_2010 = 2010,
    ITEM_BOX_AIR_2011 = 2011,
    DASH_PANEL_2020 = 2020,
    SPRING_2030 = 2030,
    DASH_RING_2040 = 2040,
    START_GATE_2050 = 2050,
    GOAL_LINE_2060 = 2060,
    TYPE_2070 = 2070,
    PT_DOOR_2080 = 2080,
    PT_DOOR_2081 = 2081,
    PT_ONLY_2082 = 2082,
    PUT_FIXEDOBJECT_2090 = 2090,
    PUT_FIXEDMOTOBJ_2091 = 2091,
    PUT_FIXEDMOTMATOBJ_2092 = 2092,
    PUT_FIXEDBURNOBJ_2093 = 2093,
    PUT_FIXEDMATOBJ_2094 = 2094,
    PUT_GRAVITYOBJ_2100 = 2100,
    PUT_MATMOTGOBJ_2101 = 2101,
    PUT_GRAVITYOBJ2_2102 = 2102,
    PUT_PARALLAX_2103 = 2103,
    PUT_GRAVITYOBJ3_2104 = 2104,
    PUT_ARROW_2105 = 2105,
    PUT_MOTIONOBJ_2110 = 2110,
    WALL_OBJ_2120 = 2120,
    CATAPULT_2130 = 2130,
    PATH_GARVITYOBJ_2140 = 2140,
    GRAVITY_RING_2150 = 2150,
    HIDE_KICKER_2160 = 2160,
    WALL_GIMMICK_2170 = 2170,
    PLAY_AROUND_SE_2180 = 2180,
    ADJUST_GCTRL_2190 = 2190,
    PLAY_LOOP_SE_2200 = 2200,
    AUTO_WALLRUN_2210 = 2210,
    MAG_BARRIRER_2220 = 2220,
    RAIL_WAY_START_2230 = 2230,
    RAIL_WAY_END_2231 = 2231,
    SPEED_DOWN_2240 = 2240,
    END_UNION_GIMMICK = 2241,
    START_GIMMICK_ST00 = 10000,
    END_GIMMICK_ST00 = 10001,
    START_GIMMICK_ST01 = 11000,
    ST01_PATH_CAR_11000 = 11000,
    ST01_PUT_CAR_11010 = 11010,
    ST01_PATH_TRAIN_11040 = 11040,
    ST01_PRODUCTION_ROBO_11050 = 11050,
    ST01_SECURITY_ROBO_11060 = 11060,
    ST01_TAXI_11080 = 11080,
    ST01_CHAIR_A_11190 = 11190,
    ST01_CHAIR_B_11191 = 11191,
    ST01_GARBAGE_BOX_11192 = 11192,
    ST01_GUIDE_BOARD_11193 = 11193,
    ST01_CONE_11194 = 11194,
    ST01_GLINK_TRAIN_11200 = 11200,
    ST01_GLINK_TRAIN_OBJECT_11201 = 11201,
    ST01_TURB_COL_11210 = 11210,
    ST01_GCTRL_TRAIN_11220 = 11220,
    ST01_GCTRL_TRAIN_OBJECT_11221 = 11221,
    END_GIMMICK_ST01 = 11222,
    START_GIMMICK_ST02 = 12000,
    ST02_IVY_12000 = 12000,
    ST02_BEE_ROBO_12010 = 12010,
    ST02_KUKI_12020 = 12020,
    ST02_PLANT_12030 = 12030,
    ST02_PLANT_12031 = 12031,
    ST02_SIDA_12040 = 12040,
    ST02_PATH_BEE_12050 = 12050,
    ST02_BUTTERFLY_12060 = 12060,
    ST02_RUN_BEE_12070 = 12070,
    END_GIMMICK_ST02 = 12071,
    START_GIMMICK_ST03 = 13000,
    ST03_COGWHEEL_13000 = 13000,
    ST03_PRESS_13010 = 13010,
    ST03_EXTRALAMP_13020 = 13020,
    ST03_PUT_ROBO_13030 = 13030,
    ST03_PUT_CONTAINER_13040 = 13040,
    ST03_SECURITY_GATE_13050 = 13050,
    ST03_POWER_BREAK_13060 = 13060,
    ST03_MACROSS_13070 = 13070,
    ST03_PATH_ROBO_13090 = 13090,
    END_GIMMICK_ST03 = 13091,
    START_GIMMICK_ST04 = 14000,
    ST04_AUTORUN_CANOE_14000 = 14000,
    ST04_GLINK_WATERSPHERE_14010 = 14010,
    ST04_FOUNTAIN_14020 = 14020,
    ST04_STRAIGHT_FOUNTAIN_14030 = 14030,
    ST04_PATH_CANOE_14040 = 14040,
    ST04_WATER_TURBULENCE_14050 = 14050,
    ST04_PUT_CANOE_14060 = 14060,
    ST04_SMALL_WATERSPHERE_14070 = 14070,
    END_GIMMICK_ST04 = 14071,
    START_GIMMICK_ST05 = 15000,
    ST05_ROT_GROUND_15000 = 15000,
    ST05_ROT_FALL_MANAGER_15010 = 15010,
    ST05_ROT_FALL_OBJECT_15011 = 15011,
    ST05_FIRE_15020 = 15020,
    ST05_SPAIN_15030 = 15030,
    ST05_DOMINO_15040 = 15040,
    ST05_ROT_FALL_GLINK_MANAGER_15050 = 15050,
    ST05_ROT_FALL_GLINK_OBJECT_15051 = 15051,
    ST05_DETENTION_15060 = 15060,
    ST05_BREAK_RAILING_15070 = 15070,
    END_GIMMICK_ST05 = 15071,
    START_GIMMICK_ST06 = 16000,
    ST06_SURVEILLANCE_CAMERA_16000 = 16000,
    ST06_BLOCKADEOBJ_16010 = 16010,
    ST06_LASER_16020 = 16020,
    ST06_GLINK_ELEVATOR_16030 = 16030,
    ST06_ELEVATOR_16040 = 16040,
    END_GIMMICK_ST06 = 16041,
    START_GIMMICK_ST07 = 17000,
    ST07_FLOOR_S_17000 = 17000,
    ST07_FLOOR_B_17001 = 17001,
    ST07_FLOOR_SWITCH_17002 = 17002,
    ST07_FLOOR_CHANGE_17003 = 17003,
    ST07_FLOOR_KICKER_17004 = 17004,
    ST07_FLOOR_GRAVITY_17005 = 17005,
    ST07_FLOOR_GLINK_17006 = 17006,
    ST07_JOINT00_17010 = 17010,
    ST07_JOINT01_17011 = 17011,
    ST07_JOINT02_17012 = 17012,
    ST07_JOINT03_17013 = 17013,
    ST07_GUARDRAIL00_17020 = 17020,
    ST07_GUARDRAIL01_17021 = 17021,
    ST07_GIMMICKWALL00_17030 = 17030,
    ST07_GIMMICKWALL01_17031 = 17031,
    ST07_GATE_17050 = 17050,
    ST07_WALL_THROUGH_17060 = 17060,
    ST07_POWER_BREAK_17070 = 17070,
    ST07_SOLAR_17080 = 17080,
    END_GIMMICK_ST07 = 17081,
    START_GIMMICK_ST08 = 18000,
    ST08_ROAD_18000 = 18000,
    ST08_ROAD_SIGNAL_18010 = 18010,
    ST08_ROAD_CAR_18020 = 18020,
    ST08_ROAD_GLINK_BUS_18030 = 18030,
    ST08_ROAD_TRAILER_18040 = 18040,
    ST08_ROAD_CONTAINER_18041 = 18041,
    ST08_UFOCATCHER_18050 = 18050,
    ST08_FZONE_ENEMY_18060 = 18060,
    END_GIMMICK_ST08 = 18061,
    START_GIMMICK_ST09 = 19000,
    END_GIMMICK_ST09 = 19001,
    START_GIMMICK_ST10 = 20000,
    ST10_SNOWBALL_20010 = 20010,
    ST10_FALL_SNOWBALL_20020 = 20020,
    ST10_SNOWMAN_20030 = 20030,
    ST10_LIFT_20040 = 20040,
    END_GIMMICK_ST10 = 20041,
    START_GIMMICK_ST11 = 21000,
    ST11_ENERGY_CYLINDER_21000 = 21000,
    ST11_FSECURITY_GATE_21010 = 21010,
    ST11_PATH_SECURITY_ROBO_21020 = 21020,
    ST11_FAN_21030 = 21030,
    ST11_CRANE_21040 = 21040,
    ST11_GLINK_CYLINDER_21050 = 21050,
    ST11_LINE_OBJ_21060 = 21060,
    END_GIMMICK_ST11 = 21061,
    START_GIMMICK_ST12 = 22000,
    ST12_GLINK_BRIDGE_22010 = 22010,
    ST12_PUT_CANOE_22020 = 22020,
    ST12_PATH_CANOE_22030 = 22030,
    ST12_MOTIONOBJ_22040 = 22040,
    END_GIMMICK_ST12 = 22041,
    START_GIMMICK_ST13 = 23000,
    ST13_BUNKI_23010 = 23010,
    ST13_CATAPULT_23020 = 23020,
    ST13_COLOSSUS_23030 = 23030,
    ST13_GLINK_COLOSSUS_23040 = 23040,
    ST13_BRIDGE_23050 = 23050,
    ST13_GATE_23060 = 23060,
    ST13_PILLAR_23070 = 23070,
    ST13_PT_OBJ_23080 = 23080,
    ST13_HIKARI_23090 = 23090,
    ST13_SIGNBOARD_23100 = 23100,
    ST13_SIGNBOARD_B_23110 = 23110,
    ST13_PT_WALL_23120 = 23120,
    END_GIMMICK_ST13 = 23121,
    START_GIMMICK_ST14 = 24000,
    ST14_FAN_24000 = 24000,
    ST14_OBJ_CRANE_24010 = 24010,
    ST14_LASER_24020 = 24020,
    ST14_BIG_FAN_24030 = 24030,
    ST14_STEEL_FRAME_24040 = 24040,
    END_GIMMICK_ST14 = 24041,
    START_GIMMICK_ST15 = 25000,
    ST15_CORE_BASE_25000 = 25000,
    ST15_FUSION_MACHINE_25010 = 25010,
    ST15_ENERGY_BULLET_25020 = 25020,
    ST15_METEORITE_L_25030 = 25030,
    ST15_METEORITE_S_25040 = 25040,
    ST15_BLACK_HOLE_25050 = 25050,
    ST15_GLINK_FLOOR_BOARD_25060 = 25060,
    ST15_BREAK_FLOOR_25070 = 25070,
    ST15_FLOATING_METEORITE_25080 = 25080,
    ST15_FLOATING_METEO_TRIG_25090 = 25090,
    ST15_SAFE_TRAMPOLINE_25100 = 25100,
    END_GIMMICK_ST15 = 25101,
    START_GIMMICK_ST16 = 26000,
    ST16_HELICOPTER_26000 = 26000,
    ST16_HELICOPTER_OBJ_26001 = 26001,
    ST16_GLINK_SIGNBOARD_26010 = 26010,
    ST16_BREAK_SIGNBOARD_26020 = 26020,
    ST16_AUTORUN_HELI_26030 = 26030,
    END_GIMMICK_ST16 = 26031,
    START_GIMMICK_MISSION = 27000,
    MISSION_PATH_TARGET_27000 = 27000,
    MISSION_TIME_GATE_27010 = 27010,
    MISSION_MARK_27011 = 27011,
    MISSION_PATH_ROBO_27020 = 27020,
    MISSION_FIXED_LINK_27030 = 27030,
    MISSION_GLINK_COLOSSUS_27040 = 27040,
    END_GIMMICK_MISSION = 27041,
    START_GIMMICK_SURVIVALBALL = 28000,
    SURVIVALBALL_GOALRING_28000 = 28000,
    SURVIVALBALL_BALL_28010 = 28010,
    SURVIVALBALL_POLE_28020 = 28020,
    SURVIVALBALL_START_28030 = 28030,
    SURVIVALBALL_PUT_OBJ_28040 = 28040,
    END_GIMMICK_SURVIVALBALL = 28041,
    START_GIMMICK_SURVIVALRELAY = 28500,
    SURVIVALRELAY_WALKRUN_28500 = 28500,
    END_GIMMICK_SURVIVALRELAY = 28501,
    START_GIMMICK_SURVIVALBATTLE = 29000,
    SURVIVALBATTLE_MISSILE_29000 = 29000,
    SURVIVALBATTLE_BOMB_29010 = 29010,
    SURVIVALBATTLE_BLOCK_29020 = 29020,
    SURVIVALBATTLE_POLE_29030 = 29030,
    SURVIVALBATTLE_BARRIER_29040 = 29040,
    SURVIVALBATTLE_EXPLOSION_29050 = 29050,
    END_GIMMICK_SURVIVALBATTLE = 29051,
    END_GIMMICK = 29052,
    EFFECT_30000 = 30000,
    EFFECT_GRAVITY_30010 = 30010,
    EFFECT_GRAVITY_30020 = 30020,
    EFFECT_GRAVITY2_30021 = 30021,
    EFFECT_SUNLENZ_30030 = 30030,
    EFFECT_LANDING_30040 = 30040,
    EFFECT_CURVEAIR_30050 = 30050,
    EFFECT_CRASH_30060 = 30060,
    EFFECT_DASH_30070 = 30070,
    EFFECT_GETAGP_30080 = 30080,
    EFFECT_FLLWLINE_30090 = 30090,
    EFFECT_CRASHC_30100 = 30100,
    EFFECT_BADTRK_30110 = 30110,
    EFFECT_GEARCH01_30120 = 30120,
    EFFECT_GEARCH02_30130 = 30130,
    EFFECT_GEARCH03_30140 = 30140,
    EFFECT_GEARCHRT_30150 = 30150,
    EFFECT_FALSESTART00_30170 = 30170,
    EFFECT_FALSESTART01_30180 = 30180,
    EFFECT_GCTRL_00_30190 = 30190,
    EFFECT_GCTRL_01_30200 = 30200,
    EFFECT_GCTRL_02_30210 = 30210,
    EFFECT_MIST_30230 = 30230,
    EFFECT_ST02_SIDARIDE_30240 = 30240,
    EFFECT_ST01_ROBOCURV_30250 = 30250,
    EFFECT_MINIWAVE_30260 = 30260,
    EFFECT_BACKRIBBON_30270 = 30270,
    EFFECT_GIMICKLINE_30280 = 30280,
    EFFECT_LANDINGWATERTRICK_30290 = 30290,
    EFFECT_LANDINGWATERTRICK_30300 = 30300,
    EFFECT_WAVYTEXTURE_30310 = 30310,
    EFFECT_ST11_DISELECTRIC_30320 = 30320,
    EFFECT_REFRECT_PLANE_START_30330 = 30330,
    EFFECT_REFRECT_PLANE_END_30339 = 30339,
    EFFECT_ST15_METEOFALL_30340 = 30340,
    EFFECT_ST15_DIVEEFFECT_30350 = 30350,
    EFFECT_ST15_METEO_EXPLODE_30360 = 30360,
    EFFECT_ST15_BOSS_CRUSH_30370 = 30370,
    EFFECT_ST15_BOSS_CRUSH2_30371 = 30371,
    EFFECT_POWER_HIT_30380 = 30380,
    EFFECT_ST15_BOSS_APPEAR_30390 = 30390,
    EFFECT_TRICK_X_FLASHLINE_30400 = 30400,
    EFFECT_TRICK_X_RING_30410 = 30410,
    EFFECT_ST07_BORN_RING_30420 = 30420,
    EFFECT_ST07_PTOBJ_30430 = 30430,
    EFFECT_ST07_FLOOR_30440 = 30440,
    EFFECT_ST07_FLOOR_G_30450 = 30450,
    EFFECT_ST07_BORN_SPRING_30460 = 30460,
    EFFECT_ST14_FAN_L_EFFECT_30470 = 30470,
    EFFECT_ST14_FAN_S_EFFECT_30480 = 30480,
    EFFECT_ST07_BORN_ITEMBOX_30490 = 30490,
    EFFECT_ST07_BORN_DPANEL_30500 = 30500,
    EFFECT_GC_EMPTY_EFFECT_30510 = 30510,
    EFFECT_ST07_FLOOR_HOLE_30520 = 30520,
    EFFECT_LOCKON_MOT = 30530,
    EFFECT_LOCKON_MATMOT = 30531,
    EFFECT_GRAVITY_LO_30540 = 30540,
    EFFECT_ATTACK_BOOST_30610 = 30610,
    EFFECT_GEARCH_TYPE_30620 = 30620,
    PARTICLE_32000 = 32000,
    PARTICLE_32001 = 32001,
    PARTICLE_32100 = 32100,
    PARTICLE_UNION_32100 = 32100,
    PARTICLE_32999 = 32999,
    PARTICLE_GAME_32500 = 32500,
    PARTICLE_MODE_32550 = 32550,
    PARTICLE_SET_33000 = 33000,
    PARTICLE_33000 = 33000,
    PARTICLE_33999 = 33999,
    SCRIPT_SURVIVAL_DATA_START = 34000,
    SURVIVAL_DATA_BALLPOS_34000 = 34000,
    SCRIPT_SURVIVAL_DATA_END = 34001,
    SCRIPT_BINARY_START = 35000,
    SCRIPT_BINARY_35000 = 35000,
    SCRIPT_BINARY_END = 35049,
    SCRIPT_MODEL_START = 35050,
    SCRIPT_MODEL_35050 = 35050,
    SCRIPT_MODEL_MOT_35060 = 35060,
    SCRIPT_MODEL_MAT_35070 = 35070,
    SCRIPT_MODEL_MOT_MAT_35080 = 35080,
    SCRIPT_MODEL_MAT_MOF_35090 = 35090,
    SCRIPT_MODEL_MOT_MAT_MOF_35100 = 35100,
    SCRIPT_MODEL_MOF_35110 = 35110,
    SCRIPT_MODEL_FRAMETEX_35120 = 35120,
    SCRIPT_MODEL_MOTIONDATA_35130 = 35130,
    SCRIPT_MODEL_MATMOTIONDATA_35140 = 35140,
    SCRIPT_MODEL_MORFMOTIONDATA_35150 = 35150,
    SCRIPT_NT_MODEL_35160 = 35160,
    SCRIPT_NT_MODEL_MOT_35170 = 35170,
    SCRIPT_NT_MODEL_MAT_35180 = 35180,
    SCRIPT_NT_MODEL_MOT_MAT_35190 = 35190,
    SCRIPT_MODEL_END = 35249,
    SCRIPT_CAMERA_START = 35250,
    SCRIPT_CAMERAMOTIOM_35250 = 35250,
    SCRIPT_FRAMETEX_CAM_MOTION_35260 = 35260,
    SCRIPT_LIGHTMOTIOM_35270 = 35270,
    SCRIPT_CAMERA_END = 35299,
    SCRIPT_EFFECT_START = 35300,
    SCRIPT_DATA_EFFECT_35300 = 35300,
    SCRIPT_DATA_EFFECT_MAT_35310 = 35310,
    SCRIPT_SHADOW_35320 = 35320,
    SCRIPT_SHADOW_35321 = 35321,
    SCRIPT_EFFECT_GRAVITY_35330 = 35330,
    SCRIPT_DATA_SUNLENZ_35340 = 35340,
    SCRIPT_EFFECT_END = 37499,
    SCRIPT_ETC_START = 37500,
    SCRIPT_2D_37510 = 37510,
    SCRIPT_FONT_DATA_37520 = 37520,
    SCRIPT_ETC_END = 37999,
    NONSETOBJECT_START = 38000,
    ITEMTRAP_BOMB_38001 = 38001,
    NONSETOBJECT_END = 38999,
    STORY_LOADING_45000 = 45000,
    STORY_2D_45001 = 45001,
    TITLE_SELECT_50000 = 50000,
    FONT_DATA_50010 = 50010,
    FONT_MISSION_DATA_50020 = 50020,
    FONT_MENUDATA_50030 = 50030,
    FONT_USERNAME_DATA_50040 = 50040,
    FONT_BTN_DATA_50050 = 50050,
    FONT__DATA_PECULIAR_50060 = 50060,
    ADVERTISE_FLASH_TEXTURE_52000 = 52000,
    ADVERTISE_FLASH_DATA_52005 = 52005,
    ADVERTISE_BG_MODEL_52006 = 52006,
    ADVERTISE_CS_GEARPARTS_52010 = 52010,
    CHARACTER_SELECT_FLASHTEX_52020 = 52020,
    CHARACTER_SELECT_FLASH_52025 = 52025,
    MAIN_MENU_SELECT_FLASHTEX_52030 = 52030,
    MAIN_MENU_SELECT_FLASH_52035 = 52035,
    TITLE_FLASHTEX_52040 = 52040,
    TITLE_FLASH_52045 = 52045,
    ENTRY_MODEL_UNI_MOT_52050 = 52050,
    ENTRY_MODEL_EGG_MOT_52060 = 52060,
    ENTRY_MODEL_ROBO_MOT_52070 = 52070,
    EXTRA_MENU_SELECT_FLASHTEX_52080 = 52080,
    EXTRA_MENU_SELECT_FLASH_52085 = 52085,
    EXTRA_MENU_UNION_FLASH_52086 = 52086,
    OPTION_MENU_SELECT_FLASHTEX_52090 = 52090,
    OPTION_MENU_SELECT_FLASHTEX_52091 = 52091,
    OPTION_MENU_SELECT_FLASHTEX_52092 = 52092,
    OPTION_MENU_SELECT_FLASHTEX_52093 = 52093,
    OPTION_MENU_SELECT_FLASHTEX_52094 = 52094,
    OPTION_MENU_SELECT_FLASHTEX_52095 = 52095,
    OPTION_MENU_BACK_FLASH_52098 = 52098,
    OPTION_MENU_SELECT_FLASH_52099 = 52099,
    TITLE_LOGO_52100 = 52100,
    SAVEDATA_52110 = 52110,
    SAVEDATA_52111 = 52111,
    SAVEDATA_52112 = 52112,
    SAVEDATA_52113 = 52113,
    SAVEDATA_52114 = 52114,
    SAVEDATA_52115 = 52115,
    SHOPDATA_52120 = 52120,
    SHOPCHAO_52130 = 52130,
    SHOPOBJ_52140 = 52140,
    GEARGALLERY_52150 = 52150,
    KEYBOARD_2D_53000 = 53000,
    SAVE_DATA_FILE_53100 = 53100,
    SAVE_DATA_FILE_53101 = 53101,
    TEST = 60000,
    SHADOW_TEST_60010 = 60010,
    ___DUMMY__MOTION = 65500,
    DUMMY_DATA = 65501,
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class binary_function {
    // total size: 0x1
};
class clsOOSemaphore {
    // total size: 0x4
};
class node : public node_base {
    // total size: 0x14
public:
    class pair data_; // offset 0xC, size 0x8
};
class __tree : private __red_black_tree {
    // total size: 0x18
public:
    class compressed_pair alloc_; // offset 0x0, size 0x8
    class compressed_pair node_alloc_; // offset 0x8, size 0x8
    class compressed_pair comp_; // offset 0x10, size 0x8
};
class clsOOTaskManager {
    // total size: 0x138
public:
    class clsOOHeapFragment & m_rcMainWorkHeap; // offset 0x4, size 0x4
    class clsOOHeapFragment m_cHeapStlList_4; // offset 0x8, size 0x34
    class clsOOHeapFragment m_cHeapStlMap_4_4; // offset 0x3C, size 0x34
    class clsOOHeapFragment m_cDefaultWorkHeap; // offset 0x70, size 0x34
    void * m_pvWorkStartAddr; // offset 0xA4, size 0x4
    class clsOOList m_lstTask; // offset 0xA8, size 0x14
    class clsOOList m_lstTaskNewcomer; // offset 0xBC, size 0x14
    class clsOOMap m_mapExecList; // offset 0xD0, size 0x18
    class clsOOList m_lstFirstTask; // offset 0xE8, size 0x14
    class clsOOMMap m_mmapReservedDeadTask; // offset 0xFC, size 0x18
    class clsOOList m_lstDeadTask; // offset 0x114, size 0x14
    class clsOOTask * m_pcCurrentTask; // offset 0x128, size 0x4
    unsigned int m_u32PauseFlags; // offset 0x12C, size 0x4
    unsigned char m_u8AllDeadMode; // offset 0x130, size 0x1
    unsigned char m_au8LoopUpdate[5]; // offset 0x131, size 0x5
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class clsOOSplitTexture : public clsOOTexture {
    // total size: 0x10
public:
    class vector m_cTexUVList; // offset 0x4, size 0xC
};
class generic_iterator {
    // total size: 0x4
public:
    class node * node_; // offset 0x0, size 0x4
};
class clsOOList : public list {
    // total size: 0x14
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class _NNS_TEXLIST {
    // total size: 0x8
public:
    signed int nTex; // offset 0x0, size 0x4
    class _NNS_TEXINFO * pTexInfoList; // offset 0x4, size 0x4
};
enum enmRet {
    RET___UN_USE = 0,
    RET___INIT = 1,
    RET___EXEC = 2,
    RET___ERROR_DEF = 3,
    RET___ERROR_DIFFERENT_DISC = 4,
    RET___ERROR_OPENED_COVER = 5,
    RET___FINISH = 6,
    RET___CANCEL_EXEC = 7,
    RET___CANCEL_FINISH = 8,
};
class clsPfTextureBase {
    // total size: 0x1C
public:
    void * m_pvTex; // offset 0x0, size 0x4
    void * m_pvTexLocalBuff; // offset 0x4, size 0x4
    class _NNS_TEXLIST * m_psTex; // offset 0x8, size 0x4
    class vector m_cSizeList; // offset 0xC, size 0xC
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class value_compare first_; // offset 0x0, size 0x1
    class node * second_; // offset 0x4, size 0x4
};
class _UUID {
    // total size: 0x10
public:
    unsigned int Data1; // offset 0x0, size 0x4
    unsigned short Data2; // offset 0x4, size 0x2
    unsigned short Data3; // offset 0x6, size 0x2
    unsigned char Data4[8]; // offset 0x8, size 0x8
};
class _NNS_TEXINFO {
    // total size: 0x50
public:
    class NVS_SVROBJ SvrObj; // offset 0x0, size 0x30
    void * pMainMemory; // offset 0x30, size 0x4
    void * pLocalMemory; // offset 0x34, size 0x4
    unsigned int nLocalBytes; // offset 0x38, size 0x4
    unsigned int nDmaTagBytes; // offset 0x3C, size 0x4
    unsigned int GlobalIndex; // offset 0x40, size 0x4
    unsigned int Bank; // offset 0x44, size 0x4
    unsigned short MinFilter; // offset 0x48, size 0x2
    unsigned short MagFilter; // offset 0x4A, size 0x2
    unsigned int Flag; // offset 0x4C, size 0x4
};
class sceGsTex1 {
    // total size: 0x8
public:
    unsigned long LCM : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 1; // offset 0x0, size 0x4
    unsigned long MXL : 3; // offset 0x0, size 0x4
    unsigned long MMAG : 1; // offset 0x0, size 0x4
    unsigned long MMIN : 3; // offset 0x0, size 0x4
    unsigned long MTBA : 1; // offset 0x0, size 0x4
    unsigned long pad10 : 9; // offset 0x0, size 0x4
    unsigned long L : 2; // offset 0x0, size 0x4
    unsigned long pad21 : 11; // offset 0x0, size 0x4
    unsigned long K : 12; // offset 0x0, size 0x4
    unsigned long pad44 : 20; // offset 0x0, size 0x4
};
class map {
    // total size: 0x18
public:
    class __tree tree_; // offset 0x0, size 0x18
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0xC
};
enum enmFontNo {
    FONT_NO_NORMAL = 0,
    FONT_NO_NETWORK = 1,
    FONT_NO_MOVIE = 2,
    FONT_NO_STORY = 3,
    FONT_NO_MENU_J = 4,
    FONT_NO_MENU_E = 5,
    FONT_NO_MENU_G = 6,
    FONT_NO_MENU_F = 7,
    FONT_NO_MENU_S = 8,
    FONT_NO_MENU_I = 9,
    FONT_NO_EVENT = 10,
    FONT_NO_MISSION = 11,
    FONT_NO_USER_NAME = 12,
    FONT_NO_PECULIAR = 13,
    FONT_NO_REG_J = 14,
    FONT_NO_REG_E = 15,
    FONT_NO_REG_G = 16,
    FONT_NO_REG_F = 17,
    FONT_NO_REG_S = 18,
    FONT_NO_REG_I = 19,
    FONT_NO_TEMP1 = 20,
    FONT_NO_MAX_NUM = 21,
};
class clsOOFontStrTbl {
    // total size: 0x18
public:
    void * m_pvStrTbl; // offset 0x0, size 0x4
    unsigned int m_u32GroupLen; // offset 0x4, size 0x4
    class vector m_cGroupTbl; // offset 0x8, size 0xC
};
class clsOOFontSystem {
    // total size: 0x4C
public:
    class vector m_cFontObjList; // offset 0x0, size 0xC
    unsigned int m_u32MaxFontObj; // offset 0xC, size 0x4
    unsigned int m_u32CurrentFontNo; // offset 0x10, size 0x4
    class stcRect m_sGlobalDrawRect; // offset 0x14, size 0x10
    class clsOOSplitTexture * m_pcBtnTexture; // offset 0x24, size 0x4
    unsigned int m_u32BtnTexPointSize; // offset 0x28, size 0x4
    unsigned char m_bDrawChara; // offset 0x2C, size 0x1
    class clsOODraw2d * m_pcDraw2d; // offset 0x30, size 0x4
    class clsOOHeapFragment * m_pcAllocator; // offset 0x34, size 0x4
    class stcUvRect m_sUvOffset; // offset 0x38, size 0x10
};
class clsSingleton {
    // total size: 0x4
};
class map {
    // total size: 0x18
public:
    class __tree tree_; // offset 0x0, size 0x18
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class anchor second_; // offset 0x4, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class compressed_pair_imp {
    // total size: 0xC
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class node_base second_; // offset 0x4, size 0x8
};
class clsSingleton {
    // total size: 0x4
};
enum execAttr {
    ATTR_DBL_BUF = 1,
    ATTR_MULTI_BUF = 2,
    ATTR_MULTI_RING_BUF = 3,
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class clsOORingBuffer : public clsOOBufferBase {
    // total size: 0x3C
public:
    signed int m_s32WriteAlign; // offset 0x2C, size 0x4
    unsigned char * m_pu8CopyBuf; // offset 0x30, size 0x4
    signed int m_s32CopyBufSize; // offset 0x34, size 0x4
    signed int m_s32LockOffset; // offset 0x38, size 0x4
};
class clsOOBuffer : public clsOOBufferBase {
    // total size: 0x2C
};
class clsOOMMap : public multimap {
    // total size: 0x18
};
class clsOOMap : public map {
    // total size: 0x18
};
class value_compare : public binary_function {
    // total size: 0x1
public:
    class less comp; // offset 0x0, size 0x1
};
class node_base {
    // total size: 0x8
public:
    class node * prev_; // offset 0x0, size 0x4
    class node * next_; // offset 0x4, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
};
class binary_function {
    // total size: 0x1
};
class clsOOFileMgr {
    // total size: 0xF8
public:
    class clsOOFileQueue m_cQueue_Debug; // offset 0x4, size 0x64
    class deque m_cExecDeque; // offset 0x68, size 0x18
    class deque m_cRequestDeque; // offset 0x80, size 0x18
    unsigned char m_bEnableRenderNowLoding; // offset 0x98, size 0x1
    class clsOOCompression m_cCompression; // offset 0x9C, size 0x4C
    class clsOOThread * m_pcReadThread; // offset 0xE8, size 0x4
    class clsOOFileQueue * m_pcCurrentReadQueue; // offset 0xEC, size 0x4
    unsigned char m_bReadThreadDone; // offset 0xF0, size 0x1
    unsigned char m_bReadCancel; // offset 0xF1, size 0x1
    unsigned char * m_pu8ReadWorkBuf; // offset 0xF4, size 0x4
};
class clsPfSplitTexture : public clsOOSplitTexture, private clsPfTextureBase {
    // total size: 0x2C
};
class clsOODraw2d {
    // total size: 0xC
public:
    unsigned char m_bWide2dConv; // offset 0x0, size 0x1
    unsigned int m_eTexFlag; // offset 0x8, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class clsOOFileQueue {
    // total size: 0x64
public:
    class _adx_fs * m_psADXF; // offset 0x4, size 0x4
    char m_ac8Name[64]; // offset 0x8, size 0x40
    unsigned char * m_pu8Buffer; // offset 0x48, size 0x4
    unsigned char * * m_ppu8FinishAddr; // offset 0x4C, size 0x4
    float m_f32Progress; // offset 0x50, size 0x4
    unsigned int m_eRequestFlag; // offset 0x54, size 0x4
    enum enmRet * m_peRet; // offset 0x58, size 0x4
    signed short m_s16Sector; // offset 0x5C, size 0x2
    signed short m_s16ReadedSector; // offset 0x5E, size 0x2
    unsigned char m_u8Mode; // offset 0x60, size 0x1
};
class node : public node_base {
    // total size: 0xC
public:
    void * data_; // offset 0x8, size 0x4
};
class clsOOHeapFragment {
    // total size: 0x34
public:
    class stcFree * m_psAddrLo; // offset 0x4, size 0x4
    class stcFree * m_psDefaultAddrLo; // offset 0x8, size 0x4
    class stcFree * m_psAddrHi; // offset 0xC, size 0x4
    class stcFree * m_psDefaultAddrHi; // offset 0x10, size 0x4
    signed int m_s32AllRestSize; // offset 0x14, size 0x4
    signed int m_s32AllocSizeLo; // offset 0x18, size 0x4
    signed int m_s32AllocSizeHi; // offset 0x1C, size 0x4
    class clsPfSemaphore m_cOOSemaphore; // offset 0x20, size 0x8
    class clsPfSemaphore m_cOOSemaphoreUpperNest; // offset 0x28, size 0x8
    unsigned short m_u16LoCnt_Debug; // offset 0x30, size 0x2
    unsigned short m_u16HiCnt_Debug; // offset 0x32, size 0x2
};
class clsSingleton {
    // total size: 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class value_compare first_; // offset 0x0, size 0x1
    class node * second_; // offset 0x4, size 0x4
};
class allocator {
    // total size: 0x1
};
class _adx_fs {
    // total size: 0x34
public:
    signed char used; // offset 0x0, size 0x1
    signed char stat; // offset 0x1, size 0x1
    signed char sjflag; // offset 0x2, size 0x1
    signed char stopnw_flg; // offset 0x3, size 0x1
    void * stm; // offset 0x4, size 0x4
    class SJ_OBJ * sj; // offset 0x8, size 0x4
    signed int fnsct; // offset 0xC, size 0x4
    signed int skpos; // offset 0x10, size 0x4
    signed int rdstpos; // offset 0x14, size 0x4
    signed int rqsct; // offset 0x18, size 0x4
    signed int rdsct; // offset 0x1C, size 0x4
    signed char * buf; // offset 0x20, size 0x4
    signed int bsize; // offset 0x24, size 0x4
    signed int rqrdsct; // offset 0x28, size 0x4
    signed int ofst; // offset 0x2C, size 0x4
    void * dir; // offset 0x30, size 0x4
};
class NVS_SVRHEADER {
    // total size: 0x8
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short miplevel; // offset 0x2, size 0x2
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
};
class __cdeque_imp : public __cdeque_deleter, private compile_assert {
    // total size: 0x10
};
class clsTaskManager : public clsSingleton, public clsOOTaskManager {
    // total size: 0x140
public:
    unsigned int m_u32CurViewNo; // offset 0x13C, size 0x4
};
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
class node {
    // total size: 0x0
};
class value_compare : public binary_function {
    // total size: 0x1
public:
    class less comp; // offset 0x0, size 0x1
};
class __list_deleter {
    // total size: 0x14
public:
    class compressed_pair size_; // offset 0x0, size 0x8
    class compressed_pair end_; // offset 0x8, size 0xC
};
class less : public binary_function {
    // total size: 0x1
};
class value_compare : public binary_function {
    // total size: 0x1
public:
    class less comp; // offset 0x0, size 0x1
};
class __cdeque_deleter : public __cdeque_deleter_common {
    // total size: 0x10
};
class clsOOThread {
    // total size: 0x28
public:
    void * (* m_pfEntry)(class _EntryArg *); // offset 0x4, size 0x4
    void * m_pvArg; // offset 0x8, size 0x4
    void * m_pvRet; // offset 0xC, size 0x4
    unsigned char * m_pu8StackAddr; // offset 0x10, size 0x4
    signed int m_s32StackSize; // offset 0x14, size 0x4
    signed int m_s32Priority; // offset 0x18, size 0x4
    unsigned char m_bIsCreate; // offset 0x1C, size 0x1
    class clsOOSemaphore * m_pcSema; // offset 0x20, size 0x4
    unsigned char m_bIsRun; // offset 0x24, size 0x1
};
class vector : private __vector_imp {
    // total size: 0xC
};
class binary_function {
    // total size: 0x1
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class stcFontObjData {
    // total size: 0x28
public:
    class clsPfTexture * pcFontTex; // offset 0x0, size 0x4
    class clsOOFontObj * pcFontObj; // offset 0x4, size 0x4
    class clsOOFontStrTbl * pcStrTbl; // offset 0x8, size 0x4
    void * pvDelFontDataBuff; // offset 0xC, size 0x4
    void * pvFontDataBuff; // offset 0x10, size 0x4
    void * pvFontTexFile; // offset 0x14, size 0x4
    void * pvStrTblFile; // offset 0x18, size 0x4
    void * pvFontInfoFile; // offset 0x1C, size 0x4
    signed int s32FontFileNo; // offset 0x20, size 0x4
    enum enmLoadMode enLoadEnd; // offset 0x24, size 0x4
};
class less : public binary_function {
    // total size: 0x1
};
class __cdeque_deleter_common {
    // total size: 0x10
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    unsigned int start_; // offset 0x8, size 0x4
    unsigned int * data_; // offset 0xC, size 0x4
};
class clsOOFontObj {
    // total size: 0x34
public:
    class clsOOTexture * m_psFontTex; // offset 0x0, size 0x4
    class stcFontHeader * m_psFontHeader; // offset 0x4, size 0x4
    void * m_pvFontStatus; // offset 0x8, size 0x4
    class clsOOFontStrTbl * m_psStrTbl; // offset 0xC, size 0x4
    class map m_cGlyphMap; // offset 0x10, size 0x10
    class map m_cGlyphUTF16Map; // offset 0x20, size 0x10
};
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
};
class multimap {
    // total size: 0x18
public:
    class __tree tree_; // offset 0x0, size 0x18
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class __tree : private __red_black_tree {
    // total size: 0x18
public:
    class compressed_pair alloc_; // offset 0x0, size 0x8
    class compressed_pair node_alloc_; // offset 0x8, size 0x8
    class compressed_pair comp_; // offset 0x10, size 0x8
};
class clsSingleton {
    // total size: 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
enum enmLoadMode {
    LOAD_MODE_NONE = 0,
    LOAD_MODE_LOAD = 1,
    LOAD_MODE_END = 2,
};
struct /* @anon0 */ {
    // total size: 0x30
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcSize2d * data_; // offset 0x8, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class node {
    // total size: 0x0
};
class binary_function {
    // total size: 0x1
};
class sceGsMiptbp2 {
    // total size: 0x8
public:
    unsigned long TBP4 : 14; // offset 0x0, size 0x4
    unsigned long TBW4 : 6; // offset 0x0, size 0x4
    unsigned long TBP5 : 14; // offset 0x0, size 0x4
    unsigned long TBW5 : 6; // offset 0x0, size 0x4
    unsigned long TBP6 : 14; // offset 0x0, size 0x4
    unsigned long TBW6 : 6; // offset 0x0, size 0x4
    unsigned long pad60 : 4; // offset 0x0, size 0x4
};
class SJ_OBJ {
    // total size: 0x4
public:
    class _sj_vtbl * vtbl; // offset 0x0, size 0x4
};
class clsTask : public clsOOTask {
    // total size: 0x54
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class anchor second_; // offset 0x4, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class clsOOBufferBase {
    // total size: 0x2C
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x4, size 0x4
    unsigned char * m_pu8Buf; // offset 0x8, size 0x4
    unsigned char * m_pu8BufEndPos; // offset 0xC, size 0x4
    unsigned char * m_pu8RP; // offset 0x10, size 0x4
    unsigned char * m_pu8WP; // offset 0x14, size 0x4
    signed int m_s32BufSize; // offset 0x18, size 0x4
    signed int m_s32Align; // offset 0x1C, size 0x4
    signed int m_s32ReadDataSize; // offset 0x20, size 0x4
    signed int m_s32WriteDataSize; // offset 0x24, size 0x4
    unsigned int m_u32IsWriteClosed; // offset 0x28, size 0x4
};
class clsOOTask {
    // total size: 0x54
public:
    unsigned int m_u32ExecFlags; // offset 0x4, size 0x4
    unsigned int m_u32EnablePauseFlags; // offset 0x8, size 0x4
    unsigned int m_u32Priority; // offset 0xC, size 0x4
    unsigned char m_u8Mode; // offset 0x10, size 0x1
    unsigned int m_u32TaskDepth; // offset 0x14, size 0x4
    class clsOOTask * m_pcParentTask; // offset 0x18, size 0x4
    class clsOOList m_lstChildTask; // offset 0x1C, size 0x14
    unsigned char m_bIsDead; // offset 0x30, size 0x1
    class generic_iterator m_itParentList; // offset 0x34, size 0x4
    class generic_iterator m_itMgrList; // offset 0x38, size 0x4
    class clsOOMap m_mapMgrExecListIt; // offset 0x3C, size 0x18
};
class binary_function {
    // total size: 0x1
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class stcUv {
    // total size: 0x8
public:
    signed int u; // offset 0x0, size 0x4
    signed int v; // offset 0x4, size 0x4
};
class stcUvRect {
    // total size: 0x10
public:
    class stcUv sUpperLeft; // offset 0x0, size 0x8
    class stcUv sBottomRight; // offset 0x8, size 0x8
};
class _EntryArg {
    // total size: 0x8
public:
    class clsOOThread * pcExecThread; // offset 0x0, size 0x4
    void * pvArg; // offset 0x4, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    class anchor second_; // offset 0x0, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x10
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
struct /* @anon1 */ {
    // total size: 0x30
};
class compile_assert {
    // total size: 0x1
};
class _sj_vtbl {
    // total size: 0x30
public:
    void (* QueryInterface)(); // offset 0x0, size 0x4
    void (* AddRef)(); // offset 0x4, size 0x4
    void (* Release)(); // offset 0x8, size 0x4
    void (* Destroy)(class SJ_OBJ *); // offset 0xC, size 0x4
    class _UUID * (* GetUuid)(class SJ_OBJ *); // offset 0x10, size 0x4
    void (* Reset)(class SJ_OBJ *); // offset 0x14, size 0x4
    void (* GetChunk)(class SJ_OBJ *, signed int, signed int, class SJCK *); // offset 0x18, size 0x4
    void (* UngetChunk)(class SJ_OBJ *, signed int, class SJCK *); // offset 0x1C, size 0x4
    void (* PutChunk)(class SJ_OBJ *, signed int, class SJCK *); // offset 0x20, size 0x4
    signed int (* GetNumData)(class SJ_OBJ *, signed int); // offset 0x24, size 0x4
    signed int (* IsGetChunk)(class SJ_OBJ *, signed int, signed int, signed int *); // offset 0x28, size 0x4
    void (* EntryErrFunc)(class SJ_OBJ *, void (*)(void *, signed int), void *); // offset 0x2C, size 0x4
};
class node : public node_base {
    // total size: 0x14
public:
    class pair data_; // offset 0xC, size 0x8
};
class clsOOCompression {
    // total size: 0x4C
public:
    class clsOOHeapFragment & m_rcHeap; // offset 0x4, size 0x4
    class clsOOVector m_vecCompObj; // offset 0x8, size 0x10
    class clsOOSemaphore * m_pcSema; // offset 0x18, size 0x4
    class clsOOThread * m_pcThread; // offset 0x1C, size 0x4
    signed int m_vs32ExecRes; // offset 0x20, size 0x4
    unsigned int m_vu32IsAbort; // offset 0x24, size 0x4
    unsigned char m_vbIsRegistering; // offset 0x28, size 0x1
    unsigned char m_vbIsDone; // offset 0x29, size 0x1
    enum execAttr m_eExecAttribute; // offset 0x2C, size 0x4
    unsigned char * m_u8StackAddr; // offset 0x30, size 0x4
    unsigned int m_u32WorkBufSize; // offset 0x34, size 0x4
    unsigned char m_bIsCompression; // offset 0x38, size 0x1
    class clsOOBuffer * m_pcSrcNormalBuf; // offset 0x3C, size 0x4
    class clsOORingBuffer * m_pcSrcRingBuf; // offset 0x40, size 0x4
    class clsOOBuffer * m_pcDstNormalBuf; // offset 0x44, size 0x4
    class clsOORingBuffer * m_pcDstRingBuf; // offset 0x48, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x10
public:
    class cdeque second_; // offset 0x0, size 0x10
};
class allocator {
    // total size: 0x1
};
class __deque_buf {
    // total size: 0x1
};
class allocator {
    // total size: 0x1
};
class clsOOMap : public map {
    // total size: 0x18
};
class __vector_pod {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    unsigned int * data_; // offset 0x8, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class binary_function {
    // total size: 0x1
};
class clsOOVector : public vector {
    // total size: 0x10
};
class clsPack : public clsSingleton {
    // total size: 0x4
};
class __tree : private __red_black_tree {
    // total size: 0x10
public:
    class compressed_pair alloc_; // offset 0x0, size 0x4
    class compressed_pair node_alloc_; // offset 0x4, size 0x4
    class compressed_pair comp_; // offset 0x8, size 0x8
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class __red_black_tree {
    // total size: 0x1
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class value_compare first_; // offset 0x0, size 0x1
    class node * second_; // offset 0x4, size 0x4
};
class pair {
    // total size: 0x8
public:
    unsigned short first; // offset 0x0, size 0x2
    class stcGlyphData * second; // offset 0x4, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class anchor second_; // offset 0x4, size 0x4
};
struct /* @anon2 */ {
    // total size: 0x2C
};
class vector : private __vector_imp {
    // total size: 0x10
};
class anchor {
    // total size: 0x4
public:
    class node_base * left_; // offset 0x0, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class sceGsMiptbp1 {
    // total size: 0x8
public:
    unsigned long TBP1 : 14; // offset 0x0, size 0x4
    unsigned long TBW1 : 6; // offset 0x0, size 0x4
    unsigned long TBP2 : 14; // offset 0x0, size 0x4
    unsigned long TBW2 : 6; // offset 0x0, size 0x4
    unsigned long TBP3 : 14; // offset 0x0, size 0x4
    unsigned long TBW3 : 6; // offset 0x0, size 0x4
    unsigned long pad60 : 4; // offset 0x0, size 0x4
};
class stcSize2d {
    // total size: 0x8
public:
    signed int w; // offset 0x0, size 0x4
    signed int h; // offset 0x4, size 0x4
};
class cdeque : private __cdeque_imp {
    // total size: 0x10
};
class __tree : private __red_black_tree {
    // total size: 0x18
public:
    class compressed_pair alloc_; // offset 0x0, size 0x8
    class compressed_pair node_alloc_; // offset 0x8, size 0x8
    class compressed_pair comp_; // offset 0x10, size 0x8
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class value_compare first_; // offset 0x0, size 0x1
    class node * second_; // offset 0x4, size 0x4
};
class stcGlyphData {
    // total size: 0x10
public:
    class stcGlyphABC sSize; // offset 0x0, size 0xC
    unsigned short u16CharaCode; // offset 0xC, size 0x2
    unsigned short u16Code; // offset 0xE, size 0x2
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0x10
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class deque : private __deque_imp {
    // total size: 0x18
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class node_base : public anchor {
    // total size: 0xC
public:
    class node_base * right_; // offset 0x4, size 0x4
    class __pointer_plus_bit parent_; // offset 0x8, size 0x4
};
class value_compare : public binary_function {
    // total size: 0x1
public:
    class less comp; // offset 0x0, size 0x1
};
class allocator {
    // total size: 0x1
};
class pair {
    // total size: 0x8
public:
    unsigned int first; // offset 0x0, size 0x4
    class generic_iterator second; // offset 0x4, size 0x4
};
class clsOOTexture {
    // total size: 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class __deque_imp : public __deque_deleter {
    // total size: 0x18
};
class clsPfFileMgr : public clsSingleton, public clsOOFileMgr {
    // total size: 0xFC
};
class clsPfFontSystem : public clsOOFontSystem {
    // total size: 0x4C
};
class map {
    // total size: 0x10
public:
    class __tree tree_; // offset 0x0, size 0x10
};
class __vector_pod {
    // total size: 0x10
public:
    class compressed_pair capacity_; // offset 0x0, size 0x8
    unsigned int size_; // offset 0x8, size 0x4
    unsigned int * data_; // offset 0xC, size 0x4
};
class __pointer_plus_bit {
    // total size: 0x4
public:
    class node_base * ptr_; // offset 0x0, size 0x4
};
class generic_iterator {
    // total size: 0x4
public:
    class generic_iterator i_; // offset 0x0, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class __deque_deleter : public __deque_deleter_common {
    // total size: 0x18
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class stcGlyphABC {
    // total size: 0xC
public:
    signed int s32A; // offset 0x0, size 0x4
    unsigned int u32B; // offset 0x4, size 0x4
    signed int s32C; // offset 0x8, size 0x4
};
class stcRect {
    // total size: 0x10
public:
    class stcPoint2d sPos; // offset 0x0, size 0x8
    class stcSize2d sSize; // offset 0x8, size 0x8
};
class stcFontHeader {
    // total size: 0x38
public:
    char ac8Id[8]; // offset 0x0, size 0x8
    unsigned char u8ByteOder; // offset 0x8, size 0x1
    unsigned char au8Reserve[3]; // offset 0x9, size 0x3
    unsigned short u16Version; // offset 0xC, size 0x2
    unsigned short u16Size; // offset 0xE, size 0x2
    unsigned int u32GlyphNum; // offset 0x10, size 0x4
    unsigned int u32BmpMaxGlyphNum; // offset 0x14, size 0x4
    unsigned short u16BmpNum; // offset 0x18, size 0x2
    unsigned short u16BmpSizeX; // offset 0x1A, size 0x2
    unsigned short u16BmpSizeY; // offset 0x1C, size 0x2
    unsigned short u16EndBmpSizeX; // offset 0x1E, size 0x2
    unsigned short u16EndBmpSizeY; // offset 0x20, size 0x2
    unsigned short u16BmpGlyphNumX; // offset 0x22, size 0x2
    unsigned short u16BmpGlyphNumY; // offset 0x24, size 0x2
    unsigned short u16GlyphSizeX; // offset 0x26, size 0x2
    unsigned short u16GlyphSizeY; // offset 0x28, size 0x2
    unsigned short u16GlyphSpaceX; // offset 0x2A, size 0x2
    unsigned short u16GlyphSpaceY; // offset 0x2C, size 0x2
    unsigned short u16FontPoint; // offset 0x2E, size 0x2
    unsigned char u8ColorDepth; // offset 0x30, size 0x1
    unsigned char u8Proportional; // offset 0x31, size 0x1
    unsigned char u8CharaCodeType; // offset 0x32, size 0x1
    unsigned char au8Reseved2[5]; // offset 0x33, size 0x5
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class list : private __list_imp {
    // total size: 0x14
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class clsPfSemaphore : public clsOOSemaphore {
    // total size: 0x8
public:
    signed int m_s32Id; // offset 0x4, size 0x4
};
class stcFree {
    // total size: 0x10
public:
    class stcFree * m_psBackAddr; // offset 0x0, size 0x4
    class stcFree * m_psNextAddr; // offset 0x4, size 0x4
    unsigned int m_u32FreeSize; // offset 0x8, size 0x4
    unsigned int m_u32PreGap; // offset 0xC, size 0x4
};

// Range: 0x55BCF0 -> 0x55BDC4
void cancelRead(enum enmFontNo enFontNo /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x55BCF0 -> 0x55BDC4
        class clsSrFontRead_Task * pcTask; // r16
        char ac8FileName[32]; // r29+0x20
    }
}


// Range: 0x55BDD0 -> 0x55BEFC
void execute(class clsSrFontRead_Task * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x55BDD0 -> 0x55BEFC
    }
}


// Range: 0x55BF00 -> 0x55C0D8
void createFontReadTask(unsigned int u32Priority /* r21 */, signed int s32Type /* r20 */, class clsSrFontSystem * psFontSystem /* r19 */, enum enmFontNo enFontNo /* r18 */, signed int s32FontFileNo /* r22 */, void * pvFontDataBuff /* r17 */, unsigned char bBtnLoad /* r23 */, void * pvBtnDataBuff /* r30 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x55BF00 -> 0x55C0D8
    }
}


