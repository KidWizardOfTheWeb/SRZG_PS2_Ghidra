/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\PS2\PS2CamCtrl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon0 */ {
    // total size: 0x1C
} __vt__11clsCamMixer; // size: 0x1C, address: 0x6B8730
class clsPfSystem * m_tpcSingleton; // size: 0x4, address: 0x6E69B8
void * __dt(class clsPfCamera *, signed short); // size: 0x0, address: 0x2B21D0
void * __ct(class clsPfCamera *); // size: 0x0, address: 0x2B2250
class clsPfVecCalc * m_tpcSingleton; // size: 0x4, address: 0x703C50
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
class clsPfVecCalc : public clsSingleton, public clsOOVecCalc {
    // total size: 0x8
};
class clsCamIvBase {
    // total size: 0x4
};
class clsSingleton {
    // total size: 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
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
class stcCamCtrlStock {
    // total size: 0xC
public:
    unsigned int u32CamCtrlType; // offset 0x0, size 0x4
    class clsCamCtrl * pacCamCtrl[2]; // offset 0x4, size 0x8
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
class __wrap_iterator {
    // total size: 0x4
public:
    class stcCamCtrlStock * it_; // offset 0x0, size 0x4
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
class clsPfSystem : public clsSingleton, public clsOOSystem {
    // total size: 0x84
};
class stcViewRect {
    // total size: 0x18
public:
    float f32wd; // offset 0x0, size 0x4
    float f32hw; // offset 0x4, size 0x4
    float f32OffsetX; // offset 0x8, size 0x4
    float f32OffsetY; // offset 0xC, size 0x4
    float f32Width; // offset 0x10, size 0x4
    float f32Height; // offset 0x14, size 0x4
};
class clsOOSystem {
    // total size: 0x80
public:
    enum enmSoundMode m_eSoundMode; // offset 0x4, size 0x4
    enum enmLanguage m_eMessageLanguage; // offset 0x8, size 0x4
    enum enmLanguage m_eVoiceLanguage; // offset 0xC, size 0x4
    float m_f32FrameRate; // offset 0x10, size 0x4
    float m_f32FrameRateAdd; // offset 0x14, size 0x4
    float m_f32FrameRateAdd2; // offset 0x18, size 0x4
    float m_f32FrameRateAddCount; // offset 0x1C, size 0x4
    float m_f32FrameRateAddCount2; // offset 0x20, size 0x4
    signed int m_s32FrameRateMaxMicroSec; // offset 0x24, size 0x4
    unsigned int m_u32VblankCnt; // offset 0x28, size 0x4
    unsigned int m_u32VblankCntOld; // offset 0x2C, size 0x4
    unsigned int m_u32GameCnt; // offset 0x30, size 0x4
    unsigned int m_eState; // offset 0x34, size 0x4
    class stcViewRect * m_apsViewRect[5]; // offset 0x38, size 0x14
    class stcScissorRect * m_apsScissorRect[5]; // offset 0x4C, size 0x14
    class stcScissorRect * m_apsScissorRect_NTSC[5]; // offset 0x60, size 0x14
    unsigned char m_u8FrameRateDef; // offset 0x74, size 0x1
    unsigned char m_u8VblankNum; // offset 0x75, size 0x1
    signed char m_s8ViewportNum; // offset 0x76, size 0x1
    signed char m_s8BackUpViewportNum; // offset 0x77, size 0x1
    signed char m_s8MaxViewportNum; // offset 0x78, size 0x1
    unsigned char m_bPause; // offset 0x79, size 0x1
    unsigned char m_bUnPause; // offset 0x7A, size 0x1
    unsigned char m_bEnablePauseWorks; // offset 0x7B, size 0x1
    unsigned char m_bDisablePauseCancel; // offset 0x7C, size 0x1
    unsigned char m_bDisablePauseDraw; // offset 0x7D, size 0x1
    unsigned char m_bNextPause; // offset 0x7E, size 0x1
};
enum enmSoundMode {
    SOUND_MODE___MONAURAL = 0,
    SOUND_MODE___STEREO = 1,
    SOUND_MODE___DOLBY_PROLOGIC2 = 2,
    SOUND_MODE___DOLBY_DIGITAL = 3,
    SOUND___MAX = 4,
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcCamCtrlStock * data_; // offset 0x8, size 0x4
};
struct /* @anon0 */ {
    // total size: 0x1C
};
class allocator {
    // total size: 0x1
};
enum enmLanguage {
    LANGUAGE___JAPANESE = 0,
    LANGUAGE___ENGLISH = 1,
    LANGUAGE___GERMAN = 2,
    LANGUAGE___FRENCH = 3,
    LANGUAGE___SPANISH = 4,
    LANGUAGE___ITALIAN = 5,
    LANGUAGE___DUTCH = 6,
    LANGUAGE___PORTUGUESE = 7,
    LANGUAGE___SIMP_CHINESE = 8,
    LANGUAGE___TRAD_CHINESE = 9,
    LANGUAGE___KOREAN = 10,
    LANGUAGE___MAX = 11,
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
class clsOOVecCalc {
    // total size: 0x4
};
class clsOOCamera {
    // total size: 0x8
public:
    unsigned int m_u32CamNo; // offset 0x4, size 0x4
};
class stcScissorRect {
    // total size: 0x10
public:
    unsigned int u32OffsetX; // offset 0x0, size 0x4
    unsigned int u32OffsetY; // offset 0x4, size 0x4
    unsigned int u32Right; // offset 0x8, size 0x4
    unsigned int u32Bottom; // offset 0xC, size 0x4
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
class vector : private __vector_imp {
    // total size: 0xC
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

// Range: 0x2AFB60 -> 0x2AFF84
void finishMixing(class clsCamMixer * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AFB60 -> 0x2AFF84
    }
}


// Range: 0x2B00F0 -> 0x2B06AC
void mixing(class clsCamMixer * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B00F0 -> 0x2B06AC
        unsigned int u32Rtn1; // r2
        unsigned int u32Rtn2; // r2
        float f32t; // r21
    }
}


// Range: 0x2B06C0 -> 0x2B0774
void setCamControl(class clsCamMixer * this /* r2 */, class clsCamCtrl * pcCamCtrl /* r2 */, unsigned char ou8MixMode /* r2 */, unsigned int ou32Time /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B06C0 -> 0x2B0774
    }
}


// Range: 0x2B0780 -> 0x2B0820
void registStockCamCtrl(class clsCamMixer * this /* r2 */, unsigned int u32CtrlType /* r2 */, class clsCamCtrl * pcCamCtrl1 /* r2 */, class clsCamCtrl * pcCamCtrl2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B0780 -> 0x2B0820
        class __wrap_iterator it'64; // r2
        class stcCamCtrlStock sCamCtrlStock; // r29+0x10
        class __wrap_iterator it; // r29+0x1C
    }
}


// Range: 0x2B0820 -> 0x2B089C
class clsCamCtrl * getStockCamCtrl(class clsCamMixer * this /* r2 */, unsigned int u32CtrlType /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B0820 -> 0x2B089C
        class __wrap_iterator it'61; // r2
        class __wrap_iterator it; // r29+0xFFFFFFFC
    }
}


// Range: 0x2B08A0 -> 0x2B097C
void * __dt(class clsCamMixer * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B08A0 -> 0x2B097C
        class __wrap_iterator it'62; // r2
        class __wrap_iterator it; // r29+0x3C
    }
}


// Range: 0x2B0980 -> 0x2B0A4C
void * __ct(class clsCamMixer * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B0980 -> 0x2B0A4C
        unsigned int u32i; // r4
    }
}


// Range: 0x2B0A50 -> 0x2B0AAC
unsigned int countUpTime(class clsCamCtrl * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B0A50 -> 0x2B0AAC
    }
}


