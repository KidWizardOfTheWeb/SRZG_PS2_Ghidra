/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Misc\MathEtc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int tu32MaxC; // size: 0x4, address: 0xB0B758
static unsigned short tu16KParam; // size: 0x2, address: 0xB0B760
static float tf32MaxPos; // size: 0x4, address: 0xB0B768
class clsOOProfile * m_tpcSingleton; // size: 0x4, address: 0x703C28
float BSplineBlend_NLoop(unsigned int, unsigned short, float); // size: 0x0, address: 0x302870
float BSplineBlend_Loop(unsigned int, unsigned short, float); // size: 0x0, address: 0x302430
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
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class stcHistory {
    // total size: 0xC
public:
    unsigned int m_u32Average; // offset 0x0, size 0x4
    char * m_opc8Name; // offset 0x4, size 0x4
    unsigned int m_u32Count; // offset 0x8, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class NNS_QUATERNION {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
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

// Range: 0x302070 -> 0x302424
float interpolateBSprineVNF(class NNS_VECTORFAST * psDestPos /* r21 */, class NNS_VECTORFAST * psDestN /* r20 */, class NNS_VECTORFAST * psPosArray /* r19 */, class NNS_VECTORFAST * psNArray /* r18 */, unsigned int u32PosCnt /* r16 */, float f32Pos /* r20 */, unsigned short u16KParam /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x302070 -> 0x302424
        unsigned int u32i; // r16
        float (* fBBlend)(unsigned int, unsigned short, float); // r22
        float f32BPos; // r20
        float f32BAdd; // r29+0xA0
        unsigned int u32LoopFlag; // r23
        unsigned int u32LoopEnd; // r2
    }
}


// Range: 0x302430 -> 0x302868
static float BSplineBlend_Loop(unsigned int u32LoopCnt /* r18 */, unsigned short u16KParam /* r2 */, float f32Pos /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x302430 -> 0x302868
        float f32Numer; // r29+0x50
        float f32Denom; // r21
        float f32Val1; // r22
        float f32Val2; // r29+0x50
        float f32NewPos; // r29+0x50
    }
}


// Range: 0x302870 -> 0x302CD0
static float BSplineBlend_NLoop(unsigned int u32LoopCnt /* r19 */, unsigned short u16KParam /* r2 */, float f32Pos /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x302870 -> 0x302CD0
        float f32Numer; // r29+0x60
        float f32Denom; // r21
        float f32Val1; // r22
        float f32Val2; // r29+0x60
    }
}


// Range: 0x302CD0 -> 0x302DA4
float getClosestPointOnLine_RetFlag(class NNS_VECTORFAST * psCrossVecFast /* r18 */, class NNS_VECTORFAST * opsLine00 /* r17 */, class NNS_VECTORFAST * opsLine01 /* r2 */, class NNS_VECTORFAST * opsPoint /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x302CD0 -> 0x302DA4
        float f32Rate; // r20
    }
}


// Range: 0x302DB0 -> 0x302E4C
float getClosestPointOnLine(class NNS_VECTORFAST * psCrossVecFast /* r18 */, class NNS_VECTORFAST * opsLine00 /* r17 */, class NNS_VECTORFAST * opsLine01 /* r2 */, class NNS_VECTORFAST * opsPoint /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x302DB0 -> 0x302E4C
        class NNS_VECTORFAST sLineVecFast; // r29+0x60
        class NNS_VECTORFAST sPointVecFast; // r29+0x50
        float f32Rate; // r20
    }
}


// Range: 0x302E50 -> 0x303018
void getQuat2VecFast(class NNS_QUATERNION * psDstQuat /* r18 */, class NNS_VECTORFAST * opsIn0VecFast /* r17 */, class NNS_VECTORFAST * opsIn1VecFast /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x302E50 -> 0x303018
        class NNS_VECTORFAST sAxisVecFast; // r29+0x50
    }
}


// Range: 0x303020 -> 0x3031B8
void getQuat2NrmVecFast(class NNS_QUATERNION * psDstQuat /* r18 */, class NNS_VECTORFAST * opsIn0VecFast /* r17 */, class NNS_VECTORFAST * opsIn1VecFast /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x303020 -> 0x3031B8
        class NNS_VECTORFAST sAxisVecFast; // r29+0x50
    }
}


