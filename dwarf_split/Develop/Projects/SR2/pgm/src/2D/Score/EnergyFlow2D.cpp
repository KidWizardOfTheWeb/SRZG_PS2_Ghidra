/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\2D\Score\EnergyFlow2D.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class clsOOProfile * m_tpcSingleton; // size: 0x4, address: 0x703C28
class stcPoint2D_s16 oasUnionTextureSize[]; // size: 0x0, address: 0x66ADE0
class stcTexUV TexData2D[]; // size: 0x0, address: 0x694AB0
class clsPfGraphics * m_tpcSingleton; // size: 0x4, address: 0x6E69A0
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
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
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
class clsEnergyFlow2D {
    // total size: 0x40
public:
    unsigned int m_u32Mode; // offset 0x0, size 0x4
    signed int m_s32BaseX; // offset 0x4, size 0x4
    signed int m_s32BaseY; // offset 0x8, size 0x4
    unsigned int m_u32Flg; // offset 0xC, size 0x4
    signed int m_s32Num; // offset 0x10, size 0x4
    float m_f32HeadScale; // offset 0x14, size 0x4
    float m_f32MarginFrame; // offset 0x18, size 0x4
    class stcLinePoint m_sHeadPoint; // offset 0x1C, size 0xC
    class stcLinePoint m_sTailPoint; // offset 0x28, size 0xC
    float * m_opf32TargetFrame; // offset 0x34, size 0x4
    class stcLinePoint * m_opsPoint; // offset 0x38, size 0x4
    class clsScore2D_Task * m_pcScore; // offset 0x3C, size 0x4
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
class stcViewRect {
    // total size: 0x10
public:
    signed int s32Left; // offset 0x0, size 0x4
    signed int s32Top; // offset 0x4, size 0x4
    signed int s32Right; // offset 0x8, size 0x4
    signed int s32Bottom; // offset 0xC, size 0x4
};
enum enmCullModeType {
    CULL___NONE = 0,
    CULL___CW = 1,
    CULL___CCW = 2,
};
class clsOOSemaphore {
    // total size: 0x4
};
class stcLinePoint {
    // total size: 0xC
public:
    float f32Frame; // offset 0x0, size 0x4
    class stcPoint2D_s16 sFast; // offset 0x4, size 0x4
    class stcPoint2D_s16 sSecond; // offset 0x8, size 0x4
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
class NNS_PRIM2D_PCT {
    // total size: 0x14
public:
    class NNS_VECTOR2D Pos; // offset 0x0, size 0x8
    unsigned int Col; // offset 0x8, size 0x4
    class NNS_TEXCOORD Tex; // offset 0xC, size 0x8
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
class stcPoint2D_s16 {
    // total size: 0x4
public:
    signed short s16x; // offset 0x0, size 0x2
    signed short s16y; // offset 0x2, size 0x2
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
class PXS_CONTEXTBUFFER {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class PXS_GSREG_AD reg[1]; // offset 0x10, size 0x10
};
class stcHistory {
    // total size: 0xC
public:
    unsigned int m_u32Average; // offset 0x0, size 0x4
    char * m_opc8Name; // offset 0x4, size 0x4
    unsigned int m_u32Count; // offset 0x8, size 0x4
};
class clsScoreMeter2D {
    // total size: 0x0
};
class __list_deleter {
    // total size: 0x14
public:
    class compressed_pair size_; // offset 0x0, size 0x8
    class compressed_pair end_; // offset 0x8, size 0xC
};
class clsScoreParts2D {
    // total size: 0x0
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
class clsScoreInfo2D {
    // total size: 0x0
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class clsScoreMap2D {
    // total size: 0x0
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
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
class clsScoreRecord2D {
    // total size: 0x0
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
class clsScoreHint2D {
    // total size: 0x0
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
class clsScoreAttentionAttack2D {
    // total size: 0x0
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class clsScoreCom2D {
    // total size: 0x0
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

// Range: 0x464050 -> 0x4640EC
void draw(class clsEnergyFlow2D * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x464050 -> 0x4640EC
    }
}


// Range: 0x4640F0 -> 0x46457C
void drawEnergyLine(class clsEnergyFlow2D * this /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4640F0 -> 0x46457C
        signed int s32HeadNo; // r2
        signed int s32TailNo; // r2
        signed int s32TexNo; // r5
        class stcTexUV * psTexSrc_Tex; // r2
        class stcTexUV * psTexSrc; // r2
        class stcPoint2D_s16 * psTextureSize; // r2
        unsigned char u8DrawAlpha; // r7
        unsigned int u32Color; // r2
        class NNS_PRIM2D_PCT prim2D_PCT[4]; // r29+0x90
        signed int s32n; // r20
        class stcLinePoint * opsFlowPoint; // r2
        class stcLinePoint * opsNextPoint; // r2
        signed int s32DrawX; // r2
        signed int s32DrawY; // r2
        float f32HalfW; // r29+0xE0
        float f32HalfH; // r29+0xE0
    }
}


// Range: 0x464580 -> 0x464910
void execute(class clsEnergyFlow2D * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x464580 -> 0x464910
    }
}


// Range: 0x464910 -> 0x464AB8
void updateTail(class clsEnergyFlow2D * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x464910 -> 0x464AB8
        float f32Frame; // r29
        signed int s32n; // r10
        class stcLinePoint * opsNextPoint; // r2
    }
}


// Range: 0x464AC0 -> 0x464B04
void * __dt(class clsEnergyFlow2D * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x464AC0 -> 0x464B04
    }
}


// Range: 0x464B10 -> 0x464B7C
void * __ct(class clsEnergyFlow2D * this /* r16 */, signed int s32PosX /* r2 */, signed int s32PosY /* r2 */, float * opf32Frame /* r2 */, class stcLinePoint * opsPoint /* r2 */, signed int s32Num /* r2 */, class clsScore2D_Task * pcScore /* r2 */, float f32MarginFrame /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x464B10 -> 0x464B7C
    }
}


