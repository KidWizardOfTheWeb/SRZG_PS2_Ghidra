/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Config\nspGCtrl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class stcCommonSetting tosGCtrlCommonSetting; // size: 0x98, address: 0x66AB20
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
class stcCommonSetting {
    // total size: 0x98
public:
    float f32RebootFrame; // offset 0x0, size 0x4
    float f32BonusAccele; // offset 0x4, size 0x4
    float f32BonusMinSpeed; // offset 0x8, size 0x4
    float f32TrackingRadRate; // offset 0xC, size 0x4
    float f32MinSpeed; // offset 0x10, size 0x4
    float f32MaxSpeed; // offset 0x14, size 0x4
    float f32SlideReadyFrame; // offset 0x18, size 0x4
    float f32SlideCancelFrame; // offset 0x1C, size 0x4
    float f32SlideLimitFrame; // offset 0x20, size 0x4
    float f32SlideChargeFrame; // offset 0x24, size 0x4
    float f32SlideSlowDownFrame; // offset 0x28, size 0x4
    float f32SlideCurveDecayRate; // offset 0x2C, size 0x4
    float f32SlideReadyJumpSpeed; // offset 0x30, size 0x4
    signed int s32SlideRotateAcceleFrameX; // offset 0x34, size 0x4
    signed int s32SlideRotateAcceleFrameY; // offset 0x38, size 0x4
    float f32SlideRotateAcceleRadX; // offset 0x3C, size 0x4
    float f32SlideRotateAcceleRadY; // offset 0x40, size 0x4
    float f32SlideMaxRotateX; // offset 0x44, size 0x4
    float f32SlideMaxRotateY; // offset 0x48, size 0x4
    float f32SlideMoveFrame; // offset 0x4C, size 0x4
    float f32TrickReadyFrame; // offset 0x50, size 0x4
    float f32TrickCancelFrame; // offset 0x54, size 0x4
    float f32TrickLimitFrame; // offset 0x58, size 0x4
    float f32TrickChargeFrame; // offset 0x5C, size 0x4
    float f32TrickSlowDownFrame; // offset 0x60, size 0x4
    signed int s32TrickRotateAcceleFrameX; // offset 0x64, size 0x4
    signed int s32TrickRotateAcceleFrameY; // offset 0x68, size 0x4
    float f32TrickRotateAcceleRadX; // offset 0x6C, size 0x4
    float f32TrickRotateAcceleRadY; // offset 0x70, size 0x4
    float f32TrickMaxRotateX; // offset 0x74, size 0x4
    float f32TrickMaxRotateY; // offset 0x78, size 0x4
    float f32TrickMoveFrame; // offset 0x7C, size 0x4
    float f32TrickLandStiffFrame; // offset 0x80, size 0x4
    float f32SlowdownSpeed; // offset 0x84, size 0x4
    float f32SlideGpZeroLimitFrame; // offset 0x88, size 0x4
    float f32SlideGpZeroRotateAcceleRadX; // offset 0x8C, size 0x4
    float f32TrickGpZeroLimitFrame; // offset 0x90, size 0x4
    float f32GCtrlWheelDischargeRate; // offset 0x94, size 0x4
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

