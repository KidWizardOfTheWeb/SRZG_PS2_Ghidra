/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Advertise\Select\TimeAttackSelect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon3 */ {
    // total size: 0x4C
} __vt__24clsTimeAttackSelect_Task; // size: 0x4C, address: 0x6C7C20
struct /* @anon0 */ {
    // total size: 0x4C
} __vt__22clsFreeRaceSelect_Task; // size: 0x4C, address: 0x6C7BA0
signed char m_teCursorModeRule; // size: 0x1, address: 0xB17518
class clsPfSystem * m_tpcSingleton; // size: 0x4, address: 0x6E69B8
char * oapc8Str[2]; // size: 0x8, address: 0x5F2198
class clsPfPeripheral * m_tpcSingleton; // size: 0x4, address: 0x7039C0
struct /* @anon2 */ {
    // total size: 0x2C
} __vt__9clsOOTask; // size: 0x2C, address: 0x6B58B0
struct /* @anon1 */ {
    // total size: 0x30
} __vt__7clsTask; // size: 0x30, address: 0x6B59F0
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
char * oapc8Str[2]; // size: 0x8, address: 0x0
char * oapc8Str[2]; // size: 0x8, address: 0x0
char * oapc8Str[2]; // size: 0x8, address: 0x5F21B0
unsigned char oau8Mask[2]; // size: 0x2, address: 0x0
unsigned short oau16Mask[2]; // size: 0x4, address: 0x0
unsigned int oau32Mask[2]; // size: 0x8, address: 0x655050
unsigned int oau32Col[2]; // size: 0x8, address: 0x655058
class Fuid fuid; // size: 0x10, address: 0x0
class stcGradRecord {
    // total size: 0x8
public:
    unsigned int u32Ratio; // offset 0x0, size 0x4
    unsigned int u32Rgba; // offset 0x4, size 0x4
};
class stcBitsLossLess2 {
    // total size: 0x8
public:
    unsigned short u16CharaID; // offset 0x0, size 0x2
    unsigned char u8Format; // offset 0x2, size 0x1
    unsigned char u8TexIdx; // offset 0x3, size 0x1
    unsigned short u16Width; // offset 0x4, size 0x2
    unsigned short u16Height; // offset 0x6, size 0x2
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
class clsAdvertiseMgr_Task : public clsTask {
    // total size: 0x69C
public:
    unsigned char m_bStartMovieEnd; // offset 0x54, size 0x1
    unsigned char * m_pu8PackBufHi; // offset 0x58, size 0x4
    void * m_pvTexListBufHi; // offset 0x5C, size 0x4
    class _NNS_TEXLIST * m_psTexList; // offset 0x60, size 0x4
    enum enmChildState m_eChildState; // offset 0x64, size 0x4
    enum enmChildState m_eChildSubState; // offset 0x68, size 0x4
    class stcSendAdv m_sSendAdv[8]; // offset 0x6C, size 0x20
    signed char m_s8StageNo; // offset 0x8C, size 0x1
    signed char m_s8LoadedStageNo; // offset 0x8D, size 0x1
    signed char m_s8PlayerNum; // offset 0x8E, size 0x1
    signed char m_s8UserNum; // offset 0x8F, size 0x1
    float m_f32TitleDemoTimer; // offset 0x90, size 0x4
    unsigned char * m_pu8PackSubBufHi[10]; // offset 0x94, size 0x28
    void * m_apvTexListSubBufHi[10]; // offset 0xBC, size 0x28
    unsigned char * m_apu8FlashBufHi[11]; // offset 0xE4, size 0x2C
    unsigned char * m_apu8FontBufHi[6]; // offset 0x110, size 0x18
    unsigned char * m_pu8SaveDataFile; // offset 0x128, size 0x4
    class _NNS_TEXLIST * m_apsTexListSub[10]; // offset 0x12C, size 0x28
    unsigned int m_u32OldMenu; // offset 0x154, size 0x4
    unsigned int m_u32CallBackReturnFrame; // offset 0x158, size 0x4
    signed char m_s8LoadShopSe_PortNo; // offset 0x15C, size 0x1
    unsigned char m_u8SelectPadNo; // offset 0x15D, size 0x1
    class stcFlashData m_asFlashData[11]; // offset 0x160, size 0x478
    class stcSubFlashData m_asSubFlashData[6]; // offset 0x5D8, size 0x30
    class _NNS_TEXLIST * m_psGearPartsTexList; // offset 0x608, size 0x4
    void * m_pvGearPartsTexListBufHi; // offset 0x60C, size 0x4
    class NNS_MOTION * m_apsUniEntryMotion[7]; // offset 0x610, size 0x1C
    class NNS_MOTION * m_apsEggEntryMotion[7]; // offset 0x62C, size 0x1C
    class NNS_MOTION * m_apsRoboEntryMotion[7]; // offset 0x648, size 0x1C
    class clsModelType_OB_TX_MO_MA_MF * m_pcBGModel; // offset 0x664, size 0x4
    class clsModelType_OB_TX_MO_MA * m_pcShopChao_Model; // offset 0x668, size 0x4
    class clsModelType_OB_TX_MO_MA * m_pcShopObj_Model; // offset 0x66C, size 0x4
    class _NNS_TEXLIST * m_psRTexList; // offset 0x670, size 0x4
    enum enmMode m_eOldMode; // offset 0x674, size 0x4
    enum enmHbMode m_eWgpMode; // offset 0x678, size 0x4
    unsigned int m_u32UnlockMode; // offset 0x67C, size 0x4
    float m_s32InfoMoveFrame; // offset 0x680, size 0x4
    unsigned int m_u32UnlockInfoType; // offset 0x684, size 0x4
    unsigned int m_u32UnlockInfoParam1; // offset 0x688, size 0x4
    unsigned int m_u32UnlockInfoParam2; // offset 0x68C, size 0x4
    unsigned int m_u32OldInfoType; // offset 0x690, size 0x4
    unsigned int m_u32OldInfoParam1; // offset 0x694, size 0x4
    unsigned int m_u32OldInfoParam2; // offset 0x698, size 0x4
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
class clsTimeAttackSelect_Task : public clsFreeRaceSelect_Task {
    // total size: 0x5C
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
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class stcSubFlashData {
    // total size: 0x8
public:
    class clsOOFlashPlayer * pcPlayer; // offset 0x0, size 0x4
    class clsOOFlashMovie * pcParrentMovie; // offset 0x4, size 0x4
};
class stcScriptObject {
    // total size: 0x20
public:
    unsigned char u8Type; // offset 0x0, size 0x1
    char * pc8Name; // offset 0x4, size 0x4
    class vector vecsFunc; // offset 0x8, size 0xC
    class vector vecsMember; // offset 0x14, size 0xC
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
class clsOOFlashPlayer {
    // total size: 0x20
public:
    class clsOOFlashMovie * m_pcFlashMovie; // offset 0x4, size 0x4
    char * m_opc8SpriteName; // offset 0x8, size 0x4
    signed int m_s32PlayNo; // offset 0xC, size 0x4
    unsigned int m_u32CharaId; // offset 0x10, size 0x4
    unsigned char m_u8SkipPlace; // offset 0x14, size 0x1
    unsigned char m_u8Stop; // offset 0x15, size 0x1
    signed int m_s32OffsetX; // offset 0x18, size 0x4
    signed int m_s32OffsetY; // offset 0x1C, size 0x4
};
class stcDepthInfo {
    // total size: 0x8
public:
    unsigned int u32DepthNum; // offset 0x0, size 0x4
    class stcDepthData * psDepthData; // offset 0x4, size 0x4
};
class clsOOSemaphore {
    // total size: 0x4
};
class stcSeqTag {
    // total size: 0xC
public:
    unsigned int u32Frame; // offset 0x0, size 0x4
    class stcTag sTag; // offset 0x4, size 0x8
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
class clsOOFlashMovie {
    // total size: 0x8C
public:
    class clsOOFlashMgr * m_pcFlashMgr; // offset 0x4, size 0x4
    class stcFlash * m_psFlash; // offset 0x8, size 0x4
    class vector m_vecpcSprite; // offset 0xC, size 0xC
    class vector m_vecpcImport; // offset 0x18, size 0xC
    class vector m_vecpcDefineShape; // offset 0x24, size 0xC
    class stcScriptObject m_sKeyObj; // offset 0x30, size 0x20
    class vector m_vecsKeyListener; // offset 0x50, size 0xC
    class clsOOTexture * m_pcTexList; // offset 0x5C, size 0x4
    class clsOODraw2d * m_pcDraw2d; // offset 0x60, size 0x4
    class vector m_vecScriptObject; // offset 0x64, size 0xC
    class vector m_vecScriptFunction; // offset 0x70, size 0xC
    unsigned char m_u8SetSkip; // offset 0x7C, size 0x1
    class clsOOCri * m_pcCri; // offset 0x80, size 0x4
    unsigned int (* m_pfCallBackFunc)(void *, unsigned int, unsigned int, unsigned int); // offset 0x84, size 0x4
    void * m_pvCallBackParam; // offset 0x88, size 0x4
};
class stcFgbRect {
    // total size: 0x10
public:
    signed int s32XMin; // offset 0x0, size 0x4
    signed int s32XMax; // offset 0x4, size 0x4
    signed int s32YMin; // offset 0x8, size 0x4
    signed int s32YMax; // offset 0xC, size 0x4
};
class stcDefineShape1 {
    // total size: 0x54
public:
    unsigned short u16CharaID; // offset 0x0, size 0x2
    unsigned short u16Padding; // offset 0x2, size 0x2
    class stcFgbRect sShapeBounds; // offset 0x4, size 0x10
    class stcShapeWithStyle sShapeWithStyle; // offset 0x14, size 0x40
};
class _NNS_TEXLIST {
    // total size: 0x8
public:
    signed int nTex; // offset 0x0, size 0x4
    class _NNS_TEXINFO * pTexInfoList; // offset 0x4, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class stcActDefineFunction {
    // total size: 0x14
public:
    unsigned short u16FNameLen; // offset 0x0, size 0x2
    char * pc8FName; // offset 0x4, size 0x4
    unsigned short u16ParamNum; // offset 0x8, size 0x2
    unsigned short u16CodeSize; // offset 0xA, size 0x2
    unsigned short * pu16ParamLen; // offset 0xC, size 0x4
    char * * ppc8ParamName; // offset 0x10, size 0x4
};
class generic_iterator {
    // total size: 0x4
public:
    class node * node_; // offset 0x0, size 0x4
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
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
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
class stcDepthData {
    // total size: 0x8
public:
    unsigned int u32DepthNo; // offset 0x0, size 0x4
    unsigned int u32InstructNum; // offset 0x4, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class clsPfTextureBase {
    // total size: 0x1C
public:
    void * m_pvTex; // offset 0x0, size 0x4
    void * m_pvTexLocalBuff; // offset 0x4, size 0x4
    class _NNS_TEXLIST * m_psTex; // offset 0x8, size 0x4
    class vector m_cSizeList; // offset 0xC, size 0xC
};
class vector : private __vector_imp {
    // total size: 0xC
};
class vector : private __vector_imp {
    // total size: 0xC
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class clsOOFMSequence : public clsOOFMObject {
    // total size: 0x20
public:
    unsigned int m_u32CurFrame; // offset 0x14, size 0x4
    unsigned int m_u32MaxFrame; // offset 0x18, size 0x4
    unsigned char m_u8FlashReserve; // offset 0x1C, size 0x1
};
class stcShapeWithStyle {
    // total size: 0x40
public:
    unsigned int u32FillStyleNum; // offset 0x0, size 0x4
    class stcFillStyle * psFillStyles; // offset 0x4, size 0x4
    unsigned int u32LineStyleNum; // offset 0x8, size 0x4
    unsigned char u8IsLineStyle2; // offset 0xC, size 0x1
    unsigned char au8Padding[3]; // offset 0xD, size 0x3
    class stcLineStyle * psLineStyles; // offset 0x10, size 0x4
    class stcLineStyle2 * psLineStyles2; // offset 0x14, size 0x4
    class stcShape sShape; // offset 0x18, size 0x28
};
class __vector_imp : private __vector_deleter {
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
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
};
class stcLineStyle {
    // total size: 0x8
public:
    unsigned short u16Width; // offset 0x0, size 0x2
    unsigned short u16Padding; // offset 0x2, size 0x2
    unsigned int u32RGBA; // offset 0x4, size 0x4
};
class stcPlaceObject2 {
    // total size: 0xC
public:
    unsigned short u16CharacterId; // offset 0x0, size 0x2
    unsigned short u16ClipDepth; // offset 0x2, size 0x2
    float (* psPlaceMtx)[3][2]; // offset 0x4, size 0x4
    class stcCXFormWithAlpha * psCXWithAlpha; // offset 0x8, size 0x4
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
struct /* @anon0 */ {
    // total size: 0x4C
};
class vector : private __vector_imp {
    // total size: 0xC
};
class stcDoAction {
    // total size: 0x8
public:
    unsigned int u32RecNum; // offset 0x0, size 0x4
    class stcActionRec * psActRecs; // offset 0x4, size 0x4
};
class clsOOFlashMgr {
    // total size: 0x18
public:
    class vector m_vecpcFlashData; // offset 0x4, size 0xC
    class clsOOFMShapeSymbol * (* m_pfCreateShapeSymbol)(); // offset 0x10, size 0x4
    class clsOOFMSprite * (* m_pfCreateSprite)(); // offset 0x14, size 0x4
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcReplaceNode * data_; // offset 0x8, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0xC
};
class stcShape {
    // total size: 0x28
public:
    unsigned int u32ShapeRecNum; // offset 0x0, size 0x4
    unsigned int * pu32RecArraySeq; // offset 0x4, size 0x4
    unsigned int au32RecTypeNums[4]; // offset 0x8, size 0x10
    class stcStyleChangeRec * psStyleChangeRec; // offset 0x18, size 0x4
    class stcStraightEdgeRec * psStraightEdgeRec; // offset 0x1C, size 0x4
    class stcCurvedEdgeRec * psCurvedEdgeRec; // offset 0x20, size 0x4
    class stcShapeVert * psShapeVert; // offset 0x24, size 0x4
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
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class map {
    // total size: 0x18
public:
    class __tree tree_; // offset 0x0, size 0x18
};
class compressed_pair_imp {
    // total size: 0xC
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class node_base second_; // offset 0x4, size 0x8
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class stcFlash {
    // total size: 0x58
public:
    class stcFgbHeader sHeader; // offset 0x0, size 0x34
    class stcTag * psDefineTags; // offset 0x34, size 0x4
    class stcExportAssets * psExportAssets; // offset 0x38, size 0x4
    class stcImportAssets * psImportAssets; // offset 0x3C, size 0x4
    class stcSprite * psSprites; // offset 0x40, size 0x4
    class stcScene sScene; // offset 0x44, size 0x14
};
class NNS_MORPHTARGETLIST {
    // total size: 0x8
public:
    signed int nMorphTarget; // offset 0x0, size 0x4
    class NNS_MORPHTARGETPTR * pMorphTargetPtrList; // offset 0x4, size 0x4
};
class stcCXFormWithAlpha {
    // total size: 0x14
public:
    unsigned char u8Type; // offset 0x0, size 0x1
    unsigned char u8PlaceType; // offset 0x1, size 0x1
    unsigned char au8Padding[2]; // offset 0x2, size 0x2
    signed short s16AddR; // offset 0x4, size 0x2
    signed short s16AddG; // offset 0x6, size 0x2
    signed short s16AddB; // offset 0x8, size 0x2
    signed short s16AddA; // offset 0xA, size 0x2
    signed short s16MultR; // offset 0xC, size 0x2
    signed short s16MultG; // offset 0xE, size 0x2
    signed short s16MultB; // offset 0x10, size 0x2
    signed short s16MultA; // offset 0x12, size 0x2
};
class allocator {
    // total size: 0x1
};
class stcActionRec {
    // total size: 0x8
public:
    unsigned char u8ActCode; // offset 0x0, size 0x1
    unsigned char au8Padding[3]; // offset 0x1, size 0x3
    void * pvData; // offset 0x4, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class clsPfSystem : public clsSingleton, public clsOOSystem {
    // total size: 0x84
};
class stcShapeVert {
    // total size: 0x10
public:
    unsigned short u16GroupNum; // offset 0x0, size 0x2
    unsigned char u8HasTex; // offset 0x2, size 0x1
    unsigned char u8Padding; // offset 0x3, size 0x1
    class stcVertHeader * psHeaders; // offset 0x4, size 0x4
    class stcPolyVert * psPolyVerts; // offset 0x8, size 0x4
    class stcPolyVertUV * psPolyVertsUV; // offset 0xC, size 0x4
};
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class stcFillStyle {
    // total size: 0x48
public:
    unsigned short u16Style; // offset 0x0, size 0x2
    unsigned short u16Padding1; // offset 0x2, size 0x2
    unsigned int u32Rgba; // offset 0x4, size 0x4
    float sGradientMtx[3][2]; // offset 0x8, size 0x18
    class stcGradient sGradient; // offset 0x20, size 0xC
    unsigned short u16BmpId; // offset 0x2C, size 0x2
    unsigned short u16TexIdx; // offset 0x2E, size 0x2
    float sBmpMtx[3][2]; // offset 0x30, size 0x18
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcScriptVar * data_; // offset 0x8, size 0x4
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
class vector : private __vector_imp {
    // total size: 0xC
};
class stcCurvedEdgeRec {
    // total size: 0x10
public:
    signed int s32ControlDeltaX; // offset 0x0, size 0x4
    signed int s32ControlDeltaY; // offset 0x4, size 0x4
    signed int s32AnchorDeltaX; // offset 0x8, size 0x4
    signed int s32AnchorDeltaY; // offset 0xC, size 0x4
};
class clsOOFMShapeSymbol : public clsOOFMObject {
    // total size: 0x40
public:
    class stcDefineShape1 * m_psBase; // offset 0x14, size 0x4
    class stcBitsLossLess2 * m_psBLL2; // offset 0x18, size 0x4
    unsigned int m_u32TotalVNum; // offset 0x1C, size 0x4
    class stcShapeVert m_sShapeVert; // offset 0x20, size 0x10
    class stcPlaceObject2 * m_psPlaceObj2; // offset 0x30, size 0x4
    class stcPlaceObject2 * m_psUpPlaceObj2; // offset 0x34, size 0x4
    unsigned char m_u8Placed; // offset 0x38, size 0x1
    unsigned char m_u8Clip; // offset 0x39, size 0x1
    class stcCXFormWithAlpha * m_psCXFormWithAlpha; // offset 0x3C, size 0x4
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
class stcScene {
    // total size: 0x14
public:
    class stcDepthInfo sDepthInfo; // offset 0x0, size 0x8
    unsigned int u32FrameCnt; // offset 0x8, size 0x4
    unsigned int u32CtrlTagNum; // offset 0xC, size 0x4
    class stcTag * psTags; // offset 0x10, size 0x4
};
class allocator {
    // total size: 0x1
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class __vector_imp : private __vector_deleter {
    // total size: 0xC
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
class clsPfPeripheral : public clsSingleton, public clsOOPeripheral {
    // total size: 0x24
public:
    unsigned int m_u32MultiTapStatus; // offset 0x20, size 0x4
};
enum enmSoundMode {
    SOUND_MODE___MONAURAL = 0,
    SOUND_MODE___STEREO = 1,
    SOUND_MODE___DOLBY_PROLOGIC2 = 2,
    SOUND_MODE___DOLBY_DIGITAL = 3,
    SOUND___MAX = 4,
};
class stcKeyListenerSet {
    // total size: 0xC
public:
    class clsOOFMSprite * pcSprite; // offset 0x0, size 0x4
    class stcDoAction * psActRec; // offset 0x4, size 0x4
    class stcScriptObject * psSObj; // offset 0x8, size 0x4
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
class clsOODraw2d {
    // total size: 0xC
public:
    unsigned char m_bWide2dConv; // offset 0x0, size 0x1
    unsigned int m_eTexFlag; // offset 0x8, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
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
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcScriptFunc * data_; // offset 0x8, size 0x4
};
class stcReplaceNode {
    // total size: 0x8
public:
    unsigned int u32TargetID; // offset 0x0, size 0x4
    class clsOOFMObject * pcReplaceObj; // offset 0x4, size 0x4
};
class stcTag {
    // total size: 0x8
public:
    unsigned int u32TagID; // offset 0x0, size 0x4
    void * pvData; // offset 0x4, size 0x4
};
class clsOOFMSprite : public clsOOFMSequence {
    // total size: 0xF0
public:
    class stcSprite * m_psSprite; // offset 0x20, size 0x4
    class vector m_vecLayer; // offset 0x24, size 0xC
    class vector m_vecsReplaceTbl; // offset 0x30, size 0xC
    class stcPlaceObject2 * m_psPlaceObj2; // offset 0x3C, size 0x4
    class stcPlaceObject2 * m_psUpPlaceObj2; // offset 0x40, size 0x4
    unsigned char m_u8Placed; // offset 0x44, size 0x1
    unsigned short m_u16SeqMode; // offset 0x46, size 0x2
    class vector m_vecsStack; // offset 0x48, size 0xC
    class stcActConstantPool * m_psConstantPool; // offset 0x54, size 0x4
    class stcPushData m_asRegister[5]; // offset 0x58, size 0x50
    class stcDoAction * m_psLastPlayAction; // offset 0xA8, size 0x4
    class vector m_vecpsFrameLabel; // offset 0xAC, size 0xC
    unsigned int * m_pu32CurIdx; // offset 0xB8, size 0x4
    unsigned int * m_pu32JmpIdx; // offset 0xBC, size 0x4
    unsigned char m_u8IsJump; // offset 0xC0, size 0x1
    unsigned int m_au32RtnCode[4]; // offset 0xC4, size 0x10
    signed int m_s32NextSpriteNo; // offset 0xD4, size 0x4
    unsigned int m_u32NextSpriteFrame; // offset 0xD8, size 0x4
    char * m_pc8NextSpriteLabel; // offset 0xDC, size 0x4
    signed int m_s32PlaceX; // offset 0xE0, size 0x4
    signed int m_s32PlaceY; // offset 0xE4, size 0x4
    unsigned char m_u8BlendMode; // offset 0xE8, size 0x1
};
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class clsFreeRaceSelect_Task : public clsTask {
    // total size: 0x5C
public:
    class clsAdvertiseMgr_Task * m_pcAdvertiseMgr_Task; // offset 0x54, size 0x4
    signed char m_s8MaxRuleNum; // offset 0x58, size 0x1
    unsigned char m_bUra; // offset 0x59, size 0x1
    signed char m_s8Laps; // offset 0x5A, size 0x1
    unsigned char m_bGhost; // offset 0x5B, size 0x1
};
class NVS_SVRHEADER {
    // total size: 0x8
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short miplevel; // offset 0x2, size 0x2
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
};
class allocator {
    // total size: 0x1
};
class vector : private __vector_imp {
    // total size: 0xC
};
class stcStraightEdgeRec {
    // total size: 0xC
public:
    unsigned char u8LineType; // offset 0x0, size 0x1
    unsigned char au8Padding[3]; // offset 0x1, size 0x3
    signed int s32DeltaX; // offset 0x4, size 0x4
    signed int s32DeltaY; // offset 0x8, size 0x4
};
enum enmChildState {
    CHILD_STATE___MOVE_EX_00 = 0,
    CHILD_STATE___MOVE_EX_01 = 1,
    CHILD_STATE___MOVE_EX_02 = 2,
    CHILD_STATE___MOVE_EX_03 = 3,
    CHILD_STATE___MOVE_EX_04 = 4,
    CHILD_STATE___MOVE_EX_05 = 5,
    CHILD_STATE___MOVE_EX_06 = 6,
    CHILD_STATE___MOVE_EX_07 = 7,
    CHILD_STATE___MOVE_EX_08 = 8,
    CHILD_STATE___MOVE_EX_09 = 9,
    CHILD_STATE___MOVE_EX_10 = 10,
    CHILD_STATE___MOVE_EX_11 = 11,
    CHILD_STATE___MOVE_EX_12 = 12,
    CHILD_STATE___MOVE_EX_13 = 13,
    CHILD_STATE___MOVE_EX_14 = 14,
    CHILD_STATE___MOVE_EX_15 = 15,
    CHILD_STATE___MOVE_EX_16 = 16,
    CHILD_STATE___MOVE_EX_17 = 17,
    CHILD_STATE___MOVE_EX_18 = 18,
    CHILD_STATE___MOVE_EX_19 = 19,
    CHILD_STATE___MOVE_EX_MAX = 20,
    CHILD_STATE___NO_CHANGE = 21,
    CHILD_STATE___MOVE_NEXT = 22,
    CHILD_STATE___MOVE_BACK = 23,
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcKeyListenerSet * data_; // offset 0x8, size 0x4
};
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class __list_deleter {
    // total size: 0x14
public:
    class compressed_pair size_; // offset 0x0, size 0x8
    class compressed_pair end_; // offset 0x8, size 0xC
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
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class stcImportAssets {
    // total size: 0xC
public:
    unsigned short u16URLLen; // offset 0x0, size 0x2
    unsigned short u16Num; // offset 0x2, size 0x2
    char * pc8URL; // offset 0x4, size 0x4
    class stcExportInner * psImInner; // offset 0x8, size 0x4
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class less : public binary_function {
    // total size: 0x1
};
class clsOOFMObject {
    // total size: 0x14
public:
    class clsOOFlashMovie * m_pcParent; // offset 0x4, size 0x4
    signed int m_s32CharID; // offset 0x8, size 0x4
    unsigned char m_u8IsDraw; // offset 0xC, size 0x1
    float m_f32DrawZ; // offset 0x10, size 0x4
};
class stcScriptVar {
    // total size: 0x8
public:
    char * pc8Name; // offset 0x0, size 0x4
    class stcPushData * psData; // offset 0x4, size 0x4
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
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
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
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcPushData * data_; // offset 0x8, size 0x4
};
class allocator {
    // total size: 0x1
};
class stcPolyVertUV {
    // total size: 0x14
public:
    float f32X; // offset 0x0, size 0x4
    float f32Y; // offset 0x4, size 0x4
    unsigned int u32Color; // offset 0x8, size 0x4
    float f32U; // offset 0xC, size 0x4
    float f32V; // offset 0x10, size 0x4
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
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
class stcExportInner {
    // total size: 0x8
public:
    unsigned short u16Tag; // offset 0x0, size 0x2
    unsigned short u16StrLen; // offset 0x2, size 0x2
    char * pc8Name; // offset 0x4, size 0x4
};
class stcStyleChangeRec {
    // total size: 0x28
public:
    signed int s32MoveDeltaX; // offset 0x0, size 0x4
    signed int s32MoveDeltaY; // offset 0x4, size 0x4
    unsigned short u16FillStyle0; // offset 0x8, size 0x2
    unsigned short u16FillStyle1; // offset 0xA, size 0x2
    unsigned short u16LineStyle; // offset 0xC, size 0x2
    unsigned short u16Padding; // offset 0xE, size 0x2
    unsigned int u32FillStyleNum; // offset 0x10, size 0x4
    unsigned int u32LineStyleNum; // offset 0x14, size 0x4
    unsigned char u8IsLineStyle2; // offset 0x18, size 0x1
    unsigned char u8NumFillBits; // offset 0x19, size 0x1
    unsigned char u8NumLineBits; // offset 0x1A, size 0x1
    unsigned char au8Padding[1]; // offset 0x1B, size 0x1
    class stcFillStyle * psFillStyle; // offset 0x1C, size 0x4
    class stcLineStyle * psLineStyles; // offset 0x20, size 0x4
    class stcLineStyle2 * psLineStyles2; // offset 0x24, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
struct /* @anon1 */ {
    // total size: 0x30
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcSize2d * data_; // offset 0x8, size 0x4
};
class stcPushData {
    // total size: 0x10
public:
    unsigned char u8Type; // offset 0x0, size 0x1
    class uniPushData uData; // offset 0x8, size 0x8
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
class vector : private __vector_imp {
    // total size: 0xC
};
class clsTask : public clsOOTask {
    // total size: 0x54
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
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
class stcScriptFunc {
    // total size: 0x1C
public:
    class clsOOFMSprite * pcSprite; // offset 0x0, size 0x4
    class stcDoAction * psActRec; // offset 0x4, size 0x4
    class stcActDefineFunction * psDefFunc; // offset 0x8, size 0x4
    class stcActDefineFunction2 * psDefFunc2; // offset 0xC, size 0x4
    unsigned int u32CodeN; // offset 0x10, size 0x4
    char * pc8Name; // offset 0x14, size 0x4
    class stcActConstantPool * psConstantPool; // offset 0x18, size 0x4
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
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class stcLineStyle2 {
    // total size: 0x58
public:
    unsigned short u16Width; // offset 0x0, size 0x2
    unsigned char u8StartCapStyle; // offset 0x2, size 0x1
    unsigned char u8HasFillFlag; // offset 0x3, size 0x1
    unsigned char u8NoHScaleFlag; // offset 0x4, size 0x1
    unsigned char u8NoVScaleFlag; // offset 0x5, size 0x1
    unsigned char u8PixelHintingFlag; // offset 0x6, size 0x1
    unsigned char u8NoClose; // offset 0x7, size 0x1
    unsigned char u8Padding; // offset 0x8, size 0x1
    unsigned char u8EndCapStyle; // offset 0x9, size 0x1
    unsigned short u16MiterLimitFactor; // offset 0xA, size 0x2
    unsigned int u32RGBA; // offset 0xC, size 0x4
    class stcFillStyle sFillStyle; // offset 0x10, size 0x48
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
class allocator {
    // total size: 0x1
};
class vector : private __vector_imp {
    // total size: 0xC
};
class vector : private __vector_imp {
    // total size: 0xC
};
class stcPolyVert {
    // total size: 0xC
public:
    float f32X; // offset 0x0, size 0x4
    float f32Y; // offset 0x4, size 0x4
    unsigned int u32Color; // offset 0x8, size 0x4
};
class uniPushData {
    // total size: 0x8
public:
    union { // inferred
        char * pc8String; // offset 0x0, size 0x4
        float f32Float; // offset 0x0, size 0x4
        unsigned char u8RegisterNum; // offset 0x0, size 0x1
        unsigned char u8Bool; // offset 0x0, size 0x1
        double f64Double; // offset 0x0, size 0x8
        unsigned int u32Integer; // offset 0x0, size 0x4
        unsigned char u8Constant; // offset 0x0, size 0x1
        unsigned short u16Constant; // offset 0x0, size 0x2
        void * pvObject; // offset 0x0, size 0x4
    };
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
class stcExportAssets {
    // total size: 0x8
public:
    unsigned short u16Num; // offset 0x0, size 0x2
    unsigned short u16Padding; // offset 0x2, size 0x2
    class stcExportInner * psExInner; // offset 0x4, size 0x4
};
class stcActConstantPool {
    // total size: 0xC
public:
    unsigned short u16PoolNum; // offset 0x0, size 0x2
    unsigned short * pu16NameLen; // offset 0x4, size 0x4
    char * * ppc8String; // offset 0x8, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class allocator {
    // total size: 0x1
};
class clsOOMap : public map {
    // total size: 0x18
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
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
class SNDF_PSPRM {
    // total size: 0x180
public:
    unsigned int porttbl[48]; // offset 0x0, size 0xC0
    unsigned int portpcm[48]; // offset 0xC0, size 0xC0
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
struct /* @anon2 */ {
    // total size: 0x2C
};
class anchor {
    // total size: 0x4
public:
    class node_base * left_; // offset 0x0, size 0x4
};
class clsOOPeripheral {
    // total size: 0x1C
public:
    class stcActivePeripheral m_sActivePeripheral; // offset 0x4, size 0x10
    unsigned int m_u32ConnectNum; // offset 0x14, size 0x4
    unsigned int m_u32BasePadCnt; // offset 0x18, size 0x4
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
class stcSize2d {
    // total size: 0x8
public:
    signed int w; // offset 0x0, size 0x4
    signed int h; // offset 0x4, size 0x4
};
class stcVertHeader {
    // total size: 0x8
public:
    unsigned int u32Type; // offset 0x0, size 0x4
    unsigned int u32Num; // offset 0x4, size 0x4
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
class stcActivePeripheral {
    // total size: 0x10
public:
    unsigned int m_u32Beta; // offset 0x0, size 0x4
    unsigned int m_u32Trig; // offset 0x4, size 0x4
    unsigned int m_u32Rel; // offset 0x8, size 0x4
    unsigned int m_u32Rep; // offset 0xC, size 0x4
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class clsPfTexture : public clsOOTexture, public clsPfTextureBase {
    // total size: 0x20
};
class stcFlashData {
    // total size: 0x68
public:
    class clsOOFlashPlayer * pcPlayer; // offset 0x0, size 0x4
    class clsOOFlashMovie * pcMovie; // offset 0x4, size 0x4
    class clsPfTexture * pcTexture; // offset 0x8, size 0x4
    class stcFlash sFlash; // offset 0xC, size 0x58
    void * pvLoFrame; // offset 0x64, size 0x4
};
class node_base : public anchor {
    // total size: 0xC
public:
    class node_base * right_; // offset 0x4, size 0x4
    class __pointer_plus_bit parent_; // offset 0x8, size 0x4
};
class stcFgbHeader {
    // total size: 0x34
public:
    unsigned char u8IsLittleEndian; // offset 0x0, size 0x1
    unsigned char u8FlashVersion; // offset 0x1, size 0x1
    unsigned char u8FgbVersion; // offset 0x2, size 0x1
    unsigned char u8Padding; // offset 0x3, size 0x1
    unsigned int u32Reserved; // offset 0x4, size 0x4
    class stcFgbRect sScreenRect; // offset 0x8, size 0x10
    unsigned int u32FrameRate; // offset 0x18, size 0x4
    unsigned int u32FrameCnt; // offset 0x1C, size 0x4
    class stcTagInfo sTagNumInfo; // offset 0x20, size 0x14
};
class clsSingleton {
    // total size: 0x4
};
class stcActDefineFunction2 {
    // total size: 0x20
public:
    unsigned short u16FNameLen; // offset 0x0, size 0x2
    char * pc8FuncName; // offset 0x4, size 0x4
    unsigned short u16ParamNum; // offset 0x8, size 0x2
    unsigned char u8RegisterCount; // offset 0xA, size 0x1
    unsigned char u8PreloadParentFlag; // offset 0xB, size 0x1
    unsigned char u8PreloadRootFlag; // offset 0xC, size 0x1
    unsigned char u8SuppressSuperFlag; // offset 0xD, size 0x1
    unsigned char u8PreloadSuperFlag; // offset 0xE, size 0x1
    unsigned char u8SuppressArgumentsFlag; // offset 0xF, size 0x1
    unsigned char u8PreloadArgumentsFlag; // offset 0x10, size 0x1
    unsigned char u8SuppressThisFlag; // offset 0x11, size 0x1
    unsigned char u8PreloadThisFlag; // offset 0x12, size 0x1
    unsigned char u8PreloadGlobalFlag; // offset 0x13, size 0x1
    unsigned short * pu16PNameLen; // offset 0x14, size 0x4
    char * * ppc8ParamName; // offset 0x18, size 0x4
    unsigned short u16CodeSize; // offset 0x1C, size 0x2
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
class stcGradient {
    // total size: 0xC
public:
    unsigned short u16SpreadMode; // offset 0x0, size 0x2
    unsigned short u16InterpolationRgb; // offset 0x2, size 0x2
    unsigned int u32Num; // offset 0x4, size 0x4
    class stcGradRecord * psGradRecs; // offset 0x8, size 0x4
};
class clsOOTexture {
    // total size: 0x4
};
struct /* @anon3 */ {
    // total size: 0x4C
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
class stcTagInfo {
    // total size: 0x14
public:
    unsigned int u32DefNum; // offset 0x0, size 0x4
    unsigned int u32ExportNum; // offset 0x4, size 0x4
    unsigned int u32ImportNum; // offset 0x8, size 0x4
    unsigned int u32SpriteNum; // offset 0xC, size 0x4
    unsigned int u32SequenceNum; // offset 0x10, size 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class stcSprite {
    // total size: 0x14
public:
    class stcDepthInfo sDepthInfo; // offset 0x0, size 0x8
    unsigned short u16CharacterID; // offset 0x8, size 0x2
    unsigned short u16FrameCnt; // offset 0xA, size 0x2
    unsigned int u32CtrlTagNum; // offset 0xC, size 0x4
    class stcSeqTag * psSeqTags; // offset 0x10, size 0x4
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

// Range: 0x48B5E0 -> 0x48B6B0
void drawRule(class clsTimeAttackSelect_Task * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x48B5E0 -> 0x48B6B0
    }
}


// Range: 0x48B6B0 -> 0x48B6C4
void drawMainDepend() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x48B6B0 -> 0x48B6C4
    }
}


// Range: 0x48B6D0 -> 0x48B714
void execRule(class clsTimeAttackSelect_Task * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x48B6D0 -> 0x48B714
    }
}


