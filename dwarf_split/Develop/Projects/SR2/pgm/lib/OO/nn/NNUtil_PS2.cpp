/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\nn\NNUtil_PS2.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char smpsBinaryPath[256]; // size: 0x100, address: 0x0
static char smpsTexturePath[256]; // size: 0x100, address: 0x0
static unsigned char cb_buf[32]; // size: 0x20, address: 0x703D80
static class PXS_CONTEXTBUFFER * cb_texflush; // size: 0x4, address: 0x703DC0
static signed int gs32CdFileIdx; // size: 0x4, address: 0x0
class clsOOMainHeap * t_cInstance; // size: 0x4, address: 0xB17268
class PXS_CONTEXT pxg_context[2]; // size: 0x2C0, address: 0x6E66C0
class clsPfFileMgr * m_tpcSingleton; // size: 0x4, address: 0x703C48
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
class NNS_BINCNK_FILEHEADER {
    // total size: 0x20
public:
    unsigned int Id; // offset 0x0, size 0x4
    signed int OfsNextId; // offset 0x4, size 0x4
    signed int nChunk; // offset 0x8, size 0x4
    signed int OfsData; // offset 0xC, size 0x4
    signed int SizeData; // offset 0x10, size 0x4
    signed int OfsNOF0; // offset 0x14, size 0x4
    signed int SizeNOF0; // offset 0x18, size 0x4
    signed int Version; // offset 0x1C, size 0x4
};
class NNS_BINCNK_NOF0HEADER {
    // total size: 0x10
public:
    unsigned int Id; // offset 0x0, size 0x4
    signed int OfsNextId; // offset 0x4, size 0x4
    signed int nData; // offset 0x8, size 0x4
    signed int Pad; // offset 0xC, size 0x4
};
class __deque_deleter_common : private __deque_buf {
    // total size: 0x18
public:
    class compressed_pair buf_; // offset 0x0, size 0x10
    unsigned int start_; // offset 0x10, size 0x4
    unsigned int size_; // offset 0x14, size 0x4
};
class NNS_NODENAME {
    // total size: 0x8
public:
    signed int iNode; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
};
class PXS_QWDATA {
    // total size: 0x10
public:
    union { // inferred
        __int128 ul128; // offset 0x0, size 0x10
        unsigned long ul64[2]; // offset 0x0, size 0x8
        unsigned int ui32[4]; // offset 0x0, size 0x10
    };
};
class NNS_MATERIAL_COLOR_PXPLUS {
    // total size: 0x40
public:
    class NNS_RGB Diffuse; // offset 0x0, size 0xC
    float Specular; // offset 0xC, size 0x4
    class NNS_RGB Ambient; // offset 0x10, size 0xC
    float Alpha; // offset 0x1C, size 0x4
    class NNS_RGBA Emissive; // offset 0x20, size 0x10
    class NNS_RGBA Clamp; // offset 0x30, size 0x10
};
class NNS_NODE {
    // total size: 0x90
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed short iMatrix; // offset 0x4, size 0x2
    signed short iParent; // offset 0x6, size 0x2
    signed short iChild; // offset 0x8, size 0x2
    signed short iSibling; // offset 0xA, size 0x2
    class NNS_VECTOR Translation; // offset 0xC, size 0xC
    class NNS_ROTATE_A32 Rotation; // offset 0x18, size 0xC
    class NNS_VECTOR Scaling; // offset 0x24, size 0xC
    float InvInitMtx[4][4]; // offset 0x30, size 0x40
    class NNS_VECTOR Center; // offset 0x70, size 0xC
    float Radius; // offset 0x7C, size 0x4
    unsigned int User; // offset 0x80, size 0x4
    union { // inferred
        float SIIKBoneLength; // offset 0x84, size 0x4
        float BoundingBoxX; // offset 0x84, size 0x4
    };
    float BoundingBoxY; // offset 0x88, size 0x4
    float BoundingBoxZ; // offset 0x8C, size 0x4
};
class NNS_TEXFILE {
    // total size: 0x14
public:
    unsigned int fType; // offset 0x0, size 0x4
    char * Filename; // offset 0x4, size 0x4
    unsigned short MinFilter; // offset 0x8, size 0x2
    unsigned short MagFilter; // offset 0xA, size 0x2
    unsigned int GlobalIndex; // offset 0xC, size 0x4
    unsigned int Bank; // offset 0x10, size 0x4
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class NNS_BINCNK_DATAHEADER {
    // total size: 0x10
public:
    unsigned int Id; // offset 0x0, size 0x4
    signed int OfsNextId; // offset 0x4, size 0x4
    signed int OfsMainData; // offset 0x8, size 0x4
    signed int Version; // offset 0xC, size 0x4
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
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
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
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
};
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class NNS_MATERIAL_DESC {
    // total size: 0x20
public:
    unsigned int fMatFlag; // offset 0x0, size 0x4
    unsigned int User; // offset 0x4, size 0x4
    void * pMatColor; // offset 0x8, size 0x4
    class NNS_MATERIAL_LOGIC * pMatLogic; // offset 0xC, size 0x4
    class NNS_MATERIAL_TEXMAP_DESC_EX * pTexDesc; // offset 0x10, size 0x4
    float PolyArea; // offset 0x14, size 0x4
    unsigned int Reserved[2]; // offset 0x18, size 0x8
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
class NNS_MATERIAL_MULTI {
    // total size: 0xE0
public:
    class NNS_MATERIAL_SINGLE Mat[2]; // offset 0x0, size 0xE0
};
class NNS_MATERIAL_LOGIC {
    // total size: 0x10
public:
    unsigned int fGsPrimMode; // offset 0x0, size 0x4
    unsigned int GsTest; // offset 0x4, size 0x4
    unsigned int GsAlpha; // offset 0x8, size 0x4
    unsigned int Reserved; // offset 0xC, size 0x4
};
class clsOOSemaphore {
    // total size: 0x4
};
enum NNE_NODENAME_SORTTYPE {
    NNE_NODENAME_SORTTYPE_INDEX = 0,
    NNE_NODENAME_SORTTYPE_NAME = 1,
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
class NNS_CAMERAPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pCamera; // offset 0x4, size 0x4
};
class NNS_OBJECT {
    // total size: 0x58
public:
    class NNS_VECTOR Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
    signed int nMaterial; // offset 0x10, size 0x4
    class NNS_MATERIALPTR * pMatPtrList; // offset 0x14, size 0x4
    signed int nVtxList; // offset 0x18, size 0x4
    class NNS_VTXLISTPTR * pVtxListPtrList; // offset 0x1C, size 0x4
    signed int nPrimList; // offset 0x20, size 0x4
    class NNS_PRIMLISTPTR * pPrimListPtrList; // offset 0x24, size 0x4
    signed int nNode; // offset 0x28, size 0x4
    signed int MaxNodeDepth; // offset 0x2C, size 0x4
    union { // inferred
        class NNS_NODE * pNodeList; // offset 0x30, size 0x4
        class NNS_NODEEXPTR * pNodeExPtrList; // offset 0x30, size 0x4
    };
    signed int nMtxPal; // offset 0x34, size 0x4
    signed int nSubobj; // offset 0x38, size 0x4
    class NNS_SUBOBJ * pSubobjList; // offset 0x3C, size 0x4
    signed int nTex; // offset 0x40, size 0x4
    unsigned int fType; // offset 0x44, size 0x4
    signed int Version; // offset 0x48, size 0x4
    float BoundingBoxX; // offset 0x4C, size 0x4
    float BoundingBoxY; // offset 0x50, size 0x4
    float BoundingBoxZ; // offset 0x54, size 0x4
};
class NNS_MATERIAL_SINGLE {
    // total size: 0x70
public:
    class NNS_RGB Diffuse; // offset 0x0, size 0xC
    float Specular; // offset 0xC, size 0x4
    class NNS_RGB Ambient; // offset 0x10, size 0xC
    float Alpha; // offset 0x1C, size 0x4
    class NNS_RGBA Emissive; // offset 0x20, size 0x10
    float Power; // offset 0x30, size 0x4
    float ColorClamp; // offset 0x34, size 0x4
    float AlphaClamp; // offset 0x38, size 0x4
    unsigned int GsTest; // offset 0x3C, size 0x4
    unsigned int fMatFlag; // offset 0x40, size 0x4
    unsigned int fGsPrimMode; // offset 0x44, size 0x4
    unsigned int GsAlpha; // offset 0x48, size 0x4
    unsigned int User; // offset 0x4C, size 0x4
    class NNS_MATERIAL_TEXMAP_DESC TexDesc[1]; // offset 0x50, size 0x20
};
class tagMatAlphaTmp {
    // total size: 0x28
public:
    union { // inferred
        class _stcSingle sSingle; // offset 0x0, size 0x14
        class /* @class */ {
            // total size: 0x28
        public:
            class _stcSingle s1; // offset 0x0, size 0x14
            class _stcSingle s2; // offset 0x14, size 0x14
        } sDouble; // offset 0x0, size 0x28
    };
};
class NNS_MATERIAL_COLOR_PXPLUS2 {
    // total size: 0x50
public:
    class NNS_RGB Diffuse; // offset 0x0, size 0xC
    float Specular; // offset 0xC, size 0x4
    class NNS_RGB Ambient; // offset 0x10, size 0xC
    float Alpha; // offset 0x1C, size 0x4
    class NNS_RGBA Emissive; // offset 0x20, size 0x10
    class NNS_RGBA Clamp[2]; // offset 0x30, size 0x20
};
class _NNS_TEXINFO {
    // total size: 0x50
public:
    class NVS_SVROBJ SvrObj; // offset 0x0, size 0x30
    void * pMainMemory; // offset 0x30, size 0x4
    void * pLocalMemory; // offset 0x34, size 0x4
    unsigned int nLocalBytes; // offset 0x38, size 0x4
    unsigned int nDmaTagBytes; // offset 0x3C, size 0x4
    unsigned int GlobalIndex; // offset 0x40, size 0x4
    unsigned int Bank; // offset 0x44, size 0x4
    unsigned short MinFilter; // offset 0x48, size 0x2
    unsigned short MagFilter; // offset 0x4A, size 0x2
    unsigned int Flag; // offset 0x4C, size 0x4
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
class NVS_CLUTINFO {
    // total size: 0x8
public:
    unsigned int localptr; // offset 0x0, size 0x4
    unsigned int psm; // offset 0x4, size 0x4
};
enum enmRet {
    RET___UN_USE = 0,
    RET___INIT = 1,
    RET___EXEC = 2,
    RET___ERROR_DEF = 3,
    RET___ERROR_DIFFERENT_DISC = 4,
    RET___ERROR_OPENED_COVER = 5,
    RET___FINISH = 6,
    RET___CANCEL_EXEC = 7,
    RET___CANCEL_FINISH = 8,
};
class _NNS_TEXLIST {
    // total size: 0x8
public:
    signed int nTex; // offset 0x0, size 0x4
    class _NNS_TEXINFO * pTexInfoList; // offset 0x4, size 0x4
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
class NNS_TEXFILELIST {
    // total size: 0x8
public:
    signed int nTex; // offset 0x0, size 0x4
    class NNS_TEXFILE * pTexFileList; // offset 0x4, size 0x4
};
class sceGsXyoffset {
    // total size: 0x8
public:
    unsigned long OFX : 16; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long OFY : 16; // offset 0x0, size 0x4
    unsigned long pad48 : 16; // offset 0x0, size 0x4
};
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};
class NVS_CLUTCONFIG {
    // total size: 0x20
public:
    unsigned int c4localptr; // offset 0x0, size 0x4
    void * c4hostptr; // offset 0x4, size 0x4
    unsigned int c4num; // offset 0x8, size 0x4
    class NVS_CLUTMANAGE * c4mng; // offset 0xC, size 0x4
    unsigned int c8localptr; // offset 0x10, size 0x4
    void * c8hostptr; // offset 0x14, size 0x4
    unsigned int c8num; // offset 0x18, size 0x4
    class NVS_CLUTMANAGE * c8mng; // offset 0x1C, size 0x4
};
class _UUID {
    // total size: 0x10
public:
    unsigned int Data1; // offset 0x0, size 0x4
    unsigned short Data2; // offset 0x4, size 0x2
    unsigned short Data3; // offset 0x6, size 0x2
    unsigned char Data4[8]; // offset 0x8, size 0x8
};
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
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
class NNS_MORPHTARGETLIST {
    // total size: 0x8
public:
    signed int nMorphTarget; // offset 0x0, size 0x4
    class NNS_MORPHTARGETPTR * pMorphTargetPtrList; // offset 0x4, size 0x4
};
class NVS_CLUTMANAGE {
    // total size: 0x100
public:
    unsigned short format; // offset 0x0, size 0x2
    unsigned short entrycount; // offset 0x2, size 0x2
    unsigned short psm; // offset 0x4, size 0x2
    unsigned short group; // offset 0x6, size 0x2
    void * hostbuf; // offset 0x8, size 0x4
    unsigned int localptr; // offset 0xC, size 0x4
    unsigned int enable; // offset 0x10, size 0x4
    unsigned int pktenable; // offset 0x14, size 0x4
    unsigned int reserved[10]; // offset 0x18, size 0x28
    unsigned int dmabuf[48]; // offset 0x40, size 0xC0
};
class NNS_SUBOBJ {
    // total size: 0x14
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nMeshset; // offset 0x4, size 0x4
    class NNS_MESHSET * pMeshsetList; // offset 0x8, size 0x4
    signed int nTex; // offset 0xC, size 0x4
    signed int * pTexNumList; // offset 0x10, size 0x4
};
enum execAttr {
    ATTR_DBL_BUF = 1,
    ATTR_MULTI_BUF = 2,
    ATTR_MULTI_RING_BUF = 3,
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
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class clsOORingBuffer : public clsOOBufferBase {
    // total size: 0x3C
public:
    signed int m_s32WriteAlign; // offset 0x2C, size 0x4
    unsigned char * m_pu8CopyBuf; // offset 0x30, size 0x4
    signed int m_s32CopyBufSize; // offset 0x34, size 0x4
    signed int m_s32LockOffset; // offset 0x38, size 0x4
};
class clsOOBuffer : public clsOOBufferBase {
    // total size: 0x2C
};
class NNS_MESHSET {
    // total size: 0x24
public:
    class NNS_VECTOR Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
    signed int iNode; // offset 0x10, size 0x4
    signed int iMatrix; // offset 0x14, size 0x4
    signed int iMaterial; // offset 0x18, size 0x4
    signed int iVtxList; // offset 0x1C, size 0x4
    signed int iPrimList; // offset 0x20, size 0x4
};
class NNS_MORPHTARGETPTR {
    // total size: 0x8
public:
    signed int nVtxList; // offset 0x0, size 0x4
    class NNS_VTXLISTPTR * pMorphTarget; // offset 0x4, size 0x4
};
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
};
class clsOOFileMgr {
    // total size: 0xF8
public:
    class clsOOFileQueue m_cQueue_Debug; // offset 0x4, size 0x64
    class deque m_cExecDeque; // offset 0x68, size 0x18
    class deque m_cRequestDeque; // offset 0x80, size 0x18
    unsigned char m_bEnableRenderNowLoding; // offset 0x98, size 0x1
    class clsOOCompression m_cCompression; // offset 0x9C, size 0x4C
    class clsOOThread * m_pcReadThread; // offset 0xE8, size 0x4
    class clsOOFileQueue * m_pcCurrentReadQueue; // offset 0xEC, size 0x4
    unsigned char m_bReadThreadDone; // offset 0xF0, size 0x1
    unsigned char m_bReadCancel; // offset 0xF1, size 0x1
    unsigned char * m_pu8ReadWorkBuf; // offset 0xF4, size 0x4
};
class clsOOFileQueue {
    // total size: 0x64
public:
    class _adx_fs * m_psADXF; // offset 0x4, size 0x4
    char m_ac8Name[64]; // offset 0x8, size 0x40
    unsigned char * m_pu8Buffer; // offset 0x48, size 0x4
    unsigned char * * m_ppu8FinishAddr; // offset 0x4C, size 0x4
    float m_f32Progress; // offset 0x50, size 0x4
    unsigned int m_eRequestFlag; // offset 0x54, size 0x4
    enum enmRet * m_peRet; // offset 0x58, size 0x4
    signed short m_s16Sector; // offset 0x5C, size 0x2
    signed short m_s16ReadedSector; // offset 0x5E, size 0x2
    unsigned char m_u8Mode; // offset 0x60, size 0x1
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
class clsSingleton {
    // total size: 0x4
};
class NNS_LIGHTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pLight; // offset 0x4, size 0x4
};
class PXS_CONTEXTBUFFER {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class PXS_GSREG_AD reg[1]; // offset 0x10, size 0x10
};
class allocator {
    // total size: 0x1
};
class _adx_fs {
    // total size: 0x34
public:
    signed char used; // offset 0x0, size 0x1
    signed char stat; // offset 0x1, size 0x1
    signed char sjflag; // offset 0x2, size 0x1
    signed char stopnw_flg; // offset 0x3, size 0x1
    void * stm; // offset 0x4, size 0x4
    class SJ_OBJ * sj; // offset 0x8, size 0x4
    signed int fnsct; // offset 0xC, size 0x4
    signed int skpos; // offset 0x10, size 0x4
    signed int rdstpos; // offset 0x14, size 0x4
    signed int rqsct; // offset 0x18, size 0x4
    signed int rdsct; // offset 0x1C, size 0x4
    signed char * buf; // offset 0x20, size 0x4
    signed int bsize; // offset 0x24, size 0x4
    signed int rqrdsct; // offset 0x28, size 0x4
    signed int ofst; // offset 0x2C, size 0x4
    void * dir; // offset 0x30, size 0x4
};
class NVS_SVRHEADER {
    // total size: 0x8
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short miplevel; // offset 0x2, size 0x2
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
};
class __cdeque_imp : public __cdeque_deleter, private compile_assert {
    // total size: 0x10
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
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
class clsOOMainHeap : public clsOOHeapFragment {
    // total size: 0x34
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
class __cdeque_deleter : public __cdeque_deleter_common {
    // total size: 0x10
};
class clsOOThread {
    // total size: 0x28
public:
    void * (* m_pfEntry)(class _EntryArg *); // offset 0x4, size 0x4
    void * m_pvArg; // offset 0x8, size 0x4
    void * m_pvRet; // offset 0xC, size 0x4
    unsigned char * m_pu8StackAddr; // offset 0x10, size 0x4
    signed int m_s32StackSize; // offset 0x14, size 0x4
    signed int m_s32Priority; // offset 0x18, size 0x4
    unsigned char m_bIsCreate; // offset 0x1C, size 0x1
    class clsOOSemaphore * m_pcSema; // offset 0x20, size 0x4
    unsigned char m_bIsRun; // offset 0x24, size 0x1
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
class __cdeque_deleter_common {
    // total size: 0x10
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    unsigned int start_; // offset 0x8, size 0x4
    unsigned int * data_; // offset 0xC, size 0x4
};
class NNS_NODENAMELIST {
    // total size: 0xC
public:
    enum NNE_NODENAME_SORTTYPE SortType; // offset 0x0, size 0x4
    signed int nNode; // offset 0x4, size 0x4
    class NNS_NODENAME * pNodeNameList; // offset 0x8, size 0x4
};
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
};
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
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
class NNS_MATERIAL_TEXMAP_DESC_EX {
    // total size: 0x40
public:
    unsigned int fTexMapType; // offset 0x0, size 0x4
    signed int iTexIdx; // offset 0x4, size 0x4
    class NNS_TEXCOORD UVOffset; // offset 0x8, size 0x8
    float Blend; // offset 0x10, size 0x4
    class _NNS_TEXINFO * pTexInfo; // offset 0x14, size 0x4
    unsigned long GsTex1; // offset 0x18, size 0x4
    unsigned long GsTex0; // offset 0x20, size 0x4
    unsigned long GsClamp; // offset 0x28, size 0x4
    unsigned long GsTexa; // offset 0x30, size 0x4
    float UVArea; // offset 0x38, size 0x4
    unsigned int Reserved; // offset 0x3C, size 0x4
};
class NVS_SVPHEADER {
    // total size: 0x8
public:
    unsigned short mode; // offset 0x0, size 0x2
    signed short bank; // offset 0x2, size 0x2
    signed short entryoffset; // offset 0x4, size 0x2
    signed short entrycount; // offset 0x6, size 0x2
};
class _NNS_NODEEX {
    // total size: 0x90
public:
    unsigned int fNodeExType; // offset 0x0, size 0x4
    unsigned int fNodeType; // offset 0x4, size 0x4
    signed short iMatrix; // offset 0x8, size 0x2
    signed short iNode; // offset 0xA, size 0x2
    class _NNS_NODEEX * pParent; // offset 0xC, size 0x4
    class _NNS_NODEEX * pChild; // offset 0x10, size 0x4
    class _NNS_NODEEX * pSibling; // offset 0x14, size 0x4
    class NNS_VECTOR Translation; // offset 0x18, size 0xC
    class NNS_ROTATE_A32 Rotation; // offset 0x24, size 0xC
    class NNS_VECTOR Scaling; // offset 0x30, size 0xC
    unsigned int User; // offset 0x3C, size 0x4
    float InvInitMtx[4][4]; // offset 0x40, size 0x40
    unsigned int reserved; // offset 0x80, size 0x4
};
class NNS_MATERIAL_TEXMAP_DESC {
    // total size: 0x20
public:
    unsigned int fTexMapType; // offset 0x0, size 0x4
    unsigned short fTexWrapMode; // offset 0x4, size 0x2
    unsigned short iTexIdx; // offset 0x6, size 0x2
    class NNS_TEXCOORD Offset; // offset 0x8, size 0x8
    unsigned int GsTexA; // offset 0x10, size 0x4
    unsigned short GsTexLODL; // offset 0x14, size 0x2
    signed short GsTexLODK; // offset 0x16, size 0x2
    unsigned short GsClampMINU; // offset 0x18, size 0x2
    unsigned short GsClampMAXU; // offset 0x1A, size 0x2
    unsigned short GsClampMINV; // offset 0x1C, size 0x2
    unsigned short GsClampMAXV; // offset 0x1E, size 0x2
};
class clsOOBufferBase {
    // total size: 0x2C
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x4, size 0x4
    unsigned char * m_pu8Buf; // offset 0x8, size 0x4
    unsigned char * m_pu8BufEndPos; // offset 0xC, size 0x4
    unsigned char * m_pu8RP; // offset 0x10, size 0x4
    unsigned char * m_pu8WP; // offset 0x14, size 0x4
    signed int m_s32BufSize; // offset 0x18, size 0x4
    signed int m_s32Align; // offset 0x1C, size 0x4
    signed int m_s32ReadDataSize; // offset 0x20, size 0x4
    signed int m_s32WriteDataSize; // offset 0x24, size 0x4
    unsigned int m_u32IsWriteClosed; // offset 0x28, size 0x4
};
enum NVE_CLUTGROUP {
    NVE_CLUTGROUP_CLUT4 = 0,
    NVE_CLUTGROUP_CLUT8 = 1,
};
class /* @class */ {
    // total size: 0x28
public:
    class _stcSingle s1; // offset 0x0, size 0x14
    class _stcSingle s2; // offset 0x14, size 0x14
};
class _EntryArg {
    // total size: 0x8
public:
    class clsOOThread * pcExecThread; // offset 0x0, size 0x4
    void * pvArg; // offset 0x4, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x10
};
class _stcSingle {
    // total size: 0x14
public:
    float f32Alpha; // offset 0x0, size 0x4
    float f32AlphaClamp; // offset 0x4, size 0x4
    unsigned int u32GsAlpha; // offset 0x8, size 0x4
    unsigned int u32GsPreMode; // offset 0xC, size 0x4
    unsigned int u32GsTest; // offset 0x10, size 0x4
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
class clsOOCompression {
    // total size: 0x4C
public:
    class clsOOHeapFragment & m_rcHeap; // offset 0x4, size 0x4
    class clsOOVector m_vecCompObj; // offset 0x8, size 0x10
    class clsOOSemaphore * m_pcSema; // offset 0x18, size 0x4
    class clsOOThread * m_pcThread; // offset 0x1C, size 0x4
    signed int m_vs32ExecRes; // offset 0x20, size 0x4
    unsigned int m_vu32IsAbort; // offset 0x24, size 0x4
    unsigned char m_vbIsRegistering; // offset 0x28, size 0x1
    unsigned char m_vbIsDone; // offset 0x29, size 0x1
    enum execAttr m_eExecAttribute; // offset 0x2C, size 0x4
    unsigned char * m_u8StackAddr; // offset 0x30, size 0x4
    unsigned int m_u32WorkBufSize; // offset 0x34, size 0x4
    unsigned char m_bIsCompression; // offset 0x38, size 0x1
    class clsOOBuffer * m_pcSrcNormalBuf; // offset 0x3C, size 0x4
    class clsOORingBuffer * m_pcSrcRingBuf; // offset 0x40, size 0x4
    class clsOOBuffer * m_pcDstNormalBuf; // offset 0x44, size 0x4
    class clsOORingBuffer * m_pcDstRingBuf; // offset 0x48, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x10
public:
    class cdeque second_; // offset 0x0, size 0x10
};
class __deque_buf {
    // total size: 0x1
};
class NNS_RGB {
    // total size: 0xC
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
};
class clsOOVector : public vector {
    // total size: 0x10
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
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
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
class vector : private __vector_imp {
    // total size: 0x10
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
class cdeque : private __cdeque_imp {
    // total size: 0x10
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0x10
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class deque : private __deque_imp {
    // total size: 0x18
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class sceGsFba {
    // total size: 0x8
public:
    unsigned long FBA : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
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
class __deque_imp : public __deque_deleter {
    // total size: 0x18
};
class clsPfFileMgr : public clsSingleton, public clsOOFileMgr {
    // total size: 0xFC
};
class __vector_pod {
    // total size: 0x10
public:
    class compressed_pair capacity_; // offset 0x0, size 0x8
    unsigned int size_; // offset 0x8, size 0x4
    unsigned int * data_; // offset 0xC, size 0x4
};
class __deque_deleter : public __deque_deleter_common {
    // total size: 0x18
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
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

// Range: 0x1DE380 -> 0x1DE3AC
void resetDrawModelAlpha() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE380 -> 0x1DE3AC
    }
}


// Range: 0x1DE3B0 -> 0x1DE3DC
unsigned int setDrawModelAlpha(float f32Alpha /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE3B0 -> 0x1DE3DC
    }
}


// Range: 0x1DE3E0 -> 0x1DE534
void reversMaterialAlpha(class NNS_OBJECT * psObj /* r2 */, class tagMatAlphaTmp * psSrcOldAlpha /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE3E0 -> 0x1DE534
        class NNS_MATERIAL_SINGLE * psMaterial; // r2
        class NNS_MATERIAL_MULTI * psMaterial; // r2
        class NNS_MATERIAL_DESC * psMaterial; // r2
        class NNS_MATERIAL_LOGIC * psLogic; // r2
        class NNS_MATERIAL_COLOR_PXPLUS2 * psColor; // r2
        class NNS_MATERIAL_COLOR_PXPLUS * psColor; // r2
    }
}


// Range: 0x1DE540 -> 0x1DE790
void setMaterialAlpha(class NNS_OBJECT * psObj /* r2 */, class tagMatAlphaTmp * psDstOldAlpha /* r2 */, float f32Alpha /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE540 -> 0x1DE790
        unsigned int u32MatNum; // r2
        unsigned int u32MatNo; // r15
        class NNS_MATERIALPTR * psMatList; // r2
        class NNS_MATERIAL_SINGLE * psMaterial; // r24
        class NNS_MATERIAL_MULTI * psMaterial; // r24
        class NNS_MATERIAL_DESC * psMaterial; // r2
        class NNS_MATERIAL_LOGIC * psLogic; // r14
        class NNS_MATERIAL_COLOR_PXPLUS2 * psColor; // r2
        class NNS_MATERIAL_COLOR_PXPLUS * psColor; // r2
    }
}


// Range: 0x1DE790 -> 0x1DE9F0
void setMaterialAlphaN(class NNS_OBJECT * psObj /* r2 */, class tagMatAlphaTmp * psDstOldAlpha /* r2 */, float f32Alpha /* r29 */, unsigned int u32MatIdx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE790 -> 0x1DE9F0
        class NNS_MATERIALPTR * psMatList; // r2
        class NNS_MATERIAL_SINGLE * psMaterial; // r6
        class NNS_MATERIAL_MULTI * psMaterial; // r7
        class NNS_MATERIAL_DESC * psMaterial; // r2
        class NNS_MATERIAL_LOGIC * psLogic; // r3
        class NNS_MATERIAL_COLOR_PXPLUS2 * psColor; // r2
        class NNS_MATERIAL_COLOR_PXPLUS * psColor; // r2
    }
}


// Range: 0x1DE9F0 -> 0x1DEC5C
signed int SfdMakeImagePacket(void * pvDst /* r2 */, unsigned int u32BufSize /* r2 */, unsigned int u32Width /* r2 */, unsigned int u32Height /* r2 */, unsigned int u32Psm /* r2 */, void * pvImage /* r2 */, void * pvLocalMem /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE9F0 -> 0x1DEC5C
        class PXS_QWDATA * p; // r15
        signed int dbp; // r2
        signed int dbw; // r2
        signed int dpsm; // r2
        signed int mbx; // r2
        signed int i; // r14
        signed int blocksize; // r5
        signed int blockbyte; // r13
    }
}


// Range: 0x1DEC60 -> 0x1DEC7C
unsigned int SfdCalcImagePacketSize(unsigned int u32Width /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DEC60 -> 0x1DEC7C
    }
}


// Range: 0x1DEC80 -> 0x1DECE4
signed int TexRelease(class _NNS_TEXLIST * psTexListIn /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DEC80 -> 0x1DECE4
        class _NNS_TEXINFO * pTexInfo; // r17
        signed int s32i; // r16
    }
}


// Range: 0x1DECF0 -> 0x1DED78
signed int TexResidence_PS2(class _NNS_TEXLIST * psTexListIn /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DECF0 -> 0x1DED78
        class _NNS_TEXINFO * pTexInfo; // r17
        signed int s32i; // r16
    }
}


// Range: 0x1DED80 -> 0x1DEF00
signed int TexLoadFileOne(class _NNS_TEXINFO * psTexInfoIn /* r18 */, class NNS_TEXFILE * psTexFileIn /* r17 */, void * pvBufIn /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DED80 -> 0x1DEF00
        class NVS_CLUTINFO clutinfo; // r29+0x48
    }
}


// Range: 0x1DEF00 -> 0x1DEF44
void PXInitCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DEF00 -> 0x1DEF44
    }
}


