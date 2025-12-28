/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Script\ScriptWaitString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class clsScriptWaitString_Task * m_tapcWaitStringTask[2]; // size: 0x8, address: 0xB15F60
struct /* @anon0 */ {
    // total size: 0x30
} __vt__24clsScriptWaitString_Task; // size: 0x30, address: 0x6C0F90
struct /* @anon1 */ {
    // total size: 0x30
} __vt__7clsTask; // size: 0x30, address: 0x6B59F0
class clsOOProfile * m_tpcSingleton; // size: 0x4, address: 0x703C28
class clsSrFontSystem * m_tpcSingleton; // size: 0x4, address: 0x703C08
class clsPfDraw2d * m_tpcSingleton; // size: 0x4, address: 0x6E6990
class clsPfGraphics * m_tpcSingleton; // size: 0x4, address: 0x6E69A0
class clsTaskManager * m_tpcSingleton; // size: 0x4, address: 0x6E69D0
class clsPfSystem * m_tpcSingleton; // size: 0x4, address: 0x6E69B8
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
class allocator {
    // total size: 0x1
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
class clsTask : public clsOOTask {
    // total size: 0x54
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class clsOOProfile : public clsSingleton {
    // total size: 0x1414
public:
    class stcFactor m_asFactor[128]; // offset 0x4, size 0xE00
    class stcHistory m_asHistory[128]; // offset 0xE04, size 0x600
    char * m_opc8BadEndName; // offset 0x1404, size 0x4
    unsigned int m_u32DownLimitTime; // offset 0x1408, size 0x4
    signed short m_s16ScrollNo; // offset 0x140C, size 0x2
    unsigned char m_u8RegistNum; // offset 0x140E, size 0x1
    unsigned char m_bRunning; // offset 0x140F, size 0x1
    unsigned char m_u8SortType; // offset 0x1410, size 0x1
};
enum enmZModeCompType {
    Z___NEVER = 0,
    Z___ALWAYS = 1,
    Z___G_EQUAL = 2,
    Z___GREATER = 3,
    Z___L_EQUAL = 4,
    Z___LESS = 5,
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
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class clsScriptWaitString_Task : public clsTask {
    // total size: 0x74
public:
    unsigned int m_u32DrawFlg; // offset 0x54, size 0x4
    unsigned int m_u32Id; // offset 0x58, size 0x4
    unsigned int m_u32DataNo; // offset 0x5C, size 0x4
    float m_f32LifeFrame; // offset 0x60, size 0x4
    float m_f32PosX; // offset 0x64, size 0x4
    float m_f32PosY; // offset 0x68, size 0x4
    float m_f32WaitFrame; // offset 0x6C, size 0x4
    class clsScript_Task * m_pcScriptTask; // offset 0x70, size 0x4
};
class stcPoint3d {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum enmCullModeType {
    CULL___NONE = 0,
    CULL___CW = 1,
    CULL___CCW = 2,
};
class binary_function {
    // total size: 0x1
};
class _NNS_TEXLIST {
    // total size: 0x8
public:
    signed int nTex; // offset 0x0, size 0x4
    class _NNS_TEXINFO * pTexInfoList; // offset 0x4, size 0x4
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
class NNS_CAMERAPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pCamera; // offset 0x4, size 0x4
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
class stcFactor {
    // total size: 0x1C
public:
    char * m_opc8Name; // offset 0x0, size 0x4
    float m_f32Average; // offset 0x4, size 0x4
    unsigned int m_u32ParentsNum; // offset 0x8, size 0x4
    signed short m_s16OpenNum; // offset 0xC, size 0x2
    unsigned short m_u16MineNum; // offset 0xE, size 0x2
    unsigned int m_u32BeginTick; // offset 0x10, size 0x4
    unsigned int m_u32Tick; // offset 0x14, size 0x4
    unsigned int m_u32ChildrenTick; // offset 0x18, size 0x4
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class tagstcScriptData {
    // total size: 0x10
public:
    unsigned short u16Size; // offset 0x0, size 0x2
    unsigned short u16Att; // offset 0x2, size 0x2
    unsigned int u32Num; // offset 0x4, size 0x4
    unsigned char u8Padding[8]; // offset 0x8, size 0x8
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
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class clsScriptMemory {
    // total size: 0x1
};
class vector : private __vector_imp {
    // total size: 0xC
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
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
class clsScriptModelManager {
    // total size: 0x4
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
class tagstcScriptFuncLineData {
    // total size: 0x100
public:
    unsigned int u32FunctionType; // offset 0x0, size 0x4
    unsigned int u32Att; // offset 0x4, size 0x4
    unsigned char u8Padding[8]; // offset 0x8, size 0x8
    class tagstcScriptData sArgumentsDt[15]; // offset 0x10, size 0xF0
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
class clsPfDraw2d : public clsSingleton, public clsOODraw2d {
    // total size: 0x10
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
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class clsPfSystem : public clsSingleton, public clsOOSystem {
    // total size: 0x84
};
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
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
class stcRgbF32 {
    // total size: 0xC
public:
    float f32r; // offset 0x0, size 0x4
    float f32g; // offset 0x4, size 0x4
    float f32b; // offset 0x8, size 0x4
};
class clsOOMMap : public multimap {
    // total size: 0x18
};
class clsScriptShadowMgr_Task : public clsTask {
    // total size: 0x94
public:
    class clsScriptShadowObj * m_apsShadowObjTask[16]; // offset 0x54, size 0x40
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
class clsOOMap : public map {
    // total size: 0x18
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
class stcSunLenz {
    // total size: 0x14
public:
    unsigned char bUsed; // offset 0x0, size 0x1
    unsigned char bEnd; // offset 0x1, size 0x1
    class NNS_VECTOR sPos; // offset 0x4, size 0xC
    float f32Scale; // offset 0x10, size 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class value_compare first_; // offset 0x0, size 0x1
    class node * second_; // offset 0x4, size 0x4
};
class stcHistory {
    // total size: 0xC
public:
    unsigned int m_u32Average; // offset 0x0, size 0x4
    char * m_opc8Name; // offset 0x4, size 0x4
    unsigned int m_u32Count; // offset 0x8, size 0x4
};
class NVS_SVRHEADER {
    // total size: 0x8
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short miplevel; // offset 0x2, size 0x2
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
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
class less : public binary_function {
    // total size: 0x1
};
class value_compare : public binary_function {
    // total size: 0x1
public:
    class less comp; // offset 0x0, size 0x1
};
class clsGravityWave_Task : public clsBaseGravityWave_Task {
    // total size: 0xD0
public:
    unsigned long long * m_pu64GsPacket_DrawNega; // offset 0xC0, size 0x4
    unsigned long long * m_pu64GsPacket_Capture; // offset 0xC4, size 0x4
    unsigned int m_u32DrawHeightx16; // offset 0xC8, size 0x4
    float m_f32ScalePalY; // offset 0xCC, size 0x4
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
class clsSingleton {
    // total size: 0x4
};
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
};
struct /* @anon0 */ {
    // total size: 0x30
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
class stcLightData {
    // total size: 0x10
public:
    unsigned char bUsed; // offset 0x0, size 0x1
    unsigned char u8LightNo; // offset 0x1, size 0x1
    float f32Frame; // offset 0x4, size 0x4
    class NNS_LIGHTPTR * psDataPtr; // offset 0x8, size 0x4
    class NNS_MOTION * psMotion; // offset 0xC, size 0x4
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
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
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
class vector : private __vector_imp {
    // total size: 0xC
};
class clsBaseGravityWave_Task : public clsTask {
    // total size: 0xC0
public:
    float m_sOrthoMtx[4][4]; // offset 0x60, size 0x40
    float m_af32InterColor[4]; // offset 0xA0, size 0x10
    unsigned char m_eMode[4]; // offset 0xB0, size 0x4
    unsigned char m_eType[4]; // offset 0xB4, size 0x4
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
struct /* @anon1 */ {
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
class clsScriptWave_Task : public clsGravityWave_Task {
    // total size: 0xE0
public:
    float m_f32Frame; // offset 0xD0, size 0x4
    float m_f32EndFrame; // offset 0xD4, size 0x4
    float m_f32WaitFrame; // offset 0xD8, size 0x4
    class clsTask * m_pcScriptTask; // offset 0xDC, size 0x4
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
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
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
struct /* @anon2 */ {
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
class __tree : private __red_black_tree {
    // total size: 0x18
public:
    class compressed_pair alloc_; // offset 0x0, size 0x8
    class compressed_pair node_alloc_; // offset 0x8, size 0x8
    class compressed_pair comp_; // offset 0x10, size 0x8
};
class clsScriptCameraFrameTex_Task : public clsTask, public clsScriptCamera {
    // total size: 0x78
public:
    unsigned char m_u8TexNo; // offset 0x70, size 0x1
    class clsScript_Task * m_pcParrentTask; // offset 0x74, size 0x4
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
class stcWave {
    // total size: 0x10
public:
    unsigned char bUsed; // offset 0x0, size 0x1
    unsigned char bEnd; // offset 0x1, size 0x1
    unsigned int u32Pri; // offset 0x4, size 0x4
    float f32Frame; // offset 0x8, size 0x4
    float f32WaitFrame; // offset 0xC, size 0x4
};
class stcPoint2d {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};

// Range: 0x3AFB70 -> 0x3AFE98
void draw(class clsScriptWaitString_Task * this /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3AFB70 -> 0x3AFE98
        class stcRect sRect; // r29+0x80
        class stcRect sGRect; // r29+0x70
        float f32BackY; // r20
        float f32BackW; // r21
        signed int s32cw; // r2
        class stcRect sDrawRect; // r29+0x60
        class stcPoint3d sPos; // @ 0x006284E8
        signed char @33230; // @ 0x00B15F68
    }
}


// Range: 0x3AFEA0 -> 0x3B00D8
void execute(class clsScriptWaitString_Task * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3AFEA0 -> 0x3B00D8
    }
}


// Range: 0x3B00E0 -> 0x3B01F0
void codeWaitString(unsigned char * pu8Ptr /* r2 */, class clsScript_Task * pcTask /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B00E0 -> 0x3B01F0
        class tagstcScriptFuncLineData * psLine; // r2
        unsigned int u32Id; // r2
        unsigned int u32No; // r2
        float * pf32Wait; // r2
        float * pf32Life; // r2
        float * pf32Y; // r2
        float * pf32X; // r2
    }
}


// Range: 0x3B01F0 -> 0x3B028C
void releaseData() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B01F0 -> 0x3B028C
        unsigned int u32n; // r17
    }
}


// Range: 0x3B0290 -> 0x3B02C0
void initData() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B0290 -> 0x3B02C0
        unsigned int u32n; // r5
    }
}


