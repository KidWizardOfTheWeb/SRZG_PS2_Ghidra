/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Camera\SrCamCtrlMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon6 */ {
    // total size: 0xC
} __vt__15clsSrCamCtrlMgr; // size: 0xC, address: 0x6B8788
class clsSrCamCtrlMgr * m_tpcSingleton; // size: 0x4, address: 0x703BF8
struct /* @anon1 */ {
    // total size: 0xC
} __vt__31clsSingleton<15clsSrCamCtrlMgr>; // size: 0xC, address: 0x6B87D0
class stcTargetCam1 asTargetCam1[92]; // size: 0x29B0, address: 0x637600
struct /* @anon0 */ {
    // total size: 0x2C
} __vt__10clsPathCam; // size: 0x2C, address: 0x6C5220
struct /* @anon7 */ {
    // total size: 0x2C
} __vt__10clsCamCtrl; // size: 0x2C, address: 0x6B87A0
struct /* @anon3 */ {
    // total size: 0x2C
} __vt__12clsVectorCam; // size: 0x2C, address: 0x6C17E0
struct /* @anon5 */ {
    // total size: 0x2C
} __vt__10clsDomeCam; // size: 0x2C, address: 0x6BE750
struct /* @anon2 */ {
    // total size: 0x2C
} __vt__11clsGctrlCam; // size: 0x2C, address: 0x6BBCD0
struct /* @anon4 */ {
    // total size: 0x2C
} __vt__12clsTargetCam; // size: 0x2C, address: 0x6B87E0
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
struct /* @anon0 */ {
    // total size: 0x2C
};
enum /* @enum */ {
    PCAM_FLG_CHGACTTYPE = 1,
    PCAM_FLG_PATHUPVEC = 2,
};
class clsCamIvBase {
    // total size: 0x4
};
class __wrap_iterator {
    // total size: 0x4
public:
    class clsCamCtrl * * it_; // offset 0x0, size 0x4
};
class clsPathCam : public clsCamCtrl {
    // total size: 0xC0
public:
    enum /* @enum */ {
        PCAM_FLG_CHGACTTYPE = 1,
        PCAM_FLG_PATHUPVEC = 2,
    } enmPCamFlags; // offset 0x1C, size 0x4
    class clsPath m_cPath; // offset 0x20, size 0x60
    unsigned int m_u32PathType; // offset 0x80, size 0x4
    unsigned int m_u32LineNo; // offset 0x84, size 0x4
    float m_f32Speed; // offset 0x88, size 0x4
    unsigned int * m_pu32ActType; // offset 0x8C, size 0x4
    unsigned int m_u32Flag; // offset 0x90, size 0x4
    unsigned int m_u32ActTypeBkup; // offset 0x94, size 0x4
    class NNS_VECTORFAST m_sPosVF; // offset 0xA0, size 0x10
    unsigned int m_u32PNo; // offset 0xB0, size 0x4
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
class vector : private __vector_imp {
    // total size: 0xC
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
struct /* @anon1 */ {
    // total size: 0xC
};
class stcSpeedPath {
    // total size: 0x10
public:
    signed short s16MaxSpeed; // offset 0x0, size 0x2
    signed short s16MinSpeed; // offset 0x2, size 0x2
    signed short s16Type; // offset 0x4, size 0x2
    signed short as16Reserve[5]; // offset 0x6, size 0xA
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class clsTargetCam : public clsCamCtrl {
    // total size: 0xC0
public:
    class NNS_VECTORFAST * m_opsTgtPosVF; // offset 0x1C, size 0x4
    class NNS_QUATERNION * m_opsSlerpQuat; // offset 0x20, size 0x4
    float * m_opf32Rad; // offset 0x24, size 0x4
    float * m_opf32CurveRate; // offset 0x28, size 0x4
    class stcInfo * m_opsColInfo; // offset 0x2C, size 0x4
    float * m_opf32Speed; // offset 0x30, size 0x4
    class NNS_VECTORFAST * m_opsGravityUpVF; // offset 0x34, size 0x4
    class NNS_VECTORFAST * m_opsExTargetPosVF; // offset 0x38, size 0x4
    float * m_opf32MaxSpeed; // offset 0x3C, size 0x4
    class NNS_VECTORFAST m_sTgtBeforePosVF; // offset 0x40, size 0x10
    class NNS_VECTORFAST m_sAdjustBeforePosVF; // offset 0x50, size 0x10
    float m_f32BeforeRad; // offset 0x60, size 0x4
    float m_f32BeforeDir; // offset 0x64, size 0x4
    float m_f32BeforeCurveRate; // offset 0x68, size 0x4
    class NNS_VECTORFAST m_sEyeTgtVF; // offset 0x70, size 0x10
    float m_f32Dist; // offset 0x80, size 0x4
    float m_f32HeightFromTgt; // offset 0x84, size 0x4
    float m_f32Fovy; // offset 0x88, size 0x4
    unsigned char m_u8IpoDir; // offset 0x8C, size 0x1
    unsigned char m_u8IpoRot; // offset 0x8D, size 0x1
    unsigned char m_u8IpoTra; // offset 0x8E, size 0x1
    unsigned char m_u8IpoUp; // offset 0x8F, size 0x1
    unsigned int m_u32Flag; // offset 0x90, size 0x4
    unsigned int m_u32CurveCnt; // offset 0x94, size 0x4
    float m_f32CurveDeg; // offset 0x98, size 0x4
    float m_f32CurveRad; // offset 0x9C, size 0x4
    unsigned short m_u16ZRotRate; // offset 0xA0, size 0x2
    unsigned char m_u8KickerFovyCnt; // offset 0xA2, size 0x1
    float m_f32YDelayRate; // offset 0xA4, size 0x4
    class stcTargetCam1 * m_psMaxSpeedParam; // offset 0xA8, size 0x4
    class stcCamFilter * m_psCamFilter; // offset 0xAC, size 0x4
    class NNS_VECTORFAST * m_opsTgtUpVF; // offset 0xB0, size 0x4
    unsigned char m_u8IpoTraNext; // offset 0xB4, size 0x1
};
struct /* @anon2 */ {
    // total size: 0x2C
};
class stcCamCtrlStock {
    // total size: 0xC
public:
    unsigned int u32CamCtrlType; // offset 0x0, size 0x4
    class clsCamCtrl * pacCamCtrl[2]; // offset 0x4, size 0x8
};
class clsVectorCam : public clsCamCtrl {
    // total size: 0x80
public:
    class NNS_VECTORFAST * m_opsTgtPosVF; // offset 0x1C, size 0x4
    class NNS_VECTORFAST m_sStartPos; // offset 0x20, size 0x10
    class NNS_VECTORFAST m_sEndPos; // offset 0x30, size 0x10
    class NNS_VECTORFAST m_sUpVF; // offset 0x40, size 0x10
    class NNS_VECTORFAST m_sEndUpVF; // offset 0x50, size 0x10
    class NNS_VECTORFAST m_sPos; // offset 0x60, size 0x10
    float m_f32Distance; // offset 0x70, size 0x4
    signed int m_s32Fovy; // offset 0x74, size 0x4
    class stcCamFilter * m_psCamFilter; // offset 0x78, size 0x4
    float (* m_psPosturalMtx)[4][4]; // offset 0x7C, size 0x4
};
class clsCamCtrl {
    // total size: 0x1C
public:
    unsigned short m_u16Priority; // offset 0x4, size 0x2
    float m_f32AliveTime; // offset 0x8, size 0x4
    unsigned short m_u16TblIdx; // offset 0xC, size 0x2
    unsigned int (* m_pfPreIntervention)(class clsPfCamera *); // offset 0x10, size 0x4
    unsigned int (* m_pfPostIntervention)(class clsPfCamera *); // offset 0x14, size 0x4
    unsigned int m_u32UniqNo; // offset 0x18, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
struct /* @anon3 */ {
    // total size: 0x2C
};
class clsGctrlCam : public clsCamCtrl {
    // total size: 0x80
public:
    class NNS_VECTORFAST * m_opsTgtPosVF; // offset 0x1C, size 0x4
    class NNS_QUATERNION * m_opsVelocityQ; // offset 0x20, size 0x4
    class NNS_VECTORFAST * m_opsUpVF; // offset 0x24, size 0x4
    float * m_opf32RadX; // offset 0x28, size 0x4
    float * m_opf32RadY; // offset 0x2C, size 0x4
    float * m_opf32CurveRate; // offset 0x30, size 0x4
    float m_f32BeforeRadX; // offset 0x34, size 0x4
    float m_f32BeforeRadY; // offset 0x38, size 0x4
    float m_f32BeforeRadY2; // offset 0x3C, size 0x4
    class NNS_VECTORFAST m_sEyeTgtVF; // offset 0x40, size 0x10
    float m_f32Dist; // offset 0x50, size 0x4
    float m_f32HeightFromTgt; // offset 0x54, size 0x4
    float m_f32Fovy; // offset 0x58, size 0x4
    unsigned char m_u8IpoDir; // offset 0x5C, size 0x1
    unsigned char m_u8IpoRot; // offset 0x5D, size 0x1
    unsigned char m_u8IpoTra; // offset 0x5E, size 0x1
    unsigned char m_u8IpoUp; // offset 0x5F, size 0x1
    unsigned int m_u32Flag; // offset 0x60, size 0x4
    unsigned short m_u16Mode; // offset 0x64, size 0x2
    unsigned short m_u16IpoStart; // offset 0x66, size 0x2
    float m_f32CurveRad; // offset 0x68, size 0x4
    float m_f32CurveDeg; // offset 0x6C, size 0x4
    unsigned char m_u8KeyDiff; // offset 0x70, size 0x1
    unsigned int m_u32EyeTgtIpoFrame; // offset 0x74, size 0x4
    unsigned int m_u32EyeTgtIpoTime; // offset 0x78, size 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class clsPfCamera : public clsOOCamera {
    // total size: 0x7AD0
public:
    class clsOOCameraDebug m_cCamDebug; // offset 0x8, size 0x7814
    float m_sViewMtx[4][4]; // offset 0x7820, size 0x40
    float m_sBillBoardMtx[4][4]; // offset 0x7860, size 0x40
    float m_sYBillBoardMtx[4][4]; // offset 0x78A0, size 0x40
    float m_sPrjMtx[4][4]; // offset 0x78E0, size 0x40
    float m_sOrthoMtx[4][4]; // offset 0x7920, size 0x40
    float m_sClipMtx[4][4]; // offset 0x7960, size 0x40
    class NNS_CAMERA_TARGET_UPVECTOR m_sCamera; // offset 0x79A0, size 0x38
    class clsCamMixer * m_pcMixer; // offset 0x79D8, size 0x4
    class NNS_VECTORFAST m_sAxisX; // offset 0x79E0, size 0x10
    class NNS_VECTORFAST m_sAxisY; // offset 0x79F0, size 0x10
    class NNS_VECTORFAST m_sAxisZ; // offset 0x7A00, size 0x10
    class NNS_VECTORFAST m_sCameraPosVF; // offset 0x7A10, size 0x10
    float m_sBkupViewMtx[4][4]; // offset 0x7A20, size 0x40
    float m_sBkupPrjMtx44[4][4]; // offset 0x7A60, size 0x40
    float m_f32Left; // offset 0x7AA0, size 0x4
    float m_f32Right; // offset 0x7AA4, size 0x4
    float m_f32Top; // offset 0x7AA8, size 0x4
    float m_f32Bottom; // offset 0x7AAC, size 0x4
    float m_f32CamDist; // offset 0x7AB0, size 0x4
    float m_f32CamHeight; // offset 0x7AB4, size 0x4
    unsigned char m_u8DebugSetCamFlg; // offset 0x7AB8, size 0x1
    unsigned char m_u8LookPlayer; // offset 0x7AB9, size 0x1
    unsigned char m_u8DomeCamera; // offset 0x7ABA, size 0x1
    float m_f32DomeDist; // offset 0x7ABC, size 0x4
    signed int m_s32DomeRotY; // offset 0x7AC0, size 0x4
    signed int m_s32DomeRotX; // offset 0x7AC4, size 0x4
};
struct /* @anon4 */ {
    // total size: 0x2C
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class clsPath {
    // total size: 0x60
public:
    class NNS_VECTORFAST m_sUpVecFast; // offset 0x0, size 0x10
    class NNS_VECTORFAST m_sDirVecFast; // offset 0x10, size 0x10
    class NNS_VECTORFAST m_sCrossVecFast; // offset 0x20, size 0x10
    class NNS_VECTORFAST m_sMoveVecFast; // offset 0x30, size 0x10
    class stcLine * m_psLine; // offset 0x40, size 0x4
    float m_f32LengthRate; // offset 0x44, size 0x4
    float m_f32Length; // offset 0x48, size 0x4
    float m_f32DistanceLR; // offset 0x4C, size 0x4
    unsigned short m_u16HitBit; // offset 0x50, size 0x2
    unsigned short m_u16PointNo; // offset 0x52, size 0x2
    signed short m_s16PathNo; // offset 0x54, size 0x2
    unsigned short m_u16SearchHitBit; // offset 0x56, size 0x2
};
class clsSrCamCtrlMgr : public clsSingleton {
    // total size: 0x68
public:
    class vector m_vecpcCamCtrl; // offset 0x4, size 0xC
    class vector m_vecpcTargetCam; // offset 0x10, size 0xC
    class vector m_vecpcGctrlCam; // offset 0x1C, size 0xC
    class vector m_vecpcDomeCam; // offset 0x28, size 0xC
    class vector m_vecpcVecCam; // offset 0x34, size 0xC
    class vector m_vecpcPathCam; // offset 0x40, size 0xC
    class vector m_vecpcMotionCam; // offset 0x4C, size 0xC
    class vector m_vecpcSrCamMixer; // offset 0x58, size 0xC
    unsigned int m_u32UniqNo; // offset 0x64, size 0x4
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
class clsOOCameraDebug {
    // total size: 0x7814
public:
    class NNS_VECTOR m_asCamPosV[512]; // offset 0x4, size 0x1800
    class NNS_VECTOR m_asTargetV[512][2]; // offset 0x1804, size 0x3000
    class NNS_VECTOR m_asCamUpV[512][2]; // offset 0x4804, size 0x3000
    signed int m_s32CurIdx; // offset 0x7804, size 0x4
    unsigned int m_u32DrawFlag; // offset 0x7808, size 0x4
    unsigned char m_u8No; // offset 0x780C, size 0x1
    unsigned int m_u32ActiveNum; // offset 0x7810, size 0x4
};
class clsDomeCam : public clsCamCtrl {
    // total size: 0x40
public:
    class NNS_VECTORFAST * m_opsTgtPosVF; // offset 0x1C, size 0x4
    float (* m_opsPosturalMtx)[4][4]; // offset 0x20, size 0x4
    class NNS_VECTOR m_sUpVec; // offset 0x24, size 0xC
    float m_f32Dist; // offset 0x30, size 0x4
    signed int m_s32RotX; // offset 0x34, size 0x4
    signed int m_s32RotY; // offset 0x38, size 0x4
    signed int m_s32Fovy; // offset 0x3C, size 0x4
};
struct /* @anon5 */ {
    // total size: 0x2C
};
class vector : private __vector_imp {
    // total size: 0xC
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class stcSetTbl {
    // total size: 0x10
public:
    unsigned int u32JmpIdx; // offset 0x0, size 0x4
    unsigned int u32TblIdx; // offset 0x4, size 0x4
    unsigned int u32Num; // offset 0x8, size 0x4
    unsigned int u32CurJmpIdx; // offset 0xC, size 0x4
};
class stcLine {
    // total size: 0x30
public:
    class NNS_CAPSULE * psCapsule; // offset 0x0, size 0x4
    class NNS_VECTORFAST * psPointVec; // offset 0x4, size 0x4
    class NNS_VECTORFAST * psNormalVec; // offset 0x8, size 0x4
    class NNS_SPHERE sLimitSph; // offset 0xC, size 0x10
    unsigned short u16Num; // offset 0x1C, size 0x2
    unsigned short u16Attr; // offset 0x1E, size 0x2
    class /* @class */ {
        // total size: 0x10
    public:
        union { // inferred
            signed char s8Data[16]; // offset 0x0, size 0x10
            class stcSpeedPath sSpeed; // offset 0x0, size 0x10
            class stcGravityPath sGravity; // offset 0x0, size 0x10
            class stcGDivePath sGDive; // offset 0x0, size 0x10
        };
    } uniData; // offset 0x20, size 0x10
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
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcCamCtrlStock * data_; // offset 0x8, size 0x4
};
class NNS_CAPSULE {
    // total size: 0x1C
public:
    class NNS_VECTOR c1; // offset 0x0, size 0xC
    class NNS_VECTOR c2; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
class allocator {
    // total size: 0x1
};
class clsCamMixer {
    // total size: 0xF5D0
public:
    class clsPfCamera * m_pcBaseCamera; // offset 0x4, size 0x4
    class vector m_vecsCamCtrlStock; // offset 0x8, size 0xC
    class clsCamCtrl * m_pacCamCtrl[2]; // offset 0x14, size 0x8
    class clsPfCamera m_acCamera[2]; // offset 0x20, size 0xF5A0
    class clsCamIvBase * m_pcCamIv; // offset 0xF5C0, size 0x4
    unsigned char m_u8Mode; // offset 0xF5C4, size 0x1
    unsigned char m_u8IsLock; // offset 0xF5C5, size 0x1
    unsigned char m_u8HasNum; // offset 0xF5C6, size 0x1
    unsigned int m_u32Ratio; // offset 0xF5C8, size 0x4
    unsigned int m_u32Time; // offset 0xF5CC, size 0x4
};
class NNS_CAMERA_TARGET_UPVECTOR {
    // total size: 0x38
public:
    unsigned int User; // offset 0x0, size 0x4
    signed int Fovy; // offset 0x4, size 0x4
    float Aspect; // offset 0x8, size 0x4
    float ZNear; // offset 0xC, size 0x4
    float ZFar; // offset 0x10, size 0x4
    class NNS_VECTOR Position; // offset 0x14, size 0xC
    class NNS_VECTOR Target; // offset 0x20, size 0xC
    class NNS_VECTOR UpVector; // offset 0x2C, size 0xC
};
class clsMotionCam : public clsCamCtrl {
    // total size: 0x54
public:
    class NNS_VECTOR m_sAddPos; // offset 0x1C, size 0xC
    class NNS_QUATERNION m_sAddQuat; // offset 0x28, size 0x10
    class NNS_CAMERAPTR * m_psBaseCam; // offset 0x38, size 0x4
    class NNS_CAMERAPTR * m_psCalcCam; // offset 0x3C, size 0x4
    class NNS_MOTION * m_psCamMotion; // offset 0x40, size 0x4
    float m_f32StartFrame; // offset 0x44, size 0x4
    float m_f32PlayFrame; // offset 0x48, size 0x4
    float m_f32EndFrame; // offset 0x4C, size 0x4
    float m_f32SpeedRate; // offset 0x50, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class clsSingleton {
    // total size: 0x4
};
struct /* @anon6 */ {
    // total size: 0xC
};
class /* @class */ {
    // total size: 0x10
public:
    union { // inferred
        signed char s8Data[16]; // offset 0x0, size 0x10
        class stcSpeedPath sSpeed; // offset 0x0, size 0x10
        class stcGravityPath sGravity; // offset 0x0, size 0x10
        class stcGDivePath sGDive; // offset 0x0, size 0x10
    };
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class vector : private __vector_imp {
    // total size: 0xC
};
struct /* @anon7 */ {
    // total size: 0x2C
};
class NNS_CAMERAPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pCamera; // offset 0x4, size 0x4
};
class clsOOCamera {
    // total size: 0x8
public:
    unsigned int m_u32CamNo; // offset 0x4, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class NNS_SPHERE {
    // total size: 0x10
public:
    class NNS_VECTOR c; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class NNS_MOTION {
    // total size: 0x20
public:
    unsigned int fType; // offset 0x0, size 0x4
    float StartFrame; // offset 0x4, size 0x4
    float EndFrame; // offset 0x8, size 0x4
    signed int nSubmotion; // offset 0xC, size 0x4
    class NNS_SUBMOTION * pSubmotion; // offset 0x10, size 0x4
    float FrameRate; // offset 0x14, size 0x4
    unsigned int Reserved0; // offset 0x18, size 0x4
    unsigned int Reserved1; // offset 0x1C, size 0x4
};
class compile_assert {
    // total size: 0x1
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
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
class vector : private __vector_imp {
    // total size: 0xC
};
class vector : private __vector_imp {
    // total size: 0xC
};
class NNS_SUBMOTION {
    // total size: 0x28
public:
    unsigned int fType; // offset 0x0, size 0x4
    unsigned int fIPType; // offset 0x4, size 0x4
    union { // inferred
        signed int Id; // offset 0x8, size 0x4
        struct { // inferred
            signed short Id0; // offset 0x8, size 0x2
            signed short Id1; // offset 0xA, size 0x2
        };
    };
    float StartFrame; // offset 0xC, size 0x4
    float EndFrame; // offset 0x10, size 0x4
    float StartKeyFrame; // offset 0x14, size 0x4
    float EndKeyFrame; // offset 0x18, size 0x4
    signed int nKeyFrame; // offset 0x1C, size 0x4
    signed int KeySize; // offset 0x20, size 0x4
    void * pKeyList; // offset 0x24, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class stcGDivePath {
    // total size: 0x10
public:
    signed short s16MaxSpeed; // offset 0x0, size 0x2
    signed short s16MinSpeed; // offset 0x2, size 0x2
    signed short s16Flag; // offset 0x4, size 0x2
    signed short as16Reserve[5]; // offset 0x6, size 0xA
};
class NNS_QUATERNION {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class vector : private __vector_imp {
    // total size: 0xC
};
class allocator {
    // total size: 0x1
};
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class clsSrCamMixer : public clsCamMixer {
    // total size: 0xF750
public:
    class stcSetTbl m_asSetTbl[2]; // offset 0xF5D0, size 0x20
    unsigned int m_u32MaxParamIdx; // offset 0xF5F0, size 0x4
    float m_f32GcRad; // offset 0xF5F4, size 0x4
    class NNS_QUATERNION m_sSurfaceQuat; // offset 0xF5F8, size 0x10
    unsigned char m_u8FilterActive; // offset 0xF608, size 0x1
    unsigned char m_u8RegularFilterActive; // offset 0xF609, size 0x1
    class stcCamFilter m_asCamFilter[2]; // offset 0xF60C, size 0x78
    unsigned int m_au32FilterIdx[2]; // offset 0xF684, size 0x8
    class stcCamFilter m_sMixedCamFilter; // offset 0xF68C, size 0x3C
    class stcCamFilter m_sRegularFilter; // offset 0xF6C8, size 0x3C
    class stcCamFilter m_sZeroFilter; // offset 0xF704, size 0x3C
    float m_f32ZeroFilterFrame; // offset 0xF740, size 0x4
};
class stcGravityPath {
    // total size: 0x10
public:
    signed short s16MaxSpeed; // offset 0x0, size 0x2
    signed short s16MinSpeed; // offset 0x2, size 0x2
    signed short s16Flag; // offset 0x4, size 0x2
    signed short as16Reserve[5]; // offset 0x6, size 0xA
};

// Range: 0x2B2320 -> 0x2B25EC
void * __dt(class clsSrCamCtrlMgr * this /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B2320 -> 0x2B25EC
        class __wrap_iterator it'122; // r2
        class __wrap_iterator it; // r29+0x5C
        unsigned int u32Size; // r17
    }
}


// Range: 0x2B26A0 -> 0x2B2788
void setViewPortNormal(unsigned int ou32N /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B26A0 -> 0x2B2788
    }
}


// Range: 0x2B2790 -> 0x2B283C
class clsMotionCam * createMotionCamCtrl() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B2790 -> 0x2B283C
    }
}


// Range: 0x2B2840 -> 0x2B2974
class clsPathCam * createPathCamCtrl() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B2840 -> 0x2B2974
    }
}


// Range: 0x2B29D0 -> 0x2B2AA0
class clsVectorCam * createVectorCamCtrl() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B29D0 -> 0x2B2AA0
    }
}


// Range: 0x2B2AA0 -> 0x2B2B6C
class clsDomeCam * createDomeCamCtrl() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B2AA0 -> 0x2B2B6C
    }
}


// Range: 0x2B2B70 -> 0x2B2C3C
class clsGctrlCam * createGctrlCamCtrl() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B2B70 -> 0x2B2C3C
    }
}


// Range: 0x2B2C40 -> 0x2B2D18
class clsTargetCam * createTagertCamCtrl() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B2C40 -> 0x2B2D18
    }
}


// Range: 0x2B2D20 -> 0x2B2D94
class clsSrCamMixer * createSrCamMixer() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B2D20 -> 0x2B2D94
    }
}


