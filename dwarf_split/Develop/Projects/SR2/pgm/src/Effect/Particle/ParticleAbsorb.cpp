/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Effect\Particle\ParticleAbsorb.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned char g_au8ParticleTextureDrawType[8]; // size: 0x8, address: 0x0
static unsigned char g_au8ParticleConfigDrawType[8]; // size: 0x8, address: 0x0
static class NNS_VECTORFAST g_tosTestVelocity; // size: 0x10, address: 0x0
struct /* @anon2 */ {
    // total size: 0x38
} __vt__17clsParticleAbsorb; // size: 0x38, address: 0x6BBD80
struct /* @anon1 */ {
    // total size: 0x38
} __vt__15clsParticleBase; // size: 0x38, address: 0x6BBDC0
struct /* @anon3 */ {
    // total size: 0x2C
} __vt__9clsOOTask; // size: 0x2C, address: 0x6B58B0
struct /* @anon0 */ {
    // total size: 0x30
} __vt__7clsTask; // size: 0x30, address: 0x6B59F0
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
class stcParticleData {
    // total size: 0x80
public:
    unsigned short u16CtrlFlag; // offset 0x0, size 0x2
    unsigned char u8DrawType; // offset 0x2, size 0x1
    unsigned char u8CtrlType; // offset 0x3, size 0x1
    unsigned char u8BlendMode; // offset 0x4, size 0x1
    unsigned char u8TextureNo; // offset 0x5, size 0x1
    unsigned short u16Num; // offset 0x6, size 0x2
    class NNS_VECTOR sSize; // offset 0x8, size 0xC
    unsigned char u8RandAppear; // offset 0x14, size 0x1
    unsigned char u8Pad1; // offset 0x15, size 0x1
    unsigned short u16Pad2; // offset 0x16, size 0x2
    float f32Speed; // offset 0x18, size 0x4
    class NNS_VECTOR sRandSpeed; // offset 0x1C, size 0xC
    float f32Gravitation; // offset 0x28, size 0x4
    float f32ClipDist; // offset 0x2C, size 0x4
    signed short s16LiveFrame; // offset 0x30, size 0x2
    signed short s16Loops; // offset 0x32, size 0x2
    class NNS_RGBA sStartRGBA; // offset 0x34, size 0x10
    class NNS_RGBA sEndRGBA; // offset 0x44, size 0x10
    class NNS_VECTOR sRandSize; // offset 0x54, size 0xC
    class NNS_ROTATE_A32 sRotA32; // offset 0x60, size 0xC
    class NNS_ROTATE_A32 sRotRandA32; // offset 0x6C, size 0xC
    float f32SpeedScale; // offset 0x78, size 0x4
    float f32EndSizeX; // offset 0x7C, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class clsSingleton {
    // total size: 0x4
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class generic_iterator {
    // total size: 0x4
public:
    class node * node_; // offset 0x0, size 0x4
};
class clsParticleBase : public clsTask {
    // total size: 0x130
public:
    class NNS_VECTORFAST m_sPosFast; // offset 0x60, size 0x10
    class NNS_VECTORFAST m_sBasePosFast; // offset 0x70, size 0x10
    float m_sPosturMatrix[4][4]; // offset 0x80, size 0x40
    class NNS_RGBA m_sLinearDiffRGBA; // offset 0xC0, size 0x10
    class NNS_RGBA m_sStartRGBA; // offset 0xD0, size 0x10
    class NNS_VECTOR m_sLinearDiffScale; // offset 0xE0, size 0xC
    unsigned short m_u16DeadNum; // offset 0xEC, size 0x2
    class stcParticleDetail * m_psDetailHi; // offset 0xF0, size 0x4
    class stcParticleData * m_psDefData; // offset 0xF4, size 0x4
    class NNS_VECTORFAST * m_opsFollowPosFast; // offset 0xF8, size 0x4
    class NNS_VECTORFAST * m_opsRelatePosFast; // offset 0xFC, size 0x4
    class _NNS_TEXLIST * m_opsTexList; // offset 0x100, size 0x4
    float (* m_opsFollowMtx)[4][4]; // offset 0x104, size 0x4
    class NNS_VECTORFAST * m_opsStartVecFast; // offset 0x108, size 0x4
    unsigned char m_u8ParticleType; // offset 0x10C, size 0x1
    unsigned char m_u8ViewportNo; // offset 0x10D, size 0x1
    class NNS_VECTOR * m_opsCenterPosVec; // offset 0x110, size 0x4
    class NNS_VECTOR * m_opsStartRange; // offset 0x114, size 0x4
    float m_f32EndSizeY; // offset 0x118, size 0x4
    float m_f32EndSizeZ; // offset 0x11C, size 0x4
    signed int m_s32EndFrame; // offset 0x120, size 0x4
    unsigned short * m_pu16StopCode; // offset 0x124, size 0x4
};
class clsParticleAbsorb : public clsParticleBase {
    // total size: 0x130
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
class stcParticleDetail {
    // total size: 0x60
public:
    class NNS_VECTORFAST sPosFast; // offset 0x0, size 0x10
    class NNS_VECTORFAST sVelocityFast; // offset 0x10, size 0x10
    class NNS_RGBA sRGBA; // offset 0x20, size 0x10
    unsigned int u32RGBA; // offset 0x30, size 0x4
    signed short s16LiveFrame; // offset 0x34, size 0x2
    signed short s16Loops; // offset 0x36, size 0x2
    signed short s16EndFrame; // offset 0x38, size 0x2
    float f32HalfSizeX; // offset 0x3C, size 0x4
    float f32HalfSizeY; // offset 0x40, size 0x4
    float f32HalfSizeZ; // offset 0x44, size 0x4
    class NNS_ROTATE_A32 sRotA32; // offset 0x48, size 0xC
    class NNS_ROTATE_A32 sRotSpeedA32; // offset 0x54, size 0xC
};
class stcParticleExtensionData {
    // total size: 0x20
public:
    class NNS_VECTORFAST sPosVecFast; // offset 0x0, size 0x10
    class NNS_VECTORFAST sRamPosVecFast; // offset 0x10, size 0x10
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
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
struct /* @anon0 */ {
    // total size: 0x30
};
struct /* @anon1 */ {
    // total size: 0x38
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
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
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
struct /* @anon2 */ {
    // total size: 0x38
};
struct /* @anon3 */ {
    // total size: 0x2C
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
class pair {
    // total size: 0x8
public:
    unsigned int first; // offset 0x0, size 0x4
    class generic_iterator second; // offset 0x4, size 0x4
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
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
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

// Range: 0x2F6820 -> 0x2F6954
void moveCalc(class clsParticleAbsorb * this /* r20 */, class NNS_VECTORFAST * psVecFast /* r19 */, class stcParticleDetail * psDetailHi /* r18 */, class stcParticleExtensionData * psExtension /* r17 */, float f32AddFrame /* r29+0x60 */, float (* opsPositionMtx)[4][4] /* r16 */, unsigned char bFollowPostion /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F6820 -> 0x2F6954
    }
}


// Range: 0x2F6960 -> 0x2F6C78
void setCreatedSeparate(class clsParticleAbsorb * this /* r19 */, class NNS_VECTORFAST * psVecFast /* r18 */, class stcParticleDetail * psDetailHi /* r2 */, unsigned char bSphere /* r2 */, class stcParticleExtensionData * psExtension /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F6960 -> 0x2F6C78
    }
}


