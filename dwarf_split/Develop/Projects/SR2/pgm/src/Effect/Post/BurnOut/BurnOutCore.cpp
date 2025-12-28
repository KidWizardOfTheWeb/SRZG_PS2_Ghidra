/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Effect\Post\BurnOut\BurnOutCore.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon2 */ {
    // total size: 0x30
} __vt__19clsBurnOutCore_Task; // size: 0x30, address: 0x6BF9A0
struct /* @anon0 */ {
    // total size: 0x30
} __vt__7clsTask; // size: 0x30, address: 0x6B59F0
class clsOOMainHeap * t_cInstance; // size: 0x4, address: 0xB17268
class clsOOProfile * m_tpcSingleton; // size: 0x4, address: 0x703C28
class clsPfSystem * m_tpcSingleton; // size: 0x4, address: 0x6E69B8
class clsTaskManager * m_tpcSingleton; // size: 0x4, address: 0x6E69D0
class _NNS_TEXLIST * psTexList_UnionParticle; // size: 0x4, address: 0xB0AF48
class clsPfGraphics * m_tpcSingleton; // size: 0x4, address: 0x6E69A0
class clsPfCameraMgr * m_tpcSingleton; // size: 0x4, address: 0x6E69C0
class clsDebug * m_tpcSingleton; // size: 0x4, address: 0x703BB8
struct /* @anon1 */ {
    // total size: 0x2C
} __vt__9clsOOTask; // size: 0x2C, address: 0x6B58B0
class clsOORandom * m_tpcSingleton; // size: 0x4, address: 0x703C58
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
class clsSingleton {
    // total size: 0x4
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
class stcBurnOutSystem {
    // total size: 0x3
public:
    unsigned char u8EraseAlpha; // offset 0x0, size 0x1
    unsigned char u8EraseColor; // offset 0x1, size 0x1
    unsigned char u8PathDrawNum; // offset 0x2, size 0x1
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
class stcBufNo {
    // total size: 0x4
public:
    unsigned short u16Begin; // offset 0x0, size 0x2
    unsigned short u16End; // offset 0x2, size 0x2
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
class clsSingleton {
    // total size: 0x4
};
class stcDrawCamera {
    // total size: 0x6
public:
    unsigned char u8DrawCamNo; // offset 0x0, size 0x1
    unsigned char au8DrawCamData[5]; // offset 0x1, size 0x5
};
enum enmCullModeType {
    CULL___NONE = 0,
    CULL___CW = 1,
    CULL___CCW = 2,
};
class binary_function {
    // total size: 0x1
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
class clsSingleton {
    // total size: 0x4
};
class clsOOSemaphore {
    // total size: 0x4
};
class clsBurnOutCore_Task : public clsTask {
    // total size: 0x74
public:
    class stcDetail * m_psDetail; // offset 0x54, size 0x4
    float m_f32ColliY; // offset 0x58, size 0x4
    unsigned int m_u32MaxLifeFrame; // offset 0x5C, size 0x4
    float m_f32MaxClipZ; // offset 0x60, size 0x4
    float m_f32AirK; // offset 0x64, size 0x4
    float m_f32GroundK; // offset 0x68, size 0x4
    float m_f32Mass; // offset 0x6C, size 0x4
    unsigned short m_u16Num; // offset 0x70, size 0x2
    unsigned char m_u8Size; // offset 0x72, size 0x1
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
class stcScriptWave {
    // total size: 0xC
public:
    unsigned char u8TaskPriority; // offset 0x0, size 0x1
    float f32EndFrame; // offset 0x4, size 0x4
    float f32WaitFrame; // offset 0x8, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
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
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class stcPoint2D_s16 {
    // total size: 0x4
public:
    signed short s16x; // offset 0x0, size 0x2
    signed short s16y; // offset 0x2, size 0x2
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
class stcDetail {
    // total size: 0xB0
public:
    class NNS_VECTORFAST m_sPosFast; // offset 0x0, size 0x10
    class NNS_VECTOR m_sVelocity; // offset 0x10, size 0xC
    class stcPoint2D_s16 _m_asScreen2d[4][8]; // offset 0x1C, size 0x80
    class stcBufNo asBufNo[4]; // offset 0x9C, size 0x10
    unsigned char bExist; // offset 0xAC, size 0x1
    unsigned char bRandAir; // offset 0xAD, size 0x1
    unsigned char m_u8Size2; // offset 0xAE, size 0x1
    unsigned char m_u8Length2; // offset 0xAF, size 0x1
};
class stcPointPath {
    // total size: 0x4
public:
    unsigned char bIsDrawCoursePath; // offset 0x0, size 0x1
    unsigned char bIsDisableDrawCoursePathSphere; // offset 0x1, size 0x1
    unsigned char bIsDrawComPath; // offset 0x2, size 0x1
    unsigned char bIsDisableDrawComPathSphere; // offset 0x3, size 0x1
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class value_compare first_; // offset 0x0, size 0x1
    class node * second_; // offset 0x4, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class vector : private __vector_imp {
    // total size: 0xC
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
class NNS_PRIM2D_PCT {
    // total size: 0x14
public:
    class NNS_VECTOR2D Pos; // offset 0x0, size 0x8
    unsigned int Col; // offset 0x8, size 0x4
    class NNS_TEXCOORD Tex; // offset 0xC, size 0x8
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
class map {
    // total size: 0x18
public:
    class __tree tree_; // offset 0x0, size 0x18
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0xC
};
class clsOORandom : public clsSingleton {
    // total size: 0x1C
public:
    signed int m_s32Seed_DependGame; // offset 0x4, size 0x4
    unsigned int m_u32Seed_CompTime_DependGame; // offset 0x8, size 0x4
    signed int m_s32Gen1_DependGame; // offset 0xC, size 0x4
    signed int m_s32Gen2_DependGame; // offset 0x10, size 0x4
    unsigned int m_u32GameRandCount; // offset 0x14, size 0x4
    unsigned char m_bIsPossibleGameRand; // offset 0x18, size 0x1
};
class clsSingleton {
    // total size: 0x4
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
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class anchor second_; // offset 0x4, size 0x4
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
class NNS_VECTOR2D {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class stcBgColor {
    // total size: 0x4
public:
    unsigned char m_u8a; // offset 0x0, size 0x1
    unsigned char m_u8b; // offset 0x1, size 0x1
    unsigned char m_u8g; // offset 0x2, size 0x1
    unsigned char m_u8r; // offset 0x3, size 0x1
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
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
class clsOOMMap : public multimap {
    // total size: 0x18
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
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
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class clsOOMap : public map {
    // total size: 0x18
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
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
class allocator {
    // total size: 0x1
};
class clsPfCameraMgr : public clsSingleton, private clsOOCameraMgr {
    // total size: 0x14
public:
    class vector m_vecCamera; // offset 0x8, size 0xC
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
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
class clsOOSubMenu {
    // total size: 0x8
public:
    char * m_opc8Name; // offset 0x0, size 0x4
    signed int (* m_oFunc)(signed int, signed int, signed int, signed int); // offset 0x4, size 0x4
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
class value_compare : public binary_function {
    // total size: 0x1
public:
    class less comp; // offset 0x0, size 0x1
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
class clsSingleton {
    // total size: 0x4
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
class stcScriptInfo {
    // total size: 0x5
public:
    unsigned char bFrame; // offset 0x0, size 0x1
    unsigned char bBlur; // offset 0x1, size 0x1
    unsigned char bNega; // offset 0x2, size 0x1
    unsigned char bWave; // offset 0x3, size 0x1
    unsigned char bMemoryBar; // offset 0x4, size 0x1
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
class vector : private __vector_imp {
    // total size: 0xC
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};
class __tree : private __red_black_tree {
    // total size: 0x18
public:
    class compressed_pair alloc_; // offset 0x0, size 0x8
    class compressed_pair node_alloc_; // offset 0x8, size 0x8
    class compressed_pair comp_; // offset 0x10, size 0x8
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
struct /* @anon0 */ {
    // total size: 0x30
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class allocator {
    // total size: 0x1
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
class binary_function {
    // total size: 0x1
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
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
class clsOOCameraMgr {
    // total size: 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
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
class __wrap_iterator {
    // total size: 0x4
public:
    class clsOOSubMenu * it_; // offset 0x0, size 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class anchor second_; // offset 0x4, size 0x4
};
struct /* @anon1 */ {
    // total size: 0x2C
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
class allocator {
    // total size: 0x1
};
class pair {
    // total size: 0x8
public:
    unsigned int first; // offset 0x0, size 0x4
    class generic_iterator second; // offset 0x4, size 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
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
struct /* @anon2 */ {
    // total size: 0x30
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
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

// Range: 0x385770 -> 0x385BDC
void draw(class clsBurnOutCore_Task * this /* r30 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x385770 -> 0x385BDC
        class stcBurnOut & rsBurnOut; // r2
        signed int s32v; // r29+0xF0
        class clsPfCameraMgr & rcPfCameraMgr; // r2
        class stcDetail * psDetail; // r21
        class NNS_VECTORFAST sClipFast; // r29+0x100
        class clsPfGraphics & rcGraphics; // r20
        unsigned int bDraw; // r16
        unsigned int u32i; // r19
        class stcBufNo & rsBufNo; // r18
        float f32Q; // r20
        class stcPoint2D_s16 & rsScreen2d_Begin; // r2
        class stcPoint2D_s16 & rsScreen2d_End; // r2
        float f32x0; // r24
        float f32y0; // r23
        float f32x1; // r22
        float f32y1; // r21
        float f32Size; // r20
        float f32Dist; // r25
        class NNS_PRIM2D_PCT tprim2D_PCT[4]; // @ 0x00628090
    }
}


// Range: 0x385BE0 -> 0x385F78
void execute(class clsBurnOutCore_Task * this /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x385BE0 -> 0x385F78
        class stcDetail * psDetail; // r18
        unsigned int u32Exist; // r17
        unsigned int u32i; // r16
    }
}


// Range: 0x385F80 -> 0x386574
void * __ct(class clsBurnOutCore_Task * this /* r21 */, unsigned int u32NumI /* r16 */, unsigned int u32SizeI /* r30 */, float (& orsInitRotMtxI)[4][4] /* r20 */, class NNS_VECTOR & orsPosI /* r19 */, class NNS_VECTOR & orsLocalPosI /* r18 */, class NNS_VECTOR & orsLocalPosRandRangeI /* r17 */, class NNS_VECTOR & orsVelocityI /* r22 */, class NNS_VECTOR & orsRandLocalVelocityI /* r23 */, float f32ColliYI /* r24 */, float f32AirKI /* r23 */, float f32MassI /* r22 */, unsigned int u32MaxLifeFrameI /* r29+0x198 */, float f32GroundKI /* r21 */, float f32MaxClipZI /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x385F80 -> 0x386574
        class stcDetail * psDetail; // r16
        class NNS_VECTORFAST sSrcFast; // r29+0x180
        class NNS_VECTORFAST sDstFast0; // r29+0x170
        class NNS_VECTORFAST sDstFast1; // r29+0x160
        unsigned int u32i; // r30
    }
}


