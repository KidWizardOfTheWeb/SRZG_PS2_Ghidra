/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Script\ScriptShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class clsModelType_OB m_tacModel[2]; // size: 0x8, address: 0xB16DD0
struct /* @anon0 */ {
    // total size: 0x30
} __vt__23clsScriptShadowMgr_Task; // size: 0x30, address: 0x6C2BD0
struct /* @anon2 */ {
    // total size: 0x30
} __vt__7clsTask; // size: 0x30, address: 0x6B59F0
struct /* @anon1 */ {
    // total size: 0xC
} __vt__18clsScriptShadowObj; // size: 0xC, address: 0x6C2C00
class PXS_CONTEXT pxg_context[2]; // size: 0x2C0, address: 0x6E66C0
unsigned long pxg_frame_addr[]; // size: 0x0, address: 0x5FAF90
class sceGsDBuffDc m_tsGsDBuffDc; // size: 0x330, address: 0x707EC0
class clsPfGraphics * m_tpcSingleton; // size: 0x4, address: 0x6E69A0
unsigned int * tpsNnNodeStatus; // size: 0x4, address: 0x707DF8
class NNS_VECTORFAST tosZVecFast; // size: 0x10, address: 0x685000
class NNS_VECTORFAST tosZeroVecFast; // size: 0x10, address: 0x685010
class clsScriptModel_Task * m_tapcModelTask[32]; // size: 0x80, address: 0xB14450
float (* tpsNnMtxList)[4][4]; // size: 0x4, address: 0x707DE0
class clsPfCameraMgr * m_tpcSingleton; // size: 0x4, address: 0x6E69C0
signed int ts32NodeStatusNum; // size: 0x4, address: 0x707E18
signed int ts32MtxListNum; // size: 0x4, address: 0x707E08
signed int ts32MtxPalNum; // size: 0x4, address: 0x707E10
struct /* @anon3 */ {
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
static class NNS_VECTORFAST tosYVecFast; // size: 0x10, address: 0x0
static class NNS_VECTORFAST tosXVecFast; // size: 0x10, address: 0x0
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
class clsSingleton {
    // total size: 0x4
};
class clsOOGraphics_Consumer {
    // total size: 0x28
public:
    enum enmZModeCompType m_eZModeCompType; // offset 0x4, size 0x4
    enum enmCullModeType m_eCullModeType; // offset 0x8, size 0x4
    enum enmScreenMode m_eScreenMode; // offset 0xC, size 0x4
    unsigned int m_u32WbID; // offset 0x10, size 0x4
    signed int m_s32FbWidht; // offset 0x14, size 0x4
    signed int m_s32FbHeight; // offset 0x18, size 0x4
    float m_f32FbWidht_Half; // offset 0x1C, size 0x4
    float m_f32FbHeight_Half; // offset 0x20, size 0x4
    unsigned char m_bProgressive; // offset 0x24, size 0x1
    unsigned char m_bPal; // offset 0x25, size 0x1
    unsigned char m_bWide; // offset 0x26, size 0x1
};
class __list_imp : private __list_deleter {
    // total size: 0x14
};
class NNS_NODE {
    // total size: 0x90
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed short iMatrix; // offset 0x4, size 0x2
    signed short iParent; // offset 0x6, size 0x2
    signed short iChild; // offset 0x8, size 0x2
    signed short iSibling; // offset 0xA, size 0x2
    class NNS_VECTOR Translation; // offset 0xC, size 0xC
    class NNS_ROTATE_A32 Rotation; // offset 0x18, size 0xC
    class NNS_VECTOR Scaling; // offset 0x24, size 0xC
    float InvInitMtx[4][4]; // offset 0x30, size 0x40
    class NNS_VECTOR Center; // offset 0x70, size 0xC
    float Radius; // offset 0x7C, size 0x4
    unsigned int User; // offset 0x80, size 0x4
    union { // inferred
        float SIIKBoneLength; // offset 0x84, size 0x4
        float BoundingBoxX; // offset 0x84, size 0x4
    };
    float BoundingBoxY; // offset 0x88, size 0x4
    float BoundingBoxZ; // offset 0x8C, size 0x4
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class sceGsScissor {
    // total size: 0x8
public:
    unsigned long SCAX0 : 11; // offset 0x0, size 0x4
    unsigned long pad11 : 5; // offset 0x0, size 0x4
    unsigned long SCAX1 : 11; // offset 0x0, size 0x4
    unsigned long pad27 : 5; // offset 0x0, size 0x4
    unsigned long SCAY0 : 11; // offset 0x0, size 0x4
    unsigned long pad43 : 5; // offset 0x0, size 0x4
    unsigned long SCAY1 : 11; // offset 0x0, size 0x4
    unsigned long pad59 : 5; // offset 0x0, size 0x4
};
class clsModelType_OB {
    // total size: 0x4
public:
    class NNS_OBJECT * m_psObject; // offset 0x0, size 0x4
};
enum enmZModeCompType {
    Z___NEVER = 0,
    Z___ALWAYS = 1,
    Z___G_EQUAL = 2,
    Z___GREATER = 3,
    Z___L_EQUAL = 4,
    Z___LESS = 5,
};
class sceGsXyz {
    // total size: 0x8
public:
    unsigned long X : 16; // offset 0x0, size 0x4
    unsigned long Y : 16; // offset 0x0, size 0x4
    unsigned long Z : 32; // offset 0x0, size 0x4
};
class NNS_MATERIAL_SINGLE {
    // total size: 0x70
public:
    class NNS_RGB Diffuse; // offset 0x0, size 0xC
    float Specular; // offset 0xC, size 0x4
    class NNS_RGB Ambient; // offset 0x10, size 0xC
    float Alpha; // offset 0x1C, size 0x4
    class NNS_RGBA Emissive; // offset 0x20, size 0x10
    float Power; // offset 0x30, size 0x4
    float ColorClamp; // offset 0x34, size 0x4
    float AlphaClamp; // offset 0x38, size 0x4
    unsigned int GsTest; // offset 0x3C, size 0x4
    unsigned int fMatFlag; // offset 0x40, size 0x4
    unsigned int fGsPrimMode; // offset 0x44, size 0x4
    unsigned int GsAlpha; // offset 0x48, size 0x4
    unsigned int User; // offset 0x4C, size 0x4
    class NNS_MATERIAL_TEXMAP_DESC TexDesc[1]; // offset 0x50, size 0x20
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
class clsScript_Task : public clsTask {
    // total size: 0x8B0
public:
    class clsResidenceEffect cResidenceEffect; // offset 0x54, size 0x704
    unsigned char m_bSwapDataRead; // offset 0x758, size 0x1
    signed char m_s8SwapDataMode; // offset 0x759, size 0x1
    unsigned char m_u8SwapReadMode; // offset 0x75A, size 0x1
    unsigned char m_u8SwapReadCnt; // offset 0x75B, size 0x1
    signed short m_s16SwapDataNo; // offset 0x75C, size 0x2
    class clsScriptBlur_Task * m_pcBlurTask; // offset 0x760, size 0x4
    class clsScriptNega_Task * m_pcNegaTask; // offset 0x764, size 0x4
    class clsScriptWave_Task * m_pcWaveTask; // offset 0x768, size 0x4
    class clsSunLenz_Task * m_pcSunLenz; // offset 0x76C, size 0x4
    class clsPfScriptHeap * m_pcScriptHeap; // offset 0x770, size 0x4
    class clsScriptLight * m_pcLight; // offset 0x774, size 0x4
    class clsScriptCameraFrameTex_Task * m_pcCameraFrameTex; // offset 0x778, size 0x4
    class clsScriptCreateFrameTex_Task * m_pcCreateFrameTask; // offset 0x77C, size 0x4
    class clsScriptDrawFrameTex_Task * m_pcDrawFrameTexTask; // offset 0x780, size 0x4
    class clsScriptShadowMgr_Task * m_pcShadowMgrTask; // offset 0x784, size 0x4
    unsigned char * m_pu8DataPtr; // offset 0x788, size 0x4
    void * m_pvFreeLoFrame; // offset 0x78C, size 0x4
    class stcScriptStatus m_sStatus; // offset 0x790, size 0x2C
    class stcLight m_asLightStatus[1]; // offset 0x7BC, size 0x48
    class stcSunLenz m_asSunLenzStatus[1]; // offset 0x804, size 0x14
    class stcNega m_asNegaStatus[1]; // offset 0x818, size 0x18
    class stcFade m_asFadeStatus[1]; // offset 0x830, size 0x14
    class stcWave m_asWaveStatus[1]; // offset 0x844, size 0x10
    class stcBlur m_asBlurStatus[1]; // offset 0x854, size 0x20
    class stcFog m_asFogStatus[1]; // offset 0x874, size 0x24
    class clsScriptCamera * m_pcCamera; // offset 0x898, size 0x4
    class clsScriptModelManager m_cModelManager; // offset 0x89C, size 0x4
    class clsScriptMemory m_cMemory; // offset 0x8A0, size 0x1
    signed int m_s32EventNo; // offset 0x8A4, size 0x4
    unsigned char m_u8StopCutNo; // offset 0x8A8, size 0x1
    unsigned char m_u8ModeType; // offset 0x8A9, size 0x1
    signed char m_s8MesLanguage; // offset 0x8AA, size 0x1
    signed char m_s8VoiceLanguage; // offset 0x8AB, size 0x1
    unsigned char m_bGravityWave; // offset 0x8AC, size 0x1
};
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class PXS_CONTEXT {
    // total size: 0x160
public:
    class sceGsTexflush texflush; // offset 0x0, size 0x8
    unsigned long texflushaddr; // offset 0x8, size 0x4
    class sceGsFrame frame; // offset 0x10, size 0x8
    unsigned long frameaddr; // offset 0x18, size 0x4
    class sceGsZbuf zbuf; // offset 0x20, size 0x8
    unsigned long zbufaddr; // offset 0x28, size 0x4
    class sceGsXyoffset xyoffset; // offset 0x30, size 0x8
    unsigned long xyoffsetaddr; // offset 0x38, size 0x4
    class sceGsScissor scissor; // offset 0x40, size 0x8
    unsigned long scissoraddr; // offset 0x48, size 0x4
    class sceGsAlpha alpha; // offset 0x50, size 0x8
    unsigned long alphaaddr; // offset 0x58, size 0x4
    class sceGsClamp clamp; // offset 0x60, size 0x8
    unsigned long clampaddr; // offset 0x68, size 0x4
    class sceGsDimx dimx; // offset 0x70, size 0x8
    unsigned long dimxaddr; // offset 0x78, size 0x4
    class sceGsDthe dthe; // offset 0x80, size 0x8
    unsigned long dtheaddr; // offset 0x88, size 0x4
    class sceGsFba fba; // offset 0x90, size 0x8
    unsigned long fbaaddr; // offset 0x98, size 0x4
    class sceGsFogcol fogcol; // offset 0xA0, size 0x8
    unsigned long fogcoladdr; // offset 0xA8, size 0x4
    class sceGsMiptbp1 miptbp1; // offset 0xB0, size 0x8
    unsigned long miptbp1addr; // offset 0xB8, size 0x4
    class sceGsMiptbp2 miptbp2; // offset 0xC0, size 0x8
    unsigned long miptbp2addr; // offset 0xC8, size 0x4
    class sceGsPrmodecont prmodecont; // offset 0xD0, size 0x8
    unsigned long prmodecontaddr; // offset 0xD8, size 0x4
    class sceGsPrmode prmode; // offset 0xE0, size 0x8
    unsigned long prmodeaddr; // offset 0xE8, size 0x4
    class sceGsTest test; // offset 0xF0, size 0x8
    unsigned long testaddr; // offset 0xF8, size 0x4
    class sceGsTex1 tex1; // offset 0x100, size 0x8
    unsigned long tex1addr; // offset 0x108, size 0x4
    class sceGsTex0 tex0; // offset 0x110, size 0x8
    unsigned long tex0addr; // offset 0x118, size 0x4
    class sceGsTex2 tex2; // offset 0x120, size 0x8
    unsigned long tex2addr; // offset 0x128, size 0x4
    class sceGsTexa texa; // offset 0x130, size 0x8
    unsigned long texaaddr; // offset 0x138, size 0x4
    class sceGsTexclut texclut; // offset 0x140, size 0x8
    unsigned long texclutaddr; // offset 0x148, size 0x4
    class sceGsRgbaq rgbaq; // offset 0x150, size 0x8
    unsigned long rgbaqaddr; // offset 0x158, size 0x4
};
class sceGsTexflush {
    // total size: 0x8
public:
    unsigned long pad00; // offset 0x0, size 0x4
};
class stcLight {
    // total size: 0x48
public:
    unsigned char bUsed; // offset 0x0, size 0x1
    signed int s32No; // offset 0x4, size 0x4
    class stcRgbF32 sAmb; // offset 0x8, size 0xC
    class stcRgbF32 sPar; // offset 0x14, size 0xC
    float f32ParInten; // offset 0x20, size 0x4
    class NNS_VECTOR sParDir; // offset 0x24, size 0xC
    class stcRgbF32 sSpe; // offset 0x30, size 0xC
    class NNS_VECTOR sSpeDir; // offset 0x3C, size 0xC
};
class sceGsTexclut {
    // total size: 0x8
public:
    unsigned long CBW : 6; // offset 0x0, size 0x4
    unsigned long COU : 6; // offset 0x0, size 0x4
    unsigned long COV : 10; // offset 0x0, size 0x4
    unsigned long pad22 : 42; // offset 0x0, size 0x4
};
class clsScriptBlur_Task : public clsBlur_Task {
    // total size: 0xA4
public:
    unsigned char m_u8Type; // offset 0x7C, size 0x1
    unsigned char m_u8Alpha; // offset 0x7D, size 0x1
    unsigned char m_u8SAlpha; // offset 0x7E, size 0x1
    unsigned char m_u8EAlpha; // offset 0x7F, size 0x1
    signed int m_s32Rand; // offset 0x80, size 0x4
    float m_f32WaitFrame; // offset 0x84, size 0x4
    float m_f32Per; // offset 0x88, size 0x4
    float m_f32Frame; // offset 0x8C, size 0x4
    float m_f32EndFrame; // offset 0x90, size 0x4
    float m_f32SPer; // offset 0x94, size 0x4
    float m_f32EPer; // offset 0x98, size 0x4
    unsigned char m_bEndFlg; // offset 0x9C, size 0x1
    signed short m_s16EndFrame; // offset 0x9E, size 0x2
    class clsTask * m_pcScriptTask; // offset 0xA0, size 0x4
};
enum enmCullModeType {
    CULL___NONE = 0,
    CULL___CW = 1,
    CULL___CCW = 2,
};
class _NNS_TEXLIST {
    // total size: 0x8
public:
    signed int nTex; // offset 0x0, size 0x4
    class _NNS_TEXINFO * pTexInfoList; // offset 0x4, size 0x4
};
class stcBlur {
    // total size: 0x20
public:
    unsigned char bUsed; // offset 0x0, size 0x1
    unsigned char bEnd; // offset 0x1, size 0x1
    unsigned char u8Type; // offset 0x2, size 0x1
    unsigned char u8Alpha; // offset 0x3, size 0x1
    unsigned char u8SAlpha; // offset 0x4, size 0x1
    unsigned char u8EAlpha; // offset 0x5, size 0x1
    signed short s16EndFrame; // offset 0x6, size 0x2
    float f32Per; // offset 0x8, size 0x4
    float f32SPer; // offset 0xC, size 0x4
    float f32EPer; // offset 0x10, size 0x4
    float f32GFrame; // offset 0x14, size 0x4
    float f32WaitFrame; // offset 0x18, size 0x4
    float f32FadeFrame; // offset 0x1C, size 0x4
};
class clsScriptShadowObj {
    // total size: 0x90
public:
    unsigned short m_u16Flg; // offset 0x4, size 0x2
    unsigned short m_u16TaskNo; // offset 0x6, size 0x2
    class stcParam m_sCurParam; // offset 0x8, size 0x1C
    class stcParam m_sNextParam; // offset 0x24, size 0x1C
    float m_sDrawMtx[4][4]; // offset 0x40, size 0x40
    unsigned int m_u32GsOld; // offset 0x80, size 0x4
    unsigned int m_u32Priority; // offset 0x84, size 0x4
};
class tagstcScriptData {
    // total size: 0x10
public:
    unsigned short u16Size; // offset 0x0, size 0x2
    unsigned short u16Att; // offset 0x2, size 0x2
    unsigned int u32Num; // offset 0x4, size 0x4
    unsigned char u8Padding[8]; // offset 0x8, size 0x8
};
class clsOOSemaphore {
    // total size: 0x4
};
class stcParam {
    // total size: 0x1C
public:
    unsigned int u32Shadow; // offset 0x0, size 0x4
    unsigned short u16Model; // offset 0x4, size 0x2
    unsigned short u16Node; // offset 0x6, size 0x2
    float f32ScaleX; // offset 0x8, size 0x4
    float f32ScaleZ; // offset 0xC, size 0x4
    class NNS_VECTOR sOffset; // offset 0x10, size 0xC
};
class NNS_CAMERAPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pCamera; // offset 0x4, size 0x4
};
class sceGsDimx {
    // total size: 0x8
public:
    unsigned long DIMX00 : 3; // offset 0x0, size 0x4
    unsigned long pad00 : 1; // offset 0x0, size 0x4
    unsigned long DIMX01 : 3; // offset 0x0, size 0x4
    unsigned long pad01 : 1; // offset 0x0, size 0x4
    unsigned long DIMX02 : 3; // offset 0x0, size 0x4
    unsigned long pad02 : 1; // offset 0x0, size 0x4
    unsigned long DIMX03 : 3; // offset 0x0, size 0x4
    unsigned long pad03 : 1; // offset 0x0, size 0x4
    unsigned long DIMX10 : 3; // offset 0x0, size 0x4
    unsigned long pad10 : 1; // offset 0x0, size 0x4
    unsigned long DIMX11 : 3; // offset 0x0, size 0x4
    unsigned long pad11 : 1; // offset 0x0, size 0x4
    unsigned long DIMX12 : 3; // offset 0x0, size 0x4
    unsigned long pad12 : 1; // offset 0x0, size 0x4
    unsigned long DIMX13 : 3; // offset 0x0, size 0x4
    unsigned long pad13 : 1; // offset 0x0, size 0x4
    unsigned long DIMX20 : 3; // offset 0x0, size 0x4
    unsigned long pad20 : 1; // offset 0x0, size 0x4
    unsigned long DIMX21 : 3; // offset 0x0, size 0x4
    unsigned long pad21 : 1; // offset 0x0, size 0x4
    unsigned long DIMX22 : 3; // offset 0x0, size 0x4
    unsigned long pad22 : 1; // offset 0x0, size 0x4
    unsigned long DIMX23 : 3; // offset 0x0, size 0x4
    unsigned long pad23 : 1; // offset 0x0, size 0x4
    unsigned long DIMX30 : 3; // offset 0x0, size 0x4
    unsigned long pad30 : 1; // offset 0x0, size 0x4
    unsigned long DIMX31 : 3; // offset 0x0, size 0x4
    unsigned long pad31 : 1; // offset 0x0, size 0x4
    unsigned long DIMX32 : 3; // offset 0x0, size 0x4
    unsigned long pad32 : 1; // offset 0x0, size 0x4
    unsigned long DIMX33 : 3; // offset 0x0, size 0x4
    unsigned long pad33 : 1; // offset 0x0, size 0x4
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
class clsTask : public clsOOTask {
    // total size: 0x54
};
class clsScriptModel_Task : public clsTask {
    // total size: 0x1F0
public:
    unsigned int m_u32Flg; // offset 0x54, size 0x4
    signed int m_s32DataNo; // offset 0x58, size 0x4
    unsigned int m_u32TexModelNo; // offset 0x5C, size 0x4
    float m_f32PosAddFrame; // offset 0x60, size 0x4
    class NNS_VECTOR m_sPosVec; // offset 0x64, size 0xC
    class NNS_VECTOR m_sAddPosVec; // offset 0x70, size 0xC
    float m_f32RotAddFrame; // offset 0x7C, size 0x4
    class NNS_VECTOR m_sRotVec; // offset 0x80, size 0xC
    class NNS_VECTOR m_sAddRotVec; // offset 0x8C, size 0xC
    float m_f32ScaleAddFrame; // offset 0x98, size 0x4
    class NNS_VECTOR m_sScaleVec; // offset 0x9C, size 0xC
    class NNS_VECTOR m_sAddScaleVec; // offset 0xA8, size 0xC
    float m_f32WaitFrame; // offset 0xB4, size 0x4
    float m_f32NextWaitFrame; // offset 0xB8, size 0x4
    float m_sDrawMtx[4][4]; // offset 0xC0, size 0x40
    class clsTask * m_pcScriptTask; // offset 0x100, size 0x4
    class clsModelType_OB_TX_MO_MA_MF * m_pcModel; // offset 0x104, size 0x4
    class clsBackLineEffectTask * m_apcBackLine[2]; // offset 0x108, size 0x8
    class stcParam m_asBackLineParam[2]; // offset 0x110, size 0x80
    class _NNS_TEXLIST * m_psChengeTexList; // offset 0x190, size 0x4
    class NNS_MOTION * m_psMotion; // offset 0x194, size 0x4
    class NNS_MOTION * m_psMatMotion; // offset 0x198, size 0x4
    class NNS_MOTION * m_psMorphMotion; // offset 0x19C, size 0x4
    class NNS_OBJECT * m_psMatMotObj; // offset 0x1A0, size 0x4
    unsigned int * m_psMatStatus; // offset 0x1A4, size 0x4
    class NNS_OBJECT * m_psMatMotObjOld; // offset 0x1A8, size 0x4
    unsigned int * m_psMatStatusOld; // offset 0x1AC, size 0x4
    class NNS_OBJECT * m_psMorphObj; // offset 0x1B0, size 0x4
    float * m_pf32MorphWaitPallet; // offset 0x1B4, size 0x4
    class NNS_OBJECT * m_psMorphObjOld; // offset 0x1B8, size 0x4
    float * m_pf32MorphWaitPalletOld; // offset 0x1BC, size 0x4
    signed short m_s16MotNo; // offset 0x1C0, size 0x2
    signed short m_s16MatMotNo; // offset 0x1C2, size 0x2
    signed short m_s16MofMotNo; // offset 0x1C4, size 0x2
    signed short m_s16ChaMotNo; // offset 0x1C6, size 0x2
    signed short m_s16ChaMatMotNo; // offset 0x1C8, size 0x2
    signed short m_s16ChaMofMotNo; // offset 0x1CA, size 0x2
    float m_f32MotionFrame; // offset 0x1CC, size 0x4
    float m_f32MatMotionFrame; // offset 0x1D0, size 0x4
    float m_f32MofMotionFrame; // offset 0x1D4, size 0x4
    unsigned char m_u8FrameTexNo; // offset 0x1D8, size 0x1
    unsigned char m_u8FrameTexModel; // offset 0x1D9, size 0x1
    unsigned short m_u16NodeModelNo; // offset 0x1DA, size 0x2
    signed short m_s16NodeNo; // offset 0x1DC, size 0x2
    unsigned short m_u16NextNodeModelNo; // offset 0x1DE, size 0x2
    signed short m_s16NextNodeNo; // offset 0x1E0, size 0x2
};
class tGS_PMODE {
    // total size: 0x8
public:
    unsigned int EN1 : 1; // offset 0x0, size 0x4
    unsigned int EN2 : 1; // offset 0x0, size 0x4
    unsigned int CRTMD : 3; // offset 0x0, size 0x4
    unsigned int MMOD : 1; // offset 0x0, size 0x4
    unsigned int AMOD : 1; // offset 0x0, size 0x4
    unsigned int SLBG : 1; // offset 0x0, size 0x4
    unsigned int ALP : 8; // offset 0x0, size 0x4
    unsigned int p0 : 16; // offset 0x0, size 0x4
    unsigned int p1; // offset 0x4, size 0x4
};
class clsModelType_OB_TX_MO_MA_MF {
    // total size: 0x34
public:
    class NNS_OBJECT * m_psObject; // offset 0x0, size 0x4
    class _NNS_TEXLIST * m_psTexList; // offset 0x4, size 0x4
    class NNS_MOTION * m_psMotion; // offset 0x8, size 0x4
    float m_f32MotionFrame; // offset 0xC, size 0x4
    class NNS_OBJECT * m_psMatMotObj; // offset 0x10, size 0x4
    class NNS_MOTION * m_psMatMotion; // offset 0x14, size 0x4
    unsigned int * m_psMatStatus; // offset 0x18, size 0x4
    float m_f32MatMotionFrame; // offset 0x1C, size 0x4
    class NNS_OBJECT * m_psMorphObj; // offset 0x20, size 0x4
    class NNS_MORPHTARGETLIST * m_psMorphTargetList; // offset 0x24, size 0x4
    class NNS_MOTION * m_psMorphMotion; // offset 0x28, size 0x4
    float * m_pf32MorphWaitPallet; // offset 0x2C, size 0x4
    float m_f32MorphMotionFrame; // offset 0x30, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class clsBackLineEffectTask : public clsTask {
    // total size: 0x4C0
public:
    class stcStatus m_sStatus; // offset 0x60, size 0x20
    class stcGimickParam m_sGimickParam; // offset 0x80, size 0x14
    unsigned int m_u32LineColor; // offset 0x94, size 0x4
    float m_f32GctrlWaitFrame; // offset 0x98, size 0x4
    class NNS_VECTORFAST m_sNoMovePosFast; // offset 0xA0, size 0x10
    class NNS_VECTORFAST m_sLastBasePosFast; // offset 0xB0, size 0x10
    class NNS_VECTORFAST * m_opsNoMovePosFastAdr; // offset 0xC0, size 0x4
    class NNS_VECTORFAST * m_opsCompPosFastAdr; // offset 0xC4, size 0x4
    float (* m_opsNoMoveMtx)[4][4]; // offset 0xC8, size 0x4
    class stcParam * m_opsParam; // offset 0xCC, size 0x4
    class stcTrickSubParam * m_opsTrickSubParam; // offset 0xD0, size 0x4
    class stcGimickSubParam * m_opsGimickSubParam; // offset 0xD4, size 0x4
    class NNS_VECTOR m_asPoint[82]; // offset 0xD8, size 0x3D8
    class _NNS_TEXLIST * m_psTexList; // offset 0x4B0, size 0x4
};
class generic_iterator {
    // total size: 0x4
public:
    class node * node_; // offset 0x0, size 0x4
};
class clsScriptLight {
    // total size: 0x560
public:
    class stcLightValue m_asLightValue[2]; // offset 0x4, size 0x250
    class stcLightData m_asLightData[2][8]; // offset 0x254, size 0x100
    void * m_pavLightData[128]; // offset 0x354, size 0x200
    unsigned char m_u8ValueType; // offset 0x554, size 0x1
    signed int m_s32DataNum; // offset 0x558, size 0x4
    class NNS_LIGHTPTR * m_psCalcLight; // offset 0x55C, size 0x4
};
class clsScriptShadowMgr_Task : public clsTask {
    // total size: 0x94
public:
    class clsScriptShadowObj * m_apsShadowObjTask[16]; // offset 0x54, size 0x40
};
class sceGsRgbaq {
    // total size: 0x8
public:
    unsigned int R : 8; // offset 0x0, size 0x4
    unsigned int G : 8; // offset 0x0, size 0x4
    unsigned int B : 8; // offset 0x0, size 0x4
    unsigned int A : 8; // offset 0x0, size 0x4
    float Q; // offset 0x4, size 0x4
};
class NNS_OBJECT {
    // total size: 0x58
public:
    class NNS_VECTOR Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
    signed int nMaterial; // offset 0x10, size 0x4
    class NNS_MATERIALPTR * pMatPtrList; // offset 0x14, size 0x4
    signed int nVtxList; // offset 0x18, size 0x4
    class NNS_VTXLISTPTR * pVtxListPtrList; // offset 0x1C, size 0x4
    signed int nPrimList; // offset 0x20, size 0x4
    class NNS_PRIMLISTPTR * pPrimListPtrList; // offset 0x24, size 0x4
    signed int nNode; // offset 0x28, size 0x4
    signed int MaxNodeDepth; // offset 0x2C, size 0x4
    union { // inferred
        class NNS_NODE * pNodeList; // offset 0x30, size 0x4
        class NNS_NODEEXPTR * pNodeExPtrList; // offset 0x30, size 0x4
    };
    signed int nMtxPal; // offset 0x34, size 0x4
    signed int nSubobj; // offset 0x38, size 0x4
    class NNS_SUBOBJ * pSubobjList; // offset 0x3C, size 0x4
    signed int nTex; // offset 0x40, size 0x4
    unsigned int fType; // offset 0x44, size 0x4
    signed int Version; // offset 0x48, size 0x4
    float BoundingBoxX; // offset 0x4C, size 0x4
    float BoundingBoxY; // offset 0x50, size 0x4
    float BoundingBoxZ; // offset 0x54, size 0x4
};
class NNS_MOTION {
    // total size: 0x20
public:
    unsigned int fType; // offset 0x0, size 0x4
    float StartFrame; // offset 0x4, size 0x4
    float EndFrame; // offset 0x8, size 0x4
    signed int nSubmotion; // offset 0xC, size 0x4
    class NNS_SUBMOTION * pSubmotion; // offset 0x10, size 0x4
    float FrameRate; // offset 0x14, size 0x4
    unsigned int Reserved0; // offset 0x18, size 0x4
    unsigned int Reserved1; // offset 0x1C, size 0x4
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
class clsScriptMemory {
    // total size: 0x1
};
class clsScriptModelManager {
    // total size: 0x4
};
class sceGsAlpha {
    // total size: 0x8
public:
    unsigned long A : 2; // offset 0x0, size 0x4
    unsigned long B : 2; // offset 0x0, size 0x4
    unsigned long C : 2; // offset 0x0, size 0x4
    unsigned long D : 2; // offset 0x0, size 0x4
    unsigned long pad8 : 24; // offset 0x0, size 0x4
    unsigned long FIX : 8; // offset 0x0, size 0x4
    unsigned long pad40 : 24; // offset 0x0, size 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class tagstcScriptFuncLineData {
    // total size: 0x100
public:
    unsigned int u32FunctionType; // offset 0x0, size 0x4
    unsigned int u32Att; // offset 0x4, size 0x4
    unsigned char u8Padding[8]; // offset 0x8, size 0x8
    class tagstcScriptData sArgumentsDt[15]; // offset 0x10, size 0xF0
};
class sceGsXyoffset {
    // total size: 0x8
public:
    unsigned long OFX : 16; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long OFY : 16; // offset 0x0, size 0x4
    unsigned long pad48 : 16; // offset 0x0, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class clsScriptNega_Task : public clsGravityWave_Task {
    // total size: 0xF0
public:
    unsigned char m_u8Type; // offset 0xD0, size 0x1
    unsigned char m_u8Rgb; // offset 0xD1, size 0x1
    float m_f32Frame; // offset 0xD4, size 0x4
    float m_f32SubFrame; // offset 0xD8, size 0x4
    float m_f32EndFrame; // offset 0xDC, size 0x4
    float m_f32WaitFrame; // offset 0xE0, size 0x4
    unsigned char m_bEndFlg; // offset 0xE4, size 0x1
    signed short m_s16EndFrame; // offset 0xE6, size 0x2
    class clsTask * m_pcScriptTask; // offset 0xE8, size 0x4
};
class clsScriptCamera {
    // total size: 0x1C
public:
    class NNS_CAMERAPTR * m_psCalcCamera; // offset 0x4, size 0x4
    signed int m_s32No; // offset 0x8, size 0x4
    unsigned int m_u32Flg; // offset 0xC, size 0x4
    float m_f32MotionFrame; // offset 0x10, size 0x4
    class NNS_CAMERAPTR * m_psPtr; // offset 0x14, size 0x4
    class NNS_MOTION * m_psMotion; // offset 0x18, size 0x4
};
class stcParallelLight {
    // total size: 0x24
public:
    unsigned char bUsed; // offset 0x0, size 0x1
    unsigned char bDisabled; // offset 0x1, size 0x1
    class NNS_RGBA sRgba; // offset 0x4, size 0x10
    float f32Inten; // offset 0x14, size 0x4
    class NNS_VECTOR sDir; // offset 0x18, size 0xC
};
class stcFog {
    // total size: 0x24
public:
    unsigned char bUsed; // offset 0x0, size 0x1
    unsigned char bSwitch; // offset 0x1, size 0x1
    class stcRgbF32 sColor; // offset 0x4, size 0xC
    unsigned int u32Type; // offset 0x10, size 0x4
    float f32Near; // offset 0x14, size 0x4
    float f32Far; // offset 0x18, size 0x4
    float f32Min; // offset 0x1C, size 0x4
    float f32Max; // offset 0x20, size 0x4
};
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
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
class sceGsPrmode {
    // total size: 0x8
public:
    unsigned long pad00 : 3; // offset 0x0, size 0x4
    unsigned long IIP : 1; // offset 0x0, size 0x4
    unsigned long TME : 1; // offset 0x0, size 0x4
    unsigned long FGE : 1; // offset 0x0, size 0x4
    unsigned long ABE : 1; // offset 0x0, size 0x4
    unsigned long AA1 : 1; // offset 0x0, size 0x4
    unsigned long FST : 1; // offset 0x0, size 0x4
    unsigned long CTXT : 1; // offset 0x0, size 0x4
    unsigned long FIX : 1; // offset 0x0, size 0x4
    unsigned long pad11 : 53; // offset 0x0, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0xC
};
class NNS_SUBOBJ {
    // total size: 0x14
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nMeshset; // offset 0x4, size 0x4
    class NNS_MESHSET * pMeshsetList; // offset 0x8, size 0x4
    signed int nTex; // offset 0xC, size 0x4
    signed int * pTexNumList; // offset 0x10, size 0x4
};
class map {
    // total size: 0x18
public:
    class __tree tree_; // offset 0x0, size 0x18
};
class sceGsPrim {
    // total size: 0x8
public:
    unsigned long PRIM : 3; // offset 0x0, size 0x4
    unsigned long IIP : 1; // offset 0x0, size 0x4
    unsigned long TME : 1; // offset 0x0, size 0x4
    unsigned long FGE : 1; // offset 0x0, size 0x4
    unsigned long ABE : 1; // offset 0x0, size 0x4
    unsigned long AA1 : 1; // offset 0x0, size 0x4
    unsigned long FST : 1; // offset 0x0, size 0x4
    unsigned long CTXT : 1; // offset 0x0, size 0x4
    unsigned long FIX : 1; // offset 0x0, size 0x4
    unsigned long pad11 : 53; // offset 0x0, size 0x4
};
class compressed_pair_imp {
    // total size: 0xC
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class node_base second_; // offset 0x4, size 0x8
};
class stcGimickSubParam {
    // total size: 0x20
public:
    class NNS_VECTORFAST sStartFast; // offset 0x0, size 0x10
    class NNS_VECTORFAST sPowerFast; // offset 0x10, size 0x10
};
class NNS_MORPHTARGETLIST {
    // total size: 0x8
public:
    signed int nMorphTarget; // offset 0x0, size 0x4
    class NNS_MORPHTARGETPTR * pMorphTargetPtrList; // offset 0x4, size 0x4
};
class stcBgColor {
    // total size: 0x4
public:
    unsigned char m_u8a; // offset 0x0, size 0x1
    unsigned char m_u8b; // offset 0x1, size 0x1
    unsigned char m_u8g; // offset 0x2, size 0x1
    unsigned char m_u8r; // offset 0x3, size 0x1
};
class sceGsZbuf {
    // total size: 0x8
public:
    unsigned long ZBP : 9; // offset 0x0, size 0x4
    unsigned long pad09 : 15; // offset 0x0, size 0x4
    unsigned long PSM : 4; // offset 0x0, size 0x4
    unsigned long pad28 : 4; // offset 0x0, size 0x4
    unsigned long ZMSK : 1; // offset 0x0, size 0x4
    unsigned long pad33 : 31; // offset 0x0, size 0x4
};
class clsScriptCreateFrameTex_Task : public clsTask {
    // total size: 0x68
public:
    unsigned char m_u8Type; // offset 0x54, size 0x1
    unsigned char m_u8TexNo; // offset 0x55, size 0x1
    class _NNS_TEXLIST * m_psTexList; // offset 0x58, size 0x4
    void * m_pvTexHeap; // offset 0x5C, size 0x4
    void * m_pvTexMem; // offset 0x60, size 0x4
    class clsScript_Task * m_pcParrentTask; // offset 0x64, size 0x4
};
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class stcRgbF32 {
    // total size: 0xC
public:
    float f32r; // offset 0x0, size 0x4
    float f32g; // offset 0x4, size 0x4
    float f32b; // offset 0x8, size 0x4
};
class sceGsDispEnv {
    // total size: 0x28
public:
    class tGS_PMODE pmode; // offset 0x0, size 0x8
    class tGS_SMODE2 smode2; // offset 0x8, size 0x8
    class tGS_DISPFB2 dispfb; // offset 0x10, size 0x8
    class tGS_DISPLAY2 display; // offset 0x18, size 0x8
    class tGS_BGCOLOR bgcolor; // offset 0x20, size 0x8
};
class stcLightValue {
    // total size: 0x128
public:
    unsigned char u8Flg; // offset 0x0, size 0x1
    class stcRgbF32 sAmb; // offset 0x4, size 0xC
    class NNS_RGBA sSpe; // offset 0x10, size 0x10
    class NNS_VECTOR sSpeDir; // offset 0x20, size 0xC
    class stcParallelLight asParLight[7]; // offset 0x2C, size 0xFC
};
class NNS_MESHSET {
    // total size: 0x24
public:
    class NNS_VECTOR Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
    signed int iNode; // offset 0x10, size 0x4
    signed int iMatrix; // offset 0x14, size 0x4
    signed int iMaterial; // offset 0x18, size 0x4
    signed int iVtxList; // offset 0x1C, size 0x4
    signed int iPrimList; // offset 0x20, size 0x4
};
class clsModelType_OB_TX_MO_MA {
    // total size: 0x20
public:
    class NNS_OBJECT * m_psObject; // offset 0x0, size 0x4
    class _NNS_TEXLIST * m_psTexList; // offset 0x4, size 0x4
    class NNS_MOTION * m_psMotion; // offset 0x8, size 0x4
    float m_f32MotionFrame; // offset 0xC, size 0x4
    class NNS_OBJECT * m_psMatMotObj; // offset 0x10, size 0x4
    class NNS_MOTION * m_psMatMotion; // offset 0x14, size 0x4
    unsigned int * m_psMatStatus; // offset 0x18, size 0x4
    float m_f32MatMotionFrame; // offset 0x1C, size 0x4
};
class clsPfScriptHeap : public clsSingleton, public clsOOHeapFragment {
    // total size: 0x3C
public:
    unsigned char * m_pu8HeapTop_Hi; // offset 0x38, size 0x4
};
class NNS_MORPHTARGETPTR {
    // total size: 0x8
public:
    signed int nVtxList; // offset 0x0, size 0x4
    class NNS_VTXLISTPTR * pMorphTarget; // offset 0x4, size 0x4
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
class stcSunLenz {
    // total size: 0x14
public:
    unsigned char bUsed; // offset 0x0, size 0x1
    unsigned char bEnd; // offset 0x1, size 0x1
    class NNS_VECTOR sPos; // offset 0x4, size 0xC
    float f32Scale; // offset 0x10, size 0x4
};
class clsPfCameraMgr : public clsSingleton, private clsOOCameraMgr {
    // total size: 0x14
public:
    class vector m_vecCamera; // offset 0x8, size 0xC
};
struct /* @anon0 */ {
    // total size: 0x30
};
class clsSingleton {
    // total size: 0x4
};
class stcDetail {
    // total size: 0x20
public:
    class NNS_VECTORFAST m_sClipPosFast; // offset 0x0, size 0x10
    class stcPoint2D_s16 m_sPos2D_s16; // offset 0x10, size 0x4
    unsigned short m_u16TexSize; // offset 0x14, size 0x2
    unsigned char m_u8TexAlpha; // offset 0x16, size 0x1
    unsigned char m_bDraw; // offset 0x17, size 0x1
    unsigned char m_u8RandTimer; // offset 0x18, size 0x1
    unsigned char m_u8RandCnt; // offset 0x19, size 0x1
};
class node : public node_base {
    // total size: 0xC
public:
    void * data_; // offset 0x8, size 0x4
};
class tGS_BGCOLOR {
    // total size: 0x8
public:
    unsigned int R : 8; // offset 0x0, size 0x4
    unsigned int G : 8; // offset 0x0, size 0x4
    unsigned int B : 8; // offset 0x0, size 0x4
    unsigned int p0 : 8; // offset 0x0, size 0x4
    unsigned int p1; // offset 0x4, size 0x4
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
class NNS_LIGHTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pLight; // offset 0x4, size 0x4
};
class PXS_CONTEXTBUFFER {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class PXS_GSREG_AD reg[1]; // offset 0x10, size 0x10
};
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
};
class NVS_SVRHEADER {
    // total size: 0x8
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short miplevel; // offset 0x2, size 0x2
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
};
class clsGravityWave_Task : public clsBaseGravityWave_Task {
    // total size: 0xD0
public:
    unsigned long long * m_pu64GsPacket_DrawNega; // offset 0xC0, size 0x4
    unsigned long long * m_pu64GsPacket_Capture; // offset 0xC4, size 0x4
    unsigned int m_u32DrawHeightx16; // offset 0xC8, size 0x4
    float m_f32ScalePalY; // offset 0xCC, size 0x4
};
class sceGsTex2 {
    // total size: 0x8
public:
    unsigned long pad00 : 20; // offset 0x0, size 0x4
    unsigned long PSM : 6; // offset 0x0, size 0x4
    unsigned long pad26 : 11; // offset 0x0, size 0x4
    unsigned long CBP : 14; // offset 0x0, size 0x4
    unsigned long CPSM : 4; // offset 0x0, size 0x4
    unsigned long CSM : 1; // offset 0x0, size 0x4
    unsigned long CSA : 5; // offset 0x0, size 0x4
    unsigned long CLD : 3; // offset 0x0, size 0x4
};
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
class sceGsFrame {
    // total size: 0x8
public:
    unsigned long FBP : 9; // offset 0x0, size 0x4
    unsigned long pad09 : 7; // offset 0x0, size 0x4
    unsigned long FBW : 6; // offset 0x0, size 0x4
    unsigned long pad22 : 2; // offset 0x0, size 0x4
    unsigned long PSM : 6; // offset 0x0, size 0x4
    unsigned long pad30 : 2; // offset 0x0, size 0x4
    unsigned long FBMSK : 32; // offset 0x0, size 0x4
};
class stcPoint2D_s16 {
    // total size: 0x4
public:
    signed short s16x; // offset 0x0, size 0x2
    signed short s16y; // offset 0x2, size 0x2
};
class __list_deleter {
    // total size: 0x14
public:
    class compressed_pair size_; // offset 0x0, size 0x8
    class compressed_pair end_; // offset 0x8, size 0xC
};
class stcParam {
    // total size: 0x40
public:
    signed char s8Interval; // offset 0x0, size 0x1
    unsigned char u8TexNo; // offset 0x1, size 0x1
    unsigned char u8StAlpha; // offset 0x2, size 0x1
    unsigned char u8EdAlpha; // offset 0x3, size 0x1
    signed short s16NodeNo; // offset 0x4, size 0x2
    signed short s16DataNum; // offset 0x6, size 0x2
    unsigned int u32Color; // offset 0x8, size 0x4
    float f32StTu; // offset 0xC, size 0x4
    float f32EdTu; // offset 0x10, size 0x4
    class NNS_VECTORFAST sSizeFast; // offset 0x20, size 0x10
    class NNS_VECTORFAST sOffsetFast; // offset 0x30, size 0x10
};
struct /* @anon1 */ {
    // total size: 0xC
};
class binary_function {
    // total size: 0x1
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class clsPfGraphics : public clsSingleton, public clsOOGraphics_Consumer {
    // total size: 0x50
public:
    void * m_pvMainTextureBuffer; // offset 0x2C, size 0x4
    void * m_pvSpecialTextureBuffer; // offset 0x30, size 0x4
    class tagPXS_PUSHBUFFER * m_psPxPb_nn; // offset 0x34, size 0x4
    class PXS_CONTEXTBUFFER * m_psPxCb_nn; // offset 0x38, size 0x4
    class stcBgColor m_sBgColor; // offset 0x3C, size 0x4
    signed int m_s32RestTextureBufferSize; // offset 0x40, size 0x4
    signed int m_s32PalOffsetY; // offset 0x44, size 0x4
    float m_f32PalOffsetRatioY; // offset 0x48, size 0x4
    unsigned char m_bOdev; // offset 0x4C, size 0x1
};
class sceGsDrawEnv2 {
    // total size: 0x80
public:
    class sceGsFrame frame2; // offset 0x0, size 0x8
    unsigned long frame2addr; // offset 0x8, size 0x4
    class sceGsZbuf zbuf2; // offset 0x10, size 0x8
    signed long zbuf2addr; // offset 0x18, size 0x4
    class sceGsXyoffset xyoffset2; // offset 0x20, size 0x8
    signed long xyoffset2addr; // offset 0x28, size 0x4
    class sceGsScissor scissor2; // offset 0x30, size 0x8
    signed long scissor2addr; // offset 0x38, size 0x4
    class sceGsPrmodecont prmodecont; // offset 0x40, size 0x8
    signed long prmodecontaddr; // offset 0x48, size 0x4
    class sceGsColclamp colclamp; // offset 0x50, size 0x8
    signed long colclampaddr; // offset 0x58, size 0x4
    class sceGsDthe dthe; // offset 0x60, size 0x8
    signed long dtheaddr; // offset 0x68, size 0x4
    class sceGsTest test2; // offset 0x70, size 0x8
    signed long test2addr; // offset 0x78, size 0x4
};
class sceGsFogcol {
    // total size: 0x8
public:
    unsigned long FCR : 8; // offset 0x0, size 0x4
    unsigned long FCG : 8; // offset 0x0, size 0x4
    unsigned long FCB : 8; // offset 0x0, size 0x4
    unsigned long pad24 : 40; // offset 0x0, size 0x4
};
class clsResidenceEffect {
    // total size: 0x704
public:
    class _NNS_TEXLIST * m_psResidence_TexList; // offset 0x0, size 0x4
    class clsModelType_OB_TX_MO_MA m_cGravity_Model; // offset 0x4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cGravityEmpty_Model; // offset 0x24, size 0x20
    class clsModelType_OB_TX_MO_MA m_cGravityLocal_Model; // offset 0x44, size 0x20
    class clsModelType_OB_TX_MO_MA_MF m_acGravity_Model2[4]; // offset 0x64, size 0xD0
    class clsModelType_OB_TX_MO_MA_MF m_acGravity_Model3[4]; // offset 0x134, size 0xD0
    class clsModelType_OB_TX_MO_MA m_cLandig_Model; // offset 0x204, size 0x20
    class clsModelType_OB_TX_MO_MA m_cCurve_Model; // offset 0x224, size 0x20
    class clsModelType_OB_TX_MO_MA m_cCrash_Model; // offset 0x244, size 0x20
    class clsModelType_OB_TX_MO_MA m_cDash_Model; // offset 0x264, size 0x20
    class clsModelType_OB_TX_MO_MA m_cGetAGP_Model; // offset 0x284, size 0x20
    class clsModelType_OB_TX_MO_MA m_cCrashCrara_Model; // offset 0x2A4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cBadTrack_Model; // offset 0x2C4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cGearChenge01_Model; // offset 0x2E4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cGearChenge02_Model; // offset 0x304, size 0x20
    class clsModelType_OB_TX_MO_MA m_cGearChenge03_Model; // offset 0x324, size 0x20
    class clsModelType_OB_TX_MO_MA m_cGearChengeRt_Model; // offset 0x344, size 0x20
    class clsModelType_OB_TX_MO_MA m_cFalseStart00_Model; // offset 0x364, size 0x20
    class clsModelType_OB_TX_MO_MA m_cFalseStart01_Model; // offset 0x384, size 0x20
    class clsModelType_OB_TX_MO_MA m_cGravityCtrl00_Model; // offset 0x3A4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cGravityCtrl01_Model; // offset 0x3C4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cGravityCtrl02_Model; // offset 0x3E4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cPowerHit_Model; // offset 0x404, size 0x20
    class clsModelType_OB_TX_MO_MA m_cTrickXFlashLine_Model; // offset 0x424, size 0x20
    class clsModelType_OB_TX_MO_MA m_cTrickXRing_Model; // offset 0x444, size 0x20
    class clsModelType_OB_TX_MO_MA m_cGearTypeChange_Model; // offset 0x464, size 0x20
    class clsModelType_OB_TX_MO_MA m_cRoboCurv_Model; // offset 0x484, size 0x20
    class clsModelType_OB_TX_MO_MA m_cSidaRide_Model; // offset 0x4A4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cLandingWaterTrick_Model; // offset 0x4C4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cLandingWaterJump_Model; // offset 0x4E4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cMeteoriteFall_Model; // offset 0x504, size 0x20
    class clsModelType_OB_TX_MO_MA m_cDiveEffect_Model; // offset 0x524, size 0x20
    class clsModelType_OB_TX_MO_MA m_cMeteoExplode_Model; // offset 0x544, size 0x20
    class clsModelType_OB_TX_MO_MA m_cBossCrush_Model; // offset 0x564, size 0x20
    class clsModelType_OB_TX_MO_MA m_cBossCrush2_Model; // offset 0x584, size 0x20
    class clsModelType_OB_TX_MO_MA m_cBossAppear_Model; // offset 0x5A4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cBornRing_Model; // offset 0x5C4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cSt07PTObj_Model; // offset 0x5E4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cSt07Floor_Model; // offset 0x604, size 0x20
    class clsModelType_OB_TX_MO_MA m_cSt07FloorG_Model; // offset 0x624, size 0x20
    class clsModelType_OB_TX_MO_MA m_cBornSpring_Model; // offset 0x644, size 0x20
    class clsModelType_OB_TX_MO_MA m_cBornItemBox_Model; // offset 0x664, size 0x20
    class clsModelType_OB_TX_MO_MA m_cBornDPanel_Model; // offset 0x684, size 0x20
    class clsModelType_OB_TX_MO_MA m_cSt14FanL_Model; // offset 0x6A4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cSt14FanS_Model; // offset 0x6C4, size 0x20
    class clsModelType_OB_TX_MO_MA m_cSt07FloorHole_Model; // offset 0x6E4, size 0x20
};
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
};
class less : public binary_function {
    // total size: 0x1
};
class stcLightData {
    // total size: 0x10
public:
    unsigned char bUsed; // offset 0x0, size 0x1
    unsigned char u8LightNo; // offset 0x1, size 0x1
    float f32Frame; // offset 0x4, size 0x4
    class NNS_LIGHTPTR * psDataPtr; // offset 0x8, size 0x4
    class NNS_MOTION * psMotion; // offset 0xC, size 0x4
};
class stcNega {
    // total size: 0x18
public:
    float f32Frame; // offset 0x0, size 0x4
    float f32SubFrame; // offset 0x4, size 0x4
    float f32EndFrame; // offset 0x8, size 0x4
    float f32WaitFrame; // offset 0xC, size 0x4
    unsigned char bUsed; // offset 0x10, size 0x1
    unsigned char bEnd; // offset 0x11, size 0x1
    unsigned char u8Pri; // offset 0x12, size 0x1
    unsigned char u8Type; // offset 0x13, size 0x1
    unsigned char u8rgb; // offset 0x14, size 0x1
    signed short s16EndFrame; // offset 0x16, size 0x2
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class clsBaseGravityWave_Task : public clsTask {
    // total size: 0xC0
public:
    float m_sOrthoMtx[4][4]; // offset 0x60, size 0x40
    float m_af32InterColor[4]; // offset 0xA0, size 0x10
    unsigned char m_eMode[4]; // offset 0xB0, size 0x4
    unsigned char m_eType[4]; // offset 0xB4, size 0x4
};
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
};
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
};
class stcGimickParam {
    // total size: 0x14
public:
    class NNS_OBJECT * opsObject; // offset 0x0, size 0x4
    class NNS_MOTION * opsMotion; // offset 0x4, size 0x4
    float (* opsMatrix)[4][4]; // offset 0x8, size 0x4
    float * opf32Frame; // offset 0xC, size 0x4
    float f32Scale; // offset 0x10, size 0x4
};
class tGS_DISPLAY2 {
    // total size: 0x8
public:
    unsigned int DX : 12; // offset 0x0, size 0x4
    unsigned int DY : 11; // offset 0x0, size 0x4
    unsigned int MAGH : 4; // offset 0x0, size 0x4
    unsigned int MAGV : 2; // offset 0x0, size 0x4
    unsigned int p0 : 3; // offset 0x0, size 0x4
    unsigned int DW : 12; // offset 0x4, size 0x4
    unsigned int DH : 11; // offset 0x4, size 0x4
    unsigned int p1 : 9; // offset 0x4, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class sceGsDBuffDc {
    // total size: 0x330
public:
    class sceGsDispEnv disp[2]; // offset 0x0, size 0x50
    class sceGifTag giftag0; // offset 0x50, size 0x10
    class sceGsDrawEnv1 draw01; // offset 0x60, size 0x80
    class sceGsDrawEnv2 draw02; // offset 0xE0, size 0x80
    class sceGsClear clear0; // offset 0x160, size 0x60
    class sceGifTag giftag1; // offset 0x1C0, size 0x10
    class sceGsDrawEnv1 draw11; // offset 0x1D0, size 0x80
    class sceGsDrawEnv2 draw12; // offset 0x250, size 0x80
    class sceGsClear clear1; // offset 0x2D0, size 0x60
};
struct /* @anon2 */ {
    // total size: 0x30
};
class sceGsDthe {
    // total size: 0x8
public:
    unsigned long DTHE : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
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
class tagPXS_PUSHBUFFER {
    // total size: 0xA0
public:
    unsigned int flag; // offset 0x0, size 0x4
    unsigned short dbIndex; // offset 0x4, size 0x2
    unsigned short renderIndex; // offset 0x6, size 0x2
    unsigned int peakTags; // offset 0x8, size 0x4
    unsigned int peakBytes; // offset 0xC, size 0x4
    unsigned int beginFlag; // offset 0x10, size 0x4
    void * recentAddr; // offset 0x14, size 0x4
    class tagPXS_PUSHBUFFER * prev; // offset 0x18, size 0x4
    class tagPXS_PUSHBUFFER * next; // offset 0x1C, size 0x4
    class PXS_PUSHBUFFER1 db[2]; // offset 0x20, size 0x80
};
class _NNS_NODEEX {
    // total size: 0x90
public:
    unsigned int fNodeExType; // offset 0x0, size 0x4
    unsigned int fNodeType; // offset 0x4, size 0x4
    signed short iMatrix; // offset 0x8, size 0x2
    signed short iNode; // offset 0xA, size 0x2
    class _NNS_NODEEX * pParent; // offset 0xC, size 0x4
    class _NNS_NODEEX * pChild; // offset 0x10, size 0x4
    class _NNS_NODEEX * pSibling; // offset 0x14, size 0x4
    class NNS_VECTOR Translation; // offset 0x18, size 0xC
    class NNS_ROTATE_A32 Rotation; // offset 0x24, size 0xC
    class NNS_VECTOR Scaling; // offset 0x30, size 0xC
    unsigned int User; // offset 0x3C, size 0x4
    float InvInitMtx[4][4]; // offset 0x40, size 0x40
    unsigned int reserved; // offset 0x80, size 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class anchor second_; // offset 0x4, size 0x4
};
class NNS_MATERIAL_TEXMAP_DESC {
    // total size: 0x20
public:
    unsigned int fTexMapType; // offset 0x0, size 0x4
    unsigned short fTexWrapMode; // offset 0x4, size 0x2
    unsigned short iTexIdx; // offset 0x6, size 0x2
    class NNS_TEXCOORD Offset; // offset 0x8, size 0x8
    unsigned int GsTexA; // offset 0x10, size 0x4
    unsigned short GsTexLODL; // offset 0x14, size 0x2
    signed short GsTexLODK; // offset 0x16, size 0x2
    unsigned short GsClampMINU; // offset 0x18, size 0x2
    unsigned short GsClampMAXU; // offset 0x1A, size 0x2
    unsigned short GsClampMINV; // offset 0x1C, size 0x2
    unsigned short GsClampMAXV; // offset 0x1E, size 0x2
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
class sceGsDrawEnv1 {
    // total size: 0x80
public:
    class sceGsFrame frame1; // offset 0x0, size 0x8
    unsigned long frame1addr; // offset 0x8, size 0x4
    class sceGsZbuf zbuf1; // offset 0x10, size 0x8
    signed long zbuf1addr; // offset 0x18, size 0x4
    class sceGsXyoffset xyoffset1; // offset 0x20, size 0x8
    signed long xyoffset1addr; // offset 0x28, size 0x4
    class sceGsScissor scissor1; // offset 0x30, size 0x8
    signed long scissor1addr; // offset 0x38, size 0x4
    class sceGsPrmodecont prmodecont; // offset 0x40, size 0x8
    signed long prmodecontaddr; // offset 0x48, size 0x4
    class sceGsColclamp colclamp; // offset 0x50, size 0x8
    signed long colclampaddr; // offset 0x58, size 0x4
    class sceGsDthe dthe; // offset 0x60, size 0x8
    signed long dtheaddr; // offset 0x68, size 0x4
    class sceGsTest test1; // offset 0x70, size 0x8
    signed long test1addr; // offset 0x78, size 0x4
};
class clsScriptDrawFrameTex_Task : public clsTask {
    // total size: 0x80
public:
    unsigned char m_u8TexNo; // offset 0x54, size 0x1
    unsigned char m_u8Flg; // offset 0x55, size 0x1
    float m_f32PosX; // offset 0x58, size 0x4
    float m_f32PosY; // offset 0x5C, size 0x4
    float m_f32PosZ; // offset 0x60, size 0x4
    float m_f32Width; // offset 0x64, size 0x4
    float m_f32Height; // offset 0x68, size 0x4
    float m_f32RotX; // offset 0x6C, size 0x4
    float m_f32RotY; // offset 0x70, size 0x4
    float m_f32RotZ; // offset 0x74, size 0x4
    class clsScript_Task * m_pcParrentTask; // offset 0x78, size 0x4
    class clsScriptCreateFrameTex_Task * m_pcCreateTexture_Task; // offset 0x7C, size 0x4
};
class clsOOCameraMgr {
    // total size: 0x4
};
class sceGsClear {
    // total size: 0x60
public:
    class sceGsTest testa; // offset 0x0, size 0x8
    signed long testaaddr; // offset 0x8, size 0x4
    class sceGsPrim prim; // offset 0x10, size 0x8
    signed long primaddr; // offset 0x18, size 0x4
    class sceGsRgbaq rgbaq; // offset 0x20, size 0x8
    signed long rgbaqaddr; // offset 0x28, size 0x4
    class sceGsXyz xyz2a; // offset 0x30, size 0x8
    signed long xyz2aaddr; // offset 0x38, size 0x4
    class sceGsXyz xyz2b; // offset 0x40, size 0x8
    signed long xyz2baddr; // offset 0x48, size 0x4
    class sceGsTest testb; // offset 0x50, size 0x8
    signed long testbaddr; // offset 0x58, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class clsScriptWave_Task : public clsGravityWave_Task {
    // total size: 0xE0
public:
    float m_f32Frame; // offset 0xD0, size 0x4
    float m_f32EndFrame; // offset 0xD4, size 0x4
    float m_f32WaitFrame; // offset 0xD8, size 0x4
    class clsTask * m_pcScriptTask; // offset 0xDC, size 0x4
};
class stcStatus {
    // total size: 0x20
public:
    unsigned char u8Type; // offset 0x0, size 0x1
    signed char s8Count; // offset 0x1, size 0x1
    signed short s16SubNo; // offset 0x2, size 0x2
    unsigned short u16Flg; // offset 0x4, size 0x2
    signed short s16CurNum; // offset 0x6, size 0x2
    class NNS_VECTORFAST sLastPosFast; // offset 0x10, size 0x10
};
class clsSunLenz_Task : public clsTask {
    // total size: 0x110
public:
    class stcDetail m_asDetail[4]; // offset 0x60, size 0x80
    class NNS_VECTORFAST m_sSunPosFast; // offset 0xE0, size 0x10
    signed int m_s32SunSize; // offset 0xF0, size 0x4
    unsigned int m_u32ViewportNum; // offset 0xF4, size 0x4
    signed short m_s16FbHalfW; // offset 0xF8, size 0x2
    signed short m_s16FbHalfH; // offset 0xFA, size 0x2
    signed short m_s16FbQuartW; // offset 0xFC, size 0x2
    signed short m_s16FbQuartH; // offset 0xFE, size 0x2
    signed char m_s8ShiftX; // offset 0x100, size 0x1
    signed char m_s8ShiftY; // offset 0x101, size 0x1
    class _NNS_TEXLIST * m_psTextureList; // offset 0x104, size 0x4
};
class stcTrickSubParam {
    // total size: 0xC
public:
    signed short s16DataNum; // offset 0x0, size 0x2
    float f32Width; // offset 0x4, size 0x4
    float f32Scale; // offset 0x8, size 0x4
};
class compile_assert {
    // total size: 0x1
};
class clsSingleton {
    // total size: 0x4
};
class PXS_PUSHBUFFER1 {
    // total size: 0x40
public:
    __int128 * tagTop; // offset 0x0, size 0x4
    __int128 * tagPtr; // offset 0x4, size 0x4
    __int128 * bufTop; // offset 0x8, size 0x4
    __int128 * bufPtr; // offset 0xC, size 0x4
    __int128 * beginPtr; // offset 0x10, size 0x4
    unsigned int bufSize; // offset 0x14, size 0x4
    unsigned int maxTags; // offset 0x18, size 0x4
    unsigned int numTags; // offset 0x1C, size 0x4
    unsigned int numBytes; // offset 0x20, size 0x4
    unsigned int pushVuOffset; // offset 0x24, size 0x4
    unsigned int nextVifCmd; // offset 0x28, size 0x4
    unsigned int ready; // offset 0x2C, size 0x4
    unsigned int reserved2[4]; // offset 0x30, size 0x10
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
class stcFade {
    // total size: 0x14
public:
    unsigned short u16Flg; // offset 0x0, size 0x2
    unsigned short u16View; // offset 0x2, size 0x2
    float f32EndFrame; // offset 0x4, size 0x4
    unsigned int u32Type; // offset 0x8, size 0x4
    unsigned int u32Color; // offset 0xC, size 0x4
    float f32WaitFrame; // offset 0x10, size 0x4
};
class stcScriptStatus {
    // total size: 0x2C
public:
    unsigned int u32Flg; // offset 0x0, size 0x4
    signed int s32CutNo; // offset 0x4, size 0x4
    signed int s32NextCutNo; // offset 0x8, size 0x4
    signed int s32CodeNo; // offset 0xC, size 0x4
    signed int s32CodeMax; // offset 0x10, size 0x4
    float f32SceneFrame; // offset 0x14, size 0x4
    float f32CutFrame; // offset 0x18, size 0x4
    float f32CutEndFrame; // offset 0x1C, size 0x4
    float f32NextCutEndFrame; // offset 0x20, size 0x4
    signed short s16WaitCnt; // offset 0x24, size 0x2
    signed short s16WaitFrame; // offset 0x26, size 0x2
    unsigned int u32WaitButton; // offset 0x28, size 0x4
};
class sceGsColclamp {
    // total size: 0x8
public:
    unsigned long CLAMP : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class NNS_RGB {
    // total size: 0xC
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
};
class tGS_DISPFB2 {
    // total size: 0x8
public:
    unsigned int FBP : 9; // offset 0x0, size 0x4
    unsigned int FBW : 6; // offset 0x0, size 0x4
    unsigned int PSM : 5; // offset 0x0, size 0x4
    unsigned int p0 : 12; // offset 0x0, size 0x4
    unsigned int DBX : 11; // offset 0x4, size 0x4
    unsigned int DBY : 11; // offset 0x4, size 0x4
    unsigned int p1 : 10; // offset 0x4, size 0x4
};
class clsScriptCameraFrameTex_Task : public clsTask, public clsScriptCamera {
    // total size: 0x78
public:
    unsigned char m_u8TexNo; // offset 0x70, size 0x1
    class clsScript_Task * m_pcParrentTask; // offset 0x74, size 0x4
};
class sceGsTest {
    // total size: 0x8
public:
    unsigned long ATE : 1; // offset 0x0, size 0x4
    unsigned long ATST : 3; // offset 0x0, size 0x4
    unsigned long AREF : 8; // offset 0x0, size 0x4
    unsigned long AFAIL : 2; // offset 0x0, size 0x4
    unsigned long DATE : 1; // offset 0x0, size 0x4
    unsigned long DATM : 1; // offset 0x0, size 0x4
    unsigned long ZTE : 1; // offset 0x0, size 0x4
    unsigned long ZTST : 2; // offset 0x0, size 0x4
    unsigned long pad19 : 45; // offset 0x0, size 0x4
};
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
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
struct /* @anon3 */ {
    // total size: 0x2C
};
class sceGsClamp {
    // total size: 0x8
public:
    unsigned long WMS : 2; // offset 0x0, size 0x4
    unsigned long WMT : 2; // offset 0x0, size 0x4
    unsigned long MINU : 10; // offset 0x0, size 0x4
    unsigned long MAXU : 10; // offset 0x0, size 0x4
    unsigned long MINV : 10; // offset 0x0, size 0x4
    unsigned long MAXV : 10; // offset 0x0, size 0x4
    unsigned long pad44 : 20; // offset 0x0, size 0x4
};
class anchor {
    // total size: 0x4
public:
    class node_base * left_; // offset 0x0, size 0x4
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
class NNS_SUBMOTION {
    // total size: 0x28
public:
    unsigned int fType; // offset 0x0, size 0x4
    unsigned int fIPType; // offset 0x4, size 0x4
    union { // inferred
        signed int Id; // offset 0x8, size 0x4
        struct { // inferred
            signed short Id0; // offset 0x8, size 0x2
            signed short Id1; // offset 0xA, size 0x2
        };
    };
    float StartFrame; // offset 0xC, size 0x4
    float EndFrame; // offset 0x10, size 0x4
    float StartKeyFrame; // offset 0x14, size 0x4
    float EndKeyFrame; // offset 0x18, size 0x4
    signed int nKeyFrame; // offset 0x1C, size 0x4
    signed int KeySize; // offset 0x20, size 0x4
    void * pKeyList; // offset 0x24, size 0x4
};
class clsBlur_Task : public clsTask {
    // total size: 0x7C
public:
    float m_af32GravityFrame[4]; // offset 0x54, size 0x10
    unsigned long long * m_pu64GsPacket_Capture; // offset 0x64, size 0x4
    unsigned long long * m_pu64GsPacket_DrawBlur; // offset 0x68, size 0x4
    unsigned int m_u32FbDrawHeightx16; // offset 0x6C, size 0x4
    unsigned int m_u32WY_TEXHx16; // offset 0x70, size 0x4
    unsigned short m_u16DrawBlur_BaseW; // offset 0x74, size 0x2
    unsigned short m_u16DrawBlur_BaseH0; // offset 0x76, size 0x2
    unsigned short m_u16DrawBlur_BaseH1; // offset 0x78, size 0x2
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class sceGsFba {
    // total size: 0x8
public:
    unsigned long FBA : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class node_base : public anchor {
    // total size: 0xC
public:
    class node_base * right_; // offset 0x4, size 0x4
    class __pointer_plus_bit parent_; // offset 0x8, size 0x4
};
class sceGsPrmodecont {
    // total size: 0x8
public:
    unsigned long AC : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
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
class sceGsTexa {
    // total size: 0x8
public:
    unsigned long TA0 : 8; // offset 0x0, size 0x4
    unsigned long pad08 : 7; // offset 0x0, size 0x4
    unsigned long AEM : 1; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long TA1 : 8; // offset 0x0, size 0x4
    unsigned long pad40 : 24; // offset 0x0, size 0x4
};
class stcBinInfo {
    // total size: 0x28
public:
    enum enm ePackId; // offset 0x0, size 0x4
    unsigned char * opu8Bin[6]; // offset 0x4, size 0x18
    unsigned char * opu8BinTopAddr; // offset 0x1C, size 0x4
    unsigned int * opu32OffsetNo; // offset 0x20, size 0x4
    signed int s32RestBinNum; // offset 0x24, size 0x4
};
class sceGifTag {
    // total size: 0x10
public:
    unsigned long NLOOP : 15; // offset 0x0, size 0x4
    unsigned long EOP : 1; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long id : 14; // offset 0x0, size 0x4
    unsigned long PRE : 1; // offset 0x0, size 0x4
    unsigned long PRIM : 11; // offset 0x0, size 0x4
    unsigned long FLG : 2; // offset 0x0, size 0x4
    unsigned long NREG : 4; // offset 0x0, size 0x4
    unsigned long REGS0 : 4; // offset 0x8, size 0x4
    unsigned long REGS1 : 4; // offset 0x8, size 0x4
    unsigned long REGS2 : 4; // offset 0x8, size 0x4
    unsigned long REGS3 : 4; // offset 0x8, size 0x4
    unsigned long REGS4 : 4; // offset 0x8, size 0x4
    unsigned long REGS5 : 4; // offset 0x8, size 0x4
    unsigned long REGS6 : 4; // offset 0x8, size 0x4
    unsigned long REGS7 : 4; // offset 0x8, size 0x4
    unsigned long REGS8 : 4; // offset 0x8, size 0x4
    unsigned long REGS9 : 4; // offset 0x8, size 0x4
    unsigned long REGS10 : 4; // offset 0x8, size 0x4
    unsigned long REGS11 : 4; // offset 0x8, size 0x4
    unsigned long REGS12 : 4; // offset 0x8, size 0x4
    unsigned long REGS13 : 4; // offset 0x8, size 0x4
    unsigned long REGS14 : 4; // offset 0x8, size 0x4
    unsigned long REGS15 : 4; // offset 0x8, size 0x4
};
class __pointer_plus_bit {
    // total size: 0x4
public:
    class node_base * ptr_; // offset 0x0, size 0x4
};
class stcWave {
    // total size: 0x10
public:
    unsigned char bUsed; // offset 0x0, size 0x1
    unsigned char bEnd; // offset 0x1, size 0x1
    unsigned int u32Pri; // offset 0x4, size 0x4
    float f32Frame; // offset 0x8, size 0x4
    float f32WaitFrame; // offset 0xC, size 0x4
};
class generic_iterator {
    // total size: 0x4
public:
    class generic_iterator i_; // offset 0x0, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class tGS_SMODE2 {
    // total size: 0x8
public:
    unsigned int INT : 1; // offset 0x0, size 0x4
    unsigned int FFMD : 1; // offset 0x0, size 0x4
    unsigned int DPMS : 2; // offset 0x0, size 0x4
    unsigned int p0 : 28; // offset 0x0, size 0x4
    unsigned int p1; // offset 0x4, size 0x4
};
class list : private __list_imp {
    // total size: 0x14
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
enum enmScreenMode {
    SCREEN_MODE___NTSC = 0,
    SCREEN_MODE___NTSC_PROGRESSIVE = 1,
    SCREEN_MODE___PAL = 2,
    SCREEN_MODE___MPAL = 3,
    SCREEN_MODE___MPAL_PROGRESSIVE = 4,
    SCREEN_MODE___PAL60 = 5,
    SCREEN_MODE___PAL60_PROGRESSIVE = 6,
    SCREEN_MODE___MIN_WIDE = 7,
    SCREEN_MODE___NTSC_WIDE = 7,
    SCREEN_MODE___NTSC_PROGRESSIVE_WIDE = 8,
    SCREEN_MODE___PAL_WIDE = 9,
    SCREEN_MODE___MPAL_WIDE = 10,
    SCREEN_MODE___MPAL_PROGRESSIVE_WIDE = 11,
    SCREEN_MODE___PAL60_WIDE = 12,
    SCREEN_MODE___PAL60_PROGRESSIVE_WIDE = 13,
    SCREEN_MODE___MAX_WIDE = 14,
};

// Range: 0x405790 -> 0x40580C
void draw(class clsScriptShadowMgr_Task * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x405790 -> 0x40580C
        class clsScriptShadowObj * pcObj; // r2
        signed int s32i; // r16
        signed int s32n; // r6
    }
}


// Range: 0x405810 -> 0x4058A4
void update(class clsScriptShadowMgr_Task * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x405810 -> 0x4058A4
        class clsScriptShadowObj * pcObj; // r2
        signed int s32i; // r17
    }
}


// Range: 0x4058B0 -> 0x405D34
void drawShadowPS2(class clsScriptShadowObj * this /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4058B0 -> 0x405D34
        float sMtx[4][4]; // r29+0xA0
        class NNS_RGB sOldDiffuse; // r29+0xE0
        unsigned int * psNodeStat; // r16
        class stcParam * psParam; // r2
        class clsModelType_OB * pcModel; // r2
        class NNS_VECTORFAST sDirVecFast; // r29+0x90
        class NNS_VECTORFAST sPosVecFast; // r29+0x80
        float (* psMtxList)[4][4]; // r2
        class clsScriptModel_Task * pcTask; // r2
        float f32RadY; // r20
        class NNS_MATERIAL_SINGLE * psMaterial; // r20
        unsigned int u32OldTest; // r2
    }
}


// Range: 0x405D40 -> 0x405E78
void update(class clsScriptShadowObj * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x405D40 -> 0x405E78
    }
}


// Range: 0x405E80 -> 0x405E88
void releaseData() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x405E80 -> 0x405E88
    }
}


// Range: 0x405E90 -> 0x405EE0
void initData() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x405E90 -> 0x405EE0
        signed int s32i; // r17
    }
}


// Range: 0x405EE0 -> 0x405F00
void codeShadowPriority(unsigned char * pu8Ptr /* r2 */, class clsScript_Task * pcTask /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x405EE0 -> 0x405F00
        class tagstcScriptFuncLineData * psLine; // r2
    }
}


// Range: 0x405F00 -> 0x405F2C
void codeShadowChange(unsigned char * pu8Ptr /* r2 */, class clsScript_Task * pcTask /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x405F00 -> 0x405F2C
        class tagstcScriptFuncLineData * psLine; // r2
        unsigned int u32Shadow; // r2
    }
}


// Range: 0x405F30 -> 0x405F64
void codeShadowScale(unsigned char * pu8Ptr /* r2 */, class clsScript_Task * pcTask /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x405F30 -> 0x405F64
        class tagstcScriptFuncLineData * psLine; // r2
        float f32ScaleX; // r29
        float f32ScaleZ; // r29
    }
}


// Range: 0x405F70 -> 0x405FA4
void codeShadowModel(unsigned char * pu8Ptr /* r2 */, class clsScript_Task * pcTask /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x405F70 -> 0x405FA4
        class tagstcScriptFuncLineData * psLine; // r2
        unsigned int u32Model; // r2
        unsigned int u32Node; // r2
    }
}


