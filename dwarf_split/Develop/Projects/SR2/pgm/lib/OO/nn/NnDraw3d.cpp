/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\nn\NnDraw3d.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon1 */ {
    // total size: 0x58
} __vt__11clsPfDraw3d; // size: 0x58, address: 0x6BD7A0
class clsPfCameraMgr * m_tpcSingleton; // size: 0x4, address: 0x6E69C0
class clsPfGraphics * m_tpcSingleton; // size: 0x4, address: 0x6E69A0
struct /* @anon2 */ {
    // total size: 0xC
} __vt__27clsSingleton<11clsPfDraw3d>; // size: 0xC, address: 0x6BD7F8
struct /* @anon0 */ {
    // total size: 0x2C
} __vt__11clsOODraw3d; // size: 0x2C, address: 0x6BD810
class clsPfDraw3d * m_tpcSingleton; // size: 0x4, address: 0x703C30
class clsPfVecCalc * m_tpcSingleton; // size: 0x4, address: 0x703C50
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
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
enum enmZModeCompType {
    Z___NEVER = 0,
    Z___ALWAYS = 1,
    Z___G_EQUAL = 2,
    Z___GREATER = 3,
    Z___L_EQUAL = 4,
    Z___LESS = 5,
};
class clsPfVecCalc : public clsSingleton, public clsOOVecCalc {
    // total size: 0x8
};
class NNS_PRIM3D_PC {
    // total size: 0x10
public:
    class NNS_VECTOR Pos; // offset 0x0, size 0xC
    unsigned int Col; // offset 0xC, size 0x4
};
enum enmCullModeType {
    CULL___NONE = 0,
    CULL___CW = 1,
    CULL___CCW = 2,
};
class clsOODraw3d {
    // total size: 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class stcBgColor {
    // total size: 0x4
public:
    unsigned char m_u8a; // offset 0x0, size 0x1
    unsigned char m_u8b; // offset 0x1, size 0x1
    unsigned char m_u8g; // offset 0x2, size 0x1
    unsigned char m_u8r; // offset 0x3, size 0x1
};
class clsPfCameraMgr : public clsSingleton, private clsOOCameraMgr {
    // total size: 0x14
public:
    class vector m_vecCamera; // offset 0x8, size 0xC
};
struct /* @anon0 */ {
    // total size: 0x2C
};
class PXS_CONTEXTBUFFER {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class PXS_GSREG_AD reg[1]; // offset 0x10, size 0x10
};
class clsSingleton {
    // total size: 0x4
};
class clsOOVecCalc {
    // total size: 0x4
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
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
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
class clsOOCameraMgr {
    // total size: 0x4
};
class clsSingleton {
    // total size: 0x4
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
class __vector_pod {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    unsigned int * data_; // offset 0x8, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
struct /* @anon1 */ {
    // total size: 0x58
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
struct /* @anon2 */ {
    // total size: 0xC
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class allocator {
    // total size: 0x1
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
class clsPfDraw3d : public clsSingleton, public clsOODraw3d {
    // total size: 0x8
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

// Range: 0x342220 -> 0x3423EC
void renderVectorQuad(unsigned int u32ViewI /* r2 */, class NNS_VECTOR * opsVecI /* r16 */, unsigned int u32ColI /* r2 */, float (* opsTrsMtxI)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342220 -> 0x3423EC
        class NNS_RGBA sCol; // r29+0x60
        float aMtx[4][4]; // r29+0x20
    }
}


// Range: 0x3423F0 -> 0x34249C
void renderCube(unsigned int ou32ViewI /* r2 */, float (* opaMtxI)[4][4] /* r2 */, unsigned int ou32ColI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3423F0 -> 0x34249C
        unsigned int u32i; // r4
        float aMtx[4][4]; // r29+0x10
        class NNS_PRIM3D_PC tasPrim3D_PC_Cube[36]; // @ 0x00626AB0
        unsigned int tu32OldColor; // @ 0x00626CF0
    }
}


// Range: 0x3424A0 -> 0x342624
void renderSphere(unsigned int ou32ViewI /* r18 */, class NNS_VECTOR * opsVecI /* r2 */, float of32RadI /* r20 */, unsigned int ou32ColI /* r2 */, unsigned int oeRenderFlag /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3424A0 -> 0x342624
        unsigned int u32i; // r4
        float aMtx[4][4]; // r29+0x90
        float aMtx2[4][4]; // r29+0x50
        class NNS_PRIM3D_PC tasPrim3D_PC_Sphere[162]; // @ 0x00626070
        unsigned int tu32OldColor; // @ 0x00626A90
    }
}


// Range: 0x342630 -> 0x342734
void renderPolygon(unsigned int ou32ViewI /* r2 */, class NNS_VECTOR * opsVecI /* r2 */, unsigned int ou32ColI /* r2 */, unsigned int oeRenderFlag /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342630 -> 0x342734
        class NNS_PRIM3D_PC asPrim3D_PC_Polygon[4]; // r29+0x20
    }
}


// Range: 0x342740 -> 0x342828
void renderTriangle(unsigned int ou32ViewI /* r2 */, class NNS_VECTOR * opsVecI /* r2 */, unsigned int ou32ColI /* r2 */, unsigned int oeRenderFlag /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342740 -> 0x342828
        class NNS_PRIM3D_PC asPrim3D_PC_Triangle[3]; // r29+0x20
    }
}


// Range: 0x342830 -> 0x342A24
void renderArrayVector(unsigned int ou32ViewI /* r2 */, class NNS_VECTOR * opsVecI /* r17 */, unsigned int ou32LineNum /* r16 */, unsigned int ou32ColI /* r2 */, float (* opsTrsMtxI)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342830 -> 0x342A24
        class NNS_RGBA sCol; // r29+0x80
        unsigned int u32Num; // r18
        float aMtx[4][4]; // r29+0x40
    }
}


// Range: 0x342A30 -> 0x342BEC
void renderVectorSubDiff(unsigned int ou32ViewI /* r2 */, class NNS_VECTOR * psVecI /* r16 */, unsigned int ou32ColI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342A30 -> 0x342BEC
        class NNS_RGBA sCol; // r29+0x20
    }
}


