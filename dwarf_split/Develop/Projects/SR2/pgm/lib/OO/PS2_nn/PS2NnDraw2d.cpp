/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\PS2_nn\PS2NnDraw2d.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon1 */ {
    // total size: 0x48
} __vt__11clsPfDraw2d; // size: 0x48, address: 0x6B60C0
class NNS_VECTORFAST tsSrcPosFast; // size: 0x10, address: 0x620DE0
class NNS_VECTORFAST tsSrcPosFast; // size: 0x10, address: 0x620DD0
struct /* @anon0 */ {
    // total size: 0xC
} __vt__27clsSingleton<11clsPfDraw2d>; // size: 0xC, address: 0x6B57C8
struct /* @anon2 */ {
    // total size: 0x24
} __vt__11clsOODraw2d; // size: 0x24, address: 0x6B57A0
class clsPfDraw2d * m_tpcSingleton; // size: 0x4, address: 0x6E6990
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
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class clsPfDraw2d : public clsSingleton, public clsOODraw2d {
    // total size: 0x10
};
class NNS_PRIM2D_P {
    // total size: 0x8
public:
    class NNS_VECTOR2D Pos; // offset 0x0, size 0x8
};
class stcTexUV {
    // total size: 0x10
public:
    class stcTexCoord sUpperLeft; // offset 0x0, size 0x8
    class stcTexCoord sBottomRight; // offset 0x8, size 0x8
};
class NNS_PRIM2D_PC {
    // total size: 0xC
public:
    class NNS_VECTOR2D Pos; // offset 0x0, size 0x8
    unsigned int Col; // offset 0x8, size 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
struct /* @anon0 */ {
    // total size: 0xC
};
class NNS_PRIM2D_PCT {
    // total size: 0x14
public:
    class NNS_VECTOR2D Pos; // offset 0x0, size 0x8
    unsigned int Col; // offset 0x8, size 0x4
    class NNS_TEXCOORD Tex; // offset 0xC, size 0x8
};
class stcTexCoord {
    // total size: 0x8
public:
    float f32u; // offset 0x0, size 0x4
    float f32v; // offset 0x4, size 0x4
};
class NNS_VECTOR2D {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
struct /* @anon1 */ {
    // total size: 0x48
};
class clsOODraw2d {
    // total size: 0xC
public:
    unsigned char m_bWide2dConv; // offset 0x0, size 0x1
    unsigned int m_eTexFlag; // offset 0x8, size 0x4
};
struct /* @anon2 */ {
    // total size: 0x24
};
class stcPrim2d_PC {
    // total size: 0xC
public:
    float f32x; // offset 0x0, size 0x4
    float f32y; // offset 0x4, size 0x4
    unsigned int u32Col; // offset 0x8, size 0x4
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
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};

// Range: 0x1F06E0 -> 0x1F0740
void renderArrayPoint(class stcPrim2d_PC * opsPrim2d_PCI /* r17 */, unsigned int ou32NumI /* r16 */, float of32zI /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F06E0 -> 0x1F0740
    }
}


// Range: 0x1F0740 -> 0x1F08F0
void renderPoint(float of32xI /* r29+0x40 */, float of32yI /* r29+0x40 */, unsigned int ou32ColI /* r2 */, float of32zI /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0740 -> 0x1F08F0
        class NNS_PRIM2D_P sPrim2D_P[1]; // r29+0x38
        class NNS_RGBA sCol; // r29+0x20
    }
}


// Range: 0x1F08F0 -> 0x1F08F8
void End() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F08F0 -> 0x1F08F8
    }
}


// Range: 0x1F0900 -> 0x1F0910
void renderVertArray(unsigned int u32Flg /* r2 */, void * pvVertArray /* r2 */, unsigned int u32VertNum /* r2 */, float f32Pri /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0900 -> 0x1F0910
    }
}


// Range: 0x1F0910 -> 0x1F0C54
void renderData(class clsPfDraw2d * this /* r2 */, float of32x0I /* r24 */, float of32y0I /* r23 */, float of32x1I /* r22 */, float of32y1I /* r21 */, unsigned int ou32ColI /* r18 */, class stcTexUV * opsUVI /* r17 */, float (* opaMtxI)[4][4] /* r16 */, float of32zI /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0910 -> 0x1F0C54
        class NNS_PRIM2D_PC saPrim2D_PC[4]; // r29+0xD0
        class NNS_PRIM2D_PCT saPrim2D_PCT[4]; // r29+0x80
    }
}


// Range: 0x1F0C60 -> 0x1F0CB8
void Begin(class clsPfDraw2d * this /* r17 */, unsigned int oeI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0C60 -> 0x1F0CB8
    }
}


// Range: 0x1F0CC0 -> 0x1F0CC8
void @4@renderArrayPoint__11clsPfDraw2dCFPCQ211clsOODraw2d12stcPrim2d_PCUif() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0CC0 -> 0x1F0CC8
    }
}


// Range: 0x1F0CD0 -> 0x1F0CD8
void @4@renderPoint__11clsPfDraw2dCFffUif() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0CD0 -> 0x1F0CD8
    }
}


// Range: 0x1F0CE0 -> 0x1F0CE8
void @4@End__11clsPfDraw2dCFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0CE0 -> 0x1F0CE8
    }
}


// Range: 0x1F0CF0 -> 0x1F0CF8
void @4@renderVertArray__11clsPfDraw2dFUiPvUif() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0CF0 -> 0x1F0CF8
    }
}


// Range: 0x1F0D00 -> 0x1F0D08
void @4@renderData__11clsPfDraw2dCFffffUiPCQ211clsOODraw2d8stcTexUVPA4_A4_Cff() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0D00 -> 0x1F0D08
    }
}


// Range: 0x1F0D10 -> 0x1F0D18
void @4@Begin__11clsPfDraw2dFUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0D10 -> 0x1F0D18
    }
}


// Range: 0x1F0D20 -> 0x1F0D28
void @4@__dt__11clsPfDraw2dFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0D20 -> 0x1F0D28
    }
}


