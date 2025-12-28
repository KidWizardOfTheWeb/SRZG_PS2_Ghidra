/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\CRI\OOCri.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class MwsfdInitPrm tsIprm; // size: 0x20, address: 0x703B40
struct /* @anon0 */ {
    // total size: 0x50
} __vt__8clsOOCri; // size: 0x50, address: 0x6B5960
class clsOOMainHeap * t_cInstance; // size: 0x4, address: 0xB17268
class clsPfSystem * m_tpcSingleton; // size: 0x4, address: 0x6E69B8
class clsPfGraphics * m_tpcSingleton; // size: 0x4, address: 0x6E69A0
void CriErrFunc_CallBack_Debug(void *, char *); // size: 0x0, address: 0x1D3490
class clsPfCri * m_tpcSingleton; // size: 0x4, address: 0x6E6998
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
class SJCK {
    // total size: 0x8
public:
    signed char * data; // offset 0x0, size 0x4
    signed int len; // offset 0x4, size 0x4
};
enum enmZModeCompType {
    Z___NEVER = 0,
    Z___ALWAYS = 1,
    Z___G_EQUAL = 2,
    Z___GREATER = 3,
    Z___L_EQUAL = 4,
    Z___LESS = 5,
};
class clsOOCri {
    // total size: 0x314
public:
    class SNDF_PSPRM m_sSfPsprm; // offset 0x4, size 0x180
    class _adx_talk * m_pasAdxtHandle_Bgm[4]; // offset 0x184, size 0x10
    class _adx_talk * m_psAdxtHandle_Voice; // offset 0x194, size 0x4
    class _adx_talk * m_psAdxtHandle_Jingle; // offset 0x198, size 0x4
    void * m_psSofdecHandle_Movie; // offset 0x19C, size 0x4
    class clsOOHeapFragment * m_pcAllocator_Movie; // offset 0x1A0, size 0x4
    unsigned char * m_pu8AdxWork_Bgm; // offset 0x1A4, size 0x4
    unsigned char * m_pu8AdxWork_Voice; // offset 0x1A8, size 0x4
    unsigned char * m_pu8AdxWorkAfsPatInfo_Voice; // offset 0x1AC, size 0x4
    unsigned char * m_pu8AdxWork_Jingle; // offset 0x1B0, size 0x4
    unsigned char m_u8AdxStreamNum_Bgm; // offset 0x1B4, size 0x1
    signed char m_s8SfPortNo; // offset 0x1B5, size 0x1
    unsigned char m_au8SfId[256]; // offset 0x1B6, size 0x100
    signed char m_s8SfIcsChannel; // offset 0x2B6, size 0x1
    unsigned char (* m_fnDiscError)(); // offset 0x2B8, size 0x4
    class MwsfdCrePrm m_sSofdecParam_Movie; // offset 0x2BC, size 0x3C
    signed short m_as16DefVolume_Bgm[4]; // offset 0x2F8, size 0x8
    signed short m_s16DefVolume_Voice; // offset 0x300, size 0x2
    signed short m_s16DefVolume_Jingle; // offset 0x302, size 0x2
    signed short m_as16Volume_Bgm[4]; // offset 0x304, size 0x8
    signed short m_s16Volume_Voice; // offset 0x30C, size 0x2
    signed short m_s16Volume_Jingle; // offset 0x30E, size 0x2
    signed short m_s16PauseMinus; // offset 0x310, size 0x2
};
class clsSingleton {
    // total size: 0x4
};
class _adx_talk {
    // total size: 0xC8
public:
    signed char used; // offset 0x0, size 0x1
    signed char stat; // offset 0x1, size 0x1
    signed char pmode; // offset 0x2, size 0x1
    signed char maxnch; // offset 0x3, size 0x1
    void * sjd; // offset 0x4, size 0x4
    void * stm; // offset 0x8, size 0x4
    void * rna; // offset 0xC, size 0x4
    class SJ_OBJ * sjf; // offset 0x10, size 0x4
    class SJ_OBJ * sji; // offset 0x14, size 0x4
    class SJ_OBJ * sjo[2]; // offset 0x18, size 0x8
    signed char * ibuf; // offset 0x20, size 0x4
    signed int ibuflen; // offset 0x24, size 0x4
    signed int ibufxlen; // offset 0x28, size 0x4
    signed short * obuf; // offset 0x2C, size 0x4
    signed int obufsize; // offset 0x30, size 0x4
    signed int obufdist; // offset 0x34, size 0x4
    signed int svrfreq; // offset 0x38, size 0x4
    signed short maxsct; // offset 0x3C, size 0x2
    signed short minsct; // offset 0x3E, size 0x2
    signed short outvol; // offset 0x40, size 0x2
    signed short outpan[2]; // offset 0x42, size 0x4
    signed short outbalance; // offset 0x46, size 0x2
    signed int maxdecsmpl; // offset 0x48, size 0x4
    signed int lpcnt; // offset 0x4C, size 0x4
    signed int lp_skiplen; // offset 0x50, size 0x4
    signed int trp; // offset 0x54, size 0x4
    signed int wpos; // offset 0x58, size 0x4
    signed int mofst; // offset 0x5C, size 0x4
    signed short ercode; // offset 0x60, size 0x2
    signed int edecpos; // offset 0x64, size 0x4
    signed short edeccnt; // offset 0x68, size 0x2
    signed short eshrtcnt; // offset 0x6A, size 0x2
    signed char lpflg; // offset 0x6C, size 0x1
    signed char autorcvr; // offset 0x6D, size 0x1
    signed char fltmode; // offset 0x6E, size 0x1
    signed char execflag; // offset 0x6F, size 0x1
    signed char pstwait_flag; // offset 0x70, size 0x1
    signed char pstready_flag; // offset 0x71, size 0x1
    signed char pause_flag; // offset 0x72, size 0x1
    void * amp; // offset 0x74, size 0x4
    class SJ_OBJ * ampsji[2]; // offset 0x78, size 0x8
    class SJ_OBJ * ampsjo[2]; // offset 0x80, size 0x8
    signed int time_ofst; // offset 0x88, size 0x4
    signed int lesct; // offset 0x8C, size 0x4
    signed int trpnsmpl; // offset 0x90, size 0x4
    void * lsc; // offset 0x94, size 0x4
    signed char lnkflg; // offset 0x98, size 0x1
    signed char rsv; // offset 0x99, size 0x1
    signed short rsv2; // offset 0x9A, size 0x2
    unsigned int tvofst; // offset 0x9C, size 0x4
    unsigned int svcnt; // offset 0xA0, size 0x4
    unsigned int decofst; // offset 0xA4, size 0x4
    signed int flush_nsmpl; // offset 0xA8, size 0x4
    signed char stm_start_flg; // offset 0xAC, size 0x1
    signed char ainf_sw; // offset 0xAD, size 0x1
    signed short rsv4; // offset 0xAE, size 0x2
    char * fname_wk; // offset 0xB0, size 0x4
    char * fname; // offset 0xB4, size 0x4
    void * dir; // offset 0xB8, size 0x4
    unsigned int ofst; // offset 0xBC, size 0x4
    unsigned int nsct; // offset 0xC0, size 0x4
    unsigned int lpoff_len; // offset 0xC4, size 0x4
};
enum enmCullModeType {
    CULL___NONE = 0,
    CULL___CW = 1,
    CULL___CCW = 2,
};
class clsOOSemaphore {
    // total size: 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
enum enmAllocate {
    ALLOCATE___LO = 0,
    ALLOCATE___HI = 1,
};
class _UUID {
    // total size: 0x10
public:
    unsigned int Data1; // offset 0x0, size 0x4
    unsigned short Data2; // offset 0x4, size 0x2
    unsigned short Data3; // offset 0x6, size 0x2
    unsigned char Data4[8]; // offset 0x8, size 0x8
};
class clsSingleton {
    // total size: 0x4
};
class stcBgColor {
    // total size: 0x4
public:
    unsigned char m_u8a; // offset 0x0, size 0x1
    unsigned char m_u8b; // offset 0x1, size 0x1
    unsigned char m_u8g; // offset 0x2, size 0x1
    unsigned char m_u8r; // offset 0x3, size 0x1
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
class MwsfdCrePrm {
    // total size: 0x3C
public:
    signed int ftype; // offset 0x0, size 0x4
    signed int max_bps; // offset 0x4, size 0x4
    signed int max_width; // offset 0x8, size 0x4
    signed int max_height; // offset 0xC, size 0x4
    signed int nfrm_pool_wk; // offset 0x10, size 0x4
    signed int max_stm; // offset 0x14, size 0x4
    signed char * work; // offset 0x18, size 0x4
    signed int wksize; // offset 0x1C, size 0x4
    signed int compo_mode; // offset 0x20, size 0x4
    enum MwsfdBufFmt buffmt; // offset 0x24, size 0x4
    signed int outer_frmpool_num; // offset 0x28, size 0x4
    signed int outer_frmpool_size; // offset 0x2C, size 0x4
    unsigned char * * outer_frmpool_ptr; // offset 0x30, size 0x4
    signed int rsv[2]; // offset 0x34, size 0x8
};
enum enmSoundMode {
    SOUND_MODE___MONAURAL = 0,
    SOUND_MODE___STEREO = 1,
    SOUND_MODE___DOLBY_PROLOGIC2 = 2,
    SOUND_MODE___DOLBY_DIGITAL = 3,
    SOUND___MAX = 4,
};
class clsOOHeapFragment {
    // total size: 0x34
public:
    class stcFree * m_psAddrLo; // offset 0x4, size 0x4
    class stcFree * m_psDefaultAddrLo; // offset 0x8, size 0x4
    class stcFree * m_psAddrHi; // offset 0xC, size 0x4
    class stcFree * m_psDefaultAddrHi; // offset 0x10, size 0x4
    signed int m_s32AllRestSize; // offset 0x14, size 0x4
    signed int m_s32AllocSizeLo; // offset 0x18, size 0x4
    signed int m_s32AllocSizeHi; // offset 0x1C, size 0x4
    class clsPfSemaphore m_cOOSemaphore; // offset 0x20, size 0x8
    class clsPfSemaphore m_cOOSemaphoreUpperNest; // offset 0x28, size 0x8
    unsigned short m_u16LoCnt_Debug; // offset 0x30, size 0x2
    unsigned short m_u16HiCnt_Debug; // offset 0x32, size 0x2
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
class clsOOMainHeap : public clsOOHeapFragment {
    // total size: 0x34
};
enum MwsfdBufFmt {
    MWSFD_BUFFMT_DEFAULT = 0,
    MWSFD_BUFFMT_MB_YCC420 = 1,
    MWSFD_BUFFMT_MB_ARGB8888 = 2,
    MWSFD_BUFFMT_PLN_YCC420 = 3,
    MWE_PLY_BUFFMT_MB_YCC420 = 1,
    MWE_PLY_BUFFMT_MB_ARGB8888 = 2,
    MWE_PLY_BUFFMT_PLN_YCC420 = 3,
    MWSFD_BUFFMT_END = 4,
    MWSFD_BUFFMT_ENUM_BE_SINT32 = 2147483647,
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
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
};
class stcScissorRect {
    // total size: 0x10
public:
    unsigned int u32OffsetX; // offset 0x0, size 0x4
    unsigned int u32OffsetY; // offset 0x4, size 0x4
    unsigned int u32Right; // offset 0x8, size 0x4
    unsigned int u32Bottom; // offset 0xC, size 0x4
};
class SJ_OBJ {
    // total size: 0x4
public:
    class _sj_vtbl * vtbl; // offset 0x0, size 0x4
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
class MwsfdInitPrm {
    // total size: 0x20
public:
    float vhz; // offset 0x0, size 0x4
    signed int disp_cycle; // offset 0x4, size 0x4
    signed int disp_latency; // offset 0x8, size 0x4
    enum MwsfdDecSvr dec_svr; // offset 0xC, size 0x4
    signed int rsv[4]; // offset 0x10, size 0x10
};
class _sj_vtbl {
    // total size: 0x30
public:
    void (* QueryInterface)(); // offset 0x0, size 0x4
    void (* AddRef)(); // offset 0x4, size 0x4
    void (* Release)(); // offset 0x8, size 0x4
    void (* Destroy)(class SJ_OBJ *); // offset 0xC, size 0x4
    class _UUID * (* GetUuid)(class SJ_OBJ *); // offset 0x10, size 0x4
    void (* Reset)(class SJ_OBJ *); // offset 0x14, size 0x4
    void (* GetChunk)(class SJ_OBJ *, signed int, signed int, class SJCK *); // offset 0x18, size 0x4
    void (* UngetChunk)(class SJ_OBJ *, signed int, class SJCK *); // offset 0x1C, size 0x4
    void (* PutChunk)(class SJ_OBJ *, signed int, class SJCK *); // offset 0x20, size 0x4
    signed int (* GetNumData)(class SJ_OBJ *, signed int); // offset 0x24, size 0x4
    signed int (* IsGetChunk)(class SJ_OBJ *, signed int, signed int, signed int *); // offset 0x28, size 0x4
    void (* EntryErrFunc)(class SJ_OBJ *, void (*)(void *, signed int), void *); // offset 0x2C, size 0x4
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
class clsPfCri : public clsSingleton, public clsOOCri {
    // total size: 0x1B1C
public:
    unsigned char m_au8Ac3Work_Bgm[6144]; // offset 0x318, size 0x1800
    void * m_pvAc3Work_Heap; // offset 0x1B18, size 0x4
};
class SNDF_PSPRM {
    // total size: 0x180
public:
    unsigned int porttbl[48]; // offset 0x0, size 0xC0
    unsigned int portpcm[48]; // offset 0xC0, size 0xC0
};
enum MwsfdDecSvr {
    MWSFD_DEC_SVR_IDLE = 0,
    MWSFD_DEC_SVR_MAIN = 1,
    MWSFD_DEC_SVR_END = 2,
    MWSFD_DEC_SVR_ENUM_BE_SINT32 = 2147483647,
};
struct /* @anon0 */ {
    // total size: 0x50
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
class clsPfSemaphore : public clsOOSemaphore {
    // total size: 0x8
public:
    signed int m_s32Id; // offset 0x4, size 0x4
};
class stcFree {
    // total size: 0x10
public:
    class stcFree * m_psBackAddr; // offset 0x0, size 0x4
    class stcFree * m_psNextAddr; // offset 0x4, size 0x4
    unsigned int m_u32FreeSize; // offset 0x8, size 0x4
    unsigned int m_u32PreGap; // offset 0xC, size 0x4
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

// Range: 0x1D2BF0 -> 0x1D2C14
unsigned char isLoadedSeSf_ASync(signed int s32PortNoI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D2BF0 -> 0x1D2C14
        signed int s32Stat; // r2
    }
}


// Range: 0x1D2C20 -> 0x1D2CFC
signed int loadSeSf_ASync(class clsOOCri * this /* r20 */, char * opc8FileNameI /* r19 */, unsigned int u32PackedSizeI /* r18 */, unsigned int u32PcmI /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D2C20 -> 0x1D2CFC
        void * vpWork; // r16
    }
}


// Range: 0x1D2D00 -> 0x1D2E38
void loadSeSf(class clsOOCri * this /* r20 */, char * opc8FileNameI /* r19 */, unsigned int u32PackedSizeI /* r18 */, unsigned int u32PcmI /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D2D00 -> 0x1D2E38
        void * vpWork; // r16
        signed int s32Stat; // r2
    }
}


// Range: 0x1D2E40 -> 0x1D2F84
void init(class clsOOCri * this /* r16 */, unsigned int u32AdxUseBgmStreamNumI /* r2 */, unsigned int u32AdxMaxChNum_BgmI /* r2 */, unsigned char * pu8AdxWork_BgmI /* r2 */, unsigned int u32AdxWorkSize_BgmI /* r2 */, unsigned int u32AdxMaxChNum_VoiceI /* r2 */, unsigned char * pu8AdxWork_VoiceI /* r2 */, unsigned int u32AdxWorkSize_VoiceI /* r2 */, unsigned char * pu8AdxWorkAfsPatInfo_VoiceI /* r29+0x20 */, unsigned int u32AdxMaxChNum_JingleI /* r29+0x28 */, unsigned char * pu8AdxWork_JingleI /* r29+0x30 */, unsigned int u32AdxWorkSize_JingleI /* r29+0x38 */, unsigned char * pu8SfWorkI /* r29+0x40 */, unsigned int u32SfWorkSizeI /* r29+0x48 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D2E40 -> 0x1D2F84
    }
}


// Range: 0x1D2F90 -> 0x1D30C0
void createSofdec_Movie(class clsOOCri * this /* r21 */, signed int s32WorkAlignI /* r20 */, signed int s32MaxBpsI /* r19 */, signed int s32WidthI /* r18 */, signed int s32HeightI /* r17 */, class clsOOHeapFragment * pcAllocatorI /* r16 */, enum enmAllocate eAllocateI /* r22 */, signed int s32MaxPoolWorkI /* r23 */, signed int s32MaxStreamNumI /* r29+0x90 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D2F90 -> 0x1D30C0
    }
}


// Range: 0x1D30C0 -> 0x1D30E4
signed int getSfSeFreeChannel_ICS(class clsOOCri * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D30C0 -> 0x1D30E4
    }
}


// Range: 0x1D30F0 -> 0x1D3158
void reinitSfSeChannel_ICS(class clsOOCri * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D30F0 -> 0x1D3158
    }
}


// Range: 0x1D3160 -> 0x1D31D8
void deactivePort(class clsOOCri * this /* r17 */, signed int s32MinPortNoI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D3160 -> 0x1D31D8
        signed int s32No; // r19
    }
}


// Range: 0x1D31E0 -> 0x1D321C
void freeSfFreeId_WithStopSe(class clsOOCri * this /* r17 */, signed int s32IdI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D31E0 -> 0x1D321C
    }
}


// Range: 0x1D3220 -> 0x1D3278
signed int getSfFreeId(class clsOOCri * this /* r2 */, signed int s32RequestCodeI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D3220 -> 0x1D3278
        signed int s32i; // r16
        unsigned char * pu8SfId; // r3
    }
}


// Range: 0x1D3280 -> 0x1D32E0
void loadPartitionVoice(class clsOOCri * this /* r4 */, unsigned int u32PartitionNoI /* r2 */, char * opc8FileNameI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D3280 -> 0x1D32E0
    }
}


// Range: 0x1D32E0 -> 0x1D3388
unsigned char setAdxFadeVolume_Bgm(class clsOOCri * this /* r2 */, unsigned int u32AdxStremNoI /* r2 */, signed int s32FadeVolumeI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D32E0 -> 0x1D3388
        signed int s32Old; // r2
    }
}


// Range: 0x1D3390 -> 0x1D3420
void setAdxPauseVolume_All(class clsOOCri * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D3390 -> 0x1D3420
    }
}


// Range: 0x1D3420 -> 0x1D3490
void resetAdxVolume_All(class clsOOCri * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D3420 -> 0x1D3490
    }
}


// Range: 0x1D3490 -> 0x1D349C
static void CriErrFunc_CallBack_Debug(char * pc8MsgIn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D3490 -> 0x1D349C
    }
}


// Range: 0x1D34A0 -> 0x1D35F0
void * __ct(class clsOOCri * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D34A0 -> 0x1D35F0
        class _adx_talk * * ppsAdxtHandle_Bgm; // r3
        signed int s32i; // r2
    }
}


