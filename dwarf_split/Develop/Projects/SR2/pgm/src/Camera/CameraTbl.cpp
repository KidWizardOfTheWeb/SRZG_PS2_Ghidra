/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Camera\CameraTbl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class stcTargetCam1 asTargetCam1[92]; // size: 0x29B0, address: 0x637600
class stcGctrlCam1 asGctrlCam1[2]; // size: 0xA0, address: 0x639FB0
class stcDomeCam1 asDomeCam1[4]; // size: 0xE0, address: 0x63A050
class stcPathCam1 asPathCam1[4]; // size: 0xA0, address: 0x63A130
class stcVectorCam1 asVectorCam1[1]; // size: 0x70, address: 0x63A1D0
class stcCamCtrlJumpTbl asCamCtrlJmpTbl[108]; // size: 0x6C0, address: 0x63A240
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
class stcCamFilter {
    // total size: 0x3C
public:
    class NNS_VECTOR sTargetV; // offset 0x0, size 0xC
    class NNS_VECTOR sPosV; // offset 0xC, size 0xC
    float f32Fovy; // offset 0x18, size 0x4
    signed char s8IpoRot; // offset 0x1C, size 0x1
    signed char s8IpoDir; // offset 0x1D, size 0x1
    signed char s8IpoTra; // offset 0x1E, size 0x1
    signed char s8IpoUp; // offset 0x1F, size 0x1
    unsigned int u32Flag; // offset 0x20, size 0x4
    float f32YDelayRate; // offset 0x24, size 0x4
    float f32ChangeFrame; // offset 0x28, size 0x4
    float f32AliveFrame; // offset 0x2C, size 0x4
    float f32FinishFrame; // offset 0x30, size 0x4
    unsigned int u32FuncIdx; // offset 0x34, size 0x4
    unsigned int u32FParamIdx; // offset 0x38, size 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class stcTargetCam1 {
    // total size: 0x74
public:
    unsigned short u16No; // offset 0x0, size 0x2
    unsigned int u32SetFlag; // offset 0x4, size 0x4
    char * opc8Name; // offset 0x8, size 0x4
    class NNS_VECTORFAST * opsTargetPosVF; // offset 0xC, size 0x4
    class NNS_QUATERNION * opsSurfaceQuat; // offset 0x10, size 0x4
    float * opf32Rad; // offset 0x14, size 0x4
    float * opf32CurveRate; // offset 0x18, size 0x4
    class NNS_VECTOR sEyePosFromTgt; // offset 0x1C, size 0xC
    float f32Dist; // offset 0x28, size 0x4
    float f32Height; // offset 0x2C, size 0x4
    float f32Fovy; // offset 0x30, size 0x4
    unsigned char u8IpoRot; // offset 0x34, size 0x1
    unsigned char u8IpoDir; // offset 0x35, size 0x1
    unsigned char u8IpoTra; // offset 0x36, size 0x1
    unsigned char u8IpoUp; // offset 0x37, size 0x1
    unsigned int u32Flag; // offset 0x38, size 0x4
    float f32UpVecRotDeg; // offset 0x3C, size 0x4
    unsigned int u32setType; // offset 0x40, size 0x4
    unsigned int u32IpoFrame; // offset 0x44, size 0x4
    signed int s32AliveFrame; // offset 0x48, size 0x4
    float f32YDelayRate; // offset 0x4C, size 0x4
    unsigned char u8IpoTraNext; // offset 0x50, size 0x1
    class stcInfo * opsColInfo; // offset 0x54, size 0x4
    float * opf32Speed; // offset 0x58, size 0x4
    float * opf32MaxSpeed; // offset 0x5C, size 0x4
    class stcTargetCam1 * psMaxSpeedParam; // offset 0x60, size 0x4
    class NNS_VECTORFAST * opsGravityUpVec; // offset 0x64, size 0x4
    class stcCamFilter * psCamFilter; // offset 0x68, size 0x4
    class NNS_VECTORFAST * opsTgtUpVF; // offset 0x6C, size 0x4
    class NNS_VECTORFAST * opsExternalPosVF; // offset 0x70, size 0x4
};
class stcPathCam1 {
    // total size: 0x28
public:
    unsigned short u16No; // offset 0x0, size 0x2
    char * opc8Name; // offset 0x4, size 0x4
    class NNS_VECTORFAST * opsAdjustPos; // offset 0x8, size 0x4
    unsigned int u32PathType; // offset 0xC, size 0x4
    signed int s32LineNo; // offset 0x10, size 0x4
    float f32Speed; // offset 0x14, size 0x4
    unsigned int * pu32ActType; // offset 0x18, size 0x4
    unsigned int u32Flag; // offset 0x1C, size 0x4
    float f32IpoTime; // offset 0x20, size 0x4
    float f32AliveTime; // offset 0x24, size 0x4
};
class stcVectorCam1 {
    // total size: 0x70
public:
    unsigned short u16No; // offset 0x0, size 0x2
    char * opc8Name; // offset 0x4, size 0x4
    class NNS_VECTORFAST * opsTargetPosVF; // offset 0x8, size 0x4
    class NNS_VECTORFAST sStartPos; // offset 0x10, size 0x10
    class NNS_VECTORFAST sEndPos; // offset 0x20, size 0x10
    class NNS_VECTORFAST sUpVF; // offset 0x30, size 0x10
    class NNS_VECTORFAST sEndUpVF; // offset 0x40, size 0x10
    float f32Distance; // offset 0x50, size 0x4
    signed int s32Fovy; // offset 0x54, size 0x4
    unsigned int u32IpoFrame; // offset 0x58, size 0x4
    signed int s32AliveFrame; // offset 0x5C, size 0x4
    unsigned int u32SetFlag; // offset 0x60, size 0x4
    class stcCamFilter * psCamFilter; // offset 0x64, size 0x4
    float (* opsPosturalMtx)[4][4]; // offset 0x68, size 0x4
};
class stcInfo {
    // total size: 0x10
public:
    unsigned char u8Effect; // offset 0x0, size 0x1
    unsigned char u8Attr; // offset 0x1, size 0x1
    unsigned char u8Filter; // offset 0x2, size 0x1
    signed char s8Grip; // offset 0x3, size 0x1
    unsigned char u8Union[4]; // offset 0x4, size 0x4
    float f32Param; // offset 0x8, size 0x4
    unsigned int u32Reserved; // offset 0xC, size 0x4
};
class stcDomeCam1 {
    // total size: 0x38
public:
    unsigned short u16No; // offset 0x0, size 0x2
    char * opc8Name; // offset 0x4, size 0x4
    class NNS_VECTORFAST * opsTargetPosVF; // offset 0x8, size 0x4
    float (* opsPosturalMtx)[4][4]; // offset 0xC, size 0x4
    float f32Dist; // offset 0x10, size 0x4
    signed int s32RotX; // offset 0x14, size 0x4
    signed int s32RotY; // offset 0x18, size 0x4
    signed int s32Fovy; // offset 0x1C, size 0x4
    unsigned int u32IpoFrame; // offset 0x20, size 0x4
    signed int s32AliveFrame; // offset 0x24, size 0x4
    class NNS_VECTOR sUpVec; // offset 0x28, size 0xC
    class stcCamFilter * psCamFilter; // offset 0x34, size 0x4
};
class stcGctrlCam1 {
    // total size: 0x50
public:
    unsigned short u16No; // offset 0x0, size 0x2
    char * opc8Name; // offset 0x4, size 0x4
    class NNS_VECTORFAST * opsTargetPosVF; // offset 0x8, size 0x4
    float * opf32RadX; // offset 0xC, size 0x4
    float * opf32RadY; // offset 0x10, size 0x4
    class NNS_QUATERNION * opsVelocityQ; // offset 0x14, size 0x4
    class NNS_VECTOR sEyePosFromTgt; // offset 0x18, size 0xC
    float f32Dist; // offset 0x24, size 0x4
    float f32Height; // offset 0x28, size 0x4
    float f32Fovy; // offset 0x2C, size 0x4
    unsigned int u32EyeTgtIpoFrame; // offset 0x30, size 0x4
    unsigned int u32setType; // offset 0x34, size 0x4
    unsigned int u32IpoFrame; // offset 0x38, size 0x4
    signed int s32AliveFrame; // offset 0x3C, size 0x4
    float f32CurveRad; // offset 0x40, size 0x4
    float f32CurveDeg; // offset 0x44, size 0x4
    class NNS_VECTORFAST * opsGravityUpVec; // offset 0x48, size 0x4
    class stcCamFilter * psCamFilter; // offset 0x4C, size 0x4
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
class stcCamCtrlJumpTbl {
    // total size: 0x10
public:
    unsigned int u32CamCtrlType; // offset 0x0, size 0x4
    unsigned int u32TblIdx; // offset 0x4, size 0x4
    unsigned short u16Pri; // offset 0x8, size 0x2
    unsigned int u32CamIvType; // offset 0xC, size 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

