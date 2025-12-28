/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\core\Flash\OOFlash.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char * apc8NewObjectName[6]; // size: 0x18, address: 0x63A900
struct /* @anon0 */ {
    // total size: 0x1C
} __vt__16clsOOFlashPlayer; // size: 0x1C, address: 0x6C8C60
struct /* @anon5 */ {
    // total size: 0xC
} __vt__15clsOOFlashMovie; // size: 0xC, address: 0x6C8C80
class clsDebug * m_tpcSingleton; // size: 0x4, address: 0x703BB8
class clsOOMainHeap * t_cInstance; // size: 0x4, address: 0xB17268
struct /* @anon4 */ {
    // total size: 0x48
} __vt__13clsOOFMObject; // size: 0x48, address: 0x6C30A0
struct /* @anon2 */ {
    // total size: 0x48
} __vt__18clsOOFMShapeSymbol; // size: 0x48, address: 0x6C8C90
class stcPeripheral m_asPeripheral[4]; // size: 0xC0, address: 0x702FE0
class clsPfPeripheral * m_tpcSingleton; // size: 0x4, address: 0x7039C0
struct /* @anon1 */ {
    // total size: 0x4C
} __vt__15clsOOFMSequence; // size: 0x4C, address: 0x6C30F0
struct /* @anon3 */ {
    // total size: 0x68
} __vt__13clsOOFMSprite; // size: 0x68, address: 0x6C8CE0
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
class stcGradRecord {
    // total size: 0x8
public:
    unsigned int u32Ratio; // offset 0x0, size 0x4
    unsigned int u32Rgba; // offset 0x4, size 0x4
};
class stcDataSize {
    // total size: 0x18
public:
    signed int s32StagePack; // offset 0x0, size 0x4
    signed int s32MapAll; // offset 0x4, size 0x4
    signed int s32MapTexture; // offset 0x8, size 0x4
    signed int s32PlayerData; // offset 0xC, size 0x4
    signed int s32PlayerMotion; // offset 0x10, size 0x4
    signed int s32GearData; // offset 0x14, size 0x4
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
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class stcBurnOutSystem {
    // total size: 0x3
public:
    unsigned char u8EraseAlpha; // offset 0x0, size 0x1
    unsigned char u8EraseColor; // offset 0x1, size 0x1
    unsigned char u8PathDrawNum; // offset 0x2, size 0x1
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
class SJCK {
    // total size: 0x8
public:
    signed char * data; // offset 0x0, size 0x4
    signed int len; // offset 0x4, size 0x4
};
class stcSeqTag {
    // total size: 0xC
public:
    unsigned int u32Frame; // offset 0x0, size 0x4
    class stcTag sTag; // offset 0x4, size 0x8
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcKeyListenerSet * data_; // offset 0x8, size 0x4
};
class stcDoAction {
    // total size: 0x8
public:
    unsigned int u32RecNum; // offset 0x0, size 0x4
    class stcActionRec * psActRecs; // offset 0x4, size 0x4
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
class __wrap_iterator {
    // total size: 0x4
public:
    class stcScriptFunc * it_; // offset 0x0, size 0x4
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
class iterator {
    // total size: 0x1
};
class stcScriptObject {
    // total size: 0x20
public:
    unsigned char u8Type; // offset 0x0, size 0x1
    char * pc8Name; // offset 0x4, size 0x4
    class vector vecsFunc; // offset 0x8, size 0xC
    class vector vecsMember; // offset 0x14, size 0xC
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
class stcPlaceObject2 {
    // total size: 0xC
public:
    unsigned short u16CharacterId; // offset 0x0, size 0x2
    unsigned short u16ClipDepth; // offset 0x2, size 0x2
    float (* psPlaceMtx)[3][2]; // offset 0x4, size 0x4
    class stcCXFormWithAlpha * psCXWithAlpha; // offset 0x8, size 0x4
};
class stcLayer {
    // total size: 0x20
public:
    unsigned int u32DepthNo; // offset 0x0, size 0x4
    class vector vecsSeqTags; // offset 0x4, size 0xC
    class vector * pvecsSeqTags; // offset 0x10, size 0x4
    class clsOOFMObject * pcObject; // offset 0x14, size 0x4
    unsigned int u32RemoveID; // offset 0x18, size 0x4
    unsigned int u32RemoveFrame; // offset 0x1C, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class __wrap_iterator {
    // total size: 0x4
public:
    class stcSeqTag * * it_; // offset 0x0, size 0x4
};
class stcScene {
    // total size: 0x14
public:
    class stcDepthInfo sDepthInfo; // offset 0x0, size 0x8
    unsigned int u32FrameCnt; // offset 0x8, size 0x4
    unsigned int u32CtrlTagNum; // offset 0xC, size 0x4
    class stcTag * psTags; // offset 0x10, size 0x4
};
class stcDrawCamera {
    // total size: 0x6
public:
    unsigned char u8DrawCamNo; // offset 0x0, size 0x1
    unsigned char au8DrawCamData[5]; // offset 0x1, size 0x5
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
struct /* @anon0 */ {
    // total size: 0x1C
};
class stcTaskProfile {
    // total size: 0x14
public:
    signed int s32CurrentPos; // offset 0x0, size 0x4
    signed int s32SortType; // offset 0x4, size 0x4
    signed int s32DownLimit; // offset 0x8, size 0x4
    signed int s32OldNum; // offset 0xC, size 0x4
    signed int s32PageNo; // offset 0x10, size 0x4
};
class stcActIf {
    // total size: 0x8
public:
    unsigned char u8ActCode; // offset 0x0, size 0x1
    unsigned char u8Padding; // offset 0x1, size 0x1
    signed short s16OffSet; // offset 0x2, size 0x2
    void * pvData; // offset 0x4, size 0x4
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
class node {
    // total size: 0x0
};
class __tree : private __red_black_tree {
    // total size: 0x18
public:
    class compressed_pair alloc_; // offset 0x0, size 0x8
    class compressed_pair node_alloc_; // offset 0x8, size 0x8
    class compressed_pair comp_; // offset 0x10, size 0x8
};
class stcActConstantPool {
    // total size: 0xC
public:
    unsigned short u16PoolNum; // offset 0x0, size 0x2
    unsigned short * pu16NameLen; // offset 0x4, size 0x4
    char * * ppc8String; // offset 0x8, size 0x4
};
class stcFgbRect {
    // total size: 0x10
public:
    signed int s32XMin; // offset 0x0, size 0x4
    signed int s32XMax; // offset 0x4, size 0x4
    signed int s32YMin; // offset 0x8, size 0x4
    signed int s32YMax; // offset 0xC, size 0x4
};
class stcBlur {
    // total size: 0x1C
public:
    float f32TakeOverSp; // offset 0x0, size 0x4
    float f32DiveSp; // offset 0x4, size 0x4
    float f32DiveFrame; // offset 0x8, size 0x4
    float f32DiveDown; // offset 0xC, size 0x4
    unsigned short u16BaseW; // offset 0x10, size 0x2
    unsigned short u16BaseH0; // offset 0x12, size 0x2
    unsigned short u16BaseH1; // offset 0x14, size 0x2
    unsigned char u8StartUV; // offset 0x16, size 0x1
    unsigned char u8EndUV; // offset 0x17, size 0x1
    unsigned char u8DiveAlpha; // offset 0x18, size 0x1
    unsigned char u8Alpha; // offset 0x19, size 0x1
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
class stcDefineShape1 {
    // total size: 0x54
public:
    unsigned short u16CharaID; // offset 0x0, size 0x2
    unsigned short u16Padding; // offset 0x2, size 0x2
    class stcFgbRect sShapeBounds; // offset 0x4, size 0x10
    class stcShapeWithStyle sShapeWithStyle; // offset 0x14, size 0x40
};
class stcScriptWave {
    // total size: 0xC
public:
    unsigned char u8TaskPriority; // offset 0x0, size 0x1
    float f32EndFrame; // offset 0x4, size 0x4
    float f32WaitFrame; // offset 0x8, size 0x4
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
class clsOOFMObject {
    // total size: 0x14
public:
    class clsOOFlashMovie * m_pcParent; // offset 0x4, size 0x4
    signed int m_s32CharID; // offset 0x8, size 0x4
    unsigned char m_u8IsDraw; // offset 0xC, size 0x1
    float m_f32DrawZ; // offset 0x10, size 0x4
};
struct /* @anon1 */ {
    // total size: 0x4C
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
class clsOOList : public list {
    // total size: 0x14
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class stcActGotoFrame2 {
    // total size: 0x8
public:
    unsigned char u8ActCode; // offset 0x0, size 0x1
    unsigned char u8BiasFlag; // offset 0x1, size 0x1
    unsigned char u8PlayFlag; // offset 0x2, size 0x1
    unsigned char u8Padding; // offset 0x3, size 0x1
    unsigned short u16SceneBias; // offset 0x4, size 0x2
    unsigned char au8Padding[2]; // offset 0x6, size 0x2
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class __wrap_iterator {
    // total size: 0x4
public:
    class stcKeyListenerSet * * it_; // offset 0x0, size 0x4
};
class stcDepthData {
    // total size: 0x8
public:
    unsigned int u32DepthNo; // offset 0x0, size 0x4
    unsigned int u32InstructNum; // offset 0x4, size 0x4
};
class stcDrawCollision {
    // total size: 0x5
public:
    unsigned char u8DrawPhantom; // offset 0x0, size 0x1
    unsigned char u8DrawGimmick; // offset 0x1, size 0x1
    unsigned char u8DrawMap; // offset 0x2, size 0x1
    unsigned char u8DrawThrough; // offset 0x3, size 0x1
    unsigned char u8DrawSetCamColli; // offset 0x4, size 0x1
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
class reverse_iterator : public iterator {
    // total size: 0x4
public:
    class __wrap_iterator current; // offset 0x0, size 0x4
};
class stcPointPath {
    // total size: 0x4
public:
    unsigned char bIsDrawCoursePath; // offset 0x0, size 0x1
    unsigned char bIsDisableDrawCoursePathSphere; // offset 0x1, size 0x1
    unsigned char bIsDrawComPath; // offset 0x2, size 0x1
    unsigned char bIsDisableDrawComPathSphere; // offset 0x3, size 0x1
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
class vector : private __vector_imp {
    // total size: 0xC
};
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class clsOOFlashMgr {
    // total size: 0x18
public:
    class vector m_vecpcFlashData; // offset 0x4, size 0xC
    class clsOOFMShapeSymbol * (* m_pfCreateShapeSymbol)(); // offset 0x10, size 0x4
    class clsOOFMSprite * (* m_pfCreateSprite)(); // offset 0x14, size 0x4
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
class __wrap_iterator {
    // total size: 0x4
public:
    class stcPushData * it_; // offset 0x0, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class stcKeyListenerSet {
    // total size: 0xC
public:
    class clsOOFMSprite * pcSprite; // offset 0x0, size 0x4
    class stcDoAction * psActRec; // offset 0x4, size 0x4
    class stcScriptObject * psSObj; // offset 0x8, size 0x4
};
class stcScriptNega {
    // total size: 0x14
public:
    unsigned char bUsed; // offset 0x0, size 0x1
    unsigned char u8TaskPriority; // offset 0x1, size 0x1
    unsigned char u8Type; // offset 0x2, size 0x1
    unsigned char u8rgb; // offset 0x3, size 0x1
    float f32StartFrame; // offset 0x4, size 0x4
    float f32SubFrame; // offset 0x8, size 0x4
    float f32EndFrame; // offset 0xC, size 0x4
    float f32WaitFrame; // offset 0x10, size 0x4
};
class __vector_imp : private __vector_deleter {
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
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class vector : private __vector_imp {
    // total size: 0xC
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcPushData * data_; // offset 0x8, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0xC
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcReplaceNode * data_; // offset 0x8, size 0x4
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
struct /* @anon2 */ {
    // total size: 0x48
};
class __wrap_iterator {
    // total size: 0x4
public:
    class stcKeyListenerSet * it_; // offset 0x0, size 0x4
};
class stcActionRec {
    // total size: 0x8
public:
    unsigned char u8ActCode; // offset 0x0, size 0x1
    unsigned char au8Padding[3]; // offset 0x1, size 0x3
    void * pvData; // offset 0x4, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class iterator {
    // total size: 0x1
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
class stcBitFlag {
    // total size: 0x4
public:
    unsigned int bEnableDrawOrigin : 1; // offset 0x0, size 0x4
    unsigned int bDisableGravWave : 1; // offset 0x0, size 0x4
    unsigned int bDisableDrawMap : 1; // offset 0x0, size 0x4
    unsigned int bDisableDrawSky : 1; // offset 0x0, size 0x4
    unsigned int bDisableDrawRing : 1; // offset 0x0, size 0x4
    unsigned int bDisableDrawStGate : 1; // offset 0x0, size 0x4
    unsigned int bDisableDrawSunLenz : 1; // offset 0x0, size 0x4
    unsigned int bDisableDrawWeather : 1; // offset 0x0, size 0x4
    unsigned int bDisablePortal : 1; // offset 0x0, size 0x4
    unsigned int bDisableChangeDebugCamera : 1; // offset 0x0, size 0x4
    unsigned int bEnableGCtrlCamZRot : 1; // offset 0x0, size 0x4
    unsigned int bDisableFastShader_PS2 : 1; // offset 0x0, size 0x4
    unsigned int bEnableBaseEffect : 1; // offset 0x0, size 0x4
    unsigned int bEnableReplayCamera : 1; // offset 0x0, size 0x4
};
class stcParticle {
    // total size: 0x14
public:
    unsigned char bLayerForceStop; // offset 0x0, size 0x1
    unsigned char bAllKill; // offset 0x1, size 0x1
    unsigned char bTaskPriority; // offset 0x2, size 0x1
    unsigned int s32LayerNum; // offset 0x4, size 0x4
    signed int s32PlayNum; // offset 0x8, size 0x4
    signed int s32GearChengeNode; // offset 0xC, size 0x4
    unsigned char u8CarEffect; // offset 0x10, size 0x1
    unsigned char u8VecTest; // offset 0x11, size 0x1
};
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class __wrap_iterator {
    // total size: 0x4
public:
    class stcReplaceNode * it_; // offset 0x0, size 0x4
};
class map {
    // total size: 0x18
public:
    class __tree tree_; // offset 0x0, size 0x18
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class clsOOSubMenu * data_; // offset 0x8, size 0x4
};
class compressed_pair_imp {
    // total size: 0xC
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class node_base second_; // offset 0x4, size 0x8
};
class stcDebugMiniWave {
    // total size: 0x2C
public:
    unsigned char bEnableMiniWaveDebug; // offset 0x0, size 0x1
    unsigned char bAlwaysEnable; // offset 0x1, size 0x1
    unsigned char bDispDebugLine; // offset 0x2, size 0x1
    unsigned char bDispDebugMessage; // offset 0x3, size 0x1
    float f32UVSpeed; // offset 0x4, size 0x4
    float f32StartWidth; // offset 0x8, size 0x4
    float f32EndWidth; // offset 0xC, size 0x4
    float f32MaxWidth; // offset 0x10, size 0x4
    float f32BackLength; // offset 0x14, size 0x4
    float f32ReviseValIn; // offset 0x18, size 0x4
    float f32ReviseValOut; // offset 0x1C, size 0x4
    float f32InclinationAngle; // offset 0x20, size 0x4
    float f32CurveMax; // offset 0x24, size 0x4
    signed int s32CurveTiming; // offset 0x28, size 0x4
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
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class clsOOMainMenu * data_; // offset 0x8, size 0x4
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
class __wrap_iterator {
    // total size: 0x4
public:
    class stcLayer * * it_; // offset 0x0, size 0x4
};
class allocator {
    // total size: 0x1
};
class stcItem {
    // total size: 0x4
public:
    unsigned char bEnableItemDebug; // offset 0x0, size 0x1
    signed short s16SelectItem; // offset 0x2, size 0x2
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class stcActPush {
    // total size: 0x8
public:
    unsigned char u8Type; // offset 0x0, size 0x1
    unsigned char u8Padding; // offset 0x1, size 0x1
    unsigned short u16Num; // offset 0x2, size 0x2
    class stcPushData * psPushData; // offset 0x4, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
struct /* @anon3 */ {
    // total size: 0x68
};
class __wrap_iterator {
    // total size: 0x4
public:
    class clsOOFMObject * * it_; // offset 0x0, size 0x4
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcScriptVar * data_; // offset 0x8, size 0x4
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
class __wrap_iterator {
    // total size: 0x4
public:
    class stcLayer * * it_; // offset 0x0, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class stcScriptBlur {
    // total size: 0x18
public:
    unsigned char bUsed; // offset 0x0, size 0x1
    unsigned char u8Type; // offset 0x1, size 0x1
    unsigned char u8Alpha; // offset 0x2, size 0x1
    float f32Per; // offset 0x4, size 0x4
    float f32GPer; // offset 0x8, size 0x4
    float f32WaitFrame; // offset 0xC, size 0x4
    float f32GFrame; // offset 0x10, size 0x4
    unsigned char u8StartUV; // offset 0x14, size 0x1
    unsigned char u8EndUV; // offset 0x15, size 0x1
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
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
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
class allocator {
    // total size: 0x1
};
class clsOODraw2d {
    // total size: 0xC
public:
    unsigned char m_bWide2dConv; // offset 0x0, size 0x1
    unsigned int m_eTexFlag; // offset 0x8, size 0x4
};
enum enmScriptObjType {
    SOBJTYPE_OBJECT = 1,
    SOBJTYPE_NUMBER = 2,
    SOBJTYPE_STRING = 3,
    SOBJTYPE_ARRAY = 4,
    SOBJTYPE_KEY = 5,
    SOBJTYPE_NUM = 6,
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class __wrap_iterator {
    // total size: 0x4
public:
    class clsOOFMSprite * * it_; // offset 0x0, size 0x4
};
class reverse_iterator : public iterator {
    // total size: 0x4
public:
    class __wrap_iterator current; // offset 0x0, size 0x4
};
class stcComTime {
    // total size: 0x1BEA
public:
    unsigned char bEnableComDebug; // offset 0x0, size 0x1
    unsigned short au16StackNum[8]; // offset 0x2, size 0x10
    unsigned char au8LeaderRank[8][99]; // offset 0x12, size 0x318
    class stcRaceTime asRoundTime[8][99]; // offset 0x32A, size 0xC60
    class stcRaceTime asDelayTime[8][99]; // offset 0xF8A, size 0xC60
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
class stcDraw2D {
    // total size: 0x84
public:
    unsigned int u32Page; // offset 0x0, size 0x4
    unsigned char bHide; // offset 0x4, size 0x1
    unsigned char bSafeArea; // offset 0x5, size 0x1
    unsigned char bUnSafeArea; // offset 0x6, size 0x1
    unsigned char bCenterLine; // offset 0x7, size 0x1
    unsigned char b2DAreaInfo; // offset 0x8, size 0x1
    unsigned char bNowLoading; // offset 0x9, size 0x1
    class stcEseLoadingCircle sRed; // offset 0xC, size 0x28
    class stcEseLoadingCircle sYellow; // offset 0x34, size 0x28
    class stcEseLoadingCircle sBlue; // offset 0x5C, size 0x28
};
class stcPolyVert {
    // total size: 0xC
public:
    float f32X; // offset 0x0, size 0x4
    float f32Y; // offset 0x4, size 0x4
    unsigned int u32Color; // offset 0x8, size 0x4
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
class vector : private __vector_imp {
    // total size: 0xC
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
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class NVS_SVRHEADER {
    // total size: 0x8
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short miplevel; // offset 0x2, size 0x2
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
};
class iterator {
    // total size: 0x1
};
class vector : private __vector_imp {
    // total size: 0xC
};
class allocator {
    // total size: 0x1
};
class stcStraightEdgeRec {
    // total size: 0xC
public:
    unsigned char u8LineType; // offset 0x0, size 0x1
    unsigned char au8Padding[3]; // offset 0x1, size 0x3
    signed int s32DeltaX; // offset 0x4, size 0x4
    signed int s32DeltaY; // offset 0x8, size 0x4
};
class __wrap_iterator {
    // total size: 0x4
public:
    class stcScriptObject * * it_; // offset 0x0, size 0x4
};
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
class clsOOMainHeap : public clsOOHeapFragment {
    // total size: 0x34
};
class clsOOSubMenu {
    // total size: 0x8
public:
    char * m_opc8Name; // offset 0x0, size 0x4
    signed int (* m_oFunc)(signed int, signed int, signed int, signed int); // offset 0x4, size 0x4
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
class __wrap_iterator {
    // total size: 0x4
public:
    class stcScriptVar * it_; // offset 0x0, size 0x4
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
class stcDebugGrind {
    // total size: 0x10
public:
    unsigned char bEnableGrindDebug; // offset 0x0, size 0x1
    float f32GrindSpeed; // offset 0x4, size 0x4
    float f32GrindAcceleFrame; // offset 0x8, size 0x4
    signed int s32PathRate; // offset 0xC, size 0x4
};
class stcRaceTime {
    // total size: 0x4
public:
    unsigned char u8Minutes; // offset 0x0, size 0x1
    unsigned char u8Sec; // offset 0x1, size 0x1
    unsigned short u16MSec; // offset 0x2, size 0x2
};
class binary_function {
    // total size: 0x1
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class stcEseLoadingCircle {
    // total size: 0x28
public:
    class NNS_VECTOR sCurRot; // offset 0x0, size 0xC
    class NNS_VECTOR sAddRot; // offset 0xC, size 0xC
    class NNS_VECTOR sBaseRot; // offset 0x18, size 0xC
    float f32Scale; // offset 0x24, size 0x4
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
class stcScriptVar {
    // total size: 0x8
public:
    char * pc8Name; // offset 0x0, size 0x4
    class stcPushData * psData; // offset 0x4, size 0x4
};
class stcScriptInfo {
    // total size: 0x5
public:
    unsigned char bFrame; // offset 0x0, size 0x1
    unsigned char bBlur; // offset 0x1, size 0x1
    unsigned char bNega; // offset 0x2, size 0x1
    unsigned char bWave; // offset 0x3, size 0x1
    unsigned char bMemoryBar; // offset 0x4, size 0x1
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
class clsModelViewer_Task : public clsTask {
    // total size: 0xBC
public:
    void * m_apv8BinBuffer[6]; // offset 0x54, size 0x18
    signed char m_s8CursorPos; // offset 0x6C, size 0x1
    void * m_pvFreeLoFrame; // offset 0x70, size 0x4
    class NNS_VECTOR m_sParticleTarget; // offset 0x74, size 0xC
    void * m_pvParticleData; // offset 0x80, size 0x4
    void * m_pvParticleTexture; // offset 0x84, size 0x4
    class clsModelType_OB_TX_MO_MA_MF m_cModel; // offset 0x88, size 0x34
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
class stcPeripheral {
    // total size: 0x30
public:
    class stcPeripheral sOO; // offset 0x0, size 0x20
    signed char m_s8X1; // offset 0x20, size 0x1
    signed char m_s8Y1; // offset 0x21, size 0x1
    signed char m_s8X2; // offset 0x22, size 0x1
    signed char m_s8Y2; // offset 0x23, size 0x1
    unsigned short m_u16RumbleFrame; // offset 0x24, size 0x2
    unsigned short m_u16RumbleFrameOld; // offset 0x26, size 0x2
    unsigned char m_u8L1; // offset 0x28, size 0x1
    unsigned char m_u8R1; // offset 0x29, size 0x1
    unsigned char m_u8L2; // offset 0x2A, size 0x1
    unsigned char m_u8R2; // offset 0x2B, size 0x1
    unsigned char m_su8PadInitFlag; // offset 0x2C, size 0x1
    unsigned char m_u8RetryCnt; // offset 0x2D, size 0x1
    unsigned char m_bDisableRumble; // offset 0x2E, size 0x1
    unsigned char m_bConfigueDisableRumble; // offset 0x2F, size 0x1
};
class allocator {
    // total size: 0x1
};
enum enmAddRepPlace {
    ADDREP_SKIP_PLACE = 0,
    ADDREP_CALL_PLACE = 1,
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class stcPushData {
    // total size: 0x10
public:
    unsigned char u8Type; // offset 0x0, size 0x1
    class uniPushData uData; // offset 0x8, size 0x8
};
class allocator {
    // total size: 0x1
};
class stcDrawPath {
    // total size: 0x2B
public:
    signed char s8PathType; // offset 0x0, size 0x1
    signed char as8LineNo[7]; // offset 0x1, size 0x7
    unsigned char au8DispFlag[7][5]; // offset 0x8, size 0x23
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
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class anchor second_; // offset 0x4, size 0x4
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
class stcPendulum {
    // total size: 0x28
public:
    float f32MaxAngle; // offset 0x0, size 0x4
    float f32AngularDamping; // offset 0x4, size 0x4
    float f32Mass; // offset 0x8, size 0x4
    float f32CenterMass; // offset 0xC, size 0x4
    float f32Force; // offset 0x10, size 0x4
    float f32CounterAngle; // offset 0x14, size 0x4
    float f32MaxAngleVelocity; // offset 0x18, size 0x4
    float f32Angle; // offset 0x1C, size 0x4
    float f32AngleSpeed; // offset 0x20, size 0x4
    unsigned char u8CounterLevel; // offset 0x24, size 0x1
    unsigned char u8LineNum; // offset 0x25, size 0x1
    unsigned char u8EnablePendulum; // offset 0x26, size 0x1
    unsigned char u8EnableParam; // offset 0x27, size 0x1
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
class stcNegaZ {
    // total size: 0x8
public:
    signed int s32z; // offset 0x0, size 0x4
    unsigned char u8ColNo; // offset 0x4, size 0x1
    unsigned char u8r; // offset 0x5, size 0x1
    unsigned char u8g; // offset 0x6, size 0x1
    unsigned char u8b; // offset 0x7, size 0x1
};
struct /* @anon4 */ {
    // total size: 0x48
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
class vector : private __vector_imp {
    // total size: 0xC
};
class clsOOMainMenu {
    // total size: 0x14
public:
    char * m_opc8Name; // offset 0x0, size 0x4
    signed char m_s8SubMenuNum; // offset 0x4, size 0x1
    class vector m_cSubMenu; // offset 0x8, size 0xC
};
class clsRainDrops_Task : public clsTask {
    // total size: 0x2E4
public:
    class stcDetail m_sDetail[32]; // offset 0x54, size 0x280
    unsigned char m_u8DetailLoopNo; // offset 0x2D4, size 0x1
    unsigned long long * m_pu64GsPacket_DrawRainDrops; // offset 0x2D8, size 0x4
    unsigned int m_u32MY; // offset 0x2DC, size 0x4
    float m_f32GSDH; // offset 0x2E0, size 0x4
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
struct /* @anon5 */ {
    // total size: 0xC
};
class stcExportAssets {
    // total size: 0x8
public:
    unsigned short u16Num; // offset 0x0, size 0x2
    unsigned short u16Padding; // offset 0x2, size 0x2
    class stcExportInner * psExInner; // offset 0x4, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class stcBurnOut {
    // total size: 0x50
public:
    class NNS_VECTOR sRandSp; // offset 0x0, size 0xC
    class NNS_VECTOR sBeginSp; // offset 0xC, size 0xC
    class NNS_VECTOR sLocalPos; // offset 0x18, size 0xC
    class NNS_VECTOR sLocalPosRandRange; // offset 0x24, size 0xC
    float f32GroundK; // offset 0x30, size 0x4
    float f32AirK; // offset 0x34, size 0x4
    float f32Mass; // offset 0x38, size 0x4
    unsigned int u32MaxLifeFrame; // offset 0x3C, size 0x4
    unsigned char u8Num; // offset 0x40, size 0x1
    signed char s8TextureNo; // offset 0x41, size 0x1
    unsigned char u8Size; // offset 0x42, size 0x1
    unsigned char bPers; // offset 0x43, size 0x1
    float f32ColiY; // offset 0x44, size 0x4
    float f32MaxClipZ; // offset 0x48, size 0x4
    unsigned char bAllDelete; // offset 0x4C, size 0x1
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
class vector : private __vector_imp {
    // total size: 0xC
};
class stcDFieldDbg {
    // total size: 0x10
public:
    float f32Dist; // offset 0x0, size 0x4
    unsigned int u32Size; // offset 0x4, size 0x4
    unsigned char u8View; // offset 0x8, size 0x1
    unsigned char u8PlayerNo; // offset 0x9, size 0x1
    class clsRainDrops_Task * pcRD_Task; // offset 0xC, size 0x4
};
class clsOODebugMenu {
    // total size: 0x38
public:
    signed char m_s8DrawDefX; // offset 0x0, size 0x1
    signed char m_s8DrawDefY; // offset 0x1, size 0x1
    unsigned int m_u32ChangeTrig; // offset 0x4, size 0x4
    unsigned int m_u32ChangeBeta; // offset 0x8, size 0x4
    unsigned int m_u32ChangeOneTimeTrig; // offset 0xC, size 0x4
    unsigned int m_u32SpeedUpBeta; // offset 0x10, size 0x4
    signed char m_s8SystemMenuNo; // offset 0x14, size 0x1
    unsigned char m_bDisableExecDetail; // offset 0x15, size 0x1
    signed char m_s8SystemMenuMoveX; // offset 0x16, size 0x1
    signed char m_s8MainMenuMoveX; // offset 0x17, size 0x1
    signed char m_s8SubMenuMoveX; // offset 0x18, size 0x1
    signed char m_s8DetailMoveX; // offset 0x19, size 0x1
    signed char m_s8DetailMoveY; // offset 0x1A, size 0x1
    class vector m_cMainMenu; // offset 0x1C, size 0xC
    class __wrap_iterator m_iUrawaza; // offset 0x28, size 0x4
    enum enmDraw m_eDraw; // offset 0x2C, size 0x4
    unsigned char m_bUrawaza; // offset 0x30, size 0x1
    signed char m_s8MainMenuCursorNo; // offset 0x31, size 0x1
    signed char m_s8SubMenuCursorNo; // offset 0x32, size 0x1
    signed char m_s8DetailCursorNo; // offset 0x33, size 0x1
    signed char m_s8DetailNum; // offset 0x34, size 0x1
    signed char m_s8MainMenuNum; // offset 0x35, size 0x1
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
class SNDF_PSPRM {
    // total size: 0x180
public:
    unsigned int porttbl[48]; // offset 0x0, size 0xC0
    unsigned int portpcm[48]; // offset 0xC0, size 0xC0
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
class stcPeripheral {
    // total size: 0x20
public:
    unsigned int m_u32Beta; // offset 0x0, size 0x4
    unsigned int m_u32Trig; // offset 0x4, size 0x4
    unsigned int m_u32Rel; // offset 0x8, size 0x4
    unsigned int m_u32Rep; // offset 0xC, size 0x4
    unsigned int m_u32RepCnt; // offset 0x10, size 0x4
    unsigned int m_u32LoopRepCnt; // offset 0x14, size 0x4
    unsigned int m_u32UnInputFrame; // offset 0x18, size 0x4
    unsigned char m_u8PeripheralNo; // offset 0x1C, size 0x1
    unsigned char m_u8ConnectNo; // offset 0x1D, size 0x1
    unsigned char m_u8State; // offset 0x1E, size 0x1
    unsigned char m_u8Paddin[1]; // offset 0x1F, size 0x1
};
class __wrap_iterator {
    // total size: 0x4
public:
    class clsOOSubMenu * it_; // offset 0x0, size 0x4
};
class clsDebug : public clsSingleton {
    // total size: 0x1F94
public:
    unsigned char m_au8DisableDrawPlayer[8]; // offset 0x4, size 0x8
    signed int m_s32ShimmerZ; // offset 0xC, size 0x4
    unsigned char m_u8ShimmerA; // offset 0x10, size 0x1
    class clsOODebugMenu m_cOOMenu; // offset 0x14, size 0x38
    class clsModelViewer_Task * m_pcModelViewer_Task; // offset 0x4C, size 0x4
    class stcBitFlag m_sBitFlag; // offset 0x50, size 0x4
    class stcBlur m_sBlur; // offset 0x54, size 0x1C
    class stcBurnOutSystem m_sBurnOutSystem; // offset 0x70, size 0x3
    class stcBurnOut m_sBurnOut; // offset 0x74, size 0x50
    class stcDraw2D m_sDraw2D; // offset 0xC4, size 0x84
    class stcParticle m_sParticle; // offset 0x148, size 0x14
    class stcDrawCollision m_sDrawCollision; // offset 0x15C, size 0x5
    class stcDrawCamera m_sDrawCamera; // offset 0x161, size 0x6
    class stcTurbulenceDbg m_sTurbDbg; // offset 0x167, size 0x5
    class stcDFieldDbg m_sDFDbg; // offset 0x16C, size 0x10
    class stcDrawPath m_sDrawPath; // offset 0x17C, size 0x2B
    class stcDebugGrind m_sGrind; // offset 0x1A8, size 0x10
    class stcDebugMiniWave m_sMiniWave; // offset 0x1B8, size 0x2C
    class stcPointPath m_sPointPath; // offset 0x1E4, size 0x4
    class stcFollowLine m_asFollowLine[4]; // offset 0x1E8, size 0x100
    class stcPendulum m_sPendulum; // offset 0x2E8, size 0x28
    class stcScriptInfo m_sScriptInfo; // offset 0x310, size 0x5
    class stcScriptBlur m_sScriptBlur; // offset 0x318, size 0x18
    class stcScriptNega m_sScriptNega; // offset 0x330, size 0x14
    class stcScriptWave m_sScriptWave; // offset 0x344, size 0xC
    class stcDataSize m_sDataSize; // offset 0x350, size 0x18
    class stcGDTrainData m_sGDTrainDbg; // offset 0x368, size 0x5
    class stcNegaZ m_sNegaZ; // offset 0x370, size 0x8
    class stcComTime m_sComTime; // offset 0x378, size 0x1BEA
    class stcItem m_sItem; // offset 0x1F62, size 0x4
    unsigned char * m_pu8MapBuffer; // offset 0x1F68, size 0x4
    enum enmRet m_eStageBinBuffer_Ret; // offset 0x1F6C, size 0x4
    signed int m_s32FollowLineNo; // offset 0x1F70, size 0x4
    class stcTaskProfile m_sTaskProfile; // offset 0x1F74, size 0x14
    signed short m_s16DivMap_DrawFlg; // offset 0x1F88, size 0x2
    unsigned char m_u8DivMap_DrawType; // offset 0x1F8A, size 0x1
    unsigned char m_u8FlushDebugLine; // offset 0x1F8B, size 0x1
    unsigned char m_au8IsDebugMode[5]; // offset 0x1F8C, size 0x5
};
class anchor {
    // total size: 0x4
public:
    class node_base * left_; // offset 0x0, size 0x4
};
class reverse_iterator : public iterator {
    // total size: 0x4
public:
    class __wrap_iterator current; // offset 0x0, size 0x4
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
class stcDetail {
    // total size: 0x14
public:
    float f32LifeFrame; // offset 0x0, size 0x4
    unsigned short u16x; // offset 0x4, size 0x2
    unsigned short u16y; // offset 0x6, size 0x2
    unsigned char u8r; // offset 0x8, size 0x1
    unsigned char u8rShift1; // offset 0x9, size 0x1
    signed char s8Uv; // offset 0xA, size 0x1
    unsigned char u8ViewportNo; // offset 0xB, size 0x1
    float f32Alpha; // offset 0xC, size 0x4
    class NNS_VECTORFAST * psGrowAndPosVF; // offset 0x10, size 0x4
};
class stcGDTrainData {
    // total size: 0x5
public:
    unsigned char bEnableDebug; // offset 0x0, size 0x1
    unsigned char u8TrainNo; // offset 0x1, size 0x1
    unsigned char u8StartRank[3]; // offset 0x2, size 0x3
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
class allocator {
    // total size: 0x1
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
class stcFollowLine {
    // total size: 0x40
public:
    unsigned int u32Flg; // offset 0x0, size 0x4
    signed int s32DataMax; // offset 0x4, size 0x4
    signed int s32DrawBorn; // offset 0x8, size 0x4
    float f32Width; // offset 0xC, size 0x4
    float f32Height; // offset 0x10, size 0x4
    float f32Depth; // offset 0x14, size 0x4
    float f32OfsX; // offset 0x18, size 0x4
    float f32OfsY; // offset 0x1C, size 0x4
    float f32OfsZ; // offset 0x20, size 0x4
    signed short s16LineInter; // offset 0x24, size 0x2
    float f32StTu; // offset 0x28, size 0x4
    float f32EdTu; // offset 0x2C, size 0x4
    unsigned char u8StAlpha; // offset 0x30, size 0x1
    unsigned char u8EdAlpha; // offset 0x31, size 0x1
    float f32TrickWidth; // offset 0x34, size 0x4
    float f32TrickSize; // offset 0x38, size 0x4
    unsigned char u8r; // offset 0x3C, size 0x1
    unsigned char u8g; // offset 0x3D, size 0x1
    unsigned char u8b; // offset 0x3E, size 0x1
};
class stcTurbulenceDbg {
    // total size: 0x5
public:
    unsigned char u8DrawFlg; // offset 0x0, size 0x1
    unsigned char u8DrawIdx; // offset 0x1, size 0x1
    unsigned char u8NoDead; // offset 0x2, size 0x1
    unsigned char u8DrawTrickLine; // offset 0x3, size 0x1
    unsigned char u8Disable; // offset 0x4, size 0x1
};
class __pointer_plus_bit {
    // total size: 0x4
public:
    class node_base * ptr_; // offset 0x0, size 0x4
};
enum enmDraw {
    DRAW___NON = 0,
    DRAW___ING = 1,
    DRAW___ONE_TIME_CHANGE = 2,
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

// Range: 0x4ADB70 -> 0x4ADCDC
void setFrameLabel(class clsOOFlashPlayer * this /* r20 */, char * opc8Label /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4ADB70 -> 0x4ADCDC
    }
}


// Range: 0x4ADCE0 -> 0x4ADD94
void setFrame(class clsOOFlashPlayer * this /* r16 */, unsigned int ou32Frame /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4ADCE0 -> 0x4ADD94
    }
}


// Range: 0x4ADDA0 -> 0x4ADEDC
void setPlayName(class clsOOFlashPlayer * this /* r22 */, char * opc8SpriteName /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4ADDA0 -> 0x4ADEDC
        unsigned int u32Idx; // r29+0x9C
    }
}


// Range: 0x4ADEE0 -> 0x4ADF7C
void draw(class clsOOFlashPlayer * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4ADEE0 -> 0x4ADF7C
    }
}


// Range: 0x4ADF90 -> 0x4AE074
void addNextFrame(class clsOOFlashPlayer * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4ADF90 -> 0x4AE074
    }
}


// Range: 0x4AE1C0 -> 0x4AE2C4
void execute(class clsOOFlashPlayer * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AE1C0 -> 0x4AE2C4
    }
}


// Range: 0x4AE2D0 -> 0x4AE31C
void * __dt(class clsOOFlashPlayer * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AE2D0 -> 0x4AE31C
    }
}


// Range: 0x4AE320 -> 0x4AE358
void * __ct(class clsOOFlashPlayer * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AE320 -> 0x4AE358
    }
}


// Range: 0x4AE360 -> 0x4AE378
class stcPlaceObject2 * getLayerPlaceObjectPtr(class clsOOFlashMovie * this /* r2 */, signed int s32Idx /* r2 */, signed int s32Layer /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AE360 -> 0x4AE378
    }
}


// Range: 0x4AE380 -> 0x4AE408
void setDrawZ(class clsOOFlashMovie * this /* r2 */, signed int s32Idx /* r2 */, float f32z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AE380 -> 0x4AE408
    }
}


// Range: 0x4AE410 -> 0x4AE434
void setPlace(class clsOOFlashMovie * this /* r2 */, signed int s32Idx /* r2 */, class stcPlaceObject2 * psPlaceObj /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AE410 -> 0x4AE434
    }
}


// Range: 0x4AE440 -> 0x4AE504
void drawSingle(class clsOOFlashMovie * this /* r18 */, signed int s32Idx /* r17 */, unsigned char bStop /* r16 */, class stcPlaceObject2 * psPlaceObj /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AE440 -> 0x4AE504
    }
}


// Range: 0x4AE510 -> 0x4AE594
void draw(class clsOOFlashMovie * this /* r16 */, unsigned int u32SpriteNo /* r17 */, class stcPlaceObject2 * psPlaceObj /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AE510 -> 0x4AE594
    }
}


// Range: 0x4AE5A0 -> 0x4AE5C0
void execute(class clsOOFlashMovie * this /* r2 */, unsigned int u32SpriteNo /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AE5A0 -> 0x4AE5C0
    }
}


// Range: 0x4AE5C0 -> 0x4AE6F8
unsigned int setValueNumber(class clsOOFlashMovie * this /* r19 */, unsigned char u8Type /* r18 */, unsigned int u32Num /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AE5C0 -> 0x4AE6F8
        class __wrap_iterator it'78; // r2
        class __wrap_iterator it; // r29+0x6C
    }
}


// Range: 0x4AE700 -> 0x4AE888
unsigned int getValueNumber(class clsOOFlashMovie * this /* r18 */, unsigned char u8Type /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AE700 -> 0x4AE888
        class __wrap_iterator it'76; // r2
        class __wrap_iterator it; // r29+0x5C
    }
}


// Range: 0x4AE890 -> 0x4AED40
void * __dt(class clsOOFlashMovie * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AE890 -> 0x4AED40
        class __wrap_iterator itObject'227; // r2
        class __wrap_iterator itSprite'226; // r2
        class __wrap_iterator itImport'225; // r2
        class __wrap_iterator itSObj'224; // r2
        class __wrap_iterator itSVar'223; // r2
        class __wrap_iterator itObject; // r29+0x7C
        class __wrap_iterator itSprite; // r29+0x78
        class __wrap_iterator itImport; // r29+0x74
        class __wrap_iterator itSObj; // r29+0x70
        class __wrap_iterator itSVar; // r29+0x6C
    }
}


// Range: 0x4AED40 -> 0x4AF0D0
void execKeyListener(class clsOOFlashMovie * this /* r18 */, signed int s32SpriteNo /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AED40 -> 0x4AF0D0
        class reverse_iterator itsKeyL'218; // r2
        class __wrap_iterator itListener'216; // r2
        class __wrap_iterator itFunc'215; // r2
        class reverse_iterator itsKeyL; // r29+0x9C
        class vector vecpsListener; // r29+0x40
        class __wrap_iterator itListener; // r29+0x98
        class __wrap_iterator itFunc; // r29+0x94
    }
}


// Range: 0x4AF0D0 -> 0x4AF300
unsigned int setupFlash(class clsOOFlashMovie * this /* r17 */, class stcFlash * psFlash /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AF0D0 -> 0x4AF300
        unsigned int u32n; // r19
        class clsOOFMShapeSymbol * pcFMSS; // r29+0x7C
        class clsOOFMSprite * pcFMSp; // r29+0x78
        class clsOOFMObject * pcObject; // r29+0x74
        unsigned int u32i; // r21
    }
}


// Range: 0x4AF300 -> 0x4AF3A4
void resetVert(class clsOOFMSprite * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AF300 -> 0x4AF3A4
        class __wrap_iterator it'55; // r2
        class __wrap_iterator it; // r29+0x3C
    }
}


// Range: 0x4AF3B0 -> 0x4AF5BC
void addReplaceObject(class clsOOFMSprite * this /* r21 */, unsigned int u32TargetID /* r20 */, class clsOOFMObject * pcObject /* r19 */, enum enmAddRepPlace eIsPlace /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AF3B0 -> 0x4AF5BC
        class __wrap_iterator it'112; // r2
        class __wrap_iterator itLayer'111; // r2
        class __wrap_iterator it; // r29+0x7C
        class stcReplaceNode sNode; // r29+0x70
        class __wrap_iterator itLayer; // r29+0x78
        class stcPlaceObject2 * psPlace; // r17
    }
}


// Range: 0x4AF5C0 -> 0x4AF700
class clsOOFMObject * duplicate(class clsOOFMSprite * this /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AF5C0 -> 0x4AF700
        class __wrap_iterator itNew'80; // r19
        class __wrap_iterator itOwn'79; // r2
        class __wrap_iterator itNew; // r29+0x5C
        class __wrap_iterator itOwn; // r29+0x58
    }
}


// Range: 0x4AF700 -> 0x4AF7A0
class stcPlaceObject2 * getLayerPlaceObjectPtr(class clsOOFMSprite * this /* r2 */, signed int s32Layer /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AF700 -> 0x4AF7A0
        class __wrap_iterator it'57; // r2
        signed int s32LayerNo; // r8
        class __wrap_iterator it; // r29+0x1C
        class clsOOFMShapeSymbol * pcSymbol; // r7
    }
}


// Range: 0x4AF7B0 -> 0x4AF86C
void clearSeqEnd(class clsOOFMSprite * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AF7B0 -> 0x4AF86C
        class __wrap_iterator itLayer'58; // r2
        class __wrap_iterator itLayer; // r29+0x3C
    }
}


// Range: 0x4AF870 -> 0x4AFB14
void draw(class clsOOFMSprite * this /* r21 */, signed int s32X /* r20 */, signed int s32Y /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AF870 -> 0x4AFB14
        class __wrap_iterator it'98; // r2
        class __wrap_iterator it; // r29+0x7C
        unsigned char u8ClipCnt; // r18
        unsigned char u8MaskDraw; // r17
    }
}


// Range: 0x4AFB70 -> 0x4AFBB4
void execJump(class clsOOFMSprite * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AFB70 -> 0x4AFBB4
    }
}


// Range: 0x4AFBC0 -> 0x4AFD48
void place(class clsOOFMSprite * this /* r17 */, class stcPlaceObject2 * psPlaceObj /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AFBC0 -> 0x4AFD48
        float (* psMtx)[3][2]; // r2
    }
}


// Range: 0x4AFE20 -> 0x4AFE30
void place2(class clsOOFMSprite * this /* r2 */, class stcPlaceObject2 * psPlaceObj /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AFE20 -> 0x4AFE30
    }
}


// Range: 0x4AFE30 -> 0x4AFF44
class clsOOFMObject * getExportObject(class clsOOFlashMovie * this /* r21 */, char * opc8Name /* r20 */, unsigned int * pu32Idx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AFE30 -> 0x4AFF44
        unsigned int u32n; // r19
        unsigned int u32i; // r18
        unsigned int u32Tmp; // r29+0x8C
        unsigned int * pu32Out; // r22
    }
}


// Range: 0x4AFF50 -> 0x4B00A4
class clsOOFMObject * getCharacter(class clsOOFlashMovie * this /* r2 */, unsigned int u32CharaID /* r2 */, unsigned int * pu32Idx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4AFF50 -> 0x4B00A4
        class __wrap_iterator itSprite'103; // r2
        class __wrap_iterator itObject'102; // r2
        class __wrap_iterator itImport'101; // r2
        class __wrap_iterator itSprite; // r29+0xC
        class __wrap_iterator itObject; // r29+0x8
        class __wrap_iterator itImport; // r29+0x4
        unsigned int u32Idx; // r11
        unsigned int u32Tmp; // r29
        unsigned int * pu32Out; // r2
    }
}


// Range: 0x4B00B0 -> 0x4B012C
void delKeyListener(class clsOOFlashMovie * this /* r2 */, class stcScriptObject * psSObj /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B00B0 -> 0x4B012C
        class __wrap_iterator it'55; // r2
        class __wrap_iterator it; // r29+0x1C
    }
}


// Range: 0x4B0130 -> 0x4B0240
void * __ct(class clsOOFlashMovie * this /* r16 */, class clsOOFlashMgr * pcFlashMgr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B0130 -> 0x4B0240
    }
}


// Range: 0x4B0240 -> 0x4B0E34
void place(class clsOOFMShapeSymbol * this /* r2 */, class stcPlaceObject2 * psPlaceObj /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B0240 -> 0x4B0E34
        float f32x; // r29+0x270
        float f32y; // r29+0x270
        unsigned int u32n; // r25
        float (* psMtx)[3][2]; // r2
        class stcCXFormWithAlpha * psCXWithAlpha; // r2
        class stcPolyVertUV * psV; // r24
        class stcPolyVertUV * psBV; // r15
        class stcPolyVert * psV; // r17
        class stcPolyVert * psBV; // r16
    }
}


// Range: 0x4B0E40 -> 0x4B0E50
void place2(class clsOOFMShapeSymbol * this /* r2 */, class stcPlaceObject2 * psPlaceObj /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B0E40 -> 0x4B0E50
    }
}


// Range: 0x4B0E50 -> 0x4B0E5C
void flashPlace(class clsOOFMShapeSymbol * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B0E50 -> 0x4B0E5C
    }
}


// Range: 0x4B0E60 -> 0x4B10B8
void draw(class clsOOFMShapeSymbol * this /* r20 */, signed int s32X /* r2 */, signed int s32Y /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B0E60 -> 0x4B10B8
        unsigned int u32n; // r19
        unsigned int u32Idx; // r18
        class clsOODraw2d * pcDraw2d; // r17
    }
}


// Range: 0x4B10C0 -> 0x4B130C
void replaceOffSet(class clsOOFMShapeSymbol * this /* r2 */, signed int s32X /* r2 */, signed int s32Y /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B10C0 -> 0x4B130C
        class stcShapeVert * psSV; // r10
        unsigned int u32n; // r9
        unsigned int u32Idx; // r8
        unsigned int u32i; // r13
    }
}


// Range: 0x4B1310 -> 0x4B1404
void resetVert(class clsOOFMShapeSymbol * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B1310 -> 0x4B1404
        unsigned int u32n; // r6
        unsigned int u32n; // r6
    }
}


// Range: 0x4B1410 -> 0x4B1680
unsigned int setupShape(class clsOOFMShapeSymbol * this /* r17 */, class stcDefineShape1 * psDefShape1 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B1410 -> 0x4B1680
        class stcShapeVert * psSVert; // r2
        unsigned int u32n; // r9
        unsigned int u32TotalVNum; // r3
        unsigned int u32Color; // r2
        signed int s32X; // r8
        signed int s32Y; // r7
    }
}


// Range: 0x4B1680 -> 0x4B1734
void * __dt(class clsOOFMShapeSymbol * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B1680 -> 0x4B1734
    }
}


// Range: 0x4B1740 -> 0x4B1864
class clsOOFMObject * duplicate(class clsOOFMShapeSymbol * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B1740 -> 0x4B1864
    }
}


// Range: 0x4B1870 -> 0x4B2DBC
void actCallFunction(class clsOOFMSprite * this /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B1870 -> 0x4B2DBC
        class stcPushData sPushName; // r29+0x120
        class stcPushData sPushArgNum; // r29+0x110
        class stcPushData sPushValue; // r29+0x100
        class stcPushData sPushValue2; // r29+0xF0
        char * pc8Name1; // r22
        char * pc8Name2; // r23
        unsigned char u8Pad; // r2
        class stcPushData asArgs[4]; // r29+0xB0
        unsigned int u32ArgN; // r18
        unsigned int u32No; // r29+0x22C
        char * pc8Name; // r22
    }
}


// Range: 0x4B3000 -> 0x4B5C2C
void execAScript(class clsOOFMSprite * this /* r20 */, class stcDoAction * psAction /* r23 */, unsigned int u32PcN /* r19 */, unsigned int ou32ExecNum /* r29+0x11C */, class stcActConstantPool * psConstantPool /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B3000 -> 0x4B5C2C
        class __wrap_iterator itScrFunc'1836; // r2
        class __wrap_iterator itScrVar'1834; // r2
        class stcActionRec * psARecPC; // r18
        unsigned int u32n; // r2
        unsigned short u16n; // r17
        unsigned int u32ExecNum; // r2
        unsigned int u32A; // r2
        unsigned int u32B; // r2
        char * pc8Name; // r16
        unsigned int u32Tmp; // r17
        unsigned int u32TmpN; // r2
        class stcPushData sPushName; // r29+0x200
        class stcPushData sPushValue; // r29+0x1F0
        class stcPushData sNewPushData; // r29+0x1E0
        class stcPushData sStackName; // r29+0x1D0
        class stcPushData sPushValue2; // r29+0x1C0
        class stcPushData sPushListenerObj; // r29+0x1B0
        class stcScriptObject * psSObj; // r2
        class stcScriptObject * psListenerObj; // r2
        class __wrap_iterator itScrVar; // r29+0x44C
        class __wrap_iterator itScrFunc; // r29+0x448
        class stcActPush * psPush; // r2
        class reverse_iterator itr; // r29+0x444
        unsigned int u32A; // r2
        unsigned int u32A; // r2
        unsigned int u32A; // r2
        class stcActIf * psActIf; // r2
        unsigned int u32Frame; // r2
        unsigned int u32i; // r16
        enum enmScriptObjType eObjType; // r29+0x118
        class stcActDefineFunction * psDefFunc; // r2
        class stcScriptFunc sSFunc; // r29+0x190
        class stcScriptFunc sFunc; // r29+0x170
        class stcActDefineFunction2 * psDefFunc2; // r2
        class stcScriptFunc sSFunc; // r29+0x150
        class stcScriptFunc sFunc; // r29+0x130
        class stcPushData sPushKey; // r29+0x120
        class stcActGotoFrame2 * psActGT2; // r2
        unsigned int u32JumpFrm; // r30
        class stcScriptVar sMember; // r29+0x220
        class stcScriptVar * psMember; // r22
        class stcScriptFunc * psScriptFunc; // r2
        class stcActIf * psActJump; // r2
    }
}


// Range: 0x4B5DE0 -> 0x4B5EA8
unsigned int getFrameLabel(class clsOOFMSprite * this /* r19 */, char * opc8Label /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B5DE0 -> 0x4B5EA8
        class __wrap_iterator it'59; // r2
        class __wrap_iterator it; // r29+0x5C
        unsigned int u32Frame; // r17
    }
}


// Range: 0x4B5EB0 -> 0x4B6128
unsigned int setupSprite(class clsOOFMSprite * this /* r21 */, class stcSprite * psSprite /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B5EB0 -> 0x4B6128
        class __wrap_iterator itLayer'142; // r16
        class __wrap_iterator itLayer; // r29+0x9C
        unsigned int u32n; // r16
        unsigned int u32i; // r19
        unsigned int u32InstructNum; // r2
        unsigned int u32InstIdx; // r18
        unsigned int u32MaxFrame; // r29+0x98
        class stcSeqTag * psSTag; // r29+0x94
        class stcLayer * psLayer; // r29+0x90
    }
}