// Range: 0x405FB0 -> 0x406054
void codeShadowOffset(unsigned char * pu8Ptr /* r2 */, class clsScript_Task * pcTask /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x405FB0 -> 0x406054
        class tagstcScriptFuncLineData * psLine; // r2
        unsigned int u32Id; // r2
        float f32OffsetX; // r2
        float f32OffsetY; // r1
        float f32OffsetZ; // r29+0x10
        unsigned int u32GlobalOffsetFlg; // r2
        class NNS_VECTOR sOffset; // r29
    }
}


// Range: 0x406060 -> 0x406084
void codeDelShadow(unsigned char * pu8Ptr /* r2 */, class clsScript_Task * pcTask /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x406060 -> 0x406084
    }
}


// Range: 0x406090 -> 0x4060E8
void codeShadowDisp(unsigned char * pu8Ptr /* r2 */, class clsScript_Task * pcTask /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x406090 -> 0x4060E8
        class tagstcScriptFuncLineData * psLine; // r2
        unsigned int u32Id; // r2
    }
}


// Range: 0x4060F0 -> 0x4061EC
void codeShadow(unsigned char * pu8Ptr /* r2 */, class clsScript_Task * pcTask /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4060F0 -> 0x4061EC
        class tagstcScriptFuncLineData * psLine; // r2
        unsigned int u32Id; // r2
        unsigned int u32Shadow; // r20
        unsigned int u32MdlNo; // r19
        unsigned int u32NodeNo; // r18
        float f32ScaleX; // r24
        float f32ScaleZ; // r23
        float f32OffsetX; // r22
        float f32OffsetY; // r21
        float f32OffsetZ; // r20
        unsigned int u32GlobalOffsetFlg; // r2
    }
}


// Range: 0x4061F0 -> 0x40628C
void setShadowData(unsigned int u32Type /* r2 */, class stcBinInfo & rsBinInfoI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4061F0 -> 0x40628C
    }
}


// Range: 0x406290 -> 0x406354
void * __ct(class clsScriptShadowObj * this /* r16 */, unsigned short u16TaskNo /* r2 */, unsigned int u32Shadow /* r2 */, unsigned int u32MdlNo /* r2 */, unsigned int u32Node /* r2 */, float f32ScaleX /* r29+0x20 */, float f32ScaleZ /* r29+0x20 */, float f32OffsetX /* r29+0x20 */, float f32OffsetY /* r29+0x20 */, float f32OffsetZ /* r29+0x20 */, unsigned char u8GlobalOffsetFlg /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x406290 -> 0x406354
    }
}


