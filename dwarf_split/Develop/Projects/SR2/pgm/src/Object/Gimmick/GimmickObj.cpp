/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Object\Gimmick\GimmickObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
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
class stcSetDataDetail {
    // total size: 0x34
public:
    unsigned short u16Type; // offset 0x0, size 0x2
    union { // inferred
        unsigned char uniu8ViewportNum; // offset 0x2, size 0x1
        unsigned char uniu8MissionStageNo; // offset 0x2, size 0x1
    };
    unsigned char u8PortalType; // offset 0x3, size 0x1
    unsigned int u32GameModeSwitch; // offset 0x4, size 0x4
    unsigned int u32Attr; // offset 0x8, size 0x4
    class NNS_VECTOR sPosVec; // offset 0xC, size 0xC
    class NNS_VECTOR sRotVec; // offset 0x18, size 0xC
    class NNS_VECTOR sScaleVec; // offset 0x24, size 0xC
    unsigned int u32GroupNum; // offset 0x30, size 0x4
};
class clsGimmickObj : public clsObject {
    // total size: 0x50
public:
    class NNS_VECTORFAST m_sPosVecFast; // offset 0x10, size 0x10
    class NNS_QUATERNION m_sRotQuat; // offset 0x20, size 0x10
    class NNS_VECTOR m_sScaleVec; // offset 0x30, size 0xC
    class stcSetDataDetail * m_psSetDataDetail; // offset 0x3C, size 0x4
    unsigned int m_u32Attr; // offset 0x40, size 0x4
    enum enmRet m_enClipRet; // offset 0x44, size 0x4
    unsigned int m_u32State; // offset 0x48, size 0x4
    unsigned char m_u8PortalNo; // offset 0x4C, size 0x1
    unsigned char m_u8DrawFlg; // offset 0x4D, size 0x1
    unsigned char m_bEffective; // offset 0x4E, size 0x1
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class clsObject {
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

// Range: 0x37A330 -> 0x37A338
void drawCollision() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x37A330 -> 0x37A338
    }
}


// Range: 0x37A340 -> 0x37A348
void setAttribute(class clsGimmickObj * this /* r2 */, unsigned int ou32Attr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x37A340 -> 0x37A348
    }
}


// Range: 0x37A350 -> 0x37A434
void setSetData(class clsGimmickObj * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x37A350 -> 0x37A434
    }
}


// Range: 0x37A440 -> 0x37A544
void setSetData(class clsGimmickObj * this /* r16 */, class stcSetDataDetail & orsSetDataDetailI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x37A440 -> 0x37A544
    }
}