// Range: 0x1DEF50 -> 0x1DEF7C
unsigned int BinGetBinaryDataSize(void * pvBufIn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DEF50 -> 0x1DEF7C
        class NNS_BINCNK_FILEHEADER * pHeader; // r2
    }
}


// Range: 0x1DEF80 -> 0x1DF1AC
void BinSetUpMorphTargetListCopy(class NNS_MORPHTARGETLIST * * ppsMorphTargetListIn /* r17 */, void * pvBufDstIn /* r16 */, void * pvBufSrcIn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DEF80 -> 0x1DF1AC
        signed int i; // r8
        signed int nCnk; // r2
        unsigned char * pTopBuf; // r2
        class NNS_BINCNK_FILEHEADER * pHeader; // r2
        class NNS_BINCNK_DATAHEADER * pData; // r2
        class NNS_BINCNK_NOF0HEADER * pNOF0; // r2
    }
}


// Range: 0x1DF1B0 -> 0x1DF3DC
void BinSetUpMorphMotionCopy(class NNS_MOTION * * ppsMotionIn /* r17 */, void * pvBufDstIn /* r16 */, void * pvBufSrcIn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DF1B0 -> 0x1DF3DC
        signed int i; // r8
        signed int nCnk; // r2
        unsigned char * pTopBuf; // r2
        class NNS_BINCNK_FILEHEADER * pHeader; // r2
        class NNS_BINCNK_DATAHEADER * pData; // r2
        class NNS_BINCNK_NOF0HEADER * pNOF0; // r2
    }
}


