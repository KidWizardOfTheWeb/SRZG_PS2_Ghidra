/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Main.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class stcLoadingCircle asLoadingCircle[3]; // size: 0x78, address: 0x5FBA20
class clsPfIop * m_tpcSingleton; // size: 0x4, address: 0x6E69B0
struct /* @anon21 */ {
    // total size: 0xC
} __vt__23clsSingleton<8clsPfIop>; // size: 0xC, address: 0x6B56C8
struct /* @anon9 */ {
    // total size: 0xC
} __vt__8clsPfIop; // size: 0xC, address: 0x6B56D8
class clsPfTimer * m_tpcSingleton; // size: 0x4, address: 0x6E69A8
struct /* @anon1 */ {
    // total size: 0xC
} __vt__26clsSingleton<10clsPfTimer>; // size: 0xC, address: 0x6B5828
class clsOOTimer * t_cInstance; // size: 0x4, address: 0xB17450
struct /* @anon19 */ {
    // total size: 0x18
} __vt__10clsOOTimer; // size: 0x18, address: 0x6B5810
struct /* @anon17 */ {
    // total size: 0x30
} __vt__10clsPfTimer; // size: 0x30, address: 0x6B57E0
class clsPfSystem * m_tpcSingleton; // size: 0x4, address: 0x6E69B8
struct /* @anon10 */ {
    // total size: 0xC
} __vt__27clsSingleton<11clsPfSystem>; // size: 0xC, address: 0x6B56E8
struct /* @anon20 */ {
    // total size: 0x30
} __vt__11clsOOSystem; // size: 0x30, address: 0x6B5700
struct /* @anon0 */ {
    // total size: 0x48
} __vt__11clsPfSystem; // size: 0x48, address: 0x6B5840
class clsPfGraphics * m_tpcSingleton; // size: 0x4, address: 0x6E69A0
struct /* @anon4 */ {
    // total size: 0xC
} __vt__29clsSingleton<13clsPfGraphics>; // size: 0xC, address: 0x6B5730
struct /* @anon2 */ {
    // total size: 0x44
} __vt__22clsOOGraphics_Consumer; // size: 0x44, address: 0x6B5740
struct /* @anon8 */ {
    // total size: 0x88
} __vt__13clsPfGraphics; // size: 0x88, address: 0x6B6110
class clsPfMainHeap * m_tpcSingleton; // size: 0x4, address: 0x6D20D0
struct /* @anon18 */ {
    // total size: 0xC
} __vt__29clsSingleton<13clsPfMainHeap>; // size: 0xC, address: 0x6B5658
class clsOOMainHeap * t_cInstance; // size: 0x4, address: 0xB17268
struct /* @anon5 */ {
    // total size: 0xC
} __vt__13clsOOMainHeap; // size: 0xC, address: 0x6B5648
struct /* @anon7 */ {
    // total size: 0x18
} __vt__13clsPfMainHeap; // size: 0x18, address: 0x6B5630
float tsaNnMtxStackBuf[256][4][4]; // size: 0x4000, address: 0x703DD0
class NNS_MATRIXSTACK tsNnMtxStack; // size: 0x10, address: 0x707DD0
struct /* @anon6 */ {
    // total size: 0x94
} __vt__8clsPfCri; // size: 0x94, address: 0x6BCAB0
class clsPfCri * m_tpcSingleton; // size: 0x4, address: 0x6E6998
struct /* @anon14 */ {
    // total size: 0xC
} __vt__23clsSingleton<8clsPfCri>; // size: 0xC, address: 0x6B5788
class _NNS_TEXLIST * m_psAlwaysOnTexList2; // size: 0x4, address: 0xB0A938
void * m_apvButtonUV[1]; // size: 0x4, address: 0xB0A940
unsigned char * _ButtonUV_U_Start; // size: 0x4, address: 0x6A8E00
void (* m_tpRenderNowLoading_CallBack)(); // size: 0x4, address: 0xB096F8
void tRenderNowLoading_CallBack(); // size: 0x0, address: 0x15DCE0
unsigned char * _AlwaysOnTextureStart; // size: 0x4, address: 0x69A900
class _NNS_TEXLIST * m_psAlwaysOnTexList; // size: 0x4, address: 0xB0A930
struct /* @anon11 */ {
    // total size: 0x48
} __vt__11clsPfDraw2d; // size: 0x48, address: 0x6B60C0
struct /* @anon16 */ {
    // total size: 0x24
} __vt__11clsOODraw2d; // size: 0x24, address: 0x6B57A0
class clsPfDraw2d * m_tpcSingleton; // size: 0x4, address: 0x6E6990
struct /* @anon3 */ {
    // total size: 0xC
} __vt__27clsSingleton<11clsPfDraw2d>; // size: 0xC, address: 0x6B57C8
void (* s_pfDeleteFunc)(class clsOOSemaphore *); // size: 0x4, address: 0xB166B0
void deleteInstance(class clsOOSemaphore *); // size: 0x0, address: 0x15DB30
class clsOOSemaphore * (* s_pfCreateFunc)(signed int, signed int); // size: 0x4, address: 0xB166A8
class clsOOSemaphore * createInstance(signed int, signed int); // size: 0x0, address: 0x15DBB0
void (* s_pfSleepFunc)(); // size: 0x4, address: 0xB166C8
void sleep(); // size: 0x0, address: 0x15DC00
void (* s_pfDelayFunc)(unsigned int); // size: 0x4, address: 0xB166C0
void delayThread(unsigned int); // size: 0x0, address: 0x15DC10
class clsOOThread * (* s_pfCreateFunc)(); // size: 0x4, address: 0xB166B8
class clsOOThread * createInstance(); // size: 0x0, address: 0x15DC20
class clsSrPlatform * m_tpcSingleton; // size: 0x4, address: 0x6E6988
class clsGameMgr * m_tpcSingleton; // size: 0x4, address: 0x6E6980
struct /* @anon12 */ {
    // total size: 0x1C
} __vt__11clsOOThread; // size: 0x1C, address: 0x6B5670
struct /* @anon15 */ {
    // total size: 0x1C
} __vt__11clsPfThread; // size: 0x1C, address: 0x6B5690
struct /* @anon13 */ {
    // total size: 0x18
} __vt__14clsOOSemaphore; // size: 0x18, address: 0x6B56B0
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
class stcLoadingCircle {
    // total size: 0x28
public:
    class stcVecS32 sCurRot; // offset 0x0, size 0xC
    class stcVecS32 sAddRot; // offset 0xC, size 0xC
    class stcVecS32 sBaseRot; // offset 0x18, size 0xC
    float f32Scale; // offset 0x24, size 0x4
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
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class clsOOTimer {
    // total size: 0x2C
public:
    signed int m_s32CpuMicroSec; // offset 0x4, size 0x4
    signed int m_s32GpuMicroSec; // offset 0x8, size 0x4
    signed int m_s32BeginCpuTick; // offset 0xC, size 0x4
    signed int m_s32EndCpuDiffTick; // offset 0x10, size 0x4
    signed int m_s32BeginGpuTick; // offset 0x14, size 0x4
    signed int m_s32EndGpuDiffTick; // offset 0x18, size 0x4
    unsigned int m_u32CpuAverage; // offset 0x1C, size 0x4
    unsigned int m_u32GpuAverage; // offset 0x20, size 0x4
    unsigned int m_u32AverageCnt; // offset 0x24, size 0x4
    unsigned int m_u32AverageClearFrame; // offset 0x28, size 0x4
};
class SJCK {
    // total size: 0x8
public:
    signed char * data; // offset 0x0, size 0x4
    signed int len; // offset 0x4, size 0x4
};
struct /* @anon0 */ {
    // total size: 0x48
};
enum enmZModeCompType {
    Z___NEVER = 0,
    Z___ALWAYS = 1,
    Z___G_EQUAL = 2,
    Z___GREATER = 3,
    Z___L_EQUAL = 4,
    Z___LESS = 5,
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
class clsSingleton {
    // total size: 0x4
};
enum enmCullModeType {
    CULL___NONE = 0,
    CULL___CW = 1,
    CULL___CCW = 2,
};
class _adx_talk {
    // total size: 0xC8
public:
    signed char used; // offset 0x0, size 0x1
    signed char stat; // offset 0x1, size 0x1
    signed char pmode; // offset 0x2, size 0x1
    signed char maxnch; // offset 0x3, size 0x1
    void * sjd; // offset 0x4, size 0x4
    void * stm; // offset 0x8, size 0x4
    void * rna; // offset 0xC, size 0x4
    class SJ_OBJ * sjf; // offset 0x10, size 0x4
    class SJ_OBJ * sji; // offset 0x14, size 0x4
    class SJ_OBJ * sjo[2]; // offset 0x18, size 0x8
    signed char * ibuf; // offset 0x20, size 0x4
    signed int ibuflen; // offset 0x24, size 0x4
    signed int ibufxlen; // offset 0x28, size 0x4
    signed short * obuf; // offset 0x2C, size 0x4
    signed int obufsize; // offset 0x30, size 0x4
    signed int obufdist; // offset 0x34, size 0x4
    signed int svrfreq; // offset 0x38, size 0x4
    signed short maxsct; // offset 0x3C, size 0x2
    signed short minsct; // offset 0x3E, size 0x2
    signed short outvol; // offset 0x40, size 0x2
    signed short outpan[2]; // offset 0x42, size 0x4
    signed short outbalance; // offset 0x46, size 0x2
    signed int maxdecsmpl; // offset 0x48, size 0x4
    signed int lpcnt; // offset 0x4C, size 0x4
    signed int lp_skiplen; // offset 0x50, size 0x4
    signed int trp; // offset 0x54, size 0x4
    signed int wpos; // offset 0x58, size 0x4
    signed int mofst; // offset 0x5C, size 0x4
    signed short ercode; // offset 0x60, size 0x2
    signed int edecpos; // offset 0x64, size 0x4
    signed short edeccnt; // offset 0x68, size 0x2
    signed short eshrtcnt; // offset 0x6A, size 0x2
    signed char lpflg; // offset 0x6C, size 0x1
    signed char autorcvr; // offset 0x6D, size 0x1
    signed char fltmode; // offset 0x6E, size 0x1
    signed char execflag; // offset 0x6F, size 0x1
    signed char pstwait_flag; // offset 0x70, size 0x1
    signed char pstready_flag; // offset 0x71, size 0x1
    signed char pause_flag; // offset 0x72, size 0x1
    void * amp; // offset 0x74, size 0x4
    class SJ_OBJ * ampsji[2]; // offset 0x78, size 0x8
    class SJ_OBJ * ampsjo[2]; // offset 0x80, size 0x8
    signed int time_ofst; // offset 0x88, size 0x4
    signed int lesct; // offset 0x8C, size 0x4
    signed int trpnsmpl; // offset 0x90, size 0x4
    void * lsc; // offset 0x94, size 0x4
    signed char lnkflg; // offset 0x98, size 0x1
    signed char rsv; // offset 0x99, size 0x1
    signed short rsv2; // offset 0x9A, size 0x2
    unsigned int tvofst; // offset 0x9C, size 0x4
    unsigned int svcnt; // offset 0xA0, size 0x4
    unsigned int decofst; // offset 0xA4, size 0x4
    signed int flush_nsmpl; // offset 0xA8, size 0x4
    signed char stm_start_flg; // offset 0xAC, size 0x1
    signed char ainf_sw; // offset 0xAD, size 0x1
    signed short rsv4; // offset 0xAE, size 0x2
    char * fname_wk; // offset 0xB0, size 0x4
    char * fname; // offset 0xB4, size 0x4
    void * dir; // offset 0xB8, size 0x4
    unsigned int ofst; // offset 0xBC, size 0x4
    unsigned int nsct; // offset 0xC0, size 0x4
    unsigned int lpoff_len; // offset 0xC4, size 0x4
};
class clsSrPlatform : public clsSingleton {
    // total size: 0xC
public:
    float m_f32PosOffsetRatio_setPS2; // offset 0x4, size 0x4
    float m_f32PosOffsetRatio_setWii; // offset 0x8, size 0x4
};
class clsOOSemaphore {
    // total size: 0x4
};
enum enmStartMode {
    START_NORMAL = 0,
    START_GHOST_VS = 1,
    START_WORLD_RANKING = 2,
    START_FORCE_NORMAL = 3,
};
class NNS_MATRIXSTACK {
    // total size: 0x10
public:
    unsigned int nMtx; // offset 0x0, size 0x4
    unsigned int StackIdx; // offset 0x4, size 0x4
    float (* pStackTop)[4][4]; // offset 0x8, size 0x4
    float (* pCurrent)[4][4]; // offset 0xC, size 0x4
};
struct /* @anon1 */ {
    // total size: 0xC
};
struct /* @anon2 */ {
    // total size: 0x44
};
class _NNS_TEXLIST {
    // total size: 0x8
public:
    signed int nTex; // offset 0x0, size 0x4
    class _NNS_TEXINFO * pTexInfoList; // offset 0x4, size 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class stcTexUV {
    // total size: 0x10
public:
    class stcTexCoord sUpperLeft; // offset 0x0, size 0x8
    class stcTexCoord sBottomRight; // offset 0x8, size 0x8
};
struct /* @anon3 */ {
    // total size: 0xC
};
struct /* @anon4 */ {
    // total size: 0xC
};
enum enmMode {
    GAME_MODE___NONE = 0,
    GAME_MODE___ADVERTISE = 1,
    GAME_MODE___TITLE_DEMO = 2,
    GAME_MODE___FREE_RACE = 3,
    GAME_MODE___TIME_ATTACK = 4,
    GAME_MODE___STORY = 5,
    GAME_MODE___WORLD_GP = 6,
    GAME_MODE___MISSION = 7,
    GAME_MODE___TUTORIAL = 8,
    GAME_MODE___SURVIVAL_RELAY = 9,
    GAME_MODE___SURVIVAL_BALL = 10,
    GAME_MODE___SURVIVAL_BATTLE = 11,
    GAME_MODE___EVENT = 12,
    GAME_MODE___CREDIT = 13,
    GAME_MODE___EASY_MENU = 14,
    GAME_MODE___MODEL_VIEWER = 15,
    GAME_MODE___MAX = 16,
};
class _UUID {
    // total size: 0x10
public:
    unsigned int Data1; // offset 0x0, size 0x4
    unsigned short Data2; // offset 0x4, size 0x2
    unsigned short Data3; // offset 0x6, size 0x2
    unsigned char Data4[8]; // offset 0x8, size 0x8
};
struct /* @anon5 */ {
    // total size: 0xC
};
class stcNowLoadingText {
    // total size: 0x4
public:
    unsigned char u8DrawNum; // offset 0x0, size 0x1
    unsigned char u8MaxNum; // offset 0x1, size 0x1
    unsigned char u8DrawCnt; // offset 0x2, size 0x1
    unsigned char u8MaxCnt; // offset 0x3, size 0x1
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
class clsPfTimer : public clsSingleton, public clsOOTimer {
    // total size: 0x30
};
class clsSingleton {
    // total size: 0x4
};
class stcTexCoord {
    // total size: 0x8
public:
    float f32u; // offset 0x0, size 0x4
    float f32v; // offset 0x4, size 0x4
};
struct /* @anon6 */ {
    // total size: 0x94
};
struct /* @anon7 */ {
    // total size: 0x18
};
class clsPfDraw2d : public clsSingleton, public clsOODraw2d {
    // total size: 0x10
};
class clsSingleton {
    // total size: 0x4
};
class stcBgColor {
    // total size: 0x4
public:
    unsigned char m_u8a; // offset 0x0, size 0x1
    unsigned char m_u8b; // offset 0x1, size 0x1
    unsigned char m_u8g; // offset 0x2, size 0x1
    unsigned char m_u8r; // offset 0x3, size 0x1
};
class clsPfSystem : public clsSingleton, public clsOOSystem {
    // total size: 0x84
};
struct /* @anon8 */ {
    // total size: 0x88
};
struct /* @anon9 */ {
    // total size: 0xC
};
class stcViewRect {
    // total size: 0x18
public:
    float f32wd; // offset 0x0, size 0x4
    float f32hw; // offset 0x4, size 0x4
    float f32OffsetX; // offset 0x8, size 0x4
    float f32OffsetY; // offset 0xC, size 0x4
    float f32Width; // offset 0x10, size 0x4
    float f32Height; // offset 0x14, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class clsOOSystem {
    // total size: 0x80
public:
    enum enmSoundMode m_eSoundMode; // offset 0x4, size 0x4
    enum enmLanguage m_eMessageLanguage; // offset 0x8, size 0x4
    enum enmLanguage m_eVoiceLanguage; // offset 0xC, size 0x4
    float m_f32FrameRate; // offset 0x10, size 0x4
    float m_f32FrameRateAdd; // offset 0x14, size 0x4
    float m_f32FrameRateAdd2; // offset 0x18, size 0x4
    float m_f32FrameRateAddCount; // offset 0x1C, size 0x4
    float m_f32FrameRateAddCount2; // offset 0x20, size 0x4
    signed int m_s32FrameRateMaxMicroSec; // offset 0x24, size 0x4
    unsigned int m_u32VblankCnt; // offset 0x28, size 0x4
    unsigned int m_u32VblankCntOld; // offset 0x2C, size 0x4
    unsigned int m_u32GameCnt; // offset 0x30, size 0x4
    unsigned int m_eState; // offset 0x34, size 0x4
    class stcViewRect * m_apsViewRect[5]; // offset 0x38, size 0x14
    class stcScissorRect * m_apsScissorRect[5]; // offset 0x4C, size 0x14
    class stcScissorRect * m_apsScissorRect_NTSC[5]; // offset 0x60, size 0x14
    unsigned char m_u8FrameRateDef; // offset 0x74, size 0x1
    unsigned char m_u8VblankNum; // offset 0x75, size 0x1
    signed char m_s8ViewportNum; // offset 0x76, size 0x1
    signed char m_s8BackUpViewportNum; // offset 0x77, size 0x1
    signed char m_s8MaxViewportNum; // offset 0x78, size 0x1
    unsigned char m_bPause; // offset 0x79, size 0x1
    unsigned char m_bUnPause; // offset 0x7A, size 0x1
    unsigned char m_bEnablePauseWorks; // offset 0x7B, size 0x1
    unsigned char m_bDisablePauseCancel; // offset 0x7C, size 0x1
    unsigned char m_bDisablePauseDraw; // offset 0x7D, size 0x1
    unsigned char m_bNextPause; // offset 0x7E, size 0x1
};
class MwsfdCrePrm {
    // total size: 0x3C
public:
    signed int ftype; // offset 0x0, size 0x4
    signed int max_bps; // offset 0x4, size 0x4
    signed int max_width; // offset 0x8, size 0x4
    signed int max_height; // offset 0xC, size 0x4
    signed int nfrm_pool_wk; // offset 0x10, size 0x4
    signed int max_stm; // offset 0x14, size 0x4
    signed char * work; // offset 0x18, size 0x4
    signed int wksize; // offset 0x1C, size 0x4
    signed int compo_mode; // offset 0x20, size 0x4
    enum MwsfdBufFmt buffmt; // offset 0x24, size 0x4
    signed int outer_frmpool_num; // offset 0x28, size 0x4
    signed int outer_frmpool_size; // offset 0x2C, size 0x4
    unsigned char * * outer_frmpool_ptr; // offset 0x30, size 0x4
    signed int rsv[2]; // offset 0x34, size 0x8
};
enum enmSoundMode {
    SOUND_MODE___MONAURAL = 0,
    SOUND_MODE___STEREO = 1,
    SOUND_MODE___DOLBY_PROLOGIC2 = 2,
    SOUND_MODE___DOLBY_DIGITAL = 3,
    SOUND___MAX = 4,
};
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
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
class PXS_CONTEXTBUFFER {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class PXS_GSREG_AD reg[1]; // offset 0x10, size 0x10
};
enum enmLanguage {
    LANGUAGE___JAPANESE = 0,
    LANGUAGE___ENGLISH = 1,
    LANGUAGE___GERMAN = 2,
    LANGUAGE___FRENCH = 3,
    LANGUAGE___SPANISH = 4,
    LANGUAGE___ITALIAN = 5,
    LANGUAGE___DUTCH = 6,
    LANGUAGE___PORTUGUESE = 7,
    LANGUAGE___SIMP_CHINESE = 8,
    LANGUAGE___TRAD_CHINESE = 9,
    LANGUAGE___KOREAN = 10,
    LANGUAGE___MAX = 11,
};
class NVS_SVRHEADER {
    // total size: 0x8
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short miplevel; // offset 0x2, size 0x2
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
};
struct /* @anon10 */ {
    // total size: 0xC
};
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
class clsOOMainHeap : public clsOOHeapFragment {
    // total size: 0x34
};
class clsGameMgr : public clsSingleton {
    // total size: 0xEC
public:
    class stcSendNextModeData m_sSendNextModeData; // offset 0x4, size 0x28
    class clsStoryMgr cStoryMgr; // offset 0x2C, size 0x14
    class clsWorldGpMgr cWorldGpMgr; // offset 0x40, size 0x28
    class clsTimeAtkMgr cTimeAtkMgr; // offset 0x68, size 0x14
    unsigned char * m_pu8MapBuffer; // offset 0x7C, size 0x4
    enum enmMode m_eMode; // offset 0x80, size 0x4
    unsigned int m_u32EtcUnlock; // offset 0x84, size 0x4
    unsigned char m_eResultSelect; // offset 0x88, size 0x1
    signed char m_s8TitleDemoNo; // offset 0x89, size 0x1
    signed char m_s8SecretTrickType; // offset 0x8A, size 0x1
    signed char m_s8SecretCommnadCount[2]; // offset 0x8B, size 0x2
    unsigned char m_bLogoSkip; // offset 0x8D, size 0x1
    unsigned char m_bStartLoad; // offset 0x8E, size 0x1
    unsigned char m_bStartTutorial; // offset 0x8F, size 0x1
    unsigned char m_abMissionUnLock[16][4]; // offset 0x90, size 0x40
    unsigned char m_abStageUnLock[16]; // offset 0xD0, size 0x10
    unsigned char m_abCharaUnLock[11]; // offset 0xE0, size 0xB
    unsigned char m_bEnableRenderNowLodingExpand; // offset 0xEB, size 0x1
};
enum MwsfdBufFmt {
    MWSFD_BUFFMT_DEFAULT = 0,
    MWSFD_BUFFMT_MB_YCC420 = 1,
    MWSFD_BUFFMT_MB_ARGB8888 = 2,
    MWSFD_BUFFMT_PLN_YCC420 = 3,
    MWE_PLY_BUFFMT_MB_YCC420 = 1,
    MWE_PLY_BUFFMT_MB_ARGB8888 = 2,
    MWE_PLY_BUFFMT_PLN_YCC420 = 3,
    MWSFD_BUFFMT_END = 4,
    MWSFD_BUFFMT_ENUM_BE_SINT32 = 2147483647,
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
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
};
class stcSendNextModeData {
    // total size: 0x28
public:
    class stcSendAdv sSendAdv[8]; // offset 0x0, size 0x20
    enum enmMode eNextMode; // offset 0x20, size 0x4
    signed char s8StageNo; // offset 0x24, size 0x1
    signed char s8PlayerNum; // offset 0x25, size 0x1
    signed char s8UserNum; // offset 0x26, size 0x1
    signed char s8UniqueData; // offset 0x27, size 0x1
};
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
};
struct /* @anon11 */ {
    // total size: 0x48
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};
struct /* @anon12 */ {
    // total size: 0x1C
};
class clsSingleton {
    // total size: 0x4
};
class clsOODraw2d {
    // total size: 0xC
public:
    unsigned char m_bWide2dConv; // offset 0x0, size 0x1
    unsigned int m_eTexFlag; // offset 0x8, size 0x4
};
struct /* @anon13 */ {
    // total size: 0x18
};
class stcScissorRect {
    // total size: 0x10
public:
    unsigned int u32OffsetX; // offset 0x0, size 0x4
    unsigned int u32OffsetY; // offset 0x4, size 0x4
    unsigned int u32Right; // offset 0x8, size 0x4
    unsigned int u32Bottom; // offset 0xC, size 0x4
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
struct /* @anon14 */ {
    // total size: 0xC
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
struct /* @anon15 */ {
    // total size: 0x1C
};
struct /* @anon16 */ {
    // total size: 0x24
};
class clsStoryMgr {
    // total size: 0x14
public:
    class _NNS_TEXLIST * m_psTexList_Loading; // offset 0x4, size 0x4
    unsigned int m_u32VictoryLimitMilliSec; // offset 0x8, size 0x4
    class stcFormer m_sFormer; // offset 0xC, size 0x4
    unsigned char m_eVictoryType; // offset 0x10, size 0x1
    unsigned char m_eHbMode; // offset 0x11, size 0x1
    signed char m_s8StoryNo; // offset 0x12, size 0x1
    signed char m_s8DetailNo; // offset 0x13, size 0x1
};
class _EntryArg {
    // total size: 0x8
public:
    class clsOOThread * pcExecThread; // offset 0x0, size 0x4
    void * pvArg; // offset 0x4, size 0x4
};
struct /* @anon17 */ {
    // total size: 0x30
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
class clsSingleton {
    // total size: 0x4
};
class clsWorldGpMgr {
    // total size: 0x28
public:
    unsigned int m_u32TotalTime; // offset 0x4, size 0x4
    unsigned char m_eHbMode; // offset 0x8, size 0x1
    unsigned char m_au8Points[8]; // offset 0x9, size 0x8
    unsigned char m_au8Ranking[8]; // offset 0x11, size 0x8
    unsigned char m_au8RankingPlayer[8]; // offset 0x19, size 0x8
    unsigned char m_u8TopComCharacterId; // offset 0x21, size 0x1
    signed char m_s8WorldGpStageNo; // offset 0x22, size 0x1
    signed char m_s8DetailNo; // offset 0x23, size 0x1
    unsigned char m_u8PlannedTopComId; // offset 0x24, size 0x1
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
struct /* @anon18 */ {
    // total size: 0xC
};
class clsPfCri : public clsSingleton, public clsOOCri {
    // total size: 0x1B1C
public:
    unsigned char m_au8Ac3Work_Bgm[6144]; // offset 0x318, size 0x1800
    void * m_pvAc3Work_Heap; // offset 0x1B18, size 0x4
};
class SNDF_PSPRM {
    // total size: 0x180
public:
    unsigned int porttbl[48]; // offset 0x0, size 0xC0
    unsigned int portpcm[48]; // offset 0xC0, size 0xC0
};
class clsPfMainHeap : public clsSingleton, public clsOOMainHeap {
    // total size: 0x38
};
class clsSingleton {
    // total size: 0x4
};
class stcFormer {
    // total size: 0x4
public:
    unsigned char u8StoryNo; // offset 0x0, size 0x1
    unsigned char u8StageNo; // offset 0x1, size 0x1
    unsigned char u8EventNo; // offset 0x2, size 0x1
    unsigned char u8MovieNo; // offset 0x3, size 0x1
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
class stcSendAdv {
    // total size: 0x4
public:
    unsigned int u5CharaId : 5; // offset 0x0, size 0x4
    unsigned int u2PadNo : 2; // offset 0x0, size 0x4
    unsigned int u1Paddin : 1; // offset 0x0, size 0x4
    unsigned int u8GearCtrlNo : 8; // offset 0x0, size 0x4
    unsigned int u8Padding1 : 8; // offset 0x0, size 0x4
    unsigned int u8Padding2 : 8; // offset 0x0, size 0x4
};
struct /* @anon19 */ {
    // total size: 0x18
};
class stcVecS32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
struct /* @anon20 */ {
    // total size: 0x30
};
struct /* @anon21 */ {
    // total size: 0xC
};
class clsSingleton {
    // total size: 0x4
};
class clsPfIop : public clsSingleton {
    // total size: 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class clsTimeAtkMgr {
    // total size: 0x14
public:
    enum enmStartMode m_eStartMode; // offset 0x4, size 0x4
    signed int m_s32StageNo; // offset 0x8, size 0x4
    unsigned char m_u8CharaId; // offset 0xC, size 0x1
    unsigned char m_u8PadNo; // offset 0xD, size 0x1
    unsigned char m_u8GearId; // offset 0xE, size 0x1
    unsigned char m_bNextWorldRanking; // offset 0xF, size 0x1
    unsigned char m_bStartWorldRanking; // offset 0x10, size 0x1
    unsigned char m_bModeWorldRanking; // offset 0x11, size 0x1
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
class clsOOCri {
    // total size: 0x314
public:
    class SNDF_PSPRM m_sSfPsprm; // offset 0x4, size 0x180
    class _adx_talk * m_pasAdxtHandle_Bgm[4]; // offset 0x184, size 0x10
    class _adx_talk * m_psAdxtHandle_Voice; // offset 0x194, size 0x4
    class _adx_talk * m_psAdxtHandle_Jingle; // offset 0x198, size 0x4
    void * m_psSofdecHandle_Movie; // offset 0x19C, size 0x4
    class clsOOHeapFragment * m_pcAllocator_Movie; // offset 0x1A0, size 0x4
    unsigned char * m_pu8AdxWork_Bgm; // offset 0x1A4, size 0x4
    unsigned char * m_pu8AdxWork_Voice; // offset 0x1A8, size 0x4
    unsigned char * m_pu8AdxWorkAfsPatInfo_Voice; // offset 0x1AC, size 0x4
    unsigned char * m_pu8AdxWork_Jingle; // offset 0x1B0, size 0x4
    unsigned char m_u8AdxStreamNum_Bgm; // offset 0x1B4, size 0x1
    signed char m_s8SfPortNo; // offset 0x1B5, size 0x1
    unsigned char m_au8SfId[256]; // offset 0x1B6, size 0x100
    signed char m_s8SfIcsChannel; // offset 0x2B6, size 0x1
    unsigned char (* m_fnDiscError)(); // offset 0x2B8, size 0x4
    class MwsfdCrePrm m_sSofdecParam_Movie; // offset 0x2BC, size 0x3C
    signed short m_as16DefVolume_Bgm[4]; // offset 0x2F8, size 0x8
    signed short m_s16DefVolume_Voice; // offset 0x300, size 0x2
    signed short m_s16DefVolume_Jingle; // offset 0x302, size 0x2
    signed short m_as16Volume_Bgm[4]; // offset 0x304, size 0x8
    signed short m_s16Volume_Voice; // offset 0x30C, size 0x2
    signed short m_s16Volume_Jingle; // offset 0x30E, size 0x2
    signed short m_s16PauseMinus; // offset 0x310, size 0x2
};

// Range: 0x15D480 -> 0x15D7C4
signed int main() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15D480 -> 0x15D7C4
        class clsPfIop cOOIop; // r29+0x17C
        class clsPfTimer cOOTimer; // r29+0x140
        class clsPfSystem cOOSystem; // r29+0xB0
        enum enmLanguage eMessageLanguage; // r2
        class clsPfGraphics cOOGraphics; // r29+0x60
        class clsPfMainHeap cOOMainHeap; // r29+0x20
    }
}


// Range: 0x15DCE0 -> 0x15E18C
void tRenderNowLoading_CallBack() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15DCE0 -> 0x15E18C
        class clsPfDraw2d & rcPfDraw2d; // r2
        unsigned char bExpand; // r18
        enum enmLanguage eLanguage; // r16
        float f32DrawX; // r21
        float f32DrawY; // r20
        class stcTexUV oasTexUv[2]; // r29+0x80
        signed short oas16Width[2]; // r29+0xAC
        unsigned char u8Alpha; // r16
        signed int s32TextDrawX; // r21
        signed int s32TextDrawY; // r20
        signed int s32SafeHeight; // r2
        signed int s32n; // r19
        class stcNowLoadingText osTextSt; // @ 0x005FBAD8
    }
}


// Range: 0x15E190 -> 0x15E3E4
static void tRenderNowLoadingCircle(class stcLoadingCircle * psCircle /* r19 */, unsigned int u32Color /* r18 */, float f32x /* r22 */, float f32y /* r21 */, float f32z /* r20 */, signed int s32Size /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15E190 -> 0x15E3E4
        class stcTexUV tsCircleUv; // r29+0xA0
        float sRotMtx[4][4]; // r29+0x60
    }
}


// Range: 0x15EA20 -> 0x15EA28
void @4@TickDiff2MicroSec__10clsPfTimerCFi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15EA20 -> 0x15EA28
    }
}


// Range: 0x15EA30 -> 0x15EA38
void @4@TickDiff2MicroSec__10clsPfTimerCFii() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15EA30 -> 0x15EA38
    }
}


// Range: 0x15EA40 -> 0x15EA48
void @4@getTick__10clsPfTimerCFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15EA40 -> 0x15EA48
    }
}


// Range: 0x15EA50 -> 0x15EA58
void @4@__dt__10clsPfTimerFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15EA50 -> 0x15EA58
    }
}


