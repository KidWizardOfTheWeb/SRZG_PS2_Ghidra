/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\core\OOFontSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class stcRgbaF32 m_tosFontDefColor; // size: 0x10, address: 0x682660
unsigned short m_toau16NumberCode[10]; // size: 0x14, address: 0x0
struct /* @anon1 */ {
    // total size: 0x2C
} __vt__15clsOOFontSystem; // size: 0x2C, address: 0x6C1B50
signed int m_tos32DefAlign; // size: 0x4, address: 0x6865E0
struct /* @anon3 */ {
    // total size: 0xC
} __vt__16clsOOFontDataSet; // size: 0xC, address: 0x6C1B80
struct /* @anon0 */ {
    // total size: 0x14
} __vt__12clsOOFontObj; // size: 0x14, address: 0x6C1B90
struct /* @anon2 */ {
    // total size: 0x14
} __vt__15clsOOFontStrTbl; // size: 0x14, address: 0x6C1BB0
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
class clsOOTexture {
    // total size: 0x4
};
class allocator {
    // total size: 0x1
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class stcPoint2d {
    // total size: 0x8
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
};
class clsOOFontDataSet {
    // total size: 0x48
public:
    class clsOOFontObj * m_pcObj; // offset 0x0, size 0x4
    float m_f32Size; // offset 0x4, size 0x4
    signed int m_s32InterlineSpace; // offset 0x8, size 0x4
    signed int m_s32DrawCharaSpace; // offset 0xC, size 0x4
    unsigned int m_u32DrawParam; // offset 0x10, size 0x4
    class stcRgbaF32 m_sColor; // offset 0x14, size 0x10
    class stcRect m_sDrawRect; // offset 0x24, size 0x10
    class stcPoint3d m_sDrawPos; // offset 0x34, size 0xC
    unsigned char m_bRtnFlag; // offset 0x40, size 0x1
    unsigned char m_bPropFontDraw; // offset 0x41, size 0x1
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
class stcCharaData {
    // total size: 0x4
public:
    unsigned char u8CtrlCodeType; // offset 0x0, size 0x1
    unsigned char u8Reserve; // offset 0x1, size 0x1
    unsigned short u16Code; // offset 0x2, size 0x2
};
class stcPoint3d {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class stcRect {
    // total size: 0x10
public:
    class stcPoint2d sPos; // offset 0x0, size 0x8
    class stcSize2d sSize; // offset 0x8, size 0x8
};
class stcSize2d {
    // total size: 0x8
public:
    float w; // offset 0x0, size 0x4
    float h; // offset 0x4, size 0x4
};
class stcGlyphData {
    // total size: 0x10
public:
    class stcGlyphABC sSize; // offset 0x0, size 0xC
    unsigned short u16CharaCode; // offset 0xC, size 0x2
    unsigned short u16Code; // offset 0xE, size 0x2
};
class stcRect {
    // total size: 0x10
public:
    class stcPoint2d sPos; // offset 0x0, size 0x8
    class stcSize2d sSize; // offset 0x8, size 0x8
};
class clsOOSemaphore {
    // total size: 0x4
};
class stcUvRect {
    // total size: 0x10
public:
    class stcUv sUpperLeft; // offset 0x0, size 0x8
    class stcUv sBottomRight; // offset 0x8, size 0x8
};
class clsOOFontStrTbl {
    // total size: 0x18
public:
    void * m_pvStrTbl; // offset 0x0, size 0x4
    unsigned int m_u32GroupLen; // offset 0x4, size 0x4
    class vector m_cGroupTbl; // offset 0x8, size 0xC
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
class clsOOSplitTexture : public clsOOTexture {
    // total size: 0x10
public:
    class vector m_cTexUVList; // offset 0x4, size 0xC
};
struct /* @anon0 */ {
    // total size: 0x14
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
class stcTexUV {
    // total size: 0x10
public:
    class stcTexCoord sUpperLeft; // offset 0x0, size 0x8
    class stcTexCoord sBottomRight; // offset 0x8, size 0x8
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class clsOODraw2d {
    // total size: 0xC
public:
    unsigned char m_bWide2dConv; // offset 0x0, size 0x1
    unsigned int m_eTexFlag; // offset 0x8, size 0x4
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
class stcTexCoord {
    // total size: 0x8
public:
    float f32u; // offset 0x0, size 0x4
    float f32v; // offset 0x4, size 0x4
};
class stcRgbaF32 {
    // total size: 0x10
public:
    float f32r; // offset 0x0, size 0x4
    float f32g; // offset 0x4, size 0x4
    float f32b; // offset 0x8, size 0x4
    float f32a; // offset 0xC, size 0x4
};
class stcStrGroupTblHeader {
    // total size: 0x14
public:
    char ac8Id[8]; // offset 0x0, size 0x8
    unsigned char u8ByteOder; // offset 0x8, size 0x1
    unsigned char au8Reserve[3]; // offset 0x9, size 0x3
    unsigned short u16Version; // offset 0xC, size 0x2
    unsigned short u16Size; // offset 0xE, size 0x2
    unsigned int u32GroupLen; // offset 0x10, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class stcUvRect {
    // total size: 0x10
public:
    class stcUv sUpperLeft; // offset 0x0, size 0x8
    class stcUv sBottomRight; // offset 0x8, size 0x8
};
class stcSize2d {
    // total size: 0x8
public:
    signed int w; // offset 0x0, size 0x4
    signed int h; // offset 0x4, size 0x4
};
class less : public binary_function {
    // total size: 0x1
};
struct /* @anon1 */ {
    // total size: 0x2C
};
class stcUv {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class binary_function {
    // total size: 0x1
};
struct /* @anon2 */ {
    // total size: 0x14
};
class stcUv {
    // total size: 0x8
public:
    signed int u; // offset 0x0, size 0x4
    signed int v; // offset 0x4, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    class anchor second_; // offset 0x0, size 0x4
};
struct /* @anon3 */ {
    // total size: 0xC
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
class __vector_pod {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    unsigned int * data_; // offset 0x8, size 0x4
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
class __red_black_tree {
    // total size: 0x1
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
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
class anchor {
    // total size: 0x4
public:
    class node_base * left_; // offset 0x0, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
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
class value_compare : public binary_function {
    // total size: 0x1
public:
    class less comp; // offset 0x0, size 0x1
};
class allocator {
    // total size: 0x1
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
class stcGlyphABC {
    // total size: 0xC
public:
    signed int s32A; // offset 0x0, size 0x4
    unsigned int u32B; // offset 0x4, size 0x4
    signed int s32C; // offset 0x8, size 0x4
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

// Range: 0x3D28A0 -> 0x3D28A8
void DrawLocalCode() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D28A0 -> 0x3D28A8
    }
}


// Range: 0x3D28B0 -> 0x3D2988
void DrawData(class clsOOFontSystem * this /* r19 */, class stcPoint3d & rosPos /* r18 */, class stcSize2d & rosSize /* r17 */, class stcUvRect & rosSt /* r2 */, class clsOOTexture & rosTexture /* r2 */, signed int s32TexNo /* r2 */, unsigned int u32Color /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D28B0 -> 0x3D2988
        class stcTexUV sST; // r29+0x50
    }
}


// Range: 0x3D2990 -> 0x3D2E7C
unsigned char DrawBtn(class clsOOFontSystem * this /* r21 */, unsigned char u8BtnNo /* r2 */, class stcPoint3d & rosPos /* r20 */, class stcRect & rosRect /* r30 */, class stcSize2d * psDrawSize /* r22 */, class stcRect * psDrawClipRect /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D2990 -> 0x3D2E7C
        class stcUvRect sStBuff; // r29+0xC0
        class stcUvRect sUvBuff; // r29+0xB0
        class clsOOFontDataSet * psFontSet; // r2
        class stcSize2d sSize; // r29+0xE8
        unsigned int u32Color; // r16
        float f32Buff; // r29+0xF0
        float f32Buff; // r29+0xF0
        class stcPoint3d sPos; // r29+0xD8
        unsigned char bDraw; // r17
    }
}


// Range: 0x3D2E80 -> 0x3D305C
unsigned char ChkCharaClipping(class stcPoint3d * psPos /* r2 */, class stcSize2d * psSize /* r2 */, class stcUvRect * psUV /* r2 */, class stcUvRect & rosST /* r2 */, class stcRect & rosRect /* r2 */, float f32SizeRate /* r29 */, class stcSize2d & rosTexSize /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D2E80 -> 0x3D305C
        float f32Diff; // r29
    }
}


// Range: 0x3D3060 -> 0x3D35B4
unsigned char DrawChara(class clsOOFontSystem * this /* r21 */, class stcCharaData & rosStr /* r23 */, class stcPoint3d & rosPos /* r20 */, class stcRect & rosRect /* r30 */, class stcSize2d * psDrawSize /* r22 */, class stcRect * psDrawClipRect /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3060 -> 0x3D35B4
        class clsOOFontDataSet * psFontSet; // r2
        class clsOOFontObj * psFontObj; // r2
        class stcSize2d sSize; // r29+0xE8
        float f32BaseDrawSizeW; // r22
        unsigned int u32Color; // r23
        signed int s32TexNum; // r18
        class stcUvRect sUvBuff; // r29+0xC0
        class stcUvRect sStBuff; // r29+0xB0
        float f32Buff; // r29+0x100
        float f32Buff; // r29+0x100
        class stcPoint3d sPos; // r29+0xD8
        unsigned char bDraw; // r17
    }
}


// Range: 0x3D35C0 -> 0x3D4060
unsigned char ExecCtrlCode(class clsOOFontSystem * this /* r20 */, class stcCharaData & rosStr /* r2 */, class stcPoint3d * psBasePos /* r19 */, class stcRect & rosRect /* r29+0xEC */, float f32BaseSize /* r29+0x180 */, float * pf32MaxHeight /* r22 */, float * pf32DiffY /* r21 */, unsigned int * pu32PoolData /* r18 */, class stcRect * psDrawRect /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D35C0 -> 0x3D4060
        class clsOOFontDataSet * psFontSet; // r16
        class stcRect sDrawRect; // r29+0x110
        class stcRect * psLocalDrawRect; // r2
        class stcRgbaF32 sRgba; // r29+0x100
        class stcPoint3d sPos; // r29+0x158
        unsigned char bRtn; // r23
        unsigned char u8Data; // r2
        class stcSize2d sDrawSize; // r29+0x150
        class stcRect sDrawClipRect; // r29+0xF0
        class stcPoint3d sPos; // r29+0x140
        unsigned char bDrawChara; // r2
        float f32SetSize; // r2
        float f32SetSize; // r2
        class stcPoint3d sEndPos; // r29+0x130
        class stcPoint3d sEndPos; // r29+0x120
    }
}


// Range: 0x3D4060 -> 0x3D413C
void AutoReturnString(class clsOOFontDataSet * psFontSet /* r2 */, class stcRect & rosRect /* r2 */, float f32Width /* r29 */, float f32DiffY /* r29 */, class stcPoint3d * psPos /* r2 */, class stcPoint3d * psBasePos /* r2 */, float * pf32MaxHeight /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4060 -> 0x3D413C
    }
}


// Range: 0x3D4140 -> 0x3D46F4
void DrawString(class clsOOFontSystem * this /* r21 */, class stcCharaData * posStr /* r20 */, class stcPoint3d * posPos /* r2 */, unsigned int u32DrawNum /* r30 */, class stcPoint3d * posBasePos /* r2 */, class stcPoint3d * psEndPos /* r29+0xCC */, class stcRect * psDrawRect /* r19 */, float * pf32DiffY /* r29+0xC8 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4140 -> 0x3D46F4
        class clsOOFontDataSet * psFontSet; // r18
        class clsOOFontObj * posFontObj; // r2
        class stcPoint3d sCurrentPos; // r29+0x130
        float f32SizeRate; // r20
        class stcRgbaF32 sRgba; // r29+0xF0
        class stcPoint3d sBasePos; // r29+0x120
        class stcRect & rosRect; // r23
        class stcRect sLocalRect; // r29+0xE0
        float f32MaxHeight; // r29+0x168
        unsigned int u32PoolData; // r29+0x164
        float f32DiffY; // r29+0x160
        unsigned int u32DrawCnt; // r17
        class stcPoint3d sPos; // r29+0x110
        float f32Width; // r1
        class stcSize2d sDrawSize; // r29+0x108
        class stcRect sDrawClipRect; // r29+0xD0
        unsigned char bDrawChara; // r2
    }
}


// Range: 0x3D4730 -> 0x3D4784
void DrawStrTbl(class clsOOFontSystem * this /* r2 */, signed int s32TblNo /* r2 */, class stcPoint3d * posPos /* r2 */, unsigned int u32DrawNum /* r2 */, class stcPoint3d * posBasePos /* r2 */, class stcPoint3d * psEndPos /* r2 */, class stcRect * psDrawRect /* r2 */, float * pf32DiffY /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4730 -> 0x3D4784
    }
}


// Range: 0x3D4790 -> 0x3D48B4
void DrawStringUTF16(class clsOOFontSystem * this /* r20 */, unsigned short * pou16Str /* r19 */, class stcPoint3d * posPos /* r18 */, unsigned int u32DrawNum /* r17 */, class stcPoint3d * posBasePos /* r16 */, class stcPoint3d * psEndPos /* r23 */, class stcRect * psDrawRect /* r30 */, float * pf32DiffY /* r29+0xAC */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4790 -> 0x3D48B4
        unsigned int u32Len; // r22
        class stcCharaData * psCharaDataList; // r21
    }
}


// Range: 0x3D48C0 -> 0x3D4940
void GetDrawStrTblSize(class clsOOFontSystem * this /* r16 */, class stcRect * psDrawRect /* r5 */, signed int s32TblNo /* r2 */, class stcPoint3d * posPos /* r2 */, unsigned int u32DrawNum /* r2 */, class stcPoint3d * posBasePos /* r2 */, class stcPoint3d * psEndPos /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D48C0 -> 0x3D4940
    }
}


// Range: 0x3D4940 -> 0x3D4B50
unsigned int ConvertNumberUTF16FromNumber(unsigned int u32Number /* r20 */, unsigned short * pu16Code /* r19 */, unsigned int u32BuffSize /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4940 -> 0x3D4B50
        unsigned int u32Size; // r17
        unsigned int u32SizeBuff; // r16
        unsigned int u32Base; // r5
    }
}


// Range: 0x3D4B50 -> 0x3D4C7C
void GetDrawStringUTF16Size(class clsOOFontSystem * this /* r21 */, class stcRect * psDrawRect /* r20 */, unsigned short * pou16Code /* r19 */, class stcPoint3d * posPos /* r18 */, unsigned int u32DrawNum /* r22 */, class stcPoint3d * posBasePos /* r23 */, class stcPoint3d * psEndPos /* r30 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4B50 -> 0x3D4C7C
    }
}


// Range: 0x3D4C80 -> 0x3D4DB8
unsigned char ConvertCharaDataFromUTF16(class clsOOFontSystem * this /* r2 */, unsigned short * pou16Code /* r21 */, unsigned int u32SetNo /* r2 */, class stcCharaData * psCharaDataBuff /* r20 */, unsigned int u32Cnt /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4C80 -> 0x3D4DB8
        class clsOOFontObj * pocFontObj; // r2
        unsigned char bNoErr; // r18
        unsigned int u32i; // r17
    }
}


// Range: 0x3D4DC0 -> 0x3D4ED8
void * __ct(class clsOOFontSystem * this /* r18 */, class clsOODraw2d * pcDraw2d /* r2 */, unsigned int u32MaxFontObjNum /* r2 */, class clsOOHeapFragment * pcAllocator /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4DC0 -> 0x3D4ED8
        unsigned int u32i; // r17
    }
}


