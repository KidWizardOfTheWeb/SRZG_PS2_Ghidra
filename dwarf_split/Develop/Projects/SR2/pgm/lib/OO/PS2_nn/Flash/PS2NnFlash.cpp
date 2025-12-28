/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\PS2_nn\Flash\PS2NnFlash.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon0 */ {
    // total size: 0x48
} __vt__18clsPfFMShapeSymbol; // size: 0x48, address: 0x6C9F10
class clsPfGraphics * m_tpcSingleton; // size: 0x4, address: 0x6E69A0
class PXS_CONTEXT pxg_context[2]; // size: 0x2C0, address: 0x6E66C0
unsigned long pxg_frame_addr[]; // size: 0x0, address: 0x5FAF90
class sceGsDBuffDc m_tsGsDBuffDc; // size: 0x330, address: 0x707EC0
struct /* @anon2 */ {
    // total size: 0x68
} __vt__13clsPfFMSprite; // size: 0x68, address: 0x6C9F60
struct /* @anon1 */ {
    // total size: 0x48
} __vt__13clsOOFMObject; // size: 0x48, address: 0x6C30A0
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
class stcGradRecord {
    // total size: 0x8
public:
    unsigned int u32Ratio; // offset 0x0, size 0x4
    unsigned int u32Rgba; // offset 0x4, size 0x4
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
class stcBitsLossLess2 {
    // total size: 0x8
public:
    unsigned short u16CharaID; // offset 0x0, size 0x2
    unsigned char u8Format; // offset 0x2, size 0x1
    unsigned char u8TexIdx; // offset 0x3, size 0x1
    unsigned short u16Width; // offset 0x4, size 0x2
    unsigned short u16Height; // offset 0x6, size 0x2
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
class stcScriptObject {
    // total size: 0x20
public:
    unsigned char u8Type; // offset 0x0, size 0x1
    char * pc8Name; // offset 0x4, size 0x4
    class vector vecsFunc; // offset 0x8, size 0xC
    class vector vecsMember; // offset 0x14, size 0xC
};
enum enmCullModeType {
    CULL___NONE = 0,
    CULL___CW = 1,
    CULL___CCW = 2,
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
class stcDepthInfo {
    // total size: 0x8
public:
    unsigned int u32DepthNum; // offset 0x0, size 0x4
    class stcDepthData * psDepthData; // offset 0x4, size 0x4
};
class clsOOSemaphore {
    // total size: 0x4
};
class stcSeqTag {
    // total size: 0xC
public:
    unsigned int u32Frame; // offset 0x0, size 0x4
    class stcTag sTag; // offset 0x4, size 0x8
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
class stcFgbRect {
    // total size: 0x10
public:
    signed int s32XMin; // offset 0x0, size 0x4
    signed int s32XMax; // offset 0x4, size 0x4
    signed int s32YMin; // offset 0x8, size 0x4
    signed int s32YMax; // offset 0xC, size 0x4
};
class stcDefineShape1 {
    // total size: 0x54
public:
    unsigned short u16CharaID; // offset 0x0, size 0x2
    unsigned short u16Padding; // offset 0x2, size 0x2
    class stcFgbRect sShapeBounds; // offset 0x4, size 0x10
    class stcShapeWithStyle sShapeWithStyle; // offset 0x14, size 0x40
};
class vector : private __vector_imp {
    // total size: 0xC
};
class stcActDefineFunction {
    // total size: 0x14
public:
    unsigned short u16FNameLen; // offset 0x0, size 0x2
    char * pc8FName; // offset 0x4, size 0x4
    unsigned short u16ParamNum; // offset 0x8, size 0x2
    unsigned short u16CodeSize; // offset 0xA, size 0x2
    unsigned short * pu16ParamLen; // offset 0xC, size 0x4
    char * * ppc8ParamName; // offset 0x10, size 0x4
};
class clsPfFMShapeSymbol : public clsOOFMShapeSymbol {
    // total size: 0x40
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
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class stcDepthData {
    // total size: 0x8
public:
    unsigned int u32DepthNo; // offset 0x0, size 0x4
    unsigned int u32InstructNum; // offset 0x4, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
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
class vector : private __vector_imp {
    // total size: 0xC
};
class vector : private __vector_imp {
    // total size: 0xC
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class clsOOFMSequence : public clsOOFMObject {
    // total size: 0x20
public:
    unsigned int m_u32CurFrame; // offset 0x14, size 0x4
    unsigned int m_u32MaxFrame; // offset 0x18, size 0x4
    unsigned char m_u8FlashReserve; // offset 0x1C, size 0x1
};
class stcShapeWithStyle {
    // total size: 0x40
public:
    unsigned int u32FillStyleNum; // offset 0x0, size 0x4
    class stcFillStyle * psFillStyles; // offset 0x4, size 0x4
    unsigned int u32LineStyleNum; // offset 0x8, size 0x4
    unsigned char u8IsLineStyle2; // offset 0xC, size 0x1
    unsigned char au8Padding[3]; // offset 0xD, size 0x3
    class stcLineStyle * psLineStyles; // offset 0x10, size 0x4
    class stcLineStyle2 * psLineStyles2; // offset 0x14, size 0x4
    class stcShape sShape; // offset 0x18, size 0x28
};
class sceGsXyoffset {
    // total size: 0x8
public:
    unsigned long OFX : 16; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long OFY : 16; // offset 0x0, size 0x4
    unsigned long pad48 : 16; // offset 0x0, size 0x4
};
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class _UUID {
    // total size: 0x10
public:
    unsigned int Data1; // offset 0x0, size 0x4
    unsigned short Data2; // offset 0x4, size 0x2
    unsigned short Data3; // offset 0x6, size 0x2
    unsigned char Data4[8]; // offset 0x8, size 0x8
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class stcLayer {
    // total size: 0x20
public:
    unsigned int u32DepthNo; // offset 0x0, size 0x4
    class vector vecsSeqTags; // offset 0x4, size 0xC
    class vector * pvecsSeqTags; // offset 0x10, size 0x4
    class clsOOFMObject * pcObject; // offset 0x14, size 0x4
    unsigned int u32RemoveID; // offset 0x18, size 0x4
    unsigned int u32RemoveFrame; // offset 0x1C, size 0x4
};
class stcLineStyle {
    // total size: 0x8
public:
    unsigned short u16Width; // offset 0x0, size 0x2
    unsigned short u16Padding; // offset 0x2, size 0x2
    unsigned int u32RGBA; // offset 0x4, size 0x4
};
class stcPlaceObject2 {
    // total size: 0xC
public:
    unsigned short u16CharacterId; // offset 0x0, size 0x2
    unsigned short u16ClipDepth; // offset 0x2, size 0x2
    float (* psPlaceMtx)[3][2]; // offset 0x4, size 0x4
    class stcCXFormWithAlpha * psCXWithAlpha; // offset 0x8, size 0x4
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
class __wrap_iterator {
    // total size: 0x4
public:
    class stcLayer * * it_; // offset 0x0, size 0x4
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
class vector : private __vector_imp {
    // total size: 0xC
};
class stcDoAction {
    // total size: 0x8
public:
    unsigned int u32RecNum; // offset 0x0, size 0x4
    class stcActionRec * psActRecs; // offset 0x4, size 0x4
};
class clsOOFlashMgr {
    // total size: 0x18
public:
    class vector m_vecpcFlashData; // offset 0x4, size 0xC
    class clsOOFMShapeSymbol * (* m_pfCreateShapeSymbol)(); // offset 0x10, size 0x4
    class clsOOFMSprite * (* m_pfCreateSprite)(); // offset 0x14, size 0x4
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcReplaceNode * data_; // offset 0x8, size 0x4
};
class stcShape {
    // total size: 0x28
public:
    unsigned int u32ShapeRecNum; // offset 0x0, size 0x4
    unsigned int * pu32RecArraySeq; // offset 0x4, size 0x4
    unsigned int au32RecTypeNums[4]; // offset 0x8, size 0x10
    class stcStyleChangeRec * psStyleChangeRec; // offset 0x18, size 0x4
    class stcStraightEdgeRec * psStraightEdgeRec; // offset 0x1C, size 0x4
    class stcCurvedEdgeRec * psCurvedEdgeRec; // offset 0x20, size 0x4
    class stcShapeVert * psShapeVert; // offset 0x24, size 0x4
};
class __vector_imp : private __vector_deleter {
    // total size: 0xC
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class stcFlash {
    // total size: 0x58
public:
    class stcFgbHeader sHeader; // offset 0x0, size 0x34
    class stcTag * psDefineTags; // offset 0x34, size 0x4
    class stcExportAssets * psExportAssets; // offset 0x38, size 0x4
    class stcImportAssets * psImportAssets; // offset 0x3C, size 0x4
    class stcSprite * psSprites; // offset 0x40, size 0x4
    class stcScene sScene; // offset 0x44, size 0x14
};
class stcCXFormWithAlpha {
    // total size: 0x14
public:
    unsigned char u8Type; // offset 0x0, size 0x1
    unsigned char u8PlaceType; // offset 0x1, size 0x1
    unsigned char au8Padding[2]; // offset 0x2, size 0x2
    signed short s16AddR; // offset 0x4, size 0x2
    signed short s16AddG; // offset 0x6, size 0x2
    signed short s16AddB; // offset 0x8, size 0x2
    signed short s16AddA; // offset 0xA, size 0x2
    signed short s16MultR; // offset 0xC, size 0x2
    signed short s16MultG; // offset 0xE, size 0x2
    signed short s16MultB; // offset 0x10, size 0x2
    signed short s16MultA; // offset 0x12, size 0x2
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
class allocator {
    // total size: 0x1
};
class stcActionRec {
    // total size: 0x8
public:
    unsigned char u8ActCode; // offset 0x0, size 0x1
    unsigned char au8Padding[3]; // offset 0x1, size 0x3
    void * pvData; // offset 0x4, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class stcShapeVert {
    // total size: 0x10
public:
    unsigned short u16GroupNum; // offset 0x0, size 0x2
    unsigned char u8HasTex; // offset 0x2, size 0x1
    unsigned char u8Padding; // offset 0x3, size 0x1
    class stcVertHeader * psHeaders; // offset 0x4, size 0x4
    class stcPolyVert * psPolyVerts; // offset 0x8, size 0x4
    class stcPolyVertUV * psPolyVertsUV; // offset 0xC, size 0x4
};
class stcFillStyle {
    // total size: 0x48
public:
    unsigned short u16Style; // offset 0x0, size 0x2
    unsigned short u16Padding1; // offset 0x2, size 0x2
    unsigned int u32Rgba; // offset 0x4, size 0x4
    float sGradientMtx[3][2]; // offset 0x8, size 0x18
    class stcGradient sGradient; // offset 0x20, size 0xC
    unsigned short u16BmpId; // offset 0x2C, size 0x2
    unsigned short u16TexIdx; // offset 0x2E, size 0x2
    float sBmpMtx[3][2]; // offset 0x30, size 0x18
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcScriptVar * data_; // offset 0x8, size 0x4
};
class stcCurvedEdgeRec {
    // total size: 0x10
public:
    signed int s32ControlDeltaX; // offset 0x0, size 0x4
    signed int s32ControlDeltaY; // offset 0x4, size 0x4
    signed int s32AnchorDeltaX; // offset 0x8, size 0x4
    signed int s32AnchorDeltaY; // offset 0xC, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
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
class clsOOFMShapeSymbol : public clsOOFMObject {
    // total size: 0x40
public:
    class stcDefineShape1 * m_psBase; // offset 0x14, size 0x4
    class stcBitsLossLess2 * m_psBLL2; // offset 0x18, size 0x4
    unsigned int m_u32TotalVNum; // offset 0x1C, size 0x4
    class stcShapeVert m_sShapeVert; // offset 0x20, size 0x10
    class stcPlaceObject2 * m_psPlaceObj2; // offset 0x30, size 0x4
    class stcPlaceObject2 * m_psUpPlaceObj2; // offset 0x34, size 0x4
    unsigned char m_u8Placed; // offset 0x38, size 0x1
    unsigned char m_u8Clip; // offset 0x39, size 0x1
    class stcCXFormWithAlpha * m_psCXFormWithAlpha; // offset 0x3C, size 0x4
};
class stcScene {
    // total size: 0x14
public:
    class stcDepthInfo sDepthInfo; // offset 0x0, size 0x8
    unsigned int u32FrameCnt; // offset 0x8, size 0x4
    unsigned int u32CtrlTagNum; // offset 0xC, size 0x4
    class stcTag * psTags; // offset 0x10, size 0x4
};
class allocator {
    // total size: 0x1
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class stcKeyListenerSet {
    // total size: 0xC
public:
    class clsOOFMSprite * pcSprite; // offset 0x0, size 0x4
    class stcDoAction * psActRec; // offset 0x4, size 0x4
    class stcScriptObject * psSObj; // offset 0x8, size 0x4
};
class clsOODraw2d {
    // total size: 0xC
public:
    unsigned char m_bWide2dConv; // offset 0x0, size 0x1
    unsigned int m_eTexFlag; // offset 0x8, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
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
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcScriptFunc * data_; // offset 0x8, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class stcReplaceNode {
    // total size: 0x8
public:
    unsigned int u32TargetID; // offset 0x0, size 0x4
    class clsOOFMObject * pcReplaceObj; // offset 0x4, size 0x4
};
class stcTag {
    // total size: 0x8
public:
    unsigned int u32TagID; // offset 0x0, size 0x4
    void * pvData; // offset 0x4, size 0x4
};
class clsOOFMSprite : public clsOOFMSequence {
    // total size: 0xF0
public:
    class stcSprite * m_psSprite; // offset 0x20, size 0x4
    class vector m_vecLayer; // offset 0x24, size 0xC
    class vector m_vecsReplaceTbl; // offset 0x30, size 0xC
    class stcPlaceObject2 * m_psPlaceObj2; // offset 0x3C, size 0x4
    class stcPlaceObject2 * m_psUpPlaceObj2; // offset 0x40, size 0x4
    unsigned char m_u8Placed; // offset 0x44, size 0x1
    unsigned short m_u16SeqMode; // offset 0x46, size 0x2
    class vector m_vecsStack; // offset 0x48, size 0xC
    class stcActConstantPool * m_psConstantPool; // offset 0x54, size 0x4
    class stcPushData m_asRegister[5]; // offset 0x58, size 0x50
    class stcDoAction * m_psLastPlayAction; // offset 0xA8, size 0x4
    class vector m_vecpsFrameLabel; // offset 0xAC, size 0xC
    unsigned int * m_pu32CurIdx; // offset 0xB8, size 0x4
    unsigned int * m_pu32JmpIdx; // offset 0xBC, size 0x4
    unsigned char m_u8IsJump; // offset 0xC0, size 0x1
    unsigned int m_au32RtnCode[4]; // offset 0xC4, size 0x10
    signed int m_s32NextSpriteNo; // offset 0xD4, size 0x4
    unsigned int m_u32NextSpriteFrame; // offset 0xD8, size 0x4
    char * m_pc8NextSpriteLabel; // offset 0xDC, size 0x4
    signed int m_s32PlaceX; // offset 0xE0, size 0x4
    signed int m_s32PlaceY; // offset 0xE4, size 0x4
    unsigned char m_u8BlendMode; // offset 0xE8, size 0x1
};
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class allocator {
    // total size: 0x1
};
class vector : private __vector_imp {
    // total size: 0xC
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
class stcStraightEdgeRec {
    // total size: 0xC
public:
    unsigned char u8LineType; // offset 0x0, size 0x1
    unsigned char au8Padding[3]; // offset 0x1, size 0x3
    signed int s32DeltaX; // offset 0x4, size 0x4
    signed int s32DeltaY; // offset 0x8, size 0x4
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcKeyListenerSet * data_; // offset 0x8, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
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
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class stcImportAssets {
    // total size: 0xC
public:
    unsigned short u16URLLen; // offset 0x0, size 0x2
    unsigned short u16Num; // offset 0x2, size 0x2
    char * pc8URL; // offset 0x4, size 0x4
    class stcExportInner * psImInner; // offset 0x8, size 0x4
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
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class sceGsFogcol {
    // total size: 0x8
public:
    unsigned long FCR : 8; // offset 0x0, size 0x4
    unsigned long FCG : 8; // offset 0x0, size 0x4
    unsigned long FCB : 8; // offset 0x0, size 0x4
    unsigned long pad24 : 40; // offset 0x0, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
};
class clsOOFMObject {
    // total size: 0x14
public:
    class clsOOFlashMovie * m_pcParent; // offset 0x4, size 0x4
    signed int m_s32CharID; // offset 0x8, size 0x4
    unsigned char m_u8IsDraw; // offset 0xC, size 0x1
    float m_f32DrawZ; // offset 0x10, size 0x4
};
class stcScriptVar {
    // total size: 0x8
public:
    char * pc8Name; // offset 0x0, size 0x4
    class stcPushData * psData; // offset 0x4, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class stcPushData * data_; // offset 0x8, size 0x4
};
class allocator {
    // total size: 0x1
};
class stcPolyVertUV {
    // total size: 0x14
public:
    float f32X; // offset 0x0, size 0x4
    float f32Y; // offset 0x4, size 0x4
    unsigned int u32Color; // offset 0x8, size 0x4
    float f32U; // offset 0xC, size 0x4
    float f32V; // offset 0x10, size 0x4
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
class clsPfFMSprite : public clsOOFMSprite {
    // total size: 0xF0
};
class stcExportInner {
    // total size: 0x8
public:
    unsigned short u16Tag; // offset 0x0, size 0x2
    unsigned short u16StrLen; // offset 0x2, size 0x2
    char * pc8Name; // offset 0x4, size 0x4
};
class stcStyleChangeRec {
    // total size: 0x28
public:
    signed int s32MoveDeltaX; // offset 0x0, size 0x4
    signed int s32MoveDeltaY; // offset 0x4, size 0x4
    unsigned short u16FillStyle0; // offset 0x8, size 0x2
    unsigned short u16FillStyle1; // offset 0xA, size 0x2
    unsigned short u16LineStyle; // offset 0xC, size 0x2
    unsigned short u16Padding; // offset 0xE, size 0x2
    unsigned int u32FillStyleNum; // offset 0x10, size 0x4
    unsigned int u32LineStyleNum; // offset 0x14, size 0x4
    unsigned char u8IsLineStyle2; // offset 0x18, size 0x1
    unsigned char u8NumFillBits; // offset 0x19, size 0x1
    unsigned char u8NumLineBits; // offset 0x1A, size 0x1
    unsigned char au8Padding[1]; // offset 0x1B, size 0x1
    class stcFillStyle * psFillStyle; // offset 0x1C, size 0x4
    class stcLineStyle * psLineStyles; // offset 0x20, size 0x4
    class stcLineStyle2 * psLineStyles2; // offset 0x24, size 0x4
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
struct /* @anon0 */ {
    // total size: 0x48
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class stcPushData {
    // total size: 0x10
public:
    unsigned char u8Type; // offset 0x0, size 0x1
    class uniPushData uData; // offset 0x8, size 0x8
};
class sceGsDthe {
    // total size: 0x8
public:
    unsigned long DTHE : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
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
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class stcScriptFunc {
    // total size: 0x1C
public:
    class clsOOFMSprite * pcSprite; // offset 0x0, size 0x4
    class stcDoAction * psActRec; // offset 0x4, size 0x4
    class stcActDefineFunction * psDefFunc; // offset 0x8, size 0x4
    class stcActDefineFunction2 * psDefFunc2; // offset 0xC, size 0x4
    unsigned int u32CodeN; // offset 0x10, size 0x4
    char * pc8Name; // offset 0x14, size 0x4
    class stcActConstantPool * psConstantPool; // offset 0x18, size 0x4
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
class stcLineStyle2 {
    // total size: 0x58
public:
    unsigned short u16Width; // offset 0x0, size 0x2
    unsigned char u8StartCapStyle; // offset 0x2, size 0x1
    unsigned char u8HasFillFlag; // offset 0x3, size 0x1
    unsigned char u8NoHScaleFlag; // offset 0x4, size 0x1
    unsigned char u8NoVScaleFlag; // offset 0x5, size 0x1
    unsigned char u8PixelHintingFlag; // offset 0x6, size 0x1
    unsigned char u8NoClose; // offset 0x7, size 0x1
    unsigned char u8Padding; // offset 0x8, size 0x1
    unsigned char u8EndCapStyle; // offset 0x9, size 0x1
    unsigned short u16MiterLimitFactor; // offset 0xA, size 0x2
    unsigned int u32RGBA; // offset 0xC, size 0x4
    class stcFillStyle sFillStyle; // offset 0x10, size 0x48
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
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
class allocator {
    // total size: 0x1
};
class vector : private __vector_imp {
    // total size: 0xC
};
struct /* @anon1 */ {
    // total size: 0x48
};
class vector : private __vector_imp {
    // total size: 0xC
};
class stcPolyVert {
    // total size: 0xC
public:
    float f32X; // offset 0x0, size 0x4
    float f32Y; // offset 0x4, size 0x4
    unsigned int u32Color; // offset 0x8, size 0x4
};
class uniPushData {
    // total size: 0x8
public:
    union { // inferred
        char * pc8String; // offset 0x0, size 0x4
        float f32Float; // offset 0x0, size 0x4
        unsigned char u8RegisterNum; // offset 0x0, size 0x1
        unsigned char u8Bool; // offset 0x0, size 0x1
        double f64Double; // offset 0x0, size 0x8
        unsigned int u32Integer; // offset 0x0, size 0x4
        unsigned char u8Constant; // offset 0x0, size 0x1
        unsigned short u16Constant; // offset 0x0, size 0x2
        void * pvObject; // offset 0x0, size 0x4
    };
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
class stcExportAssets {
    // total size: 0x8
public:
    unsigned short u16Num; // offset 0x0, size 0x2
    unsigned short u16Padding; // offset 0x2, size 0x2
    class stcExportInner * psExInner; // offset 0x4, size 0x4
};
class stcActConstantPool {
    // total size: 0xC
public:
    unsigned short u16PoolNum; // offset 0x0, size 0x2
    unsigned short * pu16NameLen; // offset 0x4, size 0x4
    char * * ppc8String; // offset 0x8, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
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
class clsOOFlashMovie {
    // total size: 0x8C
public:
    class clsOOFlashMgr * m_pcFlashMgr; // offset 0x4, size 0x4
    class stcFlash * m_psFlash; // offset 0x8, size 0x4
    class vector m_vecpcSprite; // offset 0xC, size 0xC
    class vector m_vecpcImport; // offset 0x18, size 0xC
    class vector m_vecpcDefineShape; // offset 0x24, size 0xC
    class stcScriptObject m_sKeyObj; // offset 0x30, size 0x20
    class vector m_vecsKeyListener; // offset 0x50, size 0xC
    class clsOOTexture * m_pcTexList; // offset 0x5C, size 0x4
    class clsOODraw2d * m_pcDraw2d; // offset 0x60, size 0x4
    class vector m_vecScriptObject; // offset 0x64, size 0xC
    class vector m_vecScriptFunction; // offset 0x70, size 0xC
    unsigned char m_u8SetSkip; // offset 0x7C, size 0x1
    class clsOOCri * m_pcCri; // offset 0x80, size 0x4
    unsigned int (* m_pfCallBackFunc)(void *, unsigned int, unsigned int, unsigned int); // offset 0x84, size 0x4
    void * m_pvCallBackParam; // offset 0x88, size 0x4
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
class stcVertHeader {
    // total size: 0x8
public:
    unsigned int u32Type; // offset 0x0, size 0x4
    unsigned int u32Num; // offset 0x4, size 0x4
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
class sceGsFba {
    // total size: 0x8
public:
    unsigned long FBA : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class stcFgbHeader {
    // total size: 0x34
public:
    unsigned char u8IsLittleEndian; // offset 0x0, size 0x1
    unsigned char u8FlashVersion; // offset 0x1, size 0x1
    unsigned char u8FgbVersion; // offset 0x2, size 0x1
    unsigned char u8Padding; // offset 0x3, size 0x1
    unsigned int u32Reserved; // offset 0x4, size 0x4
    class stcFgbRect sScreenRect; // offset 0x8, size 0x10
    unsigned int u32FrameRate; // offset 0x18, size 0x4
    unsigned int u32FrameCnt; // offset 0x1C, size 0x4
    class stcTagInfo sTagNumInfo; // offset 0x20, size 0x14
};
class sceGsPrmodecont {
    // total size: 0x8
public:
    unsigned long AC : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class stcActDefineFunction2 {
    // total size: 0x20
public:
    unsigned short u16FNameLen; // offset 0x0, size 0x2
    char * pc8FuncName; // offset 0x4, size 0x4
    unsigned short u16ParamNum; // offset 0x8, size 0x2
    unsigned char u8RegisterCount; // offset 0xA, size 0x1
    unsigned char u8PreloadParentFlag; // offset 0xB, size 0x1
    unsigned char u8PreloadRootFlag; // offset 0xC, size 0x1
    unsigned char u8SuppressSuperFlag; // offset 0xD, size 0x1
    unsigned char u8PreloadSuperFlag; // offset 0xE, size 0x1
    unsigned char u8SuppressArgumentsFlag; // offset 0xF, size 0x1
    unsigned char u8PreloadArgumentsFlag; // offset 0x10, size 0x1
    unsigned char u8SuppressThisFlag; // offset 0x11, size 0x1
    unsigned char u8PreloadThisFlag; // offset 0x12, size 0x1
    unsigned char u8PreloadGlobalFlag; // offset 0x13, size 0x1
    unsigned short * pu16PNameLen; // offset 0x14, size 0x4
    char * * ppc8ParamName; // offset 0x18, size 0x4
    unsigned short u16CodeSize; // offset 0x1C, size 0x2
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
class stcGradient {
    // total size: 0xC
public:
    unsigned short u16SpreadMode; // offset 0x0, size 0x2
    unsigned short u16InterpolationRgb; // offset 0x2, size 0x2
    unsigned int u32Num; // offset 0x4, size 0x4
    class stcGradRecord * psGradRecs; // offset 0x8, size 0x4
};
struct /* @anon2 */ {
    // total size: 0x68
};
class clsOOTexture {
    // total size: 0x4
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
class stcTagInfo {
    // total size: 0x14
public:
    unsigned int u32DefNum; // offset 0x0, size 0x4
    unsigned int u32ExportNum; // offset 0x4, size 0x4
    unsigned int u32ImportNum; // offset 0x8, size 0x4
    unsigned int u32SpriteNum; // offset 0xC, size 0x4
    unsigned int u32SequenceNum; // offset 0x10, size 0x4
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
class stcSprite {
    // total size: 0x14
public:
    class stcDepthInfo sDepthInfo; // offset 0x0, size 0x8
    unsigned short u16CharacterID; // offset 0x8, size 0x2
    unsigned short u16FrameCnt; // offset 0xA, size 0x2
    unsigned int u32CtrlTagNum; // offset 0xC, size 0x4
    class stcSeqTag * psSeqTags; // offset 0x10, size 0x4
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

// Range: 0x4DB060 -> 0x4DB264
void draw(class clsPfFMShapeSymbol * this /* r2 */, signed int s32X /* r2 */, signed int s32Y /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4DB060 -> 0x4DB264
        class stcShapeVert * psSV; // r10
        unsigned int u32n; // r9
        unsigned int u32Idx; // r8
        unsigned int u32i; // r15
        float f32Diff; // r1
    }
}


// Range: 0x4DB270 -> 0x4DB310
void endClipDraw() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4DB270 -> 0x4DB310
    }
}


// Range: 0x4DB310 -> 0x4DB3B0
void startClipDraw() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4DB310 -> 0x4DB3B0
    }
}


// Range: 0x4DB3B0 -> 0x4DB558
void clearMaskDraw(class clsPfFMSprite * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4DB3B0 -> 0x4DB558
    }
}


// Range: 0x4DB560 -> 0x4DB600
void startMaskDraw() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4DB560 -> 0x4DB600
    }
}


