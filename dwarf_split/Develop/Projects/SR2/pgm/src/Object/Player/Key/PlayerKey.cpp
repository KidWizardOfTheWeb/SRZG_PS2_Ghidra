/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Object\Player\Key\PlayerKey.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class stcExtensionData t_osExtensionTable[3]; // size: 0x30, address: 0x697C00
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
class _KeyBuf {
    // total size: 0x8
public:
    unsigned int u32KeyState; // offset 0x0, size 0x4
    signed char s8LeverX; // offset 0x4, size 0x1
    signed char s8LeverY; // offset 0x5, size 0x1
    unsigned char u8ExtType; // offset 0x6, size 0x1
    unsigned char u8Padding; // offset 0x7, size 0x1
};
class clsPlayerKey {
    // total size: 0x34
public:
    class _KeyBuf m_sKeyData; // offset 0x0, size 0x8
    unsigned int m_u32OldState; // offset 0x8, size 0x4
    unsigned int m_u32KeyMask; // offset 0xC, size 0x4
    float m_f32StiffFrame; // offset 0x10, size 0x4
    signed char m_s8OldLeverX; // offset 0x14, size 0x1
    signed char m_s8OldLeverY; // offset 0x15, size 0x1
    enum enmStiffType m_eStiffType; // offset 0x18, size 0x4
    unsigned char m_bValidFlag; // offset 0x1C, size 0x1
    class stcExtensionData m_sExtension; // offset 0x20, size 0x10
};
enum enmStiffType {
    STIFF_TYPE__ALL = 0,
    STIFF_TYPE__LEVER = 1,
};
class stcExtensionData {
    // total size: 0x10
public:
    class stcExtensionGDive sGDive; // offset 0x0, size 0x8
    class stcExtensionFlyAction sFly; // offset 0x8, size 0x8
};
class stcExtensionFlyAction {
    // total size: 0x8
public:
    class stcExtensionLeverRate sLever; // offset 0x0, size 0x8
};
class stcExtensionLeverRate {
    // total size: 0x8
public:
    float f32LeverRateX; // offset 0x0, size 0x4
    float f32LeverRateY; // offset 0x4, size 0x4
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class stcExtensionGDive {
    // total size: 0x8
public:
    class stcExtensionLeverRate sLever; // offset 0x0, size 0x8
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

// Range: 0x5567F0 -> 0x556814
void SetExtType(class clsPlayerKey * this /* r2 */, unsigned char u8ExtType /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5567F0 -> 0x556814
    }
}