// Range: 0x1DF3E0 -> 0x1DF634
void BinSetUpMotionCopy(class NNS_MOTION * * ppsMotionIn /* r17 */, void * pvBufDstIn /* r16 */, void * pvBufSrcIn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DF3E0 -> 0x1DF634
        signed int i; // r10
        signed int nCnk; // r2
        unsigned char * pTopBuf; // r2
        class NNS_BINCNK_FILEHEADER * pHeader; // r2
        class NNS_BINCNK_DATAHEADER * pData; // r2
        class NNS_BINCNK_NOF0HEADER * pNOF0; // r2
    }
}


// Range: 0x1DF640 -> 0x1DF8C8
void BinSetUpObjectCopy(class NNS_OBJECT * * ppsObjectIn /* r19 */, class NNS_TEXFILELIST * * ppsTexFileListIn /* r18 */, void * pvBufDstIn /* r17 */, void * pvBufSrcIn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DF640 -> 0x1DF8C8
        signed int i; // r9
        signed int nCnk; // r2
        unsigned char * pTopBuf; // r2
        class NNS_BINCNK_FILEHEADER * pHeader; // r2
        class NNS_BINCNK_DATAHEADER * pData; // r2
        class NNS_BINCNK_NOF0HEADER * pNOF0; // r2
    }
}


