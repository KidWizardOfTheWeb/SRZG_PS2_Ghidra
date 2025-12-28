/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Effect\Particle\ParticleData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned short u16NumUnion; // size: 0x2, address: 0xB0A978
unsigned short u16NumGame; // size: 0x2, address: 0xB0A980
unsigned short u16NumMode; // size: 0x2, address: 0xB0A988
unsigned short u16NumSet; // size: 0x2, address: 0xB0A990
void * apvUnionDataAdr[100]; // size: 0x190, address: 0xB0A9A0
void * apvGameDataAdr[100]; // size: 0x190, address: 0xB0AB30
void * apvModeDataAdr[50]; // size: 0xC8, address: 0xB0ACC0
void * apvSetDataAdr[100]; // size: 0x190, address: 0xB0AD90
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
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
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

// Range: 0x2F98D0 -> 0x2F9914
void setSetData(unsigned char * pu8BinTopAddr /* r2 */, unsigned int * pu32OffsetNo /* r2 */, unsigned short u16BinNum /* r2 */, unsigned int u32LoopNum /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F98D0 -> 0x2F9914
        unsigned int u32n; // r9
    }
}


// Range: 0x2F9920 -> 0x2F9964
void setModeData(unsigned char * pu8BinTopAddr /* r2 */, unsigned int * pu32OffsetNo /* r2 */, unsigned short u16BinNum /* r2 */, unsigned int u32LoopNum /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F9920 -> 0x2F9964
        unsigned int u32n; // r9
    }
}


// Range: 0x2F9970 -> 0x2F99B4
void setGameData(unsigned char * pu8BinTopAddr /* r2 */, unsigned int * pu32OffsetNo /* r2 */, unsigned short u16BinNum /* r2 */, unsigned int u32LoopNum /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F9970 -> 0x2F99B4
        unsigned int u32n; // r9
    }
}


// Range: 0x2F99C0 -> 0x2F9A04
void setUnionData(unsigned char * pu8BinTopAddr /* r2 */, unsigned int * pu32OffsetNo /* r2 */, unsigned short u16BinNum /* r2 */, unsigned int u32LoopNum /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F99C0 -> 0x2F9A04
        unsigned int u32n; // r9
    }
}


// Range: 0x2F9A10 -> 0x2F9AD8
void initData() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F9A10 -> 0x2F9AD8
        signed int s32n; // r5
    }
}


