/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\System\IO\SR2_Base_MemoryCard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char * m_opc8SeqReqName_Debug[15]; // size: 0x3C, address: 0x653B00
static unsigned char chk__clsBaseMemoryCard_Task_m_opc8SeqReqName_Debug_SizeCheck_[1]; // size: 0x1, address: 0x0
unsigned char m_tbSaveFlag; // size: 0x1, address: 0x653B40
unsigned char m_tbGhostSaveFlag; // size: 0x1, address: 0x653B48
enum enmRtnCode m_tenRtnCode; // size: 0x4, address: 0x653B50
struct /* @anon4 */ {
    // total size: 0xD8
} __vt__22clsBaseMemoryCard_Task; // size: 0xD8, address: 0x6D09D0
struct /* @anon2 */ {
    // total size: 0x30
} __vt__7clsTask; // size: 0x30, address: 0x6B59F0
struct /* @anon1 */ {
    // total size: 0xC
} __vt__10clsOORetry; // size: 0xC, address: 0x6D0AA8
class clsPfMemoryCard * m_tpcSingleton; // size: 0x4, address: 0xB0D978
class clsTaskManager * m_tpcSingleton; // size: 0x4, address: 0x6E69D0
class clsOOMainHeap * t_cInstance; // size: 0x4, address: 0xB17268
struct /* @anon0 */ {
    // total size: 0x40
} __vt__21clsBaseMemoryCardFile; // size: 0x40, address: 0x6D0FA0
class clsPfDraw2d * m_tpcSingleton; // size: 0x4, address: 0x6E6990
class clsSrFontSystem * m_tpcSingleton; // size: 0x4, address: 0x703C08
class clsPfSystem * m_tpcSingleton; // size: 0x4, address: 0x6E69B8
char * otac8DataTypeName_Debug[]; // size: 0x0, address: 0x6544A0
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
class __list_imp : private __list_deleter {
    // total size: 0x14
};
class allocator {
    // total size: 0x1
};
class clsBaseMemoryCard_Task : public clsTask {
    // total size: 0xA4
public:
    class clsOORetry m_cApiRetry; // offset 0x54, size 0x10
    enum enmSeqReq m_eSeqReq; // offset 0x64, size 0x4
    enum enmSeqReq m_eSeqReq_Old; // offset 0x68, size 0x4
    enum enmSeqReq m_eSeqReq_WakeUp; // offset 0x6C, size 0x4
    enum enmSeqReq m_eSeqReq_Next; // offset 0x70, size 0x4
    enum enmMcMovin m_eMcMovin; // offset 0x74, size 0x4
    enum enmDataType m_eDataType; // offset 0x78, size 0x4
    unsigned char (* m_fncCrcCheck)(void *); // offset 0x7C, size 0x4
    class clsMsgWnd_Task * m_pcMsgWnd; // offset 0x80, size 0x4
    enum enm_N_SelCmd m_enRtnCode; // offset 0x84, size 0x4
    signed int m_s32StatusReturn; // offset 0x88, size 0x4
    float m_f32PollingTime; // offset 0x8C, size 0x4
    class clsBaseMemoryCardFile * m_pcBaseMemoryCardFile; // offset 0x90, size 0x4
    signed int m_s32FileNo; // offset 0x94, size 0x4
    signed int m_s32StageNo; // offset 0x98, size 0x4
    signed char m_s8SelCmdNum; // offset 0x9C, size 0x1
    unsigned char m_bPolling; // offset 0x9D, size 0x1
    unsigned char m_bEndExec; // offset 0x9E, size 0x1
    unsigned char m_bAutoSaveLock; // offset 0x9F, size 0x1
    signed char m_s8NextMcMovinCnt; // offset 0xA0, size 0x1
    signed char m_s8CursorNo; // offset 0xA1, size 0x1
    signed char m_s8CancelCursorNo; // offset 0xA2, size 0x1
    unsigned char m_u8Mode_Old; // offset 0xA3, size 0x1
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class stcPoint2d {
    // total size: 0x8
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
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
class clsBaseMemoryCardFile {
    // total size: 0x38
public:
    char m_ac8FileName[32]; // offset 0x4, size 0x20
    void * m_pvDataBuff; // offset 0x24, size 0x4
    void * m_apvLoadDataBuff[3]; // offset 0x28, size 0xC
    signed char m_s8StageNo; // offset 0x34, size 0x1
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class binary_function {
    // total size: 0x1
};
struct /* @anon0 */ {
    // total size: 0x40
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
enum enm_N_SelCmd {
    B_N_NONE = 0,
    B_N_YES = 1,
    B_N_NO = 2,
    B_N_FORMAT = 3,
    B_N_DELETE = 4,
    B_N_EXIT = 5,
    B_N_REWRITE = 6,
    B_N_DELETE2 = 7,
    B_N_RETRY = 8,
    B_N_RETURN_OS = 9,
    B_N_NO_SAVE_EXIT = 10,
    B_N_CANCEL = 11,
    B_N_OK = 12,
    B_N_MAX = 13,
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
class stcFileData {
    // total size: 0x28
public:
    char c8Name[32]; // offset 0x0, size 0x20
    void * pvData; // offset 0x20, size 0x4
    unsigned int u32Size; // offset 0x24, size 0x4
};
enum enmPollingMc_Ret {
    POLLING_MC_RET___SUCCESS = 0,
    POLLING_MC_RET___FAILED = 1,
    POLLING_MC_RET___WAIT = 2,
};
class stcAccessBuffer {
    // total size: 0x8
public:
    void * pvAddr; // offset 0x0, size 0x4
    signed int s32Length; // offset 0x4, size 0x4
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
class stcRgbaF32 {
    // total size: 0x10
public:
    float f32r; // offset 0x0, size 0x4
    float f32g; // offset 0x4, size 0x4
    float f32b; // offset 0x8, size 0x4
    float f32a; // offset 0xC, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
struct /* @anon1 */ {
    // total size: 0xC
};
enum enmMcMovin {
    MC_MOVIN___NONE = 0,
    MC_MOVIN___CHECK_MC_EXIST_1 = 1,
    MC_MOVIN___CHECK_MC_EXIST_2 = 2,
    MC_MOVIN___CHECK_MC_EXIST_3 = 3,
    MC_MOVIN___CHECK_FORMAT_1 = 4,
    MC_MOVIN___CHECK_FORMAT_2 = 5,
    MC_MOVIN___FORMAT = 6,
    MC_MOVIN___CHECK_FILE_EXIST_GAMES_BOOT = 7,
    MC_MOVIN___CHECK_FILE_EXIST_GAMES_FILE_SELECT = 8,
    MC_MOVIN___CHECK_FREE_AREA = 9,
    MC_MOVIN___CHECK_ID = 10,
    MC_MOVIN___CREATE = 11,
    MC_MOVIN___DELETE = 12,
    MC_MOVIN___SAVE = 13,
    MC_MOVIN___LOAD = 14,
    MC_MOVIN___UNFORMAT = 15,
};
class map {
    // total size: 0x18
public:
    class __tree tree_; // offset 0x0, size 0x18
};
enum enmdeleteTask_And_setAutoSave_Arg {
    AUTOSAVE_ARG___OFF = 0,
    AUTOSAVE_ARG___ON = 1,
    AUTOSAVE_ARG___IGNORE = 2,
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
class clsPfDraw2d : public clsSingleton, public clsOODraw2d {
    // total size: 0x10
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class stcIconData {
    // total size: 0xB8
public:
    char ac8Dir[22]; // offset 0x0, size 0x16
    unsigned char u8FileNum; // offset 0x16, size 0x1
    unsigned char u8Padding; // offset 0x17, size 0x1
    class stcFileData asFileData[4]; // offset 0x18, size 0xA0
};
class clsPfSystem : public clsSingleton, public clsOOSystem {
    // total size: 0x84
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
class clsMsgWnd_Task : public clsTask {
    // total size: 0x84
public:
    enum enm_N_SelCmd m_enRtnCode; // offset 0x54, size 0x4
    enum enm_N_SelCmd m_enCancelBtn; // offset 0x58, size 0x4
    unsigned int m_u32FontNo; // offset 0x5C, size 0x4
    unsigned int m_u32SelFontNo; // offset 0x60, size 0x4
    signed int m_s32FontTblNo; // offset 0x64, size 0x4
    unsigned int m_u32BtnType; // offset 0x68, size 0x4
    enum enm_N_SelCmd m_ae_N_SelCmd[3]; // offset 0x6C, size 0xC
    enum enmMsgWndMode m_enMsgWndMode; // offset 0x78, size 0x4
    signed char m_s8SelCmdNum; // offset 0x7C, size 0x1
    signed char m_s8CursorNo; // offset 0x7D, size 0x1
    unsigned char m_bDrawEnable; // offset 0x7E, size 0x1
    unsigned char m_bDrawSelBtn; // offset 0x7F, size 0x1
    unsigned char m_bOnlyOk; // offset 0x80, size 0x1
    unsigned char m_bCancelEnd; // offset 0x81, size 0x1
};
class clsOOMMap : public multimap {
    // total size: 0x18
};
enum enmDataType {
    DATA_TYPE___GAMES = 0,
    DATA_TYPE___GHOST = 1,
    DATA_TYPE___BANNER = 2,
    DATA_TYPE___MAX = 3,
};
enum enmdraw_UnionFont_Arg {
    DRAW_SEL___OFF = 0,
    DRAW_SEL___ON = 1,
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
class clsOOMap : public map {
    // total size: 0x18
};
class value_compare : public binary_function {
    // total size: 0x1
public:
    class less comp; // offset 0x0, size 0x1
};
enum enmMsgWndMode {
    MSGWND_MODE_NORMAL = 0,
    MSGWND_MODE_WAIT = 1,
    MSGWND_MODE_NEXT = 2,
};
class node_base {
    // total size: 0x8
public:
    class node * prev_; // offset 0x0, size 0x4
    class node * next_; // offset 0x4, size 0x4
};
enum enmRtnCode {
    RTNCODE_WAIT = 0,
    RTNCODE_NO_ERROR = 1,
    RTNCODE_ERROR = 2,
    RTNCODE_RETRY = 3,
    RTNCODE_END = 4,
    RTNCODE_NO_SAVE = 5,
    RTNCODE_TASK_EMPTY = -1,
};
class clsPfMemoryCard : public clsOOMemoryCard, public clsSingleton {
    // total size: 0x7C4
public:
    signed char m_s8PortNo; // offset 0x2C, size 0x1
    signed int m_s32McType; // offset 0x30, size 0x4
    signed int m_s32FreeCluster; // offset 0x34, size 0x4
    signed int m_s32Format; // offset 0x38, size 0x4
    enum enmMcState m_enMcState; // offset 0x3C, size 0x4
    enum enmMcState m_enOldMcState; // offset 0x40, size 0x4
    signed int m_s32MaxNeedSize; // offset 0x44, size 0x4
    signed int m_s32NeedSize; // offset 0x48, size 0x4
    signed int m_s32DefiSize; // offset 0x4C, size 0x4
    signed int m_s32Fd; // offset 0x50, size 0x4
    signed int m_s32ReWriteSize; // offset 0x54, size 0x4
    signed int m_s32GetReWriteSize; // offset 0x58, size 0x4
    unsigned int * m_pu32FileSize; // offset 0x5C, size 0x4
    unsigned int * m_pu32SeekEndPos; // offset 0x60, size 0x4
    unsigned char m_u8FileDataNum; // offset 0x64, size 0x1
    class stcFileData m_asFileData[18]; // offset 0x68, size 0x2D0
    class stcIconData m_sIconData; // offset 0x338, size 0xB8
    class sceMcIconSys m_sIconSys; // offset 0x3F0, size 0x3C4
    class sceMcTblGetDir * m_psDirFileList; // offset 0x7B4, size 0x4
    signed int m_s32FileListNum; // offset 0x7B8, size 0x4
    signed int m_s32SyncResult; // offset 0x7BC, size 0x4
    unsigned char m_bIconReWrite; // offset 0x7C0, size 0x1
    unsigned char m_bBreak; // offset 0x7C1, size 0x1
};
enum enmSoundMode {
    SOUND_MODE___MONAURAL = 0,
    SOUND_MODE___STEREO = 1,
    SOUND_MODE___DOLBY_PROLOGIC2 = 2,
    SOUND_MODE___DOLBY_DIGITAL = 3,
    SOUND___MAX = 4,
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
class clsSingleton {
    // total size: 0x4
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
class compressed_pair_imp {
    // total size: 0x8
public:
    class value_compare first_; // offset 0x0, size 0x1
    class node * second_; // offset 0x4, size 0x4
};
class NVS_SVRHEADER {
    // total size: 0x8
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short miplevel; // offset 0x2, size 0x2
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
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
class clsOOMainHeap : public clsOOHeapFragment {
    // total size: 0x34
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
class sceMcTblGetDir {
    // total size: 0x40
public:
    class sceMcStDateTime _Create; // offset 0x0, size 0x8
    class sceMcStDateTime _Modify; // offset 0x8, size 0x8
    unsigned int FileSizeByte; // offset 0x10, size 0x4
    unsigned short AttrFile; // offset 0x14, size 0x2
    unsigned short Reserve1; // offset 0x16, size 0x2
    unsigned int Reserve2; // offset 0x18, size 0x4
    unsigned int PdaAplNo; // offset 0x1C, size 0x4
    unsigned char EntryName[32]; // offset 0x20, size 0x20
};
class clsOOMemoryCard {
    // total size: 0x28
public:
    signed int m_s32Status_ReturnAsync; // offset 0x4, size 0x4
    signed int m_s32Status_Return; // offset 0x8, size 0x4
    enum enmCommand m_eCommand; // offset 0xC, size 0x4
    unsigned int m_u32FileSize; // offset 0x10, size 0x4
    unsigned int m_u32FilePos; // offset 0x14, size 0x4
    class stcAccessBuffer m_sAccessBuffer; // offset 0x18, size 0x8
    unsigned char m_u8UserNum; // offset 0x20, size 0x1
    unsigned char m_u8FileNum; // offset 0x21, size 0x1
    unsigned char m_bAutoSeve; // offset 0x22, size 0x1
    unsigned char m_bRunning; // offset 0x23, size 0x1
    signed char m_s8SlotNo; // offset 0x24, size 0x1
    unsigned char m_bOpened; // offset 0x25, size 0x1
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
class clsOORetry {
    // total size: 0x10
public:
    float m_f32WaitFrame_Max; // offset 0x4, size 0x4
    float m_f32WaitFrame; // offset 0x8, size 0x4
    signed char m_s8Num_Max; // offset 0xC, size 0x1
    signed char m_s8Num; // offset 0xD, size 0x1
};
class less : public binary_function {
    // total size: 0x1
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
enum enmCommand {
    CMD___CHECK_FREE_AREA = 0,
    CMD___CHECK_STATUS = 1,
    CMD___FORMAT = 2,
    CMD___CREATE_DIR = 3,
    CMD___CHANGE_DIR = 4,
    CMD___DELETE_DIR = 5,
    CMD___FILELIST_DIR = 6,
    CMD___GET_CURRENT_DIR = 7,
    CMD___CHECK_EXIST_FILE = 8,
    CMD___CHECK_EXIST_FILE_LOADED = 9,
    CMD___CREATE_FILE = 10,
    CMD___OPEN_FILE = 11,
    CMD___LOAD_FILE = 12,
    CMD___SAVE_FILE = 13,
    CMD___SAVE_ALLFILE = 14,
    CMD___CLOSE_FILE = 15,
    CMD___GET_LENGTH_FILE = 16,
    CMD___SEEK_FILE = 17,
    CMD___TELL_FILE = 18,
    CMD___DELETE_FILE = 19,
    CMD___DELETE_ALLFILE = 20,
    CMD___UNFORMAT = 21,
    CMD___END = 22,
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
enum enmMcState {
    MC_STATE_OK = 0,
    MC_STATE_EXIST = 1,
    MC_STATE_NOEXIST = 2,
    MC_STATE_UNFORMAT = 3,
    MC_STATE_BREAK = 4,
    MC_STATE_EMPTY = 5,
    MC_STATE_CHANGE = 6,
    MC_STATE_NOT_CHANGE = 7,
    MC_STATE_PS1 = 8,
    MC_STATE_PDA = 9,
    MC_STATE_NOCARD = 10,
    MC_STATE_DIR_EXIST = 11,
    MC_STATE_NO_DIR_ENTRY = 12,
    MC_STATE_NO_FILE_ENTRY = 13,
    MC_STATE_NO_EMPTY_DIR = 14,
    MC_STATE_FILE_OPEN_LIMIT = 15,
    MC_STATE_NO_OPEN_FILE = 16,
    MC_STATE_OTHER = 17,
    MC_STATE_ENTRYBREAK = 18,
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
struct /* @anon2 */ {
    // total size: 0x30
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcSize2d * data_; // offset 0x8, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class node {
    // total size: 0x0
};
class stcScissorRect {
    // total size: 0x10
public:
    unsigned int u32OffsetX; // offset 0x0, size 0x4
    unsigned int u32OffsetY; // offset 0x4, size 0x4
    unsigned int u32Right; // offset 0x8, size 0x4
    unsigned int u32Bottom; // offset 0xC, size 0x4
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
class clsTask : public clsOOTask {
    // total size: 0x54
};
class sceMcStDateTime {
    // total size: 0x8
public:
    unsigned char Resv2; // offset 0x0, size 0x1
    unsigned char Sec; // offset 0x1, size 0x1
    unsigned char Min; // offset 0x2, size 0x1
    unsigned char Hour; // offset 0x3, size 0x1
    unsigned char Day; // offset 0x4, size 0x1
    unsigned char Month; // offset 0x5, size 0x1
    unsigned short Year; // offset 0x6, size 0x2
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
class stcUv {
    // total size: 0x8
public:
    signed int u; // offset 0x0, size 0x4
    signed int v; // offset 0x4, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class stcUvRect {
    // total size: 0x10
public:
    class stcUv sUpperLeft; // offset 0x0, size 0x8
    class stcUv sBottomRight; // offset 0x8, size 0x8
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    class anchor second_; // offset 0x0, size 0x4
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
class compile_assert {
    // total size: 0x1
};
class node : public node_base {
    // total size: 0x14
public:
    class pair data_; // offset 0xC, size 0x8
};
class allocator {
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
class stcSize2d {
    // total size: 0x8
public:
    float w; // offset 0x0, size 0x4
    float h; // offset 0x4, size 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class anchor second_; // offset 0x4, size 0x4
};
struct /* @anon3 */ {
    // total size: 0x2C
};
class anchor {
    // total size: 0x4
public:
    class node_base * left_; // offset 0x0, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
enum enmSeqReq {
    SEQ_REQ___BOOT = 0,
    SEQ_REQ___FILE_SELECT = 1,
    SEQ_REQ___CREATE = 2,
    SEQ_REQ___DELETE = 3,
    SEQ_REQ___SAVE = 4,
    SEQ_REQ___LOAD = 5,
    SEQ_REQ___GHOST_START = 6,
    SEQ_REQ___CHANGE_CHK = 7,
    SEQ_REQ___UNFORMAT_DEBUG = 8,
    SEQ_REQ___ALL_DELETE_DEBUG = 9,
    SEQ_REQ___NONE = 10,
    SEQ_REQ___END = 11,
    SEQ_REQ___FORMAT = 12,
    SEQ_REQ___FILE_BROKEN = 13,
    SEQ_REQ___CREATE_BANNER = 14,
    SEQ_REQ___MAX = 15,
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
struct /* @anon4 */ {
    // total size: 0xD8
};
class stcGlyphData {
    // total size: 0x10
public:
    class stcGlyphABC sSize; // offset 0x0, size 0xC
    unsigned short u16CharaCode; // offset 0xC, size 0x2
    unsigned short u16Code; // offset 0xE, size 0x2
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
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
class stcRect {
    // total size: 0x10
public:
    class stcPoint2d sPos; // offset 0x0, size 0x8
    class stcSize2d sSize; // offset 0x8, size 0x8
};
class clsPfFontSystem : public clsOOFontSystem {
    // total size: 0x4C
};
class map {
    // total size: 0x10
public:
    class __tree tree_; // offset 0x0, size 0x10
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
enum enmRet {
    RET___WAIT = 0,
    RET___REDONE = 1,
    RET___EOR = 2,
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
class sceMcIconSys {
    // total size: 0x3C4
public:
    unsigned char Head[4]; // offset 0x0, size 0x4
    unsigned short Reserv1; // offset 0x4, size 0x2
    unsigned short OffsLF; // offset 0x6, size 0x2
    unsigned int Reserv2; // offset 0x8, size 0x4
    unsigned int TransRate; // offset 0xC, size 0x4
    signed int BgColor[4][4]; // offset 0x10, size 0x40
    float LightDir[3][4]; // offset 0x50, size 0x30
    float LightColor[3][4]; // offset 0x80, size 0x30
    float Ambient[4]; // offset 0xB0, size 0x10
    unsigned char TitleName[68]; // offset 0xC0, size 0x44
    unsigned char FnameView[64]; // offset 0x104, size 0x40
    unsigned char FnameCopy[64]; // offset 0x144, size 0x40
    unsigned char FnameDel[64]; // offset 0x184, size 0x40
    unsigned char Reserve3[512]; // offset 0x1C4, size 0x200
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
class stcPoint2d {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};

// Range: 0x561FD0 -> 0x56201C
void initCursorNo(class clsBaseMemoryCard_Task * this /* r2 */, signed int s32NextI /* r2 */, signed int s32CancelI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x561FD0 -> 0x56201C
    }
}


// Range: 0x562020 -> 0x5621A8
void draw(class clsBaseMemoryCard_Task * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x562020 -> 0x5621A8
    }
}


// Range: 0x5621B0 -> 0x562204
void draw_UnionFont(class clsBaseMemoryCard_Task * this /* r17 */, signed int s32FontTblNoI /* r2 */, enum enmdraw_UnionFont_Arg edraw_UnionFont_ArgI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5621B0 -> 0x562204
    }
}


// Range: 0x562210 -> 0x56246C
void execute(class clsBaseMemoryCard_Task * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x562210 -> 0x56246C
    }
}


// Range: 0x562470 -> 0x562640
enum enm_N_SelCmd exec_UnionSelCmd(class clsBaseMemoryCard_Task * this /* r18 */, enum enm_N_SelCmd e_N_SelCmd_IgnoreI /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x562470 -> 0x562640
        enum enm_N_SelCmd e_N_SelCmd; // r16
    }
}


// Range: 0x562640 -> 0x5627A0
enum enmPollingMc_Ret pollingMc(class clsBaseMemoryCard_Task * this /* r18 */, enum enmMcMovin eMcMovinI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x562640 -> 0x5627A0
        unsigned int bEnd; // r17
        signed int s32StatusReturn; // r29+0x4C
    }
}


// Range: 0x5627A0 -> 0x5627E4
void deleteTask_And_setAutoSave(class clsBaseMemoryCard_Task * this /* r4 */, enum enmdeleteTask_And_setAutoSave_Arg edeleteTask_And_setAutoSave_ArgI /* r2 */, enum enmRtnCode enRtnCode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5627A0 -> 0x5627E4
    }
}


// Range: 0x5627F0 -> 0x5628B4
unsigned char exec_UnionCursor(class clsBaseMemoryCard_Task * this /* r16 */, unsigned int bOnlyOkI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5627F0 -> 0x5628B4
        signed int s32StatusReturn; // r29+0x2C
    }
}


// Range: 0x5628C0 -> 0x5628C8
void setSelCmd(class clsBaseMemoryCard_Task * this /* r2 */, unsigned int eSelCmdI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5628C0 -> 0x5628C8
    }
}


// Range: 0x5628D0 -> 0x56294C
void setNextTaskMode(class clsBaseMemoryCard_Task * this /* r17 */, enum enmPollingMc_Ret eExecUnionRetI /* r16 */, signed int s32NextCursorNoI /* r2 */, signed int s32CancelCursorNoI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5628D0 -> 0x56294C
    }
}


// Range: 0x562950 -> 0x56295C
void setBackSeq(class clsBaseMemoryCard_Task * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x562950 -> 0x56295C
    }
}


// Range: 0x562960 -> 0x562968
void setNextSeq(class clsBaseMemoryCard_Task * this /* r2 */, enum enmSeqReq eSeqReqI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x562960 -> 0x562968
    }
}


// Range: 0x562970 -> 0x562BC0
void reinit(class clsBaseMemoryCard_Task * this /* r20 */, enum enmSeqReq eSeqReqI /* r2 */, enum enmDataType eDataTypeI /* r19 */, signed int s32FileNoI /* r18 */, signed int s32StageNoI /* r17 */, unsigned char eTaskModeI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x562970 -> 0x562BC0
        signed int s32UserBlock; // r2
    }
}


// Range: 0x562BC0 -> 0x562CE4
void * __ct(class clsBaseMemoryCard_Task * this /* r20 */, enum enmSeqReq eSeqReqI /* r19 */, enum enmDataType eDataTypeI /* r18 */, signed int s32FileNoI /* r17 */, signed int s32StageNoI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x562BC0 -> 0x562CE4
    }
}


