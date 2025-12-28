/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\PS2_CRI\PS2Cri.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed char tau8usr_stack_usrvsync[4096]; // size: 0x1000, address: 0xB0B8D0
static signed char tau8usr_stack_usridle[4096]; // size: 0x1000, address: 0xB0C8D0
struct /* @anon0 */ {
    // total size: 0x94
} __vt__8clsPfCri; // size: 0x94, address: 0x6BCAB0
class clsPfSystem * m_tpcSingleton; // size: 0x4, address: 0x6E69B8
class clsPfCameraMgr * m_tpcSingleton; // size: 0x4, address: 0x6E69C0
signed int tSoundVsyncCallback(signed int); // size: 0x0, address: 0x31D110
struct /* @anon1 */ {
    // total size: 0xC
} __vt__23clsSingleton<8clsPfCri>; // size: 0xC, address: 0x6B5788
class clsPfCri * m_tpcSingleton; // size: 0x4, address: 0x6E6998
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
class clsSingleton {
    // total size: 0x4
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
class clsPfVecCalc : public clsSingleton, public clsOOVecCalc {
    // total size: 0x8
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
class clsOOSemaphore {
    // total size: 0x4
};
class ADXM_TPRM {
    // total size: 0x18
public:
    signed int prio_lock; // offset 0x0, size 0x4
    signed int prio_safe; // offset 0x4, size 0x4
    signed int prio_vsync; // offset 0x8, size 0x4
    signed int prio_fs; // offset 0xC, size 0x4
    signed int prio_main; // offset 0x10, size 0x4
    signed int prio_mwidle; // offset 0x14, size 0x4
};
class clsPfCri : public clsSingleton, public clsOOCri {
    // total size: 0x1B1C
public:
    unsigned char m_au8Ac3Work_Bgm[6144]; // offset 0x318, size 0x1800
    void * m_pvAc3Work_Heap; // offset 0x1B18, size 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
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
struct /* @anon0 */ {
    // total size: 0x94
};
class ADXM_TPRM_EX {
    // total size: 0x30
public:
    signed int prio_lock; // offset 0x0, size 0x4
    signed int prio_safe; // offset 0x4, size 0x4
    signed int prio_usrvsync; // offset 0x8, size 0x4
    signed int prio_vsync; // offset 0xC, size 0x4
    signed int prio_fs; // offset 0x10, size 0x4
    signed int prio_main; // offset 0x14, size 0x4
    signed int prio_mwidle; // offset 0x18, size 0x4
    signed int prio_usridle; // offset 0x1C, size 0x4
    void * stkptr_usrvsync; // offset 0x20, size 0x4
    signed int stksize_usrvsync; // offset 0x24, size 0x4
    void * stkptr_usridle; // offset 0x28, size 0x4
    signed int stksize_usridle; // offset 0x2C, size 0x4
};
class clsSingleton {
    // total size: 0x4
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
class clsPfCameraMgr : public clsSingleton, private clsOOCameraMgr {
    // total size: 0x14
public:
    class vector m_vecCamera; // offset 0x8, size 0xC
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
class clsOOVecCalc {
    // total size: 0x4
};
class SNDFPS2_SPRM {
    // total size: 0x18
public:
    unsigned int iopmemsize; // offset 0x0, size 0x4
    void * iopmemaddr; // offset 0x4, size 0x4
    unsigned int sdinit; // offset 0x8, size 0x4
    unsigned int dmach; // offset 0xC, size 0x4
    unsigned int nouse_setportsize; // offset 0x10, size 0x4
    unsigned int datasizespu2; // offset 0x14, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
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
struct /* @anon1 */ {
    // total size: 0xC
};
class clsOOCameraMgr {
    // total size: 0x4
};
class clsSingleton {
    // total size: 0x4
};
class compile_assert {
    // total size: 0x1
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
class __vector_pod {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    unsigned int * data_; // offset 0x8, size 0x4
};
class SNDF_PSPRM {
    // total size: 0x180
public:
    unsigned int porttbl[48]; // offset 0x0, size 0xC0
    unsigned int portpcm[48]; // offset 0xC0, size 0xC0
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
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
class allocator {
    // total size: 0x1
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

// Range: 0x31CAE0 -> 0x31CB74
void destroy(class clsPfCri * this /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31CAE0 -> 0x31CB74
    }
}


// Range: 0x31CB80 -> 0x31CC6C
void destroySofdec_Movie(class clsPfCri * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31CB80 -> 0x31CC6C
        unsigned char bDolbyDigital; // r2
    }
}


// Range: 0x31CC70 -> 0x31CD9C
void createSofdec_Movie(class clsPfCri * this /* r21 */, signed int s32WorkAlignI /* r20 */, signed int s32MaxBpsI /* r19 */, signed int s32WidthI /* r22 */, signed int s32HeightI /* r23 */, class clsOOHeapFragment * pcAllocatorI /* r18 */, enum enmAllocate eAllocateI /* r17 */, signed int s32MaxPoolWorkI /* r30 */, signed int s32MaxStreamNumI /* r29+0xB0 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31CC70 -> 0x31CD9C
        unsigned char bDolbyDigital; // r2
        signed int s32dd_wksize; // r16
    }
}


// Range: 0x31CDA0 -> 0x31CE78
void setParameterSfSe_3D(signed int s32IdI /* r17 */, unsigned int u32vI /* r2 */, float (* opsViewMtxI)[4][4] /* r2 */, class NNS_VECTORFAST * opsPosFastI /* r16 */, float f32DistDownKI /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31CDA0 -> 0x31CE78
        class NNS_VECTORFAST sDstFast; // r29+0x50
        signed int s32Angle; // r2
        signed int s32Dist; // r2
    }
}


// Range: 0x31CE80 -> 0x31CF60
void initSf(class clsPfCri * this /* r18 */, unsigned char * pu8SfWorkI /* r17 */, unsigned int u32SfWorkSizeI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31CE80 -> 0x31CF60
        class SNDFPS2_SPRM sSprm; // r29+0x40
    }
}


// Range: 0x31CF60 -> 0x31D110
void initAdx(class clsPfCri * this /* r21 */, unsigned int u32AdxMaxChNum_BgmI /* r22 */, unsigned int u32AdxWorkSize_BgmI /* r20 */, unsigned int u32AdxMaxChNum_VoiceI /* r23 */, unsigned int u32AdxWorkSize_VoiceI /* r30 */, unsigned int u32AdxMaxChNum_JingleI /* r29+0xAC */, unsigned int u32AdxWorkSize_JingleI /* r29+0xA8 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31CF60 -> 0x31D110
        class _adx_talk * * ppsAdxtHandle_Bgm; // r19
        unsigned char * pu8AdxWork_Bgm; // r18
        unsigned int u32i; // r17
    }
}


// Range: 0x31D110 -> 0x31D138
signed int tSoundVsyncCallback() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D110 -> 0x31D138
    }
}


// Range: 0x31D140 -> 0x31D1D0
void setThreadParamEx() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D140 -> 0x31D1D0
        class ADXM_TPRM_EX sTprm; // r29+0x10
    }
}


// Range: 0x31D1D0 -> 0x31D22C
void setThreadParam() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D1D0 -> 0x31D22C
        class ADXM_TPRM sTprm; // r29+0x10
    }
}


// Range: 0x31D230 -> 0x31D238
void @4@destroy__8clsPfCriFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D230 -> 0x31D238
    }
}


// Range: 0x31D240 -> 0x31D248
void @4@setThreadParamEx__8clsPfCriFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D240 -> 0x31D248
    }
}


// Range: 0x31D250 -> 0x31D258
void @4@setThreadParam__8clsPfCriFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D250 -> 0x31D258
    }
}


// Range: 0x31D260 -> 0x31D268
void @4@initSf__8clsPfCriFPUcUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D260 -> 0x31D268
    }
}


// Range: 0x31D270 -> 0x31D278
void @4@initAdx__8clsPfCriFUiUiUiUiUiUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D270 -> 0x31D278
    }
}


// Range: 0x31D280 -> 0x31D288
void @4@destroySofdec_Movie__8clsPfCriFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D280 -> 0x31D288
    }
}


// Range: 0x31D290 -> 0x31D298
void @4@createSofdec_Movie__8clsPfCriFiiiiP17clsOOHeapFragmentQ28clsOOCri11enmAllocateii() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D290 -> 0x31D298
    }
}


// Range: 0x31D2A0 -> 0x31D2A8
void @4@stopSfSe_3D__8clsPfCriFi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D2A0 -> 0x31D2A8
    }
}


// Range: 0x31D2B0 -> 0x31D2B8
void @4@playSfSe_3D__8clsPfCriFi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D2B0 -> 0x31D2B8
    }
}


// Range: 0x31D2C0 -> 0x31D2C8
void @4@continueSfSe_All__8clsPfCriFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D2C0 -> 0x31D2C8
    }
}


// Range: 0x31D2D0 -> 0x31D2D8
void @4@pauseSfSe_All__8clsPfCriFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D2D0 -> 0x31D2D8
    }
}


// Range: 0x31D2E0 -> 0x31D2E8
void @4@stopSfSe_All__8clsPfCriFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D2E0 -> 0x31D2E8
    }
}


// Range: 0x31D2F0 -> 0x31D2F8
void @4@setParameterSfSe_3D__8clsPfCriFiUiPA4_A4_CfPC14NNS_VECTORFASTf() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D2F0 -> 0x31D2F8
    }
}


// Range: 0x31D300 -> 0x31D308
void @4@__dt__8clsPfCriFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x31D300 -> 0x31D308
    }
}


