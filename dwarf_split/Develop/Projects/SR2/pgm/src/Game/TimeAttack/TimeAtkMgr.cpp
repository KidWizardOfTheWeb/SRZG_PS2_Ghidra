/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Game\TimeAttack\TimeAtkMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char m_tbNetConnect; // size: 0x1, address: 0x0
class clsGameMgr * m_tpcSingleton; // size: 0x4, address: 0x6E6980
class clsPack * m_tpcSingleton; // size: 0x4, address: 0xB0A950
class clsPfFileMgr * m_tpcSingleton; // size: 0x4, address: 0x703C48
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
class clsOOSemaphore {
    // total size: 0x4
};
enum enmStartMode {
    START_NORMAL = 0,
    START_GHOST_VS = 1,
    START_WORLD_RANKING = 2,
    START_FORCE_NORMAL = 3,
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
class clsSingleton {
    // total size: 0x4
};
enum execAttr {
    ATTR_DBL_BUF = 1,
    ATTR_MULTI_BUF = 2,
    ATTR_MULTI_RING_BUF = 3,
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
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
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
class __deque_buf {
    // total size: 0x1
};
class clsOOVector : public vector {
    // total size: 0x10
};
class clsPack : public clsSingleton {
    // total size: 0x4
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
class vector : private __vector_imp {
    // total size: 0x10
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
class clsSingleton {
    // total size: 0x4
};
class allocator {
    // total size: 0x1
};
class __deque_imp : public __deque_deleter {
    // total size: 0x18
};
class clsPfFileMgr : public clsSingleton, public clsOOFileMgr {
    // total size: 0xFC
};
class __vector_pod {
    // total size: 0x10
public:
    class compressed_pair capacity_; // offset 0x0, size 0x8
    unsigned int size_; // offset 0x8, size 0x4
    unsigned int * data_; // offset 0xC, size 0x4
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

// Range: 0x52CA70 -> 0x52CB84
void startResist(class clsTimeAtkMgr * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x52CA70 -> 0x52CB84
        class stcSendAdv sSendAdv[8]; // r29+0x40
    }
}


// Range: 0x52CB90 -> 0x52CBA4
void reinit(class clsTimeAtkMgr * this /* r2 */, enum enmStartMode enStartMode /* r2 */, signed int s32StageNo /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x52CB90 -> 0x52CBA4
    }
}