// Range: 0x4B6130 -> 0x4B62E8
void copySetupSprite(class clsOOFMSprite * this /* r21 */, class stcSprite * psSprite /* r20 */, class clsOOFMSprite * pcBaseSprite /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B6130 -> 0x4B62E8
        class __wrap_iterator itLayer'102; // r16
        class __wrap_iterator itBaseLayer'101; // r17
        class __wrap_iterator itLayer; // r29+0x8C
        class __wrap_iterator itBaseLayer; // r29+0x88
        unsigned int u32n; // r16
        class stcLayer * psLayer; // r29+0x84
    }
}


// Range: 0x4B62F0 -> 0x4B6514
void * __dt(class clsOOFMSprite * this /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B62F0 -> 0x4B6514
        class __wrap_iterator itLayer'98; // r2
        class __wrap_iterator itLayer; // r29+0x5C
    }
}


// Range: 0x4B6520 -> 0x4B68B0
void sequenceCommand(class clsOOFMSprite * this /* r20 */, class stcLayer * psLayer /* r19 */, class stcSeqTag * psSTag /* r2 */, class stcPlaceObject2 * psPlace2 /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B6520 -> 0x4B68B0
        class stcPlaceObject2 * psPlace2Now; // r17
    }
}


// Range: 0x4B68B0 -> 0x4B6B30
void frameCtrl(class clsOOFMSprite * this /* r19 */, class stcPlaceObject2 * psPlace2 /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B68B0 -> 0x4B6B30
        class __wrap_iterator itLayer'131; // r20
        class __wrap_iterator itLayer; // r29+0x7C
        unsigned int u32Depth; // r17
        unsigned int u32Rep; // r2
        class stcSeqTag sTmpTag; // r29+0x70
    }
}


// Range: 0x4B6B30 -> 0x4B7198
void setCurFrame(class clsOOFMSprite * this /* r21 */, unsigned int ou32Frame /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B6B30 -> 0x4B7198
        class __wrap_iterator itLayer'305; // r2
        class __wrap_iterator itKeyFrm'304; // r2
        class __wrap_iterator itKeyFrm2'303; // r2
        unsigned int u32n; // r19
        class __wrap_iterator itLayer; // r29+0x8C
        unsigned char u8Find; // r14
        class __wrap_iterator itKeyFrm; // r29+0x88
        class __wrap_iterator itKeyFrm2; // r29+0x84
        class reverse_iterator ritKeyFrm; // r29+0x80
    }
}


// Range: 0x4B9410 -> 0x4B9418
void clear(class __vector_deleter * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B9410 -> 0x4B9418
    }
}


// Range: 0x4B9420 -> 0x4B9428
void clear(class __vector_deleter * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B9420 -> 0x4B9428
    }
}