// Range: 0x3D4F50 -> 0x3D4FC4
void * __ct(class clsOOFontDataSet * this /* r2 */, class clsOOFontObj * pcObj /* r2 */, float f32FontSize /* r29 */, class stcRgbaF32 & rosColor /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4F50 -> 0x3D4FC4
    }
}


// Range: 0x3D4FD0 -> 0x3D4FD8
void SetFontStrTbl(class clsOOFontObj * this /* r2 */, class clsOOFontStrTbl * pcStrTbl /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4FD0 -> 0x3D4FD8
    }
}


// Range: 0x3D4FE0 -> 0x3D5080
void SetFontData(class clsOOFontObj * this /* r18 */, class clsOOTexture * psTex /* r2 */, void * pvFontStatus /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4FE0 -> 0x3D5080
        class stcGlyphData * psGlyphData; // r17
        unsigned int u32Cnt; // r16
    }
}


// Range: 0x3D5080 -> 0x3D50B0
unsigned char IsCharaCntData(class stcCharaData * psCharaData /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D5080 -> 0x3D50B0
    }
}


// Range: 0x3D50B0 -> 0x3D5154
void SetStrTblData(class clsOOFontStrTbl * this /* r19 */, void * pvStrTblData /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D50B0 -> 0x3D5154
        class stcStrGroupTblHeader * psStrTblData; // r2
        unsigned int * pu32TblOffset; // r17
        unsigned int u32i; // r16
        class stcCharaData * psCharaDataTop; // r29+0x5C
    }
}


