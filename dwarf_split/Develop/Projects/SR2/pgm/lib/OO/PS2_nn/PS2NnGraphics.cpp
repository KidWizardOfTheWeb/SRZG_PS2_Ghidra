/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\PS2_nn\PS2NnGraphics.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class sceGsDBuffDc m_tsGsDBuffDc; // size: 0x330, address: 0x707EC0
static unsigned char su8PushBuffer[3145856]; // size: 0x300080, address: 0x708200
static unsigned char sau8CbBuf[64]; // size: 0x40, address: 0xA08280
static unsigned char saTexDmaTagPushBuf[1048576]; // size: 0x100000, address: 0xA08300
unsigned int otau32Height[2]; // size: 0x8, address: 0x665B48
unsigned long long tau64GsClearPacket[28]; // size: 0xE0, address: 0x620DF0
unsigned int u32Size; // size: 0x4, address: 0x0
struct /* @anon2 */ {
    // total size: 0x88
} __vt__13clsPfGraphics; // size: 0x88, address: 0x6B6110
class clsPfTimer * m_tpcSingleton; // size: 0x4, address: 0x6E69A8
class clsPfSystem * m_tpcSingleton; // size: 0x4, address: 0x6E69B8
signed int tSoundVsyncCallback(signed int); // size: 0x0, address: 0x31D110
signed int tVifEndCB_Debug(signed int); // size: 0x0, address: 0x1F1D60
signed int tVBlanking_CallBack(signed int); // size: 0x0, address: 0x15EE30
struct /* @anon0 */ {
    // total size: 0x44
} __vt__22clsOOGraphics_Consumer; // size: 0x44, address: 0x6B5740
class clsPfGraphics * m_tpcSingleton; // size: 0x4, address: 0x6E69A0
struct /* @anon1 */ {
    // total size: 0xC
} __vt__29clsSingleton<13clsPfGraphics>; // size: 0xC, address: 0x6B5730
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
class sceGsXyz {
    // total size: 0x8
public:
    unsigned long X : 16; // offset 0x0, size 0x4
    unsigned long Y : 16; // offset 0x0, size 0x4
    unsigned long Z : 32; // offset 0x0, size 0x4
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
class clsSingleton {
    // total size: 0x4
};
enum enmCullModeType {
    CULL___NONE = 0,
    CULL___CW = 1,
    CULL___CCW = 2,
};
class tGS_PMODE {
    // total size: 0x8
public:
    unsigned int EN1 : 1; // offset 0x0, size 0x4
    unsigned int EN2 : 1; // offset 0x0, size 0x4
    unsigned int CRTMD : 3; // offset 0x0, size 0x4
    unsigned int MMOD : 1; // offset 0x0, size 0x4
    unsigned int AMOD : 1; // offset 0x0, size 0x4
    unsigned int SLBG : 1; // offset 0x0, size 0x4
    unsigned int ALP : 8; // offset 0x0, size 0x4
    unsigned int p0 : 16; // offset 0x0, size 0x4
    unsigned int p1; // offset 0x4, size 0x4
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
struct /* @anon0 */ {
    // total size: 0x44
};
class PXS_INITPARAM {
    // total size: 0x20
public:
    unsigned int tagSize; // offset 0x0, size 0x4
    unsigned int dataSize; // offset 0x4, size 0x4
    void * pushBuffer; // offset 0x8, size 0x4
    unsigned int bufSize; // offset 0xC, size 0x4
    unsigned int chainSize; // offset 0x10, size 0x4
    void * chainBuffer; // offset 0x14, size 0x4
    unsigned int pushBufferMax; // offset 0x18, size 0x4
    unsigned int flag; // offset 0x1C, size 0x4
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
struct /* @anon1 */ {
    // total size: 0xC
};
class clsPfTimer : public clsSingleton, public clsOOTimer {
    // total size: 0x30
};
class sceGsPrim {
    // total size: 0x8
public:
    unsigned long PRIM : 3; // offset 0x0, size 0x4
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
class clsPfSystem : public clsSingleton, public clsOOSystem {
    // total size: 0x84
};
struct /* @anon2 */ {
    // total size: 0x88
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
class sceGsDispEnv {
    // total size: 0x28
public:
    class tGS_PMODE pmode; // offset 0x0, size 0x8
    class tGS_SMODE2 smode2; // offset 0x8, size 0x8
    class tGS_DISPFB2 dispfb; // offset 0x10, size 0x8
    class tGS_DISPLAY2 display; // offset 0x18, size 0x8
    class tGS_BGCOLOR bgcolor; // offset 0x20, size 0x8
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
class tGS_BGCOLOR {
    // total size: 0x8
public:
    unsigned int R : 8; // offset 0x0, size 0x4
    unsigned int G : 8; // offset 0x0, size 0x4
    unsigned int B : 8; // offset 0x0, size 0x4
    unsigned int p0 : 8; // offset 0x0, size 0x4
    unsigned int p1; // offset 0x4, size 0x4
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
class sceGsDrawEnv2 {
    // total size: 0x80
public:
    class sceGsFrame frame2; // offset 0x0, size 0x8
    unsigned long frame2addr; // offset 0x8, size 0x4
    class sceGsZbuf zbuf2; // offset 0x10, size 0x8
    signed long zbuf2addr; // offset 0x18, size 0x4
    class sceGsXyoffset xyoffset2; // offset 0x20, size 0x8
    signed long xyoffset2addr; // offset 0x28, size 0x4
    class sceGsScissor scissor2; // offset 0x30, size 0x8
    signed long scissor2addr; // offset 0x38, size 0x4
    class sceGsPrmodecont prmodecont; // offset 0x40, size 0x8
    signed long prmodecontaddr; // offset 0x48, size 0x4
    class sceGsColclamp colclamp; // offset 0x50, size 0x8
    signed long colclampaddr; // offset 0x58, size 0x4
    class sceGsDthe dthe; // offset 0x60, size 0x8
    signed long dtheaddr; // offset 0x68, size 0x4
    class sceGsTest test2; // offset 0x70, size 0x8
    signed long test2addr; // offset 0x78, size 0x4
};
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
};
class tGS_DISPLAY2 {
    // total size: 0x8
public:
    unsigned int DX : 12; // offset 0x0, size 0x4
    unsigned int DY : 11; // offset 0x0, size 0x4
    unsigned int MAGH : 4; // offset 0x0, size 0x4
    unsigned int MAGV : 2; // offset 0x0, size 0x4
    unsigned int p0 : 3; // offset 0x0, size 0x4
    unsigned int DW : 12; // offset 0x4, size 0x4
    unsigned int DH : 11; // offset 0x4, size 0x4
    unsigned int p1 : 9; // offset 0x4, size 0x4
};
class sceGsDBuffDc {
    // total size: 0x330
public:
    class sceGsDispEnv disp[2]; // offset 0x0, size 0x50
    class sceGifTag giftag0; // offset 0x50, size 0x10
    class sceGsDrawEnv1 draw01; // offset 0x60, size 0x80
    class sceGsDrawEnv2 draw02; // offset 0xE0, size 0x80
    class sceGsClear clear0; // offset 0x160, size 0x60
    class sceGifTag giftag1; // offset 0x1C0, size 0x10
    class sceGsDrawEnv1 draw11; // offset 0x1D0, size 0x80
    class sceGsDrawEnv2 draw12; // offset 0x250, size 0x80
    class sceGsClear clear1; // offset 0x2D0, size 0x60
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
class sceGsDrawEnv1 {
    // total size: 0x80
public:
    class sceGsFrame frame1; // offset 0x0, size 0x8
    unsigned long frame1addr; // offset 0x8, size 0x4
    class sceGsZbuf zbuf1; // offset 0x10, size 0x8
    signed long zbuf1addr; // offset 0x18, size 0x4
    class sceGsXyoffset xyoffset1; // offset 0x20, size 0x8
    signed long xyoffset1addr; // offset 0x28, size 0x4
    class sceGsScissor scissor1; // offset 0x30, size 0x8
    signed long scissor1addr; // offset 0x38, size 0x4
    class sceGsPrmodecont prmodecont; // offset 0x40, size 0x8
    signed long prmodecontaddr; // offset 0x48, size 0x4
    class sceGsColclamp colclamp; // offset 0x50, size 0x8
    signed long colclampaddr; // offset 0x58, size 0x4
    class sceGsDthe dthe; // offset 0x60, size 0x8
    signed long dtheaddr; // offset 0x68, size 0x4
    class sceGsTest test1; // offset 0x70, size 0x8
    signed long test1addr; // offset 0x78, size 0x4
};
class sceGsClear {
    // total size: 0x60
public:
    class sceGsTest testa; // offset 0x0, size 0x8
    signed long testaaddr; // offset 0x8, size 0x4
    class sceGsPrim prim; // offset 0x10, size 0x8
    signed long primaddr; // offset 0x18, size 0x4
    class sceGsRgbaq rgbaq; // offset 0x20, size 0x8
    signed long rgbaqaddr; // offset 0x28, size 0x4
    class sceGsXyz xyz2a; // offset 0x30, size 0x8
    signed long xyz2aaddr; // offset 0x38, size 0x4
    class sceGsXyz xyz2b; // offset 0x40, size 0x8
    signed long xyz2baddr; // offset 0x48, size 0x4
    class sceGsTest testb; // offset 0x50, size 0x8
    signed long testbaddr; // offset 0x58, size 0x4
};
class NNS_CONFIG_PS2 {
    // total size: 0x14
public:
    unsigned short GsInterMode; // offset 0x0, size 0x2
    unsigned short GsOutMode; // offset 0x2, size 0x2
    unsigned short GsFFMode; // offset 0x4, size 0x2
    unsigned short DrawBuffPsm; // offset 0x6, size 0x2
    unsigned short DrawBuffWidth; // offset 0x8, size 0x2
    unsigned short DrawBuffHeight; // offset 0xA, size 0x2
    unsigned short ResolutionWidth; // offset 0xC, size 0x2
    unsigned short ResolutionHeight; // offset 0xE, size 0x2
    unsigned short DrawBuffZbp; // offset 0x10, size 0x2
    unsigned short DrawBuffZPsm; // offset 0x12, size 0x2
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
class sceGsColclamp {
    // total size: 0x8
public:
    unsigned long CLAMP : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class tGS_DISPFB2 {
    // total size: 0x8
public:
    unsigned int FBP : 9; // offset 0x0, size 0x4
    unsigned int FBW : 6; // offset 0x0, size 0x4
    unsigned int PSM : 5; // offset 0x0, size 0x4
    unsigned int p0 : 12; // offset 0x0, size 0x4
    unsigned int DBX : 11; // offset 0x4, size 0x4
    unsigned int DBY : 11; // offset 0x4, size 0x4
    unsigned int p1 : 10; // offset 0x4, size 0x4
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
class sceGsPrmodecont {
    // total size: 0x8
public:
    unsigned long AC : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class sceGifTag {
    // total size: 0x10
public:
    unsigned long NLOOP : 15; // offset 0x0, size 0x4
    unsigned long EOP : 1; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long id : 14; // offset 0x0, size 0x4
    unsigned long PRE : 1; // offset 0x0, size 0x4
    unsigned long PRIM : 11; // offset 0x0, size 0x4
    unsigned long FLG : 2; // offset 0x0, size 0x4
    unsigned long NREG : 4; // offset 0x0, size 0x4
    unsigned long REGS0 : 4; // offset 0x8, size 0x4
    unsigned long REGS1 : 4; // offset 0x8, size 0x4
    unsigned long REGS2 : 4; // offset 0x8, size 0x4
    unsigned long REGS3 : 4; // offset 0x8, size 0x4
    unsigned long REGS4 : 4; // offset 0x8, size 0x4
    unsigned long REGS5 : 4; // offset 0x8, size 0x4
    unsigned long REGS6 : 4; // offset 0x8, size 0x4
    unsigned long REGS7 : 4; // offset 0x8, size 0x4
    unsigned long REGS8 : 4; // offset 0x8, size 0x4
    unsigned long REGS9 : 4; // offset 0x8, size 0x4
    unsigned long REGS10 : 4; // offset 0x8, size 0x4
    unsigned long REGS11 : 4; // offset 0x8, size 0x4
    unsigned long REGS12 : 4; // offset 0x8, size 0x4
    unsigned long REGS13 : 4; // offset 0x8, size 0x4
    unsigned long REGS14 : 4; // offset 0x8, size 0x4
    unsigned long REGS15 : 4; // offset 0x8, size 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class tGS_SMODE2 {
    // total size: 0x8
public:
    unsigned int INT : 1; // offset 0x0, size 0x4
    unsigned int FFMD : 1; // offset 0x0, size 0x4
    unsigned int DPMS : 2; // offset 0x0, size 0x4
    unsigned int p0 : 28; // offset 0x0, size 0x4
    unsigned int p1; // offset 0x4, size 0x4
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

// Range: 0x1F0F80 -> 0x1F0FE4
void updatePalParam(class clsPfGraphics * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0F80 -> 0x1F0FE4
        unsigned int otu32[2]; // r29+0x8
        float otf32[2]; // r29
    }
}


// Range: 0x1F0FF0 -> 0x1F102C
void exit(class clsPfGraphics * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0FF0 -> 0x1F102C
    }
}


// Range: 0x1F1030 -> 0x1F11D8
void updateFrameBuffer(class clsPfGraphics * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1030 -> 0x1F11D8
    }
}


// Range: 0x1F11E0 -> 0x1F179C
void setVideoMode(class clsPfGraphics * this /* r17 */, enum enmScreenMode eScreenModeI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F11E0 -> 0x1F179C
        class PXS_INITPARAM sIprm; // r29+0x70
        class PXS_SCREENPARAM sSprm; // r29+0x50
        class NNS_CONFIG_PS2 sConfigPs2; // r29+0x30
    }
}


// Range: 0x1F17A0 -> 0x1F1BC8
void initFrameBuffer(class clsPfGraphics * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F17A0 -> 0x1F1BC8
    }
}


// Range: 0x1F1C70 -> 0x1F1D60
void resetTextureBuffer(class clsPfGraphics * this /* r16 */, signed int s32SizeI /* r17 */, signed int s32ResidenceSizeI /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1C70 -> 0x1F1D60
        signed int s32NeoSize; // r17
    }
}


// Range: 0x1F1D60 -> 0x1F1DB0
signed int tVifEndCB_Debug() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1D60 -> 0x1F1DB0
    }
}


// Range: 0x1F1DB0 -> 0x1F1EA8
void * __ct(class clsPfGraphics * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1DB0 -> 0x1F1EA8
    }
}


// Range: 0x1F1EB0 -> 0x1F1EB8
void @4@updatePalParam__13clsPfGraphicsFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1EB0 -> 0x1F1EB8
    }
}


// Range: 0x1F1EC0 -> 0x1F1EC8
void @4@clip2Screen__13clsPfGraphicsCFRQ29nspOOMisc14stcPoint2D_s16RC10NNS_VECTORi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1EC0 -> 0x1F1EC8
    }
}


