/*
    Compile unit: C:\usr\local\sega\px\src\px.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class tagPXS_PUSHBUFFER * pxgPrimaryPB; // size: 0x4, address: 0x6D1F04
class tagPXS_PUSHBUFFER * pxgCurrentPB; // size: 0x4, address: 0x6D1F08
class PXS_INITPARAM pxgInitParam; // size: 0x20, address: 0x6E64B0
class PXS_FXYZW pxgLightMatrix[8]; // size: 0x80, address: 0x6E64D0
class PXS_FXYZW pxgLight[4]; // size: 0x40, address: 0x6E6550
class PXS_MATRIX pxgViewMatrix; // size: 0x40, address: 0x6E6590
class PXS_MATERIAL pxgMaterial[2]; // size: 0x80, address: 0x0
class tagPXS_PUSHBUFFER pxgPBWork; // size: 0xA0, address: 0x6E65D0
float pxgGsGuardBand; // size: 0x4, address: 0x6D1F0C
class PXS_SUBSHADERPARAM pxgSubShaderParam; // size: 0x30, address: 0x6E6670
class PXS_SCREENPARAM pxgScreenParam; // size: 0x20, address: 0x6E66A0
signed int (* pxgDmaStartCallback)(void *); // size: 0x4, address: 0x6D1F10
void (* pxgRenderCallback)(void *); // size: 0x4, address: 0x6D1F14
void * pxgRenderCallbackArg; // size: 0x4, address: 0x6D1F18
signed int pxgGsHandlerID; // size: 0x4, address: 0x6D1F1C
unsigned int pxgRenderFlag; // size: 0x4, address: 0x6D1F20
unsigned int pxgRenderDmaBusy; // size: 0x4, address: 0x6D1F24
unsigned int pxgLastDmaAddr; // size: 0x4, address: 0x6D1F28
class PXS_MATERIAL pxgDefaultMaterial; // size: 0x40, address: 0x5FAF50
static char __license_string__[54]; // size: 0x36, address: 0x6591F0
char * __license_string_ptr__; // size: 0x4, address: 0x6D1F2C
static char * pxgVersion; // size: 0x4, address: 0x659260
char * pxgVersionPtr; // size: 0x4, address: 0x6D1F30
unsigned int pxgVuCode_Scissor; // size: 0x4, address: 0x5A44E0
signed int PXGsInterruptHandler(signed int, void *, void *); // size: 0x0, address: 0x15B410
class PXS_CONTEXT pxg_context[2]; // size: 0x2C0, address: 0x6E66C0
class PXS_FXYZW pxgVuClipParam[]; // size: 0x0, address: 0x5FAF20
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
class PXS_PUSHBUFFERINFO {
    // total size: 0x18
public:
    unsigned int numTags; // offset 0x0, size 0x4
    unsigned int numBytes; // offset 0x4, size 0x4
    unsigned int peakTags; // offset 0x8, size 0x4
    unsigned int peakBytes; // offset 0xC, size 0x4
    unsigned int maxTags; // offset 0x10, size 0x4
    unsigned int maxBytes; // offset 0x14, size 0x4
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
class PXS_DMATAG {
    // total size: 0x10
public:
    unsigned short qwc; // offset 0x0, size 0x2
    unsigned short id; // offset 0x2, size 0x2
    void * addr; // offset 0x4, size 0x4
    unsigned int vifnop; // offset 0x8, size 0x4
    unsigned int directhl; // offset 0xC, size 0x4
};
enum PXE_SVF {
    PXE_SVF_START = 0,
    PXE_SVF_POSITION = 1,
    PXE_SVF_NORMAL = 2,
    PXE_SVF_UV = 3,
    PXE_SVF_COLOR = 4,
    PXE_SVF_NORMAL16 = 5,
    PXE_SVF_UV16 = 6,
    PXE_SVF_UVM = 7,
    PXE_SVF_UV16M = 8,
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
class PXS_FXYZW {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
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
class sceGsDthe {
    // total size: 0x8
public:
    unsigned long DTHE : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
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
class PXS_MATERIAL {
    // total size: 0x40
public:
    float diffuse[3]; // offset 0x0, size 0xC
    union { // inferred
        float alpha; // offset 0xC, size 0x4
        float specular; // offset 0xC, size 0x4
    };
    float ambient[4]; // offset 0x10, size 0x10
    float emissive[4]; // offset 0x20, size 0x10
    float power; // offset 0x30, size 0x4
    float colorClamp; // offset 0x34, size 0x4
    float alphaClamp; // offset 0x38, size 0x4
    float reserved; // offset 0x3C, size 0x4
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
enum PXE_ERR {
    PXE_ERR_OK = 0,
    PXE_ERR_INVALIDARG = -1,
    PXE_ERR_BUSY = -2,
    PXE_ERR_NOTREADY = -10,
    PXE_ERR_NOTVB = -50,
    PXE_ERR_INVALIDVBVERSION = -51,
    PXE_ERR_TOOMANYVERTICES = -52,
    PXE_ERR_NODATA = -53,
    PXE_ERR_NOTENOUGHBUFFER = -54,
    PXE_ERR_INCORRECTDBINDEX = -55,
};
class sceGsFba {
    // total size: 0x8
public:
    unsigned long FBA : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class PXS_MATRIX {
    // total size: 0x40
public:
    union { // inferred
        float m[4][4]; // offset 0x0, size 0x40
        struct { // inferred
            float _11; // offset 0x0, size 0x4
            float _12; // offset 0x4, size 0x4
            float _13; // offset 0x8, size 0x4
            float _14; // offset 0xC, size 0x4
            float _21; // offset 0x10, size 0x4
            float _22; // offset 0x14, size 0x4
            float _23; // offset 0x18, size 0x4
            float _24; // offset 0x1C, size 0x4
            float _31; // offset 0x20, size 0x4
            float _32; // offset 0x24, size 0x4
            float _33; // offset 0x28, size 0x4
            float _34; // offset 0x2C, size 0x4
            float _41; // offset 0x30, size 0x4
            float _42; // offset 0x34, size 0x4
            float _43; // offset 0x38, size 0x4
            float _44; // offset 0x3C, size 0x4
        };
    };
};
class sceGsPrmodecont {
    // total size: 0x8
public:
    unsigned long AC : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class sceGsXyoffset {
    // total size: 0x8
public:
    unsigned long OFX : 16; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long OFY : 16; // offset 0x0, size 0x4
    unsigned long pad48 : 16; // offset 0x0, size 0x4
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
class sceGsRgbaq {
    // total size: 0x8
public:
    unsigned int R : 8; // offset 0x0, size 0x4
    unsigned int G : 8; // offset 0x0, size 0x4
    unsigned int B : 8; // offset 0x0, size 0x4
    unsigned int A : 8; // offset 0x0, size 0x4
    float Q; // offset 0x4, size 0x4
};
class sceGsTexclut {
    // total size: 0x8
public:
    unsigned long CBW : 6; // offset 0x0, size 0x4
    unsigned long COU : 6; // offset 0x0, size 0x4
    unsigned long COV : 10; // offset 0x0, size 0x4
    unsigned long pad22 : 42; // offset 0x0, size 0x4
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
class PXS_SUBSHADERPARAM {
    // total size: 0x30
public:
    float uOfs; // offset 0x0, size 0x4
    float vOfs; // offset 0x4, size 0x4
    float rsvd0; // offset 0x8, size 0x4
    float fa; // offset 0xC, size 0x4
    float uScale; // offset 0x10, size 0x4
    float vScale; // offset 0x14, size 0x4
    float rsvd1; // offset 0x18, size 0x4
    float fb; // offset 0x1C, size 0x4
    unsigned int scisMode; // offset 0x20, size 0x4
    unsigned int triFan; // offset 0x24, size 0x4
    unsigned int rsvd2; // offset 0x28, size 0x4
    float fognear; // offset 0x2C, size 0x4
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
class PXS_PRMODESET {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    unsigned int prmode0; // offset 0x10, size 0x4
    unsigned int prmode1; // offset 0x14, size 0x4
    unsigned long prmodeaddr; // offset 0x18, size 0x4
};
class sceGsTexflush {
    // total size: 0x8
public:
    unsigned long pad00; // offset 0x0, size 0x4
};
class sceGsFogcol {
    // total size: 0x8
public:
    unsigned long FCR : 8; // offset 0x0, size 0x4
    unsigned long FCG : 8; // offset 0x0, size 0x4
    unsigned long FCB : 8; // offset 0x0, size 0x4
    unsigned long pad24 : 40; // offset 0x0, size 0x4
};

// Range: 0x15B1F0 -> 0x15B404
enum PXE_ERR PXInit(class PXS_INITPARAM * iprm /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B1F0 -> 0x15B404
        class PXS_PRMODESET prmode; // r29+0x20
        unsigned int flag; // r2
    }
}


// Range: 0x15B410 -> 0x15B4AC
signed int PXGsInterruptHandler(signed int ca /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B410 -> 0x15B4AC
        unsigned long imr; // r17
        unsigned long csr; // r2
    }
}


// Range: 0x15B4B0 -> 0x15B558
void PXInitInterrupt(unsigned int flag /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B4B0 -> 0x15B558
        unsigned long imr; // r2
        signed int ret; // r2
    }
}


// Range: 0x15B560 -> 0x15B5D4
void PXExit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B560 -> 0x15B5D4
    }
}


// Range: 0x15B5E0 -> 0x15B5F0
enum PXE_ERR PXRender(unsigned int flag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B5E0 -> 0x15B5F0
    }
}


// Range: 0x15B5F0 -> 0x15B5FC
void * PXBegin(unsigned int flag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B5F0 -> 0x15B5FC
    }
}


// Range: 0x15B600 -> 0x15B60C
void PXEnd(void * p /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B600 -> 0x15B60C
    }
}


// Range: 0x15B610 -> 0x15B624
void PXPutReg(unsigned int addr /* r2 */, unsigned long data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B610 -> 0x15B624
    }
}


// Range: 0x15B630 -> 0x15B63C
void PXPutCustomShader(void * addr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B630 -> 0x15B63C
    }
}


// Range: 0x15B640 -> 0x15B648
void PXStartShader() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B640 -> 0x15B648
    }
}


// Range: 0x15B650 -> 0x15B65C
void PXPutCall(void * addr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B650 -> 0x15B65C
    }
}


// Range: 0x15B660 -> 0x15B678
void PXPutRef(void * addr /* r4 */, unsigned int qwc /* r2 */, unsigned int flag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B660 -> 0x15B678
    }
}


// Range: 0x15B680 -> 0x15B6A0
void * PXBeginPrim(void * addr /* r4 */, unsigned int vertices /* r3 */, unsigned int stride /* r2 */, unsigned int prim /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B680 -> 0x15B6A0
    }
}


// Range: 0x15B6A0 -> 0x15B6AC
void * PXEndPrim(void * addr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B6A0 -> 0x15B6AC
    }
}


// Range: 0x15B6B0 -> 0x15B748
void PXPutVifMask() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B6B0 -> 0x15B748
        unsigned int * p; // r2
    }
}