// Range: 0x1DF8D0 -> 0x1DFB10
void BinSetUpCameraMotion(class NNS_CAMERAPTR * * ppsCameraPtrIn /* r2 */, class NNS_MOTION * * ppsMotionIn /* r2 */, void * pvBufIn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DF8D0 -> 0x1DFB10
        signed int i; // r13
        signed int nCnk; // r2
        unsigned char * pTopBuf; // r2
        class NNS_BINCNK_FILEHEADER * pHeader; // r2
        class NNS_BINCNK_DATAHEADER * pData; // r12
        class NNS_BINCNK_NOF0HEADER * pNOF0; // r2
    }
}


// Range: 0x1DFB10 -> 0x1DFD00
void BinSetUpMorphTargetList(class NNS_MORPHTARGETLIST * * ppsMorphTargetListIn /* r2 */, void * pvBufIn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DFB10 -> 0x1DFD00
        signed int i; // r10
        signed int nCnk; // r2
        unsigned char * pTopBuf; // r2
        class NNS_BINCNK_FILEHEADER * pHeader; // r2
        class NNS_BINCNK_DATAHEADER * pData; // r11
        class NNS_BINCNK_NOF0HEADER * pNOF0; // r2
    }
}


// Range: 0x1DFD00 -> 0x1DFEF0
void BinSetUpMorphMotion(class NNS_MOTION * * ppsMotionIn /* r2 */, void * pvBufIn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DFD00 -> 0x1DFEF0
        signed int i; // r10
        signed int nCnk; // r2
        unsigned char * pTopBuf; // r2
        class NNS_BINCNK_FILEHEADER * pHeader; // r2
        class NNS_BINCNK_DATAHEADER * pData; // r11
        class NNS_BINCNK_NOF0HEADER * pNOF0; // r2
    }
}


