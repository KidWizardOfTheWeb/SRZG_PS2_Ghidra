/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\PS2\PS2System.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class clsPfSystem * m_tpcSingleton; // size: 0x4, address: 0x6E69B8
struct /* @anon0 */ {
    // total size: 0x48
} __vt__11clsPfSystem; // size: 0x48, address: 0x6B5840
struct /* @anon2 */ {
    // total size: 0x30
} __vt__11clsOOSystem; // size: 0x30, address: 0x6B5700
struct /* @anon1 */ {
    // total size: 0xC
} __vt__27clsSingleton<11clsPfSystem>; // size: 0xC, address: 0x6B56E8
class clsPfGraphics * m_tpcSingleton; // size: 0x4, address: 0x6E69A0
class PXS_CONTEXT pxg_context[2]; // size: 0x2C0, address: 0x6E66C0
unsigned long pxg_scissor_addr[]; // size: 0x0, address: 0x5FAFA0
class clsPfCameraMgr * m_tpcSingleton; // size: 0x4, address: 0x6E69C0
class clsPfTimer * m_tpcSingleton; // size: 0x4, address: 0x6E69A8
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
class clsSingleton {
    // total size: 0x4
};
class clsOOGraphics_Consumer {
    // total size: 0x28
public:
    enum enmZModeCompType m_eZModeCompType; // offset 0x4, size 0x4
    enum enmCullModeType m_eCullModeType; // offset 0x8, size 0x4
    enum enmScreenMode m_eScreenMode; // offset 0xC, size 0x4
    unsigned int m_u32WbID; // offset 0x10, size 0x4
    signed int m_s32FbWidht; // offset 0x14, size 0x4
    signed int m_s32FbHeight; // offset 0x18, size 0x4
    float m_f32FbWidht_Half; // offset 0x1C, size 0x4
    float m_f32FbHeight_Half; // offset 0x20, size 0x4
    unsigned char m_bProgressive; // offset 0x24, size 0x1
    unsigned char m_bPal; // offset 0x25, size 0x1
    unsigned char m_bWide; // offset 0x26, size 0x1
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class clsOOTimer {
    // total size: 0x2C
public:
    signed int m_s32CpuMicroSec; // offset 0x4, size 0x4
    signed int m_s32GpuMicroSec; // offset 0x8, size 0x4
    signed int m_s32BeginCpuTick; // offset 0xC, size 0x4
    signed int m_s32EndCpuDiffTick; // offset 0x10, size 0x4
    signed int m_s32BeginGpuTick; // offset 0x14, size 0x4
    signed int m_s32EndGpuDiffTick; // offset 0x18, size 0x4
    unsigned int m_u32CpuAverage; // offset 0x1C, size 0x4
    unsigned int m_u32GpuAverage; // offset 0x20, size 0x4
    unsigned int m_u32AverageCnt; // offset 0x24, size 0x4
    unsigned int m_u32AverageClearFrame; // offset 0x28, size 0x4
};
struct /* @anon0 */ {
    // total size: 0x48
};
class sceGsScissor {
    // total size: 0x8
public:
    unsigned long SCAX0 : 11; // offset 0x0, size 0x4
    unsigned long pad11 : 5; // offset 0x0, size 0x4
    unsigned long SCAX1 : 11; // offset 0x0, size 0x4
    unsigned long pad27 : 5; // offset 0x0, size 0x4
    unsigned long SCAY0 : 11; // offset 0x0, size 0x4
    unsigned long pad43 : 5; // offset 0x0, size 0x4
    unsigned long SCAY1 : 11; // offset 0x0, size 0x4
    unsigned long pad59 : 5; // offset 0x0, size 0x4
};
enum enmZModeCompType {
    Z___NEVER = 0,
    Z___ALWAYS = 1,
    Z___G_EQUAL = 2,
    Z___GREATER = 3,
    Z___L_EQUAL = 4,
    Z___LESS = 5,
};
class sceGsTex0 {
    // total size: 0x8
public:
    unsigned long TBP0 : 14; // offset 0x0, size 0x4
    unsigned long TBW : 6; // offset 0x0, size 0x4
    unsigned long PSM : 6; // offset 0x0, size 0x4
    unsigned long TW : 4; // offset 0x0, size 0x4
    unsigned long TH : 4; // offset 0x0, size 0x4
    unsigned long TCC : 1; // offset 0x0, size 0x4
    unsigned long TFX : 2; // offset 0x0, size 0x4
    unsigned long CBP : 14; // offset 0x0, size 0x4
    unsigned long CPSM : 4; // offset 0x0, size 0x4
    unsigned long CSM : 1; // offset 0x0, size 0x4
    unsigned long CSA : 5; // offset 0x0, size 0x4
    unsigned long CLD : 3; // offset 0x0, size 0x4
};
class PXS_CONTEXT {
    // total size: 0x160
public:
    class sceGsTexflush texflush; // offset 0x0, size 0x8
    unsigned long texflushaddr; // offset 0x8, size 0x4
    class sceGsFrame frame; // offset 0x10, size 0x8
    unsigned long frameaddr; // offset 0x18, size 0x4
    class sceGsZbuf zbuf; // offset 0x20, size 0x8
    unsigned long zbufaddr; // offset 0x28, size 0x4
    class sceGsXyoffset xyoffset; // offset 0x30, size 0x8
    unsigned long xyoffsetaddr; // offset 0x38, size 0x4
    class sceGsScissor scissor; // offset 0x40, size 0x8
    unsigned long scissoraddr; // offset 0x48, size 0x4
    class sceGsAlpha alpha; // offset 0x50, size 0x8
    unsigned long alphaaddr; // offset 0x58, size 0x4
    class sceGsClamp clamp; // offset 0x60, size 0x8
    unsigned long clampaddr; // offset 0x68, size 0x4
    class sceGsDimx dimx; // offset 0x70, size 0x8
    unsigned long dimxaddr; // offset 0x78, size 0x4
    class sceGsDthe dthe; // offset 0x80, size 0x8
    unsigned long dtheaddr; // offset 0x88, size 0x4
    class sceGsFba fba; // offset 0x90, size 0x8
    unsigned long fbaaddr; // offset 0x98, size 0x4
    class sceGsFogcol fogcol; // offset 0xA0, size 0x8
    unsigned long fogcoladdr; // offset 0xA8, size 0x4
    class sceGsMiptbp1 miptbp1; // offset 0xB0, size 0x8
    unsigned long miptbp1addr; // offset 0xB8, size 0x4
    class sceGsMiptbp2 miptbp2; // offset 0xC0, size 0x8
    unsigned long miptbp2addr; // offset 0xC8, size 0x4
    class sceGsPrmodecont prmodecont; // offset 0xD0, size 0x8
    unsigned long prmodecontaddr; // offset 0xD8, size 0x4
    class sceGsPrmode prmode; // offset 0xE0, size 0x8
    unsigned long prmodeaddr; // offset 0xE8, size 0x4
    class sceGsTest test; // offset 0xF0, size 0x8
    unsigned long testaddr; // offset 0xF8, size 0x4
    class sceGsTex1 tex1; // offset 0x100, size 0x8
    unsigned long tex1addr; // offset 0x108, size 0x4
    class sceGsTex0 tex0; // offset 0x110, size 0x8
    unsigned long tex0addr; // offset 0x118, size 0x4
    class sceGsTex2 tex2; // offset 0x120, size 0x8
    unsigned long tex2addr; // offset 0x128, size 0x4
    class sceGsTexa texa; // offset 0x130, size 0x8
    unsigned long texaaddr; // offset 0x138, size 0x4
    class sceGsTexclut texclut; // offset 0x140, size 0x8
    unsigned long texclutaddr; // offset 0x148, size 0x4
    class sceGsRgbaq rgbaq; // offset 0x150, size 0x8
    unsigned long rgbaqaddr; // offset 0x158, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class sceGsTexflush {
    // total size: 0x8
public:
    unsigned long pad00; // offset 0x0, size 0x4
};
class sceGsTexclut {
    // total size: 0x8
public:
    unsigned long CBW : 6; // offset 0x0, size 0x4
    unsigned long COU : 6; // offset 0x0, size 0x4
    unsigned long COV : 10; // offset 0x0, size 0x4
    unsigned long pad22 : 42; // offset 0x0, size 0x4
};
enum enmCullModeType {
    CULL___NONE = 0,
    CULL___CW = 1,
    CULL___CCW = 2,
};
class stcDateTime {
    // total size: 0x8
public:
    unsigned short u16Year; // offset 0x0, size 0x2
    unsigned char u8Month; // offset 0x2, size 0x1
    unsigned char u8Day; // offset 0x3, size 0x1
    unsigned char u8Hour; // offset 0x4, size 0x1
    unsigned char u8Min; // offset 0x5, size 0x1
    unsigned char u8Sec; // offset 0x6, size 0x1
};
class sceGsDimx {
    // total size: 0x8
public:
    unsigned long DIMX00 : 3; // offset 0x0, size 0x4
    unsigned long pad00 : 1; // offset 0x0, size 0x4
    unsigned long DIMX01 : 3; // offset 0x0, size 0x4
    unsigned long pad01 : 1; // offset 0x0, size 0x4
    unsigned long DIMX02 : 3; // offset 0x0, size 0x4
    unsigned long pad02 : 1; // offset 0x0, size 0x4
    unsigned long DIMX03 : 3; // offset 0x0, size 0x4
    unsigned long pad03 : 1; // offset 0x0, size 0x4
    unsigned long DIMX10 : 3; // offset 0x0, size 0x4
    unsigned long pad10 : 1; // offset 0x0, size 0x4
    unsigned long DIMX11 : 3; // offset 0x0, size 0x4
    unsigned long pad11 : 1; // offset 0x0, size 0x4
    unsigned long DIMX12 : 3; // offset 0x0, size 0x4
    unsigned long pad12 : 1; // offset 0x0, size 0x4
    unsigned long DIMX13 : 3; // offset 0x0, size 0x4
    unsigned long pad13 : 1; // offset 0x0, size 0x4
    unsigned long DIMX20 : 3; // offset 0x0, size 0x4
    unsigned long pad20 : 1; // offset 0x0, size 0x4
    unsigned long DIMX21 : 3; // offset 0x0, size 0x4
    unsigned long pad21 : 1; // offset 0x0, size 0x4
    unsigned long DIMX22 : 3; // offset 0x0, size 0x4
    unsigned long pad22 : 1; // offset 0x0, size 0x4
    unsigned long DIMX23 : 3; // offset 0x0, size 0x4
    unsigned long pad23 : 1; // offset 0x0, size 0x4
    unsigned long DIMX30 : 3; // offset 0x0, size 0x4
    unsigned long pad30 : 1; // offset 0x0, size 0x4
    unsigned long DIMX31 : 3; // offset 0x0, size 0x4
    unsigned long pad31 : 1; // offset 0x0, size 0x4
    unsigned long DIMX32 : 3; // offset 0x0, size 0x4
    unsigned long pad32 : 1; // offset 0x0, size 0x4
    unsigned long DIMX33 : 3; // offset 0x0, size 0x4
    unsigned long pad33 : 1; // offset 0x0, size 0x4
};
class clsPfSystem : public clsSingleton, public clsOOSystem {
    // total size: 0x84
};
class sceGsRgbaq {
    // total size: 0x8
public:
    unsigned int R : 8; // offset 0x0, size 0x4
    unsigned int G : 8; // offset 0x0, size 0x4
    unsigned int B : 8; // offset 0x0, size 0x4
    unsigned int A : 8; // offset 0x0, size 0x4
    float Q; // offset 0x4, size 0x4
};
class sceGsAlpha {
    // total size: 0x8
public:
    unsigned long A : 2; // offset 0x0, size 0x4
    unsigned long B : 2; // offset 0x0, size 0x4
    unsigned long C : 2; // offset 0x0, size 0x4
    unsigned long D : 2; // offset 0x0, size 0x4
    unsigned long pad8 : 24; // offset 0x0, size 0x4
    unsigned long FIX : 8; // offset 0x0, size 0x4
    unsigned long pad40 : 24; // offset 0x0, size 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class sceGsXyoffset {
    // total size: 0x8
public:
    unsigned long OFX : 16; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long OFY : 16; // offset 0x0, size 0x4
    unsigned long pad48 : 16; // offset 0x0, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class sceGsTex1 {
    // total size: 0x8
public:
    unsigned long LCM : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 1; // offset 0x0, size 0x4
    unsigned long MXL : 3; // offset 0x0, size 0x4
    unsigned long MMAG : 1; // offset 0x0, size 0x4
    unsigned long MMIN : 3; // offset 0x0, size 0x4
    unsigned long MTBA : 1; // offset 0x0, size 0x4
    unsigned long pad10 : 9; // offset 0x0, size 0x4
    unsigned long L : 2; // offset 0x0, size 0x4
    unsigned long pad21 : 11; // offset 0x0, size 0x4
    unsigned long K : 12; // offset 0x0, size 0x4
    unsigned long pad44 : 20; // offset 0x0, size 0x4
};
class clsPfTimer : public clsSingleton, public clsOOTimer {
    // total size: 0x30
};
class sceGsPrmode {
    // total size: 0x8
public:
    unsigned long pad00 : 3; // offset 0x0, size 0x4
    unsigned long IIP : 1; // offset 0x0, size 0x4
    unsigned long TME : 1; // offset 0x0, size 0x4
    unsigned long FGE : 1; // offset 0x0, size 0x4
    unsigned long ABE : 1; // offset 0x0, size 0x4
    unsigned long AA1 : 1; // offset 0x0, size 0x4
    unsigned long FST : 1; // offset 0x0, size 0x4
    unsigned long CTXT : 1; // offset 0x0, size 0x4
    unsigned long FIX : 1; // offset 0x0, size 0x4
    unsigned long pad11 : 53; // offset 0x0, size 0x4
};
class stcBgColor {
    // total size: 0x4
public:
    unsigned char m_u8a; // offset 0x0, size 0x1
    unsigned char m_u8b; // offset 0x1, size 0x1
    unsigned char m_u8g; // offset 0x2, size 0x1
    unsigned char m_u8r; // offset 0x3, size 0x1
};
class sceGsZbuf {
    // total size: 0x8
public:
    unsigned long ZBP : 9; // offset 0x0, size 0x4
    unsigned long pad09 : 15; // offset 0x0, size 0x4
    unsigned long PSM : 4; // offset 0x0, size 0x4
    unsigned long pad28 : 4; // offset 0x0, size 0x4
    unsigned long ZMSK : 1; // offset 0x0, size 0x4
    unsigned long pad33 : 31; // offset 0x0, size 0x4
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
class clsPfCameraMgr : public clsSingleton, private clsOOCameraMgr {
    // total size: 0x14
public:
    class vector m_vecCamera; // offset 0x8, size 0xC
};
class PXS_CONTEXTBUFFER {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class PXS_GSREG_AD reg[1]; // offset 0x10, size 0x10
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
class sceGsTex2 {
    // total size: 0x8
public:
    unsigned long pad00 : 20; // offset 0x0, size 0x4
    unsigned long PSM : 6; // offset 0x0, size 0x4
    unsigned long pad26 : 11; // offset 0x0, size 0x4
    unsigned long CBP : 14; // offset 0x0, size 0x4
    unsigned long CPSM : 4; // offset 0x0, size 0x4
    unsigned long CSM : 1; // offset 0x0, size 0x4
    unsigned long CSA : 5; // offset 0x0, size 0x4
    unsigned long CLD : 3; // offset 0x0, size 0x4
};
struct /* @anon1 */ {
    // total size: 0xC
};
class sceGsFrame {
    // total size: 0x8
public:
    unsigned long FBP : 9; // offset 0x0, size 0x4
    unsigned long pad09 : 7; // offset 0x0, size 0x4
    unsigned long FBW : 6; // offset 0x0, size 0x4
    unsigned long pad22 : 2; // offset 0x0, size 0x4
    unsigned long PSM : 6; // offset 0x0, size 0x4
    unsigned long pad30 : 2; // offset 0x0, size 0x4
    unsigned long FBMSK : 32; // offset 0x0, size 0x4
};
class clsPfGraphics : public clsSingleton, public clsOOGraphics_Consumer {
    // total size: 0x50
public:
    void * m_pvMainTextureBuffer; // offset 0x2C, size 0x4
    void * m_pvSpecialTextureBuffer; // offset 0x30, size 0x4
    class tagPXS_PUSHBUFFER * m_psPxPb_nn; // offset 0x34, size 0x4
    class PXS_CONTEXTBUFFER * m_psPxCb_nn; // offset 0x38, size 0x4
    class stcBgColor m_sBgColor; // offset 0x3C, size 0x4
    signed int m_s32RestTextureBufferSize; // offset 0x40, size 0x4
    signed int m_s32PalOffsetY; // offset 0x44, size 0x4
    float m_f32PalOffsetRatioY; // offset 0x48, size 0x4
    unsigned char m_bOdev; // offset 0x4C, size 0x1
};
class sceGsFogcol {
    // total size: 0x8
public:
    unsigned long FCR : 8; // offset 0x0, size 0x4
    unsigned long FCG : 8; // offset 0x0, size 0x4
    unsigned long FCB : 8; // offset 0x0, size 0x4
    unsigned long pad24 : 40; // offset 0x0, size 0x4
};
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class sceGsDthe {
    // total size: 0x8
public:
    unsigned long DTHE : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class stcScissorRect {
    // total size: 0x10
public:
    unsigned int u32OffsetX; // offset 0x0, size 0x4
    unsigned int u32OffsetY; // offset 0x4, size 0x4
    unsigned int u32Right; // offset 0x8, size 0x4
    unsigned int u32Bottom; // offset 0xC, size 0x4
};
class sceGsMiptbp2 {
    // total size: 0x8
public:
    unsigned long TBP4 : 14; // offset 0x0, size 0x4
    unsigned long TBW4 : 6; // offset 0x0, size 0x4
    unsigned long TBP5 : 14; // offset 0x0, size 0x4
    unsigned long TBW5 : 6; // offset 0x0, size 0x4
    unsigned long TBP6 : 14; // offset 0x0, size 0x4
    unsigned long TBW6 : 6; // offset 0x0, size 0x4
    unsigned long pad60 : 4; // offset 0x0, size 0x4
};
class tagPXS_PUSHBUFFER {
    // total size: 0xA0
public:
    unsigned int flag; // offset 0x0, size 0x4
    unsigned short dbIndex; // offset 0x4, size 0x2
    unsigned short renderIndex; // offset 0x6, size 0x2
    unsigned int peakTags; // offset 0x8, size 0x4
    unsigned int peakBytes; // offset 0xC, size 0x4
    unsigned int beginFlag; // offset 0x10, size 0x4
    void * recentAddr; // offset 0x14, size 0x4
    class tagPXS_PUSHBUFFER * prev; // offset 0x18, size 0x4
    class tagPXS_PUSHBUFFER * next; // offset 0x1C, size 0x4
    class PXS_PUSHBUFFER1 db[2]; // offset 0x20, size 0x80
};
class PXS_SCREENPARAM {
    // total size: 0x20
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float zmul; // offset 0x8, size 0x4
    float rsvd0; // offset 0xC, size 0x4
    float cx; // offset 0x10, size 0x4
    float cy; // offset 0x14, size 0x4
    float zbias; // offset 0x18, size 0x4
    float guardband; // offset 0x1C, size 0x4
};
class clsOOCameraMgr {
    // total size: 0x4
};
class compile_assert {
    // total size: 0x1
};
class clsSingleton {
    // total size: 0x4
};
class PXS_PUSHBUFFER1 {
    // total size: 0x40
public:
    __int128 * tagTop; // offset 0x0, size 0x4
    __int128 * tagPtr; // offset 0x4, size 0x4
    __int128 * bufTop; // offset 0x8, size 0x4
    __int128 * bufPtr; // offset 0xC, size 0x4
    __int128 * beginPtr; // offset 0x10, size 0x4
    unsigned int bufSize; // offset 0x14, size 0x4
    unsigned int maxTags; // offset 0x18, size 0x4
    unsigned int numTags; // offset 0x1C, size 0x4
    unsigned int numBytes; // offset 0x20, size 0x4
    unsigned int pushVuOffset; // offset 0x24, size 0x4
    unsigned int nextVifCmd; // offset 0x28, size 0x4
    unsigned int ready; // offset 0x2C, size 0x4
    unsigned int reserved2[4]; // offset 0x30, size 0x10
};
class __vector_pod {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    unsigned int * data_; // offset 0x8, size 0x4
};
class sceGsTest {
    // total size: 0x8
public:
    unsigned long ATE : 1; // offset 0x0, size 0x4
    unsigned long ATST : 3; // offset 0x0, size 0x4
    unsigned long AREF : 8; // offset 0x0, size 0x4
    unsigned long AFAIL : 2; // offset 0x0, size 0x4
    unsigned long DATE : 1; // offset 0x0, size 0x4
    unsigned long DATM : 1; // offset 0x0, size 0x4
    unsigned long ZTE : 1; // offset 0x0, size 0x4
    unsigned long ZTST : 2; // offset 0x0, size 0x4
    unsigned long pad19 : 45; // offset 0x0, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class clsSingleton {
    // total size: 0x4
};
class sceGsClamp {
    // total size: 0x8
public:
    unsigned long WMS : 2; // offset 0x0, size 0x4
    unsigned long WMT : 2; // offset 0x0, size 0x4
    unsigned long MINU : 10; // offset 0x0, size 0x4
    unsigned long MAXU : 10; // offset 0x0, size 0x4
    unsigned long MINV : 10; // offset 0x0, size 0x4
    unsigned long MAXV : 10; // offset 0x0, size 0x4
    unsigned long pad44 : 20; // offset 0x0, size 0x4
};
class sceGsMiptbp1 {
    // total size: 0x8
public:
    unsigned long TBP1 : 14; // offset 0x0, size 0x4
    unsigned long TBW1 : 6; // offset 0x0, size 0x4
    unsigned long TBP2 : 14; // offset 0x0, size 0x4
    unsigned long TBW2 : 6; // offset 0x0, size 0x4
    unsigned long TBP3 : 14; // offset 0x0, size 0x4
    unsigned long TBW3 : 6; // offset 0x0, size 0x4
    unsigned long pad60 : 4; // offset 0x0, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
struct /* @anon2 */ {
    // total size: 0x30
};
class sceGsFba {
    // total size: 0x8
public:
    unsigned long FBA : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class sceCdCLOCK {
    // total size: 0x8
public:
    unsigned char stat; // offset 0x0, size 0x1
    unsigned char second; // offset 0x1, size 0x1
    unsigned char minute; // offset 0x2, size 0x1
    unsigned char hour; // offset 0x3, size 0x1
    unsigned char pad; // offset 0x4, size 0x1
    unsigned char day; // offset 0x5, size 0x1
    unsigned char month; // offset 0x6, size 0x1
    unsigned char year; // offset 0x7, size 0x1
};
class sceGsPrmodecont {
    // total size: 0x8
public:
    unsigned long AC : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class allocator {
    // total size: 0x1
};
class sceGsTexa {
    // total size: 0x8
public:
    unsigned long TA0 : 8; // offset 0x0, size 0x4
    unsigned long pad08 : 7; // offset 0x0, size 0x4
    unsigned long AEM : 1; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long TA1 : 8; // offset 0x0, size 0x4
    unsigned long pad40 : 24; // offset 0x0, size 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum enmScreenMode {
    SCREEN_MODE___NTSC = 0,
    SCREEN_MODE___NTSC_PROGRESSIVE = 1,
    SCREEN_MODE___PAL = 2,
    SCREEN_MODE___MPAL = 3,
    SCREEN_MODE___MPAL_PROGRESSIVE = 4,
    SCREEN_MODE___PAL60 = 5,
    SCREEN_MODE___PAL60_PROGRESSIVE = 6,
    SCREEN_MODE___MIN_WIDE = 7,
    SCREEN_MODE___NTSC_WIDE = 7,
    SCREEN_MODE___NTSC_PROGRESSIVE_WIDE = 8,
    SCREEN_MODE___PAL_WIDE = 9,
    SCREEN_MODE___MPAL_WIDE = 10,
    SCREEN_MODE___MPAL_PROGRESSIVE_WIDE = 11,
    SCREEN_MODE___PAL60_WIDE = 12,
    SCREEN_MODE___PAL60_PROGRESSIVE_WIDE = 13,
    SCREEN_MODE___MAX_WIDE = 14,
};

// Range: 0x15ED00 -> 0x15EE30
void getNowDateTime(class stcDateTime * psNow /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15ED00 -> 0x15EE30
        class sceCdCLOCK rtc; // r29+0x28
    }
}


// Range: 0x15EE30 -> 0x15EE54
signed int tVBlanking_CallBack(signed int s32CaIn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15EE30 -> 0x15EE54
    }
}


// Range: 0x15EE60 -> 0x15EFBC
void * __ct(class clsPfSystem * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15EE60 -> 0x15EFBC
    }
}


// Range: 0x15EFC0 -> 0x15F0AC
void VWait(class clsPfSystem * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15EFC0 -> 0x15F0AC
        class clsPfTimer & rcTimer; // r2
        class clsPfSystem & rcSystem; // r2
        unsigned int u32VblankNum; // r29+0x4C
    }
}


// Range: 0x15F0B0 -> 0x15F1AC
void setViewPort(class clsPfSystem * this /* r19 */, unsigned int u32I /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15F0B0 -> 0x15F1AC
        class PXS_SCREENPARAM sprm; // r29+0x50
        unsigned long long u64Scissor; // r17
    }
}


// Range: 0x15F1B0 -> 0x15F1BC
class clsPfCameraMgr * GS() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15F1B0 -> 0x15F1BC
    }
}


// Range: 0x15F1C0 -> 0x15F1CC
class clsPfTimer & RS() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15F1C0 -> 0x15F1CC
    }
}


// Range: 0x15F1E0 -> 0x15F1E8
void @4@VWait__11clsPfSystemFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15F1E0 -> 0x15F1E8
    }
}


// Range: 0x15F1F0 -> 0x15F1F8
void @4@getNowDateTime__11clsPfSystemFPQ211clsOOSystem11stcDateTime() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15F1F0 -> 0x15F1F8
    }
}


// Range: 0x15F200 -> 0x15F208
void @4@setViewPort__11clsPfSystemFUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15F200 -> 0x15F208
    }
}


// Range: 0x15F210 -> 0x15F218
void @4@__dt__11clsPfSystemFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15F210 -> 0x15F218
    }
}


