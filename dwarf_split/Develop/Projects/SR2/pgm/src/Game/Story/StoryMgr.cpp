/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Game\Story\StoryMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class stcDetailData otasDetailData[13][20]; // size: 0x208, address: 0x68A340
static class stcDetailRace otasDetailRace[16]; // size: 0x160, address: 0x68A550
class clsGameMgr * m_tpcSingleton; // size: 0x4, address: 0x6E6980
class clsPfFileMgr * m_tpcSingleton; // size: 0x4, address: 0x703C48
class sceGsDBuffDc m_tsGsDBuffDc; // size: 0x330, address: 0x707EC0
class clsPfGraphics * m_tpcSingleton; // size: 0x4, address: 0x6E69A0
struct /* @anon2 */ {
    // total size: 0x30
} __vt__14clsCredit_Task; // size: 0x30, address: 0x6C7F80
struct /* @anon1 */ {
    // total size: 0x30
} __vt__7clsTask; // size: 0x30, address: 0x6B59F0
struct /* @anon0 */ {
    // total size: 0xAC
} __vt__17clsStoryRace_Task; // size: 0xAC, address: 0x6D15E0
class clsPack * m_tpcSingleton; // size: 0x4, address: 0xB0A950
char * m_toac8HbModeName_Debug[]; // size: 0x0, address: 0x624958
enum enmMode m_teSelectedGameMode; // size: 0x4, address: 0xB0D980
class clsSaveDataMgr * m_tpcSingleton; // size: 0x4, address: 0x703BF0
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
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class SJCK {
    // total size: 0x8
public:
    signed char * data; // offset 0x0, size 0x4
    signed int len; // offset 0x4, size 0x4
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
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
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
class stcOptionData {
    // total size: 0x8
public:
    unsigned char u8AudioMode; // offset 0x0, size 0x1
    unsigned char u8MessageMode; // offset 0x1, size 0x1
    unsigned char u8VoiceMode; // offset 0x2, size 0x1
    unsigned char u8VibMode; // offset 0x3, size 0x1
    unsigned char u8PadType; // offset 0x4, size 0x1
    unsigned char u8Padding[3]; // offset 0x5, size 0x3
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class stcDetailData {
    // total size: 0x2
public:
    unsigned char eDetailType; // offset 0x0, size 0x1
    unsigned char u8TypeExecNo; // offset 0x1, size 0x1
};
enum enmCullModeType {
    CULL___NONE = 0,
    CULL___CW = 1,
    CULL___CCW = 2,
};
class stcDateTime {
    // total size: 0x8
public:
    unsigned short u16Year; // offset 0x0, size 0x2
    unsigned char u8Month; // offset 0x2, size 0x1
    unsigned char u8Day; // offset 0x3, size 0x1
    unsigned char u8Hour; // offset 0x4, size 0x1
    unsigned char u8Min; // offset 0x5, size 0x1
    unsigned char u8Sec; // offset 0x6, size 0x1
};
class clsOOSemaphore {
    // total size: 0x4
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
enum enmHbMode {
    MODE___HEROES = 0,
    MODE___BABYLON = 1,
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
class clsBitset {
    // total size: 0xC
public:
    unsigned char * m_pBuffer; // offset 0x0, size 0x4
    unsigned int m_BufferSize; // offset 0x4, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
struct /* @anon0 */ {
    // total size: 0xAC
};
enum enmStartMode {
    START_NORMAL = 0,
    START_GHOST_VS = 1,
    START_WORLD_RANKING = 2,
    START_FORCE_NORMAL = 3,
};
class generic_iterator {
    // total size: 0x4
public:
    class node * node_; // offset 0x0, size 0x4
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
class clsOOList : public list {
    // total size: 0x14
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
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
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class sceGsXyoffset {
    // total size: 0x8
public:
    unsigned long OFX : 16; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long OFY : 16; // offset 0x0, size 0x4
    unsigned long pad48 : 16; // offset 0x0, size 0x4
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0xC
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
class clsSingleton {
    // total size: 0x4
};
enum execAttr {
    ATTR_DBL_BUF = 1,
    ATTR_MULTI_BUF = 2,
    ATTR_MULTI_RING_BUF = 3,
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
class stcSaveDataHeader {
    // total size: 0x8
public:
    unsigned char u8Version; // offset 0x0, size 0x1
    unsigned char u8Padding[3]; // offset 0x1, size 0x3
    unsigned int u32Size; // offset 0x4, size 0x4
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
class sceGsDispEnv {
    // total size: 0x28
public:
    class tGS_PMODE pmode; // offset 0x0, size 0x8
    class tGS_SMODE2 smode2; // offset 0x8, size 0x8
    class tGS_DISPFB2 dispfb; // offset 0x10, size 0x8
    class tGS_DISPLAY2 display; // offset 0x18, size 0x8
    class tGS_BGCOLOR bgcolor; // offset 0x20, size 0x8
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
class binary_function {
    // total size: 0x1
};
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
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
class clsSaveDataMgr : public clsSingleton {
    // total size: 0x30
public:
    enum enmSaveDataNo m_enCurrentNo; // offset 0x4, size 0x4
    class clsSaveDataCtrl * m_pcSaveDataCtrl; // offset 0x8, size 0x4
    class clsSaveDataCtrl * m_apcSaveDataCtrlTemp[4]; // offset 0xC, size 0x10
    enum enmTempState m_aenTempState[4]; // offset 0x1C, size 0x10
    unsigned char m_bPlayTimeCntFlag; // offset 0x2C, size 0x1
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
class stcDetailRace {
    // total size: 0x16
public:
    signed char s8StageNo; // offset 0x0, size 0x1
    unsigned char u8VictoryType; // offset 0x1, size 0x1
    unsigned char u8VictoryLimitMin; // offset 0x2, size 0x1
    unsigned char u8VictoryLimitSec; // offset 0x3, size 0x1
    class stcDetailRaceChara oasDetailRaceChara[9]; // offset 0x4, size 0x12
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
class clsCredit_Task : public clsTask {
    // total size: 0x58
public:
    enum enmHbMode m_eHbMode; // offset 0x54, size 0x4
};
class stcDetailRaceChara {
    // total size: 0x2
public:
    signed char s8CharaId; // offset 0x0, size 0x1
    unsigned char u8GearCtrlNo; // offset 0x1, size 0x1
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
class stcSaveGameData {
    // total size: 0x4000
public:
    unsigned int u32CrcData; // offset 0x0, size 0x4
    class stcSaveDataHeader sHeader; // offset 0x4, size 0x8
    class stcGameData sGameData; // offset 0xC, size 0x51C
    unsigned char au8Reserve[15064]; // offset 0x528, size 0x3AD8
};
class clsSingleton {
    // total size: 0x4
};
class PXS_CONTEXTBUFFER {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class PXS_GSREG_AD reg[1]; // offset 0x10, size 0x10
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
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
class clsSaveDataCtrl {
    // total size: 0x6C
public:
    class stcSaveGameData * m_psSaveData; // offset 0x0, size 0x4
    class stcGameData * m_psGameData; // offset 0x4, size 0x4
    signed int m_s32PlayTimeCnt; // offset 0x8, size 0x4
    class clsBitset m_sCharaUnlockCtrl; // offset 0xC, size 0xC
    class clsBitset m_sGearUnlockCtrl; // offset 0x18, size 0xC
    class clsBitset m_sStageUnlockCtrl; // offset 0x24, size 0xC
    class clsBitset m_sStoryUnlockCtrl; // offset 0x30, size 0xC
    class clsBitset m_sMissinClrFlagCtrl; // offset 0x3C, size 0xC
    class clsBitset m_sMissinSelFlagCtrl; // offset 0x48, size 0xC
    class clsBitset m_sTutorialSelFlagCtrl; // offset 0x54, size 0xC
    class clsBitset m_sGameFlagCtrl; // offset 0x60, size 0xC
};
class stcGameData {
    // total size: 0x51C
public:
    unsigned int u32PlayTime; // offset 0x0, size 0x4
    unsigned int u32RingCount; // offset 0x4, size 0x4
    unsigned int au32NormalRaceBestTime[16]; // offset 0x8, size 0x40
    unsigned int au32FreeRaceBestTime[16]; // offset 0x48, size 0x40
    unsigned int au32TimeAttackBestTime[16]; // offset 0x88, size 0x40
    unsigned int au32StoryBestTime[16]; // offset 0xC8, size 0x40
    unsigned int au32NormalRaceBestLap[16]; // offset 0x108, size 0x40
    unsigned int au32FreeRaceBestLap[16]; // offset 0x148, size 0x40
    unsigned int au32TimeAttackBestLap[16]; // offset 0x188, size 0x40
    unsigned int au32StoryBestLap[16]; // offset 0x1C8, size 0x40
    unsigned int au32MissionBestData[128]; // offset 0x208, size 0x200
    unsigned int au32WorldGPTime[2]; // offset 0x408, size 0x8
    unsigned short au16UserName[11]; // offset 0x410, size 0x16
    unsigned short au16Padding[1]; // offset 0x426, size 0x2
    class stcOptionData sOption; // offset 0x428, size 0x8
    class stcRaceOption sRaceOption; // offset 0x430, size 0x10
    class stcDateTime sUpdateTime; // offset 0x440, size 0x8
    unsigned char au8MissionClrRank[128]; // offset 0x448, size 0x80
    unsigned char au8CharaUnlock[1]; // offset 0x4C8, size 0x1
    unsigned char au8GearUnlock[8]; // offset 0x4C9, size 0x8
    unsigned char au8StageUnlock[2]; // offset 0x4D1, size 0x2
    unsigned char au8StoryUnlock[2]; // offset 0x4D3, size 0x2
    unsigned char au8MissionClear[16]; // offset 0x4D5, size 0x10
    unsigned char au8MissionSelect[16]; // offset 0x4E5, size 0x10
    unsigned char au8TutorialSelect[2]; // offset 0x4F5, size 0x2
    unsigned char au8GameFlag[32]; // offset 0x4F7, size 0x20
    unsigned char au8WorldGPPoint[2]; // offset 0x517, size 0x2
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
class __list_deleter {
    // total size: 0x14
public:
    class compressed_pair size_; // offset 0x0, size 0x8
    class compressed_pair end_; // offset 0x8, size 0xC
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
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
};
class less : public binary_function {
    // total size: 0x1
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
class __cdeque_deleter_common {
    // total size: 0x10
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    unsigned int start_; // offset 0x8, size 0x4
    unsigned int * data_; // offset 0xC, size 0x4
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
enum enmTempState {
    TEMP_DATA_NO_DATA = 0,
    TEMP_DATA_BREAK = 1,
    TEMP_DATA_OK = 2,
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
struct /* @anon1 */ {
    // total size: 0x30
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
class SJ_OBJ {
    // total size: 0x4
public:
    class _sj_vtbl * vtbl; // offset 0x0, size 0x4
};
class clsTask : public clsOOTask {
    // total size: 0x54
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
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class anchor second_; // offset 0x4, size 0x4
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
class _EntryArg {
    // total size: 0x8
public:
    class clsOOThread * pcExecThread; // offset 0x0, size 0x4
    void * pvArg; // offset 0x4, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
enum enmSaveDataNo {
    SAVEDATA_NO_01 = 0,
    SAVEDATA_NO_02 = 1,
    SAVEDATA_NO_03 = 2,
    SAVEDATA_MAX_NUM = 3,
    SAVEDATA_NO_NODATA = -1,
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x10
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
struct /* @anon2 */ {
    // total size: 0x30
};
class clsSingleton {
    // total size: 0x4
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
class __deque_buf {
    // total size: 0x1
};
class clsOOMap : public map {
    // total size: 0x18
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class sceGsColclamp {
    // total size: 0x8
public:
    unsigned long CLAMP : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class clsOOVector : public vector {
    // total size: 0x10
};
class clsPack : public clsSingleton {
    // total size: 0x4
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
class stcRaceOption {
    // total size: 0x10
public:
    signed char m_s8Story_Hint; // offset 0x0, size 0x1
    signed char m_s8Free_Lap; // offset 0x1, size 0x1
    signed char m_s8Free_Gp; // offset 0x2, size 0x1
    signed char m_s8Free_Hint; // offset 0x3, size 0x1
    signed char m_s8TimeAttack_Ghost; // offset 0x4, size 0x1
    signed char m_s8WorldGP_Hint; // offset 0x5, size 0x1
    signed char m_s8Relay_Lap; // offset 0x6, size 0x1
    signed char m_s8Relay_Gp; // offset 0x7, size 0x1
    signed char m_s8Ball_Time; // offset 0x8, size 0x1
    signed char m_s8Ball_Point; // offset 0x9, size 0x1
    signed char m_s8Battle_Mode; // offset 0xA, size 0x1
    signed char m_s8Battle_Hp; // offset 0xB, size 0x1
    signed char m_s8Battle_Time; // offset 0xC, size 0x1
    signed char m_s8Padding[3]; // offset 0xD, size 0x3
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
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class __red_black_tree {
    // total size: 0x1
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class value_compare first_; // offset 0x0, size 0x1
    class node * second_; // offset 0x4, size 0x4
};
class compressed_pair : private compressed_pair_imp {
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
struct /* @anon3 */ {
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
class cdeque : private __cdeque_imp {
    // total size: 0x10
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
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
class sceGsPrmodecont {
    // total size: 0x8
public:
    unsigned long AC : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class clsSingleton {
    // total size: 0x4
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
class __deque_imp : public __deque_deleter {
    // total size: 0x18
};
class clsPfFileMgr : public clsSingleton, public clsOOFileMgr {
    // total size: 0xFC
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

// Range: 0x49E200 -> 0x49E228
signed char getTopComCharaId(signed int s32StageNo /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x49E200 -> 0x49E228
    }
}


// Range: 0x49E230 -> 0x49E6FC
void startResist(class clsStoryMgr * this /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x49E230 -> 0x49E6FC
        class stcDetailData & rosDetailData; // r2
        class stcDetailRace & rosDetailRace; // r2
        signed int s32PlayerNum; // r21
        class stcSendAdv m_sSendAdv[8]; // r29+0xB0
        class stcSendAdv * psSendAdv; // r20
        class stcDetailRaceChara * opsDetailRaceChara; // r19
        signed int s32i; // r18
        signed int s32CharaId; // r2
        signed int s32MovieNo; // r16
    }
}


// Range: 0x49E700 -> 0x49E718
void destroy(class clsStoryMgr * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x49E700 -> 0x49E718
    }
}


// Range: 0x49E720 -> 0x49EC48
void setStoryUnlock(class clsStoryMgr * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x49E720 -> 0x49EC48
        unsigned int u32UnlockStageNo; // r17
    }
}


// Range: 0x49EC50 -> 0x49EC6C
void reinit(class clsStoryMgr * this /* r2 */, signed int s32StoryNoI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x49EC50 -> 0x49EC6C
    }
}


