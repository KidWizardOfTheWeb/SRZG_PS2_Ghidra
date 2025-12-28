/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\PS2_nn\PS2NnLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon1 */ {
    // total size: 0x30
} __vt__10clsPfLight; // size: 0x30, address: 0x6B61A0
struct /* @anon0 */ {
    // total size: 0xC
} __vt__26clsSingleton<10clsPfLight>; // size: 0xC, address: 0x6B61D0
class clsPfLight * m_tpcSingleton; // size: 0x4, address: 0x703C40
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
class clsSingleton {
    // total size: 0x4
};
class clsPfLight : public clsSingleton, public clsOOLight {
    // total size: 0x14
public:
    class stcDetail_PS2 * m_psDetail_Heap_PS2; // offset 0x10, size 0x4
};
class NNS_LIGHT_SPECULAR_PS2 {
    // total size: 0x20
public:
    unsigned int User; // offset 0x0, size 0x4
    class NNS_RGBA Color; // offset 0x4, size 0x10
    class NNS_VECTOR Direction; // offset 0x14, size 0xC
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
class stcRgbaF32 {
    // total size: 0x10
public:
    float f32r; // offset 0x0, size 0x4
    float f32g; // offset 0x4, size 0x4
    float f32b; // offset 0x8, size 0x4
    float f32a; // offset 0xC, size 0x4
};
struct /* @anon0 */ {
    // total size: 0xC
};
class stcRgbF32 {
    // total size: 0xC
public:
    float f32r; // offset 0x0, size 0x4
    float f32g; // offset 0x4, size 0x4
    float f32b; // offset 0x8, size 0x4
};
class clsOOLight {
    // total size: 0xC
public:
    class stcDetail * m_psDetail_Heap; // offset 0x4, size 0x4
    unsigned char m_u8HardWareNum; // offset 0x8, size 0x1
    unsigned char m_u8SoftWareNum; // offset 0x9, size 0x1
};
class stcDetail_PS2 {
    // total size: 0x4
public:
    enum NNE_POINTLIGHT_TYPE_PS2 sPointType; // offset 0x0, size 0x4
};
enum NNE_POINTLIGHT_TYPE_PS2 {
    NNE_POINTLIGHT_TYPE_PS2_PROPORTIONAL = 0,
    NNE_POINTLIGHT_TYPE_PS2_CONSTANT = 1,
    NNE_POINTLIGHT_TYPE_PS2_LINEAR = 2,
    NNE_POINTLIGHT_TYPE_PS2_QUADRATIC = 3,
    NNE_POINTLIGHT_TYPE_PS2_MAX = 4,
};
class NNS_LIGHT_POINT {
    // total size: 0x2C
public:
    unsigned int User; // offset 0x0, size 0x4
    class NNS_RGBA Color; // offset 0x4, size 0x10
    float Intensity; // offset 0x14, size 0x4
    class NNS_VECTOR Position; // offset 0x18, size 0xC
    float FallOffStart; // offset 0x24, size 0x4
    float FallOffEnd; // offset 0x28, size 0x4
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class NNS_LIGHT_PARALLEL {
    // total size: 0x24
public:
    unsigned int User; // offset 0x0, size 0x4
    class NNS_RGBA Color; // offset 0x4, size 0x10
    float Intensity; // offset 0x14, size 0x4
    class NNS_VECTOR Direction; // offset 0x18, size 0xC
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
struct /* @anon1 */ {
    // total size: 0x30
};

// Range: 0x1F2060 -> 0x1F2218
void sendLight(class clsPfLight * this /* r18 */, unsigned int ou32NoI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2060 -> 0x1F2218
        class stcDetail & rsDetail; // r2
        unsigned int u32LightNo; // r17
        class NNS_LIGHT_PARALLEL sParaLight; // r29+0x90
        class NNS_LIGHT_SPECULAR_PS2 sSpeLight; // r29+0x70
        class NNS_LIGHT_POINT sPointLight; // r29+0x40
    }
}


// Range: 0x1F2220 -> 0x1F22D0
void reinitLight(class clsPfLight * this /* r19 */, unsigned int ou32HardWareNumI /* r18 */, unsigned int ou32SoftWareNumI /* r17 */, float (* paViewMtxI)[4][4] /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2220 -> 0x1F22D0
        class stcDetail_PS2 * psDetail_PS2; // r3
        signed int s32k; // r2
    }
}


// Range: 0x1F2330 -> 0x1F2338
void @4@sendLight__10clsPfLightFUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2330 -> 0x1F2338
    }
}


// Range: 0x1F2340 -> 0x1F2348
void @4@updateLightMtx__10clsPfLightCFRA4_A4_Cf() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2340 -> 0x1F2348
    }
}


// Range: 0x1F2350 -> 0x1F2358
void @4@reinitLight__10clsPfLightFUiUiPA4_A4_Cf() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2350 -> 0x1F2358
    }
}


// Range: 0x1F2360 -> 0x1F2368
void @4@__dt__10clsPfLightFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2360 -> 0x1F2368
    }
}


