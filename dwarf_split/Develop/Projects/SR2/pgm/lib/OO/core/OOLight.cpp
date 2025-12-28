/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\core\OOLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon0 */ {
    // total size: 0x18
} __vt__10clsOOLight; // size: 0x18, address: 0x6BBD00
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
class clsOOLight {
    // total size: 0xC
public:
    class stcDetail * m_psDetail_Heap; // offset 0x4, size 0x4
    unsigned char m_u8HardWareNum; // offset 0x8, size 0x1
    unsigned char m_u8SoftWareNum; // offset 0x9, size 0x1
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class stcDetail {
    // total size: 0x84
public:
    class stcRgbF32 sAmbientRgb; // offset 0x0, size 0xC
    float f32InterpolateSpeed; // offset 0xC, size 0x4
    class stcRgbaF32 sParallelRgba; // offset 0x10, size 0x10
    float f32ParallelInten; // offset 0x20, size 0x4
    class NNS_VECTOR sParallelDir; // offset 0x24, size 0xC
    class NNS_VECTOR sParallelPos; // offset 0x30, size 0xC
    class stcRgbaF32 sSpecularRgba; // offset 0x3C, size 0x10
    class NNS_VECTOR sSpecularDir; // offset 0x4C, size 0xC
    class stcRgbaF32 sPointRgba; // offset 0x58, size 0x10
    float f32PointInten; // offset 0x68, size 0x4
    class NNS_VECTOR sPointPos; // offset 0x6C, size 0xC
    float f32PointFallOffStart; // offset 0x78, size 0x4
    float f32PointFallOffEnd; // offset 0x7C, size 0x4
    unsigned int eUseType; // offset 0x80, size 0x4
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
class stcRgbaF32 {
    // total size: 0x10
public:
    float f32r; // offset 0x0, size 0x4
    float f32g; // offset 0x4, size 0x4
    float f32b; // offset 0x8, size 0x4
    float f32a; // offset 0xC, size 0x4
};
class stcRgbF32 {
    // total size: 0xC
public:
    float f32r; // offset 0x0, size 0x4
    float f32g; // offset 0x4, size 0x4
    float f32b; // offset 0x8, size 0x4
};
struct /* @anon0 */ {
    // total size: 0x18
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};

// Range: 0x2F58A0 -> 0x2F5924
void reinitLight(class clsOOLight * this /* r18 */, unsigned int ou32HardWareNumI /* r17 */, unsigned int ou32SoftWareNumI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F58A0 -> 0x2F5924
        class stcDetail * psDetail; // r3
        signed int s32i; // r2
    }
}


// Range: 0x2F5930 -> 0x2F598C
void setSpecularDir(class clsOOLight * this /* r2 */, unsigned int ou32NoI /* r2 */, float of32xI /* r29+0x20 */, float of32yI /* r29+0x20 */, float of32zI /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F5930 -> 0x2F598C
        class stcDetail & rsDetail; // r16
        class NNS_VECTOR & rsVec; // r2
    }
}


// Range: 0x2F5990 -> 0x2F59CC
void setSpecularRgba(class clsOOLight * this /* r2 */, unsigned int ou32NoI /* r2 */, float of32rI /* r29 */, float of32gI /* r29 */, float of32bI /* r29 */, float of32aI /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F5990 -> 0x2F59CC
        class stcDetail & rsDetail; // r2
        class stcRgbaF32 & rsRgba; // r2
    }
}


// Range: 0x2F59D0 -> 0x2F5A08
void setParallelPos(class clsOOLight * this /* r2 */, unsigned int ou32NoI /* r2 */, float of32xI /* r29 */, float of32yI /* r29 */, float of32zI /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F59D0 -> 0x2F5A08
        class stcDetail & rsDetail; // r2
        class NNS_VECTOR & rsVec; // r2
    }
}


// Range: 0x2F5A10 -> 0x2F5A6C
void setParallelDir(class clsOOLight * this /* r2 */, unsigned int ou32NoI /* r2 */, float of32xI /* r29+0x20 */, float of32yI /* r29+0x20 */, float of32zI /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F5A10 -> 0x2F5A6C
        class stcDetail & rsDetail; // r16
        class NNS_VECTOR & rsVec; // r2
    }
}


// Range: 0x2F5A70 -> 0x2F5AA0
void setParallelInten(class clsOOLight * this /* r2 */, unsigned int ou32NoI /* r2 */, float of32IntenI /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F5A70 -> 0x2F5AA0
        class stcDetail & rsDetail; // r2
    }
}


// Range: 0x2F5AA0 -> 0x2F5ADC
void setParallelRgba(class clsOOLight * this /* r2 */, unsigned int ou32NoI /* r2 */, float of32rI /* r29 */, float of32gI /* r29 */, float of32bI /* r29 */, float of32aI /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F5AA0 -> 0x2F5ADC
        class stcDetail & rsDetail; // r2
        class stcRgbaF32 & rsRgba; // r2
    }
}


// Range: 0x2F5AE0 -> 0x2F5B18
void setAmbientRgb(class clsOOLight * this /* r2 */, unsigned int ou32NoI /* r2 */, float of32rI /* r29 */, float of32gI /* r29 */, float of32bI /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F5AE0 -> 0x2F5B18
        class stcDetail & rsDetail; // r2
    }
}


