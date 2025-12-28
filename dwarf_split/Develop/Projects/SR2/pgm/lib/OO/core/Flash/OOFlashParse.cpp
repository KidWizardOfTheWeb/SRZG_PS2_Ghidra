/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\core\Flash\OOFlashParse.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int u32FileAddr; // size: 0x4, address: 0xB17AE0
float (* psMtx)[3][2]; // size: 0x4, address: 0xB17AE8
class stcCXFormWithAlpha * psCXFwithA; // size: 0x4, address: 0xB17AF0
class stcCXFormWithAlpha * psCXFwithB; // size: 0x4, address: 0xB17AF8
class stcCXFormWithAlpha sNormalCXFwithA; // size: 0x14, address: 0xB17B00
class stcCXFormWithAlpha sNormalCXFwithB; // size: 0x14, address: 0xB17B20
class clsPfMainHeap * m_tpcSingleton; // size: 0x4, address: 0x6D20D0
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
class stcGradRecord {
    // total size: 0x8
public:
    unsigned int u32Ratio; // offset 0x0, size 0x4
    unsigned int u32Rgba; // offset 0x4, size 0x4
};
class stcPlaceObject3 {
    // total size: 0x10
public:
    unsigned short u16CharacterId; // offset 0x0, size 0x2
    unsigned short u16ClipDepth; // offset 0x2, size 0x2
    float (* psPlaceMtx)[3][2]; // offset 0x4, size 0x4
    class stcCXFormWithAlpha * psCXWithAlpha; // offset 0x8, size 0x4
    unsigned char u8BlendMode; // offset 0xC, size 0x1
    unsigned char au8Padding[3]; // offset 0xD, size 0x3
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
class stcBitsLossLess2 {
    // total size: 0x8
public:
    unsigned short u16CharaID; // offset 0x0, size 0x2
    unsigned char u8Format; // offset 0x2, size 0x1
    unsigned char u8TexIdx; // offset 0x3, size 0x1
    unsigned short u16Width; // offset 0x4, size 0x2
    unsigned short u16Height; // offset 0x6, size 0x2
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class stcImportAssets {
    // total size: 0xC
public:
    unsigned short u16URLLen; // offset 0x0, size 0x2
    unsigned short u16Num; // offset 0x2, size 0x2
    char * pc8URL; // offset 0x4, size 0x4
    class stcExportInner * psImInner; // offset 0x8, size 0x4
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
class stcDoAction {
    // total size: 0x8
public:
    unsigned int u32RecNum; // offset 0x0, size 0x4
    class stcActionRec * psActRecs; // offset 0x4, size 0x4
};
class stcClipActRec {
    // total size: 0x20
public:
    class stcClipEventFlag sEvFlag; // offset 0x0, size 0x14
    unsigned char u8KeyCode; // offset 0x14, size 0x1
    unsigned char au8Padding[3]; // offset 0x15, size 0x3
    unsigned int u32RecNum; // offset 0x18, size 0x4
    class stcActionRec * psActRecs; // offset 0x1C, size 0x4
};
class stcStraightEdgeRec {
    // total size: 0xC
public:
    unsigned char u8LineType; // offset 0x0, size 0x1
    unsigned char au8Padding[3]; // offset 0x1, size 0x3
    signed int s32DeltaX; // offset 0x4, size 0x4
    signed int s32DeltaY; // offset 0x8, size 0x4
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
class stcDepthData {
    // total size: 0x8
public:
    unsigned int u32DepthNo; // offset 0x0, size 0x4
    unsigned int u32InstructNum; // offset 0x4, size 0x4
};
class stcActionRec {
    // total size: 0x8
public:
    unsigned char u8ActCode; // offset 0x0, size 0x1
    unsigned char au8Padding[3]; // offset 0x1, size 0x3
    void * pvData; // offset 0x4, size 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class stcPlaceHead {
    // total size: 0x4
public:
    unsigned short u16HasBits; // offset 0x0, size 0x2
    unsigned short u16Depth; // offset 0x2, size 0x2
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
class stcDefineShape4 {
    // total size: 0x64
public:
    unsigned short u16CharaID; // offset 0x0, size 0x2
    unsigned char u8IsUsesNonScalingStrokes; // offset 0x2, size 0x1
    unsigned char u8IsUsesScalingStrokes; // offset 0x3, size 0x1
    class stcFgbRect sShapeBounds; // offset 0x4, size 0x10
    class stcFgbRect sEdgeBounds; // offset 0x14, size 0x10
    class stcShapeWithStyle sShapeWithStyle; // offset 0x24, size 0x40
};
class stcLineStyle {
    // total size: 0x8
public:
    unsigned short u16Width; // offset 0x0, size 0x2
    unsigned short u16Padding; // offset 0x2, size 0x2
    unsigned int u32RGBA; // offset 0x4, size 0x4
};
class stcCurvedEdgeRec {
    // total size: 0x10
public:
    signed int s32ControlDeltaX; // offset 0x0, size 0x4
    signed int s32ControlDeltaY; // offset 0x4, size 0x4
    signed int s32AnchorDeltaX; // offset 0x8, size 0x4
    signed int s32AnchorDeltaY; // offset 0xC, size 0x4
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
class stcClipEventFlag {
    // total size: 0x14
public:
    unsigned char u8KeyUp; // offset 0x0, size 0x1
    unsigned char u8KeyDown; // offset 0x1, size 0x1
    unsigned char u8MouseUp; // offset 0x2, size 0x1
    unsigned char u8MouseDown; // offset 0x3, size 0x1
    unsigned char u8MouseMove; // offset 0x4, size 0x1
    unsigned char u8Unload; // offset 0x5, size 0x1
    unsigned char u8Frame; // offset 0x6, size 0x1
    unsigned char u8Load; // offset 0x7, size 0x1
    unsigned char u8DragOver; // offset 0x8, size 0x1
    unsigned char u8RollOut; // offset 0x9, size 0x1
    unsigned char u8RollOver; // offset 0xA, size 0x1
    unsigned char u8ReleaseOutside; // offset 0xB, size 0x1
    unsigned char u8Release; // offset 0xC, size 0x1
    unsigned char u8Press; // offset 0xD, size 0x1
    unsigned char u8Initialize; // offset 0xE, size 0x1
    unsigned char u8Data; // offset 0xF, size 0x1
    unsigned char u8Construct; // offset 0x10, size 0x1
    unsigned char u8KeyPress; // offset 0x11, size 0x1
    unsigned char u8DragOut; // offset 0x12, size 0x1
    unsigned char u8Padding; // offset 0x13, size 0x1
};
class stcPlaceObject2 {
    // total size: 0xC
public:
    unsigned short u16CharacterId; // offset 0x0, size 0x2
    unsigned short u16ClipDepth; // offset 0x2, size 0x2
    float (* psPlaceMtx)[3][2]; // offset 0x4, size 0x4
    class stcCXFormWithAlpha * psCXWithAlpha; // offset 0x8, size 0x4
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
class stcSprite {
    // total size: 0x14
public:
    class stcDepthInfo sDepthInfo; // offset 0x0, size 0x8
    unsigned short u16CharacterID; // offset 0x8, size 0x2
    unsigned short u16FrameCnt; // offset 0xA, size 0x2
    unsigned int u32CtrlTagNum; // offset 0xC, size 0x4
    class stcSeqTag * psSeqTags; // offset 0x10, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class stcActGotoLabel {
    // total size: 0x8
public:
    unsigned char u8ActCode; // offset 0x0, size 0x1
    unsigned char u8Padding; // offset 0x1, size 0x1
    unsigned short u16LabelLen; // offset 0x2, size 0x2
    char * pc8LabelName; // offset 0x4, size 0x4
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
class stcTag {
    // total size: 0x8
public:
    unsigned int u32TagID; // offset 0x0, size 0x4
    void * pvData; // offset 0x4, size 0x4
};
class stcActPush {
    // total size: 0x8
public:
    unsigned char u8Type; // offset 0x0, size 0x1
    unsigned char u8Padding; // offset 0x1, size 0x1
    unsigned short u16Num; // offset 0x2, size 0x2
    class stcPushData * psPushData; // offset 0x4, size 0x4
};
class stcScene {
    // total size: 0x14
public:
    class stcDepthInfo sDepthInfo; // offset 0x0, size 0x8
    unsigned int u32FrameCnt; // offset 0x8, size 0x4
    unsigned int u32CtrlTagNum; // offset 0xC, size 0x4
    class stcTag * psTags; // offset 0x10, size 0x4
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
class clsOOMainHeap : public clsOOHeapFragment {
    // total size: 0x34
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
class stcExportInner {
    // total size: 0x8
public:
    unsigned short u16Tag; // offset 0x0, size 0x2
    unsigned short u16StrLen; // offset 0x2, size 0x2
    char * pc8Name; // offset 0x4, size 0x4
};
class stcClipAction {
    // total size: 0x1C
public:
    class stcClipEventFlag sEvFlag; // offset 0x0, size 0x14
    unsigned int u32ClipRecNum; // offset 0x14, size 0x4
    class stcClipActRec * psClipActRec; // offset 0x18, size 0x4
};
class stcPushData {
    // total size: 0x10
public:
    unsigned char u8Type; // offset 0x0, size 0x1
    class uniPushData uData; // offset 0x8, size 0x8
};
class stcPolyVert {
    // total size: 0xC
public:
    float f32X; // offset 0x0, size 0x4
    float f32Y; // offset 0x4, size 0x4
    unsigned int u32Color; // offset 0x8, size 0x4
};
class stcExportAssets {
    // total size: 0x8
public:
    unsigned short u16Num; // offset 0x0, size 0x2
    unsigned short u16Padding; // offset 0x2, size 0x2
    class stcExportInner * psExInner; // offset 0x4, size 0x4
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
class stcActConstantPool {
    // total size: 0xC
public:
    unsigned short u16PoolNum; // offset 0x0, size 0x2
    unsigned short * pu16NameLen; // offset 0x4, size 0x4
    char * * ppc8String; // offset 0x8, size 0x4
};
class clsPfMainHeap : public clsSingleton, public clsOOMainHeap {
    // total size: 0x38
};
class stcVertHeader {
    // total size: 0x8
public:
    unsigned int u32Type; // offset 0x0, size 0x4
    unsigned int u32Num; // offset 0x4, size 0x4
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class stcGradient {
    // total size: 0xC
public:
    unsigned short u16SpreadMode; // offset 0x0, size 0x2
    unsigned short u16InterpolationRgb; // offset 0x2, size 0x2
    unsigned int u32Num; // offset 0x4, size 0x4
    class stcGradRecord * psGradRecs; // offset 0x8, size 0x4
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
class stcPlaceHead {
    // total size: 0x4
public:
    unsigned short u16HasBits; // offset 0x0, size 0x2
    unsigned short u16Depth; // offset 0x2, size 0x2
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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

// Range: 0x4B95E0 -> 0x4B9724
unsigned int Parse_ImportAssets(unsigned char * pou8RowData /* r20 */, class stcImportAssets * psIm /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B95E0 -> 0x4B9724
        unsigned char * pou8Local; // r18
        unsigned int u32Cnt; // r17
    }
}


// Range: 0x4B9730 -> 0x4B9910
unsigned int Parse_PlaceObject3(unsigned char * pou8RowData /* r18 */, class stcPlaceObject3 * psData /* r17 */, unsigned int & ru32Depth /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B9730 -> 0x4B9910
        unsigned char * pou8Local; // r16
        class stcPlaceHead sHead; // r29+0x5C
        float (* psMtx)[3][2]; // r16
        class stcCXFormWithAlpha * pcx; // r19
    }
}


// Range: 0x4B9910 -> 0x4B9A84
unsigned int Parse_PlaceObject2(unsigned char * pou8RowData /* r18 */, class stcPlaceObject2 * psData /* r17 */, unsigned int & ru32Depth /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B9910 -> 0x4B9A84
        unsigned char * pou8Local; // r16
        class stcPlaceHead sHead; // r29+0x5C
        float (* psMtx)[3][2]; // r16
        class stcCXFormWithAlpha * pcx; // r19
    }
}


// Range: 0x4B9A90 -> 0x4BA2DC
unsigned int Parse_ActionRec(unsigned char * pou8RowData /* r21 */, class stcActionRec * psActRec /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4B9A90 -> 0x4BA2DC
        unsigned char * pou8Local; // r20
        unsigned short u16n; // r19
        class stcActConstantPool * psConPool; // r18
        class stcActGotoLabel * psActGotoLabel; // r2
        class stcActPush * psActPush; // r2
        unsigned short u16n; // r19
        unsigned short u16Len; // r2
        class stcActDefineFunction * psActDefFunc; // r17
        class stcActDefineFunction2 * psActDefFunc2; // r17
    }
}


// Range: 0x4BA2E0 -> 0x4BA5E8
unsigned int Parse_FMScene(unsigned char * pou8RowData /* r29+0xA8 */, class stcScene * psScene /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4BA2E0 -> 0x4BA5E8
        unsigned char * pou8Local; // r21
        unsigned int u32Tag; // r2
        unsigned int u32Cnt; // r17
        unsigned int u32FrameNo; // r23
        unsigned int u32Depth; // r29+0xAC
        class stcDepthInfo * psDepthInfo; // r2
        class stcTag * psTag; // r20
        unsigned short u16Len; // r2
    }
}


// Range: 0x4BA5F0 -> 0x4BA960
unsigned int Parse_FMSprite(unsigned char * pou8RowData /* r29+0xA8 */, class stcSprite * psSprite /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4BA5F0 -> 0x4BA960
        unsigned char * pou8Local; // r21
        unsigned int u32Tag; // r2
        unsigned int u32Cnt; // r17
        unsigned int u32FrameNo; // r23
        unsigned int u32Depth; // r29+0xAC
        class stcDepthInfo * psDepthInfo; // r2
        class stcSeqTag * psSTag; // r20
        unsigned short u16Len; // r2
    }
}


// Range: 0x4BA960 -> 0x4BAAF8
unsigned int Parse_StyleChangeRec(unsigned char * pou8RowData /* r18 */, class stcStyleChangeRec * psSCRec /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4BA960 -> 0x4BAAF8
        unsigned char * pou8Local; // r16
        unsigned int u32n; // r20
        class stcFillStyle * psFS; // r19
        class stcLineStyle2 * psLS2; // r20
        class stcLineStyle * psLS; // r20
    }
}


// Range: 0x4BAB00 -> 0x4BAED8
unsigned int Parse_Shape(unsigned char * pou8RowData /* r23 */, class stcShape * psShape /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4BAB00 -> 0x4BAED8
        unsigned char * pou8Local; // r20
        unsigned int u32SeqSize; // r18
        unsigned int u32n; // r19
        unsigned int * pu32Type; // r18
        class stcStyleChangeRec * psStyleChangeRec; // r17
        class stcStraightEdgeRec * psStraightEdgeRec; // r16
        class stcCurvedEdgeRec * psCurvedEdgeRec; // r22
        class stcShapeVert * psShapeV; // r2
        unsigned int u32TotalVertNum; // r16
        unsigned int u32Size; // r19
    }
}


// Range: 0x4BAEE0 -> 0x4BB06C
unsigned int Parse_ShapeWithStyle(unsigned char * pou8RowData /* r18 */, class stcShapeWithStyle * psSWStyle /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4BAEE0 -> 0x4BB06C
        unsigned char * pou8Local; // r16
        unsigned int u32n; // r20
        class stcFillStyle * psFillStyle; // r19
        class stcLineStyle2 * psLS2; // r20
        class stcLineStyle * psLS; // r20
    }
}


// Range: 0x4BB070 -> 0x4BB518
signed int Parse_FGB(void * pvRowData /* r16 */, class stcFlash * psFlash /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4BB070 -> 0x4BB518
        unsigned char * pu8Cur; // r16
        class stcTagInfo * psTagInfo; // r2
        unsigned int u32n; // r18
        unsigned int u32Code; // r2
        class stcTag * psDefTag; // r17
        class stcExportAssets * psEx; // r21
        class stcImportAssets * psIm; // r18
        class stcSprite * psSprite; // r18
    }
}


