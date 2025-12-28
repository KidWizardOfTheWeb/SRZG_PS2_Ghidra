/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\2D\Score\ScoreCom2D.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon0 */ {
    // total size: 0x10
} __vt__13clsScoreCom2D; // size: 0x10, address: 0x6D15A0
class clsPfDraw2d * m_tpcSingleton; // size: 0x4, address: 0x6E6990
class _NNS_TEXLIST * apsTextureList[2]; // size: 0x8, address: 0xB0B770
class stcTexUV TexData2D[]; // size: 0x0, address: 0x695410
class stcPoint2D_s16 oasUnionTextureSize[]; // size: 0x0, address: 0x66ADE0
class stcTexUV TexData2D[]; // size: 0x0, address: 0x694AB0
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
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class clsScore2D_Task : public clsTask, public clsScreen2D {
    // total size: 0x120
public:
    signed int m_s32ViewNum; // offset 0x94, size 0x4
    unsigned char m_u8Alpha; // offset 0x98, size 0x1
    signed char m_s8MoveX; // offset 0x99, size 0x1
    signed char m_s8MoveY; // offset 0x9A, size 0x1
    signed char m_s8MoveXMax; // offset 0x9B, size 0x1
    signed char m_s8MoveYMax; // offset 0x9C, size 0x1
    signed char m_s8PauseFrame; // offset 0x9D, size 0x1
    class stcViewRect m_asRect[5]; // offset 0xA0, size 0x50
    unsigned char m_au8Flg[5]; // offset 0xF0, size 0x5
    unsigned short m_u16ReverseAlpha; // offset 0xF6, size 0x2
    unsigned char m_u8ReverseWidth; // offset 0xF8, size 0x1
    unsigned char m_u8ReverseHeight; // offset 0xF9, size 0x1
    signed char m_s8ReversePosXDiff; // offset 0xFA, size 0x1
    signed char m_s8ReversePosYDiff; // offset 0xFB, size 0x1
    class clsScoreMeter2D * m_pcMeter; // offset 0xFC, size 0x4
    class clsScoreParts2D * m_pcParts; // offset 0x100, size 0x4
    class clsScoreInfo2D * m_pcInfo; // offset 0x104, size 0x4
    class clsScoreMap2D * m_pcMap; // offset 0x108, size 0x4
    class clsScoreTimer2D * m_pcTimer; // offset 0x10C, size 0x4
    class clsScoreRecord2D * m_pcRecord; // offset 0x110, size 0x4
    class clsScoreHint2D * m_pcHint; // offset 0x114, size 0x4
    class clsScoreAttentionAttack2D * m_pcAtentionAttack; // offset 0x118, size 0x4
    class clsScoreCom2D * m_pcCom; // offset 0x11C, size 0x4
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
class clsScoreCom2D {
    // total size: 0x40
public:
    class clsScore2D_Task * m_pcParent; // offset 0x4, size 0x4
    class stcUnionStatus m_sUnionStatus; // offset 0x8, size 0x18
    class stcComStatus m_asComStatus[7]; // offset 0x20, size 0x1C
    unsigned char m_bDraw; // offset 0x3C, size 0x1
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class generic_iterator {
    // total size: 0x4
public:
    class node * node_; // offset 0x0, size 0x4
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
class stcTexUV {
    // total size: 0x10
public:
    class stcTexCoord sUpperLeft; // offset 0x0, size 0x8
    class stcTexCoord sBottomRight; // offset 0x8, size 0x8
};
class stcComStatus {
    // total size: 0x4
public:
    signed short s16DrawX; // offset 0x0, size 0x2
    signed short s16DrawY; // offset 0x2, size 0x2
};
class clsScoreMeter2D {
    // total size: 0x0
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
class clsScoreParts2D {
    // total size: 0x0
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0xC
};
class stcTexCoord {
    // total size: 0x8
public:
    float f32u; // offset 0x0, size 0x4
    float f32v; // offset 0x4, size 0x4
};
class stcUnionStatus {
    // total size: 0x18
public:
    signed int s32IcomWidthDiff; // offset 0x0, size 0x4
    signed int s32IcomHeightDiff; // offset 0x4, size 0x4
    signed int s32NumOffsetX; // offset 0x8, size 0x4
    signed int s32NumOffsetY; // offset 0xC, size 0x4
    signed int s32NumWidthDiff; // offset 0x10, size 0x4
    signed int s32NumHeightDiff; // offset 0x14, size 0x4
};
struct /* @anon0 */ {
    // total size: 0x10
};
class map {
    // total size: 0x18
public:
    class __tree tree_; // offset 0x0, size 0x18
};
class clsScoreInfo2D {
    // total size: 0x0
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
class clsScoreMap2D {
    // total size: 0x0
};
class clsScreen2D {
    // total size: 0x40
public:
    signed int m_s32ViewLeft; // offset 0x4, size 0x4
    signed int m_s32ViewTop; // offset 0x8, size 0x4
    signed int m_s32ViewRight; // offset 0xC, size 0x4
    signed int m_s32ViewBottom; // offset 0x10, size 0x4
    signed int m_s32ScreenW; // offset 0x14, size 0x4
    signed int m_s32ScreenH; // offset 0x18, size 0x4
    signed int m_s32SafeAreaWidth; // offset 0x1C, size 0x4
    signed int m_s32SafeAreaHeight; // offset 0x20, size 0x4
    signed int m_s32SafeAreaLeft; // offset 0x24, size 0x4
    signed int m_s32SafeAreaTop; // offset 0x28, size 0x4
    signed int m_s32SafeAreaRight; // offset 0x2C, size 0x4
    signed int m_s32SafeAreaBottom; // offset 0x30, size 0x4
    signed int m_s32CenterX; // offset 0x34, size 0x4
    signed int m_s32CenterY; // offset 0x38, size 0x4
    unsigned char m_u8CenterMargin; // offset 0x3C, size 0x1
};
class clsScoreTimer2D {
    // total size: 0x0
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
class clsScoreRecord2D {
    // total size: 0x0
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
class clsScoreHint2D {
    // total size: 0x0
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
class clsScoreAttentionAttack2D {
    // total size: 0x0
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
class clsOODraw2d {
    // total size: 0xC
public:
    unsigned char m_bWide2dConv; // offset 0x0, size 0x1
    unsigned int m_eTexFlag; // offset 0x8, size 0x4
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
class stcViewRect {
    // total size: 0x10
public:
    signed int s32Left; // offset 0x0, size 0x4
    signed int s32Top; // offset 0x4, size 0x4
    signed int s32Right; // offset 0x8, size 0x4
    signed int s32Bottom; // offset 0xC, size 0x4
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
class node_base : public anchor {
    // total size: 0xC
public:
    class node_base * right_; // offset 0x4, size 0x4
    class __pointer_plus_bit parent_; // offset 0x8, size 0x4
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

// Range: 0x5898D0 -> 0x589BB8
void _drawComPoint(class clsScoreCom2D * this /* r22 */, unsigned int u32ComNo /* r2 */, unsigned int u32PlayerNo /* r29+0xEC */, unsigned int u32DrawNum /* r21 */, signed int s32Digit /* r20 */, float f32Dist /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5898D0 -> 0x589BB8
        class stcTexUV * psTexSrc_Base; // r2
        class stcTexUV * psTexSrc; // r2
        class stcPoint2D_s16 * psTextureIconSize; // r2
        class stcPoint2D_s16 * psTextureBaseSize; // r2
        class stcComStatus * psComStatus; // r2
        signed int s32DrawX; // r19
        signed int s32DrawY; // r2
        signed int s32DrawWidth; // r2
        signed int s32DrawHeight; // r2
        unsigned int u32Color; // r18
        char ac8FileName[64]; // r29+0xF0
        signed int s32Num; // r2
        signed int s32i; // r5
    }
}


// Range: 0x589BC0 -> 0x589F08
void init(class clsScoreCom2D * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x589BC0 -> 0x589F08
        class stcTexUV * psTexSrc; // r2
        signed int s32DrawX; // r5
        signed int s32DrawY; // r11
        signed int s32i; // r3
        class stcComStatus * psComStatus; // r2
    }
}


// Range: 0x589F10 -> 0x589F5C
void * __dt(class clsScoreCom2D * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x589F10 -> 0x589F5C
    }
}


// Range: 0x589F60 -> 0x589FC4
void * __ct(class clsScoreCom2D * this /* r16 */, class clsScore2D_Task * pcParent /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x589F60 -> 0x589FC4
    }
}


