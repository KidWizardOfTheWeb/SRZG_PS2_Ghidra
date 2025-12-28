/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Stage\Stage11.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon1 */ {
    // total size: 0x48
} __vt__15clsStage11_Task; // size: 0x48, address: 0x6BCDF0
void * __dt(class clsModelType_OB_TX_MO_MA *, signed short); // size: 0x0, address: 0x1F2670
struct /* @anon7 */ {
    // total size: 0x48
} __vt__16clsDivStage_Task; // size: 0x48, address: 0x6BBFF0
class clsOOProfile * m_tpcSingleton; // size: 0x4, address: 0x703C28
struct /* @anon4 */ {
    // total size: 0x2C
} __vt__9clsOOTask; // size: 0x2C, address: 0x6B58B0
struct /* @anon3 */ {
    // total size: 0x30
} __vt__7clsTask; // size: 0x30, address: 0x6B59F0
struct /* @anon2 */ {
    // total size: 0xC
} __vt__9clsPortal; // size: 0xC, address: 0x6BB798
struct /* @anon0 */ {
    // total size: 0x10
} __vt__11clsPathBase; // size: 0x10, address: 0x6BB750
struct /* @anon6 */ {
    // total size: 0x14
} __vt__12clsPathPoint; // size: 0x14, address: 0x6BB760
struct /* @anon5 */ {
    // total size: 0x14
} __vt__10clsPathCom; // size: 0x14, address: 0x6BB780
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
class clsStage11_Task : public clsDivStage_Task {
    // total size: 0x49C
public:
    signed int m_s32SeId; // offset 0x498, size 0x4
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
class _stcEndPosList {
    // total size: 0x4
public:
    unsigned short u16EndPointNo; // offset 0x0, size 0x2
    unsigned short u16LineNo; // offset 0x2, size 0x2
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class clsPathBase {
    // total size: 0x8
public:
    class clsBaseStage_Task * m_pcOwnerStage; // offset 0x4, size 0x4
};
class clsOOSemaphore {
    // total size: 0x4
};
struct /* @anon0 */ {
    // total size: 0x10
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
struct /* @anon1 */ {
    // total size: 0x48
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class clsDivStage_Task : public clsBaseStage_Task {
    // total size: 0x498
public:
    class clsModelType_OB_TX_MO_MA m_acDivModel[24]; // offset 0x140, size 0x300
    signed int m_s32DivNum; // offset 0x440, size 0x4
    class clsPortal m_cMapPortal; // offset 0x444, size 0x50
    unsigned char * m_opu8IgnoreResidencePortalData; // offset 0x494, size 0x4
};
class _LineData {
    // total size: 0x40
public:
    unsigned short u16StartPointNo; // offset 0x0, size 0x2
    unsigned short u16EndPointNo; // offset 0x2, size 0x2
    unsigned short u16TypeAttr; // offset 0x4, size 0x2
    unsigned short u16LineAttr; // offset 0x6, size 0x2
    float f32Radius; // offset 0x8, size 0x4
    float f32Length; // offset 0xC, size 0x4
    float f32SLength; // offset 0x10, size 0x4
    unsigned int u32GravityPathNo; // offset 0x14, size 0x4
    unsigned int u32Reserved[2]; // offset 0x18, size 0x8
    unsigned int au32UserData[8]; // offset 0x20, size 0x20
};
class generic_iterator {
    // total size: 0x4
public:
    class node * node_; // offset 0x0, size 0x4
};
class clsPathCourse : public clsPathPoint {
    // total size: 0x80
public:
    class NNS_VECTORFAST m_sGoalLinePos; // offset 0x20, size 0x10
    class NNS_VECTORFAST m_sGoalLineDir; // offset 0x30, size 0x10
    class NNS_VECTORFAST m_sLastLineDir; // offset 0x40, size 0x10
    class NNS_VECTORFAST m_sStartLinePos; // offset 0x50, size 0x10
    class NNS_VECTORFAST m_sStartLineDir; // offset 0x60, size 0x10
    class NNS_VECTORFAST m_sFirstLineDir; // offset 0x70, size 0x10
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0xC
};
class clsPortal {
    // total size: 0x50
public:
    class stcPortalBin * m_psPortalBin; // offset 0x4, size 0x4
    class stcPortalBelongType m_asPortalBelongType[4]; // offset 0x8, size 0x10
    enum enmPortalType m_ePortalType; // offset 0x18, size 0x4
    unsigned int m_abEnableFrontBack[4]; // offset 0x1C, size 0x10
    unsigned int m_abDisableFrontBack[4]; // offset 0x2C, size 0x10
    unsigned int m_abEnableBackIs3[4]; // offset 0x3C, size 0x10
    unsigned char m_bReverse; // offset 0x4C, size 0x1
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
class compressed_pair_imp {
    // total size: 0xC
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class node_base second_; // offset 0x4, size 0x8
};
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class stcBinDataDetail {
    // total size: 0x18
public:
    float f32Near; // offset 0x0, size 0x4
    float f32Far; // offset 0x4, size 0x4
    float f32r; // offset 0x8, size 0x4
    float f32g; // offset 0xC, size 0x4
    float f32b; // offset 0x10, size 0x4
    float f32InertiaK; // offset 0x14, size 0x4
};
class clsPathCom : public clsPathPoint {
    // total size: 0x14
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
enum enmPortalType {
    MAP = 0,
    OBJ = 1,
};
struct /* @anon2 */ {
    // total size: 0xC
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
class NNS_CAPSULE {
    // total size: 0x1C
public:
    class NNS_VECTOR c1; // offset 0x0, size 0xC
    class NNS_VECTOR c2; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
class stcPortalBelongType {
    // total size: 0x4
public:
    unsigned char u8Next; // offset 0x0, size 0x1
    unsigned char u8Current; // offset 0x1, size 0x1
    unsigned char u8Back; // offset 0x2, size 0x1
    unsigned char u8Paddin; // offset 0x3, size 0x1
};
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
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
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
class __list_deleter {
    // total size: 0x14
public:
    class compressed_pair size_; // offset 0x0, size 0x8
    class compressed_pair end_; // offset 0x8, size 0xC
};
class binary_function {
    // total size: 0x1
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class clsSingleton {
    // total size: 0x4
};
class less : public binary_function {
    // total size: 0x1
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
class stcPortalBin {
    // total size: 0x8
public:
    unsigned short u16Num; // offset 0x0, size 0x2
    unsigned char u8BeginType; // offset 0x2, size 0x1
    unsigned char u8EndType; // offset 0x3, size 0x1
    class stcPortalMtx * psMtxHeap; // offset 0x4, size 0x4
    class stcPortalDetail asDetail[]; // offset 0x8, size 0x0
};
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
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
struct /* @anon3 */ {
    // total size: 0x30
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
class clsBaseStage_Task : public clsTask {
    // total size: 0x140
public:
    class clsModelType_OB_TX_MO_MA m_cModel; // offset 0x54, size 0x20
    class clsPortal m_cObjPortal_Camera; // offset 0x74, size 0x50
    class clsPortal m_cObjPortal_Player; // offset 0xC4, size 0x50
    class clsPathCourse * m_pcCoursePath; // offset 0x114, size 0x4
    class clsPathCom m_cComPath; // offset 0x118, size 0x14
    class stcBinDataDetail * m_opsBinDataDetail_Fog; // offset 0x12C, size 0x4
    class clsRainDrops_Task * m_pcRainDrops_Task; // offset 0x130, size 0x4
    class clsColorDrops_Task * m_pcColorDrops_Task; // offset 0x134, size 0x4
    unsigned char m_abShimmer[4]; // offset 0x138, size 0x4
    class stcEtcBinaryStageData * m_opsEtcBinaryStageData; // offset 0x13C, size 0x4
};
class clsTask : public clsOOTask {
    // total size: 0x54
};
class clsColorDrops_Task : public clsRainDrops_Task {
    // total size: 0x7E4
public:
    class stcDetail m_sDetail[64]; // offset 0x2E4, size 0x500
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
class stcPortalDetail {
    // total size: 0x1C
public:
    signed short s16Sx; // offset 0x0, size 0x2
    signed short s16Sy; // offset 0x2, size 0x2
    signed short s16Sz; // offset 0x4, size 0x2
    signed short s16Ex; // offset 0x6, size 0x2
    signed short s16Ey; // offset 0x8, size 0x2
    signed short s16Ez; // offset 0xA, size 0x2
    unsigned char u8Type; // offset 0xC, size 0x1
    signed char s8MtxNo; // offset 0xD, size 0x1
    unsigned char u8Paddin[2]; // offset 0xE, size 0x2
    signed int a32RotX; // offset 0x10, size 0x4
    signed int a32RotY; // offset 0x14, size 0x4
    signed int a32RotZ; // offset 0x18, size 0x4
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
class clsPathPoint : public clsPathBase {
    // total size: 0x14
public:
    class _BinData * m_pPathData; // offset 0x8, size 0x4
    class NNS_CAPSULE * m_calculated_capsule; // offset 0xC, size 0x4
    signed int m_s32FilseSize_Debug; // offset 0x10, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
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
class clsRainDrops_Task : public clsTask {
    // total size: 0x2E4
public:
    class stcDetail m_sDetail[32]; // offset 0x54, size 0x280
    unsigned char m_u8DetailLoopNo; // offset 0x2D4, size 0x1
    unsigned long long * m_pu64GsPacket_DrawRainDrops; // offset 0x2D8, size 0x4
    unsigned int m_u32MY; // offset 0x2DC, size 0x4
    float m_f32GSDH; // offset 0x2E0, size 0x4
};
class stcEtcBinaryStageData {
    // total size: 0x2C4
public:
    unsigned char u8Bg___r_Top; // offset 0x0, size 0x1
    unsigned char u8Bg___g; // offset 0x1, size 0x1
    unsigned char u8Bg___b; // offset 0x2, size 0x1
    unsigned char u8Bg___a; // offset 0x3, size 0x1
    float f32Clip___Near_1View_Top; // offset 0x4, size 0x4
    float f32Clip___Far__1View; // offset 0x8, size 0x4
    float f32Clip___Near_2View; // offset 0xC, size 0x4
    float f32Clip___Far__2View; // offset 0x10, size 0x4
    float f32Clip___Near_3View; // offset 0x14, size 0x4
    float f32Clip___Far__3View; // offset 0x18, size 0x4
    float f32Clip___Near_4View; // offset 0x1C, size 0x4
    float f32Clip___Far__4View; // offset 0x20, size 0x4
    float f32Fog___Near0_Top; // offset 0x24, size 0x4
    float f32Fog___Far0; // offset 0x28, size 0x4
    float f32Fog___r0; // offset 0x2C, size 0x4
    float f32Fog___g0; // offset 0x30, size 0x4
    float f32Fog___b0; // offset 0x34, size 0x4
    float f32Fog___InertiaK0; // offset 0x38, size 0x4
    float f32Fog___Near1; // offset 0x3C, size 0x4
    float f32Fog___Far1; // offset 0x40, size 0x4
    float f32Fog___r1; // offset 0x44, size 0x4
    float f32Fog___g1; // offset 0x48, size 0x4
    float f32Fog___b1; // offset 0x4C, size 0x4
    float f32Fog___InertiaK1; // offset 0x50, size 0x4
    float f32Fog___Near2; // offset 0x54, size 0x4
    float f32Fog___Far2; // offset 0x58, size 0x4
    float f32Fog___r2; // offset 0x5C, size 0x4
    float f32Fog___g2; // offset 0x60, size 0x4
    float f32Fog___b2; // offset 0x64, size 0x4
    float f32Fog___InertiaK2; // offset 0x68, size 0x4
    float f32Fog___Near3; // offset 0x6C, size 0x4
    float f32Fog___Far3; // offset 0x70, size 0x4
    float f32Fog___r3; // offset 0x74, size 0x4
    float f32Fog___g3; // offset 0x78, size 0x4
    float f32Fog___b3; // offset 0x7C, size 0x4
    float f32Fog___InertiaK3; // offset 0x80, size 0x4
    float f32Fog___Near4; // offset 0x84, size 0x4
    float f32Fog___Far4; // offset 0x88, size 0x4
    float f32Fog___r4; // offset 0x8C, size 0x4
    float f32Fog___g4; // offset 0x90, size 0x4
    float f32Fog___b4; // offset 0x94, size 0x4
    float f32Fog___InertiaK4; // offset 0x98, size 0x4
    float f32Fog___Near5; // offset 0x9C, size 0x4
    float f32Fog___Far5; // offset 0xA0, size 0x4
    float f32Fog___r5; // offset 0xA4, size 0x4
    float f32Fog___g5; // offset 0xA8, size 0x4
    float f32Fog___b5; // offset 0xAC, size 0x4
    float f32Fog___InertiaK5; // offset 0xB0, size 0x4
    float f32Fog___Near6; // offset 0xB4, size 0x4
    float f32Fog___Far6; // offset 0xB8, size 0x4
    float f32Fog___r6; // offset 0xBC, size 0x4
    float f32Fog___g6; // offset 0xC0, size 0x4
    float f32Fog___b6; // offset 0xC4, size 0x4
    float f32Fog___InertiaK6; // offset 0xC8, size 0x4
    float f32Sky___RotNode1_Top; // offset 0xCC, size 0x4
    float f32Sky___RotNode2; // offset 0xD0, size 0x4
    float f32Sky___RotNode3; // offset 0xD4, size 0x4
    float f32Lit___AmbientR0_Top; // offset 0xD8, size 0x4
    float f32Lit___AmbientG0; // offset 0xDC, size 0x4
    float f32Lit___AmbientB0; // offset 0xE0, size 0x4
    float f32Lit___ParallelR0; // offset 0xE4, size 0x4
    float f32Lit___ParallelG0; // offset 0xE8, size 0x4
    float f32Lit___ParallelB0; // offset 0xEC, size 0x4
    float f32Lit___ParallelA0; // offset 0xF0, size 0x4
    float f32Lit___ParallelInten0; // offset 0xF4, size 0x4
    float f32Lit___ParallelDirX0; // offset 0xF8, size 0x4
    float f32Lit___ParallelDirY0; // offset 0xFC, size 0x4
    float f32Lit___ParallelDirZ0; // offset 0x100, size 0x4
    float f32Lit___ParallelPosX0; // offset 0x104, size 0x4
    float f32Lit___ParallelPosY0; // offset 0x108, size 0x4
    float f32Lit___ParallelPosZ0; // offset 0x10C, size 0x4
    float f32Lit___SpecularR0; // offset 0x110, size 0x4
    float f32Lit___SpecularG0; // offset 0x114, size 0x4
    float f32Lit___SpecularB0; // offset 0x118, size 0x4
    float f32Lit___SpecularA0; // offset 0x11C, size 0x4
    float f32Lit___SpecularDirX0; // offset 0x120, size 0x4
    float f32Lit___SpecularDirY0; // offset 0x124, size 0x4
    float f32Lit___SpecularDirZ0; // offset 0x128, size 0x4
    float f32Lit___AmbientR1; // offset 0x12C, size 0x4
    float f32Lit___AmbientG1; // offset 0x130, size 0x4
    float f32Lit___AmbientB1; // offset 0x134, size 0x4
    float f32Lit___ParallelR1; // offset 0x138, size 0x4
    float f32Lit___ParallelG1; // offset 0x13C, size 0x4
    float f32Lit___ParallelB1; // offset 0x140, size 0x4
    float f32Lit___ParallelA1; // offset 0x144, size 0x4
    float f32Lit___ParallelInten1; // offset 0x148, size 0x4
    float f32Lit___ParallelDirX1; // offset 0x14C, size 0x4
    float f32Lit___ParallelDirY1; // offset 0x150, size 0x4
    float f32Lit___ParallelDirZ1; // offset 0x154, size 0x4
    float f32Lit___ParallelPosX1; // offset 0x158, size 0x4
    float f32Lit___ParallelPosY1; // offset 0x15C, size 0x4
    float f32Lit___ParallelPosZ1; // offset 0x160, size 0x4
    float f32Lit___SpecularR1; // offset 0x164, size 0x4
    float f32Lit___SpecularG1; // offset 0x168, size 0x4
    float f32Lit___SpecularB1; // offset 0x16C, size 0x4
    float f32Lit___SpecularA1; // offset 0x170, size 0x4
    float f32Lit___SpecularDirX1; // offset 0x174, size 0x4
    float f32Lit___SpecularDirY1; // offset 0x178, size 0x4
    float f32Lit___SpecularDirZ1; // offset 0x17C, size 0x4
    float f32Lit___AmbientR2; // offset 0x180, size 0x4
    float f32Lit___AmbientG2; // offset 0x184, size 0x4
    float f32Lit___AmbientB2; // offset 0x188, size 0x4
    float f32Lit___ParallelR2; // offset 0x18C, size 0x4
    float f32Lit___ParallelG2; // offset 0x190, size 0x4
    float f32Lit___ParallelB2; // offset 0x194, size 0x4
    float f32Lit___ParallelA2; // offset 0x198, size 0x4
    float f32Lit___ParallelInten2; // offset 0x19C, size 0x4
    float f32Lit___ParallelDirX2; // offset 0x1A0, size 0x4
    float f32Lit___ParallelDirY2; // offset 0x1A4, size 0x4
    float f32Lit___ParallelDirZ2; // offset 0x1A8, size 0x4
    float f32Lit___ParallelPosX2; // offset 0x1AC, size 0x4
    float f32Lit___ParallelPosY2; // offset 0x1B0, size 0x4
    float f32Lit___ParallelPosZ2; // offset 0x1B4, size 0x4
    float f32Lit___SpecularR2; // offset 0x1B8, size 0x4
    float f32Lit___SpecularG2; // offset 0x1BC, size 0x4
    float f32Lit___SpecularB2; // offset 0x1C0, size 0x4
    float f32Lit___SpecularA2; // offset 0x1C4, size 0x4
    float f32Lit___SpecularDirX2; // offset 0x1C8, size 0x4
    float f32Lit___SpecularDirY2; // offset 0x1CC, size 0x4
    float f32Lit___SpecularDirZ2; // offset 0x1D0, size 0x4
    float f32Lit___AmbientR3; // offset 0x1D4, size 0x4
    float f32Lit___AmbientG3; // offset 0x1D8, size 0x4
    float f32Lit___AmbientB3; // offset 0x1DC, size 0x4
    float f32Lit___ParallelR3; // offset 0x1E0, size 0x4
    float f32Lit___ParallelG3; // offset 0x1E4, size 0x4
    float f32Lit___ParallelB3; // offset 0x1E8, size 0x4
    float f32Lit___ParallelA3; // offset 0x1EC, size 0x4
    float f32Lit___ParallelInten3; // offset 0x1F0, size 0x4
    float f32Lit___ParallelDirX3; // offset 0x1F4, size 0x4
    float f32Lit___ParallelDirY3; // offset 0x1F8, size 0x4
    float f32Lit___ParallelDirZ3; // offset 0x1FC, size 0x4
    float f32Lit___ParallelPosX3; // offset 0x200, size 0x4
    float f32Lit___ParallelPosY3; // offset 0x204, size 0x4
    float f32Lit___ParallelPosZ3; // offset 0x208, size 0x4
    float f32Lit___SpecularR3; // offset 0x20C, size 0x4
    float f32Lit___SpecularG3; // offset 0x210, size 0x4
    float f32Lit___SpecularB3; // offset 0x214, size 0x4
    float f32Lit___SpecularA3; // offset 0x218, size 0x4
    float f32Lit___SpecularDirX3; // offset 0x21C, size 0x4
    float f32Lit___SpecularDirY3; // offset 0x220, size 0x4
    float f32Lit___SpecularDirZ3; // offset 0x224, size 0x4
    float f32Lit___AmbientR4; // offset 0x228, size 0x4
    float f32Lit___AmbientG4; // offset 0x22C, size 0x4
    float f32Lit___AmbientB4; // offset 0x230, size 0x4
    float f32Lit___ParallelR4; // offset 0x234, size 0x4
    float f32Lit___ParallelG4; // offset 0x238, size 0x4
    float f32Lit___ParallelB4; // offset 0x23C, size 0x4
    float f32Lit___ParallelA4; // offset 0x240, size 0x4
    float f32Lit___ParallelInten4; // offset 0x244, size 0x4
    float f32Lit___ParallelDirX4; // offset 0x248, size 0x4
    float f32Lit___ParallelDirY4; // offset 0x24C, size 0x4
    float f32Lit___ParallelDirZ4; // offset 0x250, size 0x4
    float f32Lit___ParallelPosX4; // offset 0x254, size 0x4
    float f32Lit___ParallelPosY4; // offset 0x258, size 0x4
    float f32Lit___ParallelPosZ4; // offset 0x25C, size 0x4
    float f32Lit___SpecularR4; // offset 0x260, size 0x4
    float f32Lit___SpecularG4; // offset 0x264, size 0x4
    float f32Lit___SpecularB4; // offset 0x268, size 0x4
    float f32Lit___SpecularA4; // offset 0x26C, size 0x4
    float f32Lit___SpecularDirX4; // offset 0x270, size 0x4
    float f32Lit___SpecularDirY4; // offset 0x274, size 0x4
    float f32Lit___SpecularDirZ4; // offset 0x278, size 0x4
    char c8IgnoreResidencePortal_0_0_Top; // offset 0x27C, size 0x1
    char c8IgnoreResidencePortal_0_1; // offset 0x27D, size 0x1
    char c8IgnoreResidencePortal_0_2; // offset 0x27E, size 0x1
    char c8IgnoreResidencePortal_0_3; // offset 0x27F, size 0x1
    char c8IgnoreResidencePortal_0_4; // offset 0x280, size 0x1
    char c8IgnoreResidencePortal_0_5; // offset 0x281, size 0x1
    char c8IgnoreResidencePortal_0_6; // offset 0x282, size 0x1
    char c8IgnoreResidencePortal_0_7; // offset 0x283, size 0x1
    char c8IgnoreResidencePortal_0_8; // offset 0x284, size 0x1
    char c8IgnoreResidencePortal_0_9; // offset 0x285, size 0x1
    char c8IgnoreResidencePortal_0_10; // offset 0x286, size 0x1
    char c8IgnoreResidencePortal_0_11; // offset 0x287, size 0x1
    char c8IgnoreResidencePortal_0_12; // offset 0x288, size 0x1
    char c8IgnoreResidencePortal_0_13; // offset 0x289, size 0x1
    char c8IgnoreResidencePortal_0_14; // offset 0x28A, size 0x1
    char c8IgnoreResidencePortal_0_15; // offset 0x28B, size 0x1
    char c8IgnoreResidencePortal_0_16; // offset 0x28C, size 0x1
    char c8IgnoreResidencePortal_0_17; // offset 0x28D, size 0x1
    char c8IgnoreResidencePortal_1_0; // offset 0x28E, size 0x1
    char c8IgnoreResidencePortal_1_1; // offset 0x28F, size 0x1
    char c8IgnoreResidencePortal_1_2; // offset 0x290, size 0x1
    char c8IgnoreResidencePortal_1_3; // offset 0x291, size 0x1
    char c8IgnoreResidencePortal_1_4; // offset 0x292, size 0x1
    char c8IgnoreResidencePortal_1_5; // offset 0x293, size 0x1
    char c8IgnoreResidencePortal_1_6; // offset 0x294, size 0x1
    char c8IgnoreResidencePortal_1_7; // offset 0x295, size 0x1
    char c8IgnoreResidencePortal_1_8; // offset 0x296, size 0x1
    char c8IgnoreResidencePortal_1_9; // offset 0x297, size 0x1
    char c8IgnoreResidencePortal_1_10; // offset 0x298, size 0x1
    char c8IgnoreResidencePortal_1_11; // offset 0x299, size 0x1
    char c8IgnoreResidencePortal_1_12; // offset 0x29A, size 0x1
    char c8IgnoreResidencePortal_1_13; // offset 0x29B, size 0x1
    char c8IgnoreResidencePortal_1_14; // offset 0x29C, size 0x1
    char c8IgnoreResidencePortal_1_15; // offset 0x29D, size 0x1
    char c8IgnoreResidencePortal_1_16; // offset 0x29E, size 0x1
    char c8IgnoreResidencePortal_1_17; // offset 0x29F, size 0x1
    char c8IgnoreResidencePortal_2_0; // offset 0x2A0, size 0x1
    char c8IgnoreResidencePortal_2_1; // offset 0x2A1, size 0x1
    char c8IgnoreResidencePortal_2_2; // offset 0x2A2, size 0x1
    char c8IgnoreResidencePortal_2_3; // offset 0x2A3, size 0x1
    char c8IgnoreResidencePortal_2_4; // offset 0x2A4, size 0x1
    char c8IgnoreResidencePortal_2_5; // offset 0x2A5, size 0x1
    char c8IgnoreResidencePortal_2_6; // offset 0x2A6, size 0x1
    char c8IgnoreResidencePortal_2_7; // offset 0x2A7, size 0x1
    char c8IgnoreResidencePortal_2_8; // offset 0x2A8, size 0x1
    char c8IgnoreResidencePortal_2_9; // offset 0x2A9, size 0x1
    char c8IgnoreResidencePortal_2_10; // offset 0x2AA, size 0x1
    char c8IgnoreResidencePortal_2_11; // offset 0x2AB, size 0x1
    char c8IgnoreResidencePortal_2_12; // offset 0x2AC, size 0x1
    char c8IgnoreResidencePortal_2_13; // offset 0x2AD, size 0x1
    char c8IgnoreResidencePortal_2_14; // offset 0x2AE, size 0x1
    char c8IgnoreResidencePortal_2_15; // offset 0x2AF, size 0x1
    char c8IgnoreResidencePortal_2_16; // offset 0x2B0, size 0x1
    char c8IgnoreResidencePortal_2_17; // offset 0x2B1, size 0x1
    char c8IgnoreResidencePortal_3_0; // offset 0x2B2, size 0x1
    char c8IgnoreResidencePortal_3_1; // offset 0x2B3, size 0x1
    char c8IgnoreResidencePortal_3_2; // offset 0x2B4, size 0x1
    char c8IgnoreResidencePortal_3_3; // offset 0x2B5, size 0x1
    char c8IgnoreResidencePortal_3_4; // offset 0x2B6, size 0x1
    char c8IgnoreResidencePortal_3_5; // offset 0x2B7, size 0x1
    char c8IgnoreResidencePortal_3_6; // offset 0x2B8, size 0x1
    char c8IgnoreResidencePortal_3_7; // offset 0x2B9, size 0x1
    char c8IgnoreResidencePortal_3_8; // offset 0x2BA, size 0x1
    char c8IgnoreResidencePortal_3_9; // offset 0x2BB, size 0x1
    char c8IgnoreResidencePortal_3_10; // offset 0x2BC, size 0x1
    char c8IgnoreResidencePortal_3_11; // offset 0x2BD, size 0x1
    char c8IgnoreResidencePortal_3_12; // offset 0x2BE, size 0x1
    char c8IgnoreResidencePortal_3_13; // offset 0x2BF, size 0x1
    char c8IgnoreResidencePortal_3_14; // offset 0x2C0, size 0x1
    char c8IgnoreResidencePortal_3_15; // offset 0x2C1, size 0x1
    char c8IgnoreResidencePortal_3_16; // offset 0x2C2, size 0x1
    char c8IgnoreResidencePortal_3_17; // offset 0x2C3, size 0x1
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
    unsigned short u16ColorNo; // offset 0x10, size 0x2
};
class clsOOMap : public map {
    // total size: 0x18
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
class __red_black_tree {
    // total size: 0x1
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class value_compare first_; // offset 0x0, size 0x1
    class node * second_; // offset 0x4, size 0x4
};
struct /* @anon4 */ {
    // total size: 0x2C
};
struct /* @anon5 */ {
    // total size: 0x14
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
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class _BinData {
    // total size: 0x28
public:
    char c8Type[4]; // offset 0x0, size 0x4
    signed int s32Ver; // offset 0x4, size 0x4
    class NNS_VECTORFAST * psVector; // offset 0x8, size 0x4
    class _LineData * psLine; // offset 0xC, size 0x4
    class _stcEndPosList * psEPList; // offset 0x10, size 0x4
    float f32MaxLineDepth; // offset 0x14, size 0x4
    float f32MainLength; // offset 0x18, size 0x4
    signed int s32PointNum; // offset 0x1C, size 0x4
    signed int s32LineNum; // offset 0x20, size 0x4
    unsigned char u8LineType; // offset 0x24, size 0x1
    unsigned char u8PathType; // offset 0x25, size 0x1
    unsigned char u8Padding[2]; // offset 0x26, size 0x2
};
class node_base : public anchor {
    // total size: 0xC
public:
    class node_base * right_; // offset 0x4, size 0x4
    class __pointer_plus_bit parent_; // offset 0x8, size 0x4
};
class stcPortalMtx {
    // total size: 0x50
public:
    float aInvMtx[4][4]; // offset 0x0, size 0x40
    signed short s16LocalSx; // offset 0x40, size 0x2
    signed short s16LocalSy; // offset 0x42, size 0x2
    signed short s16LocalSz; // offset 0x44, size 0x2
    signed short s16LocalEx; // offset 0x46, size 0x2
    signed short s16LocalEy; // offset 0x48, size 0x2
    signed short s16LocalEz; // offset 0x4A, size 0x2
    unsigned char u8PaddinPS2[4]; // offset 0x4C, size 0x4
};
class pair {
    // total size: 0x8
public:
    unsigned int first; // offset 0x0, size 0x4
    class generic_iterator second; // offset 0x4, size 0x4
};
struct /* @anon6 */ {
    // total size: 0x14
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
struct /* @anon7 */ {
    // total size: 0x48
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

// Range: 0x3206A0 -> 0x32070C
void execute(class clsStage11_Task * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3206A0 -> 0x32070C
    }
}