// Range: 0x1F1ED0 -> 0x1F1ED8
void @4@getPalOffsetRatioY__13clsPfGraphicsCFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1ED0 -> 0x1F1ED8
    }
}


// Range: 0x1F1EE0 -> 0x1F1EE8
void @4@getPalOffsetRatioY__13clsPfGraphicsCFf() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1EE0 -> 0x1F1EE8
    }
}


// Range: 0x1F1EF0 -> 0x1F1EF8
void @4@getPalOffsetY__13clsPfGraphicsCFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1EF0 -> 0x1F1EF8
    }
}


// Range: 0x1F1F00 -> 0x1F1F08
void @4@getPalOffsetY__13clsPfGraphicsCFi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1F00 -> 0x1F1F08
    }
}


// Range: 0x1F1F10 -> 0x1F1F18
void @4@setCullModeCounter__13clsPfGraphicsCFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1F10 -> 0x1F1F18
    }
}


// Range: 0x1F1F20 -> 0x1F1F28
void @4@setCullMode__13clsPfGraphicsCFQ222clsOOGraphics_Consumer15enmCullModeType() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1F20 -> 0x1F1F28
    }
}


// Range: 0x1F1F30 -> 0x1F1F38
void @4@setCullMode_Def__13clsPfGraphicsCFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1F30 -> 0x1F1F38
    }
}


// Range: 0x1F1F40 -> 0x1F1F48
void @4@setCullMode_DefaultType__13clsPfGraphicsFQ222clsOOGraphics_Consumer15enmCullModeType() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1F40 -> 0x1F1F48
    }
}


// Range: 0x1F1F50 -> 0x1F1F58
void @4@setZMode_Write__13clsPfGraphicsFb() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1F50 -> 0x1F1F58
    }
}


// Range: 0x1F1F60 -> 0x1F1F68
void @4@setZMode_Comp__13clsPfGraphicsCFQ222clsOOGraphics_Consumer16enmZModeCompType() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1F60 -> 0x1F1F68
    }
}


// Range: 0x1F1F70 -> 0x1F1F78
void @4@setZMode_Def__13clsPfGraphicsFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1F70 -> 0x1F1F78
    }
}


// Range: 0x1F1F80 -> 0x1F1F88
void @4@setZMode_DefaultCompType__13clsPfGraphicsFQ222clsOOGraphics_Consumer16enmZModeCompType() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1F80 -> 0x1F1F88
    }
}


// Range: 0x1F1F90 -> 0x1F1F98
void @4@__dt__13clsPfGraphicsFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F1F90 -> 0x1F1F98
    }
}