// Range: 0x1DFEF0 -> 0x1E0130
void BinSetUpMotion(class NNS_MOTION * * ppsMotionIn /* r2 */, void * pvBufIn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DFEF0 -> 0x1E0130
        class NNS_BINCNK_FILEHEADER * pHeader; // r2
        class NNS_BINCNK_DATAHEADER * pData; // r11
        class NNS_BINCNK_NOF0HEADER * pNOF0; // r2
        signed int i; // r13
        signed int nCnk; // r2
        unsigned char * pTopBuf; // r2
    }
}


// Range: 0x1E0130 -> 0x1E0370
void BinSetUpObject(class NNS_OBJECT * * ppsObjectIn /* r2 */, class NNS_TEXFILELIST * * ppsTexFileListIn /* r2 */, void * pvBufIn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E0130 -> 0x1E0370
        signed int i; // r13
        signed int nCnk; // r2
        unsigned char * pTopBuf; // r2
        class NNS_BINCNK_FILEHEADER * pHeader; // r2
        class NNS_BINCNK_DATAHEADER * pData; // r12
        class NNS_BINCNK_NOF0HEADER * pNOF0; // r2
    }
}


// Range: 0x1E0370 -> 0x1E04C8
void BinResolvePointer(class NNS_BINCNK_DATAHEADER * psDataHeadIn /* r2 */, class NNS_BINCNK_NOF0HEADER * psNof0HeadIn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E0370 -> 0x1E04C8
        signed int i; // r8
        signed int nData; // r2
        unsigned int * pvDst; // r2
        unsigned int * pSrc; // r7
        unsigned int Offset; // r2
        unsigned int TopAddr; // r2
    }
}


// Range: 0x1E04D0 -> 0x1E0660
void MemCopyDma(void * dst /* r2 */, void * src /* r2 */, unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E04D0 -> 0x1E0660
        unsigned int d; // r2
        unsigned int s; // r2
        unsigned int qwc; // r3
    }
}