// Range: 0x342BF0 -> 0x342DAC
void renderVectorAddDiff(unsigned int ou32ViewI /* r2 */, class NNS_VECTOR * psVecI /* r16 */, unsigned int ou32ColI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342BF0 -> 0x342DAC
        class NNS_RGBA sCol; // r29+0x20
    }
}


// Range: 0x342DB0 -> 0x342FA0
void renderVector(unsigned int ou32ViewI /* r2 */, class NNS_VECTOR * opsVec0I /* r17 */, class NNS_VECTOR * opsVec1I /* r16 */, unsigned int ou32ColI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342DB0 -> 0x342FA0
        class NNS_RGBA sCol; // r29+0x50
        class NNS_VECTOR asVec[2]; // r29+0x30
    }
}


// Range: 0x342FA0 -> 0x34312C
void renderVector(unsigned int ou32ViewI /* r2 */, class NNS_VECTOR * opsVecI /* r16 */, unsigned int ou32ColI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342FA0 -> 0x34312C
        class NNS_RGBA sCol; // r29+0x20
    }
}


// Range: 0x343190 -> 0x343198
void @4@renderVectorQuad__11clsPfDraw3dCFUiPC10NNS_VECTORUiPA4_A4_Cf() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x343190 -> 0x343198
    }
}


// Range: 0x3431A0 -> 0x3431A8
void @4@renderCube__11clsPfDraw3dCFUiPA4_A4_CfUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3431A0 -> 0x3431A8
    }
}


// Range: 0x3431B0 -> 0x3431B8
void @4@renderSphere__11clsPfDraw3dCFUiPC10NNS_VECTORfUiUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3431B0 -> 0x3431B8
    }
}


// Range: 0x3431C0 -> 0x3431C8
void @4@renderPolygon__11clsPfDraw3dCFUiPC10NNS_VECTORUiUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3431C0 -> 0x3431C8
    }
}


// Range: 0x3431D0 -> 0x3431D8
void @4@renderTriangle__11clsPfDraw3dCFUiPC10NNS_VECTORUiUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3431D0 -> 0x3431D8
    }
}


// Range: 0x3431E0 -> 0x3431E8
void @4@renderVectorSubDiff__11clsPfDraw3dCFUiP10NNS_VECTORUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3431E0 -> 0x3431E8
    }
}


// Range: 0x3431F0 -> 0x3431F8
void @4@renderVectorAddDiff__11clsPfDraw3dCFUiP10NNS_VECTORUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3431F0 -> 0x3431F8
    }
}


// Range: 0x343200 -> 0x343208
void @4@renderVector__11clsPfDraw3dCFUiPC10NNS_VECTORUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x343200 -> 0x343208
    }
}


// Range: 0x343210 -> 0x343218
void @4@__dt__11clsPfDraw3dFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x343210 -> 0x343218
    }
}


