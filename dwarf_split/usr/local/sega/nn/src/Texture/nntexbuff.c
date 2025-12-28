/*
    Compile unit: C:\usr\local\sega\nn\src\Texture\nntexbuff.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int nngTexturePath3TransferMode; // size: 0x4, address: 0x6D1C48
class NNS_TEXBUFF_PS2 nngTexBuff; // size: 0x34, address: 0x6DF000
class NNS_PUSHBUFFER nngTexPath3PBWork; // size: 0x48, address: 0x6DF040
class NNS_TEXPATH3DMA_PS2 nngTexPath3Dma; // size: 0xE, address: 0x6DF088
signed int (* nngPutTextureFunc)(class _NNS_TEXINFO * *, signed int); // size: 0x4, address: 0x6D1C4C
static signed int nnsGifDmacHandlerID; // size: 0x4, address: 0x6D1AA0
static signed int nnsVif1IntcHandlerID; // size: 0x4, address: 0x6D1AA4
static signed int nns_texbuff_prev_gi; // size: 0x4, address: 0x6D1AA8
static class NNS_TEXBUFF_CHANGETEXBUFFSTAT_PS2 nnsChangeTexBuffStat; // size: 0xC, address: 0x6DF098
class NNS_DRAW_PARAM_PS2 nngDrawParam; // size: 0x14, address: 0x6DEE70
class PXS_CONTEXT pxg_context[2]; // size: 0x2C0, address: 0x6E66C0
signed int nnPutTextureBufferPS2(class _NNS_TEXINFO * *, signed int); // size: 0x0, address: 0x13FF70
signed int nnTextureBufferPath3IntcFuncVIF1(signed int); // size: 0x0, address: 0x13FDD0
signed int nnTextureBufferPath3DmacFuncGIF(signed int); // size: 0x0, address: 0x13FC80
class PXS_DMATAG {
    // total size: 0x10
public:
    unsigned short qwc; // offset 0x0, size 0x2
    unsigned short id; // offset 0x2, size 0x2
    void * addr; // offset 0x4, size 0x4
    unsigned int vifnop; // offset 0x8, size 0x4
    unsigned int directhl; // offset 0xC, size 0x4
};
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
class NNS_PUSHBUFFER {
    // total size: 0x48
public:
    unsigned int flag; // offset 0x0, size 0x4
    unsigned int dbIndex; // offset 0x4, size 0x4
    unsigned int maxData; // offset 0x8, size 0x4
    unsigned int workSize; // offset 0xC, size 0x4
    unsigned int peakTags; // offset 0x10, size 0x4
    unsigned int peakBytes; // offset 0x14, size 0x4
    class NNS_PUSHBUFFER1 db[2]; // offset 0x18, size 0x30
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
class NNS_PUSHBUFFER1 {
    // total size: 0x18
public:
    __int128 * tagTop; // offset 0x0, size 0x4
    __int128 * tagPtr; // offset 0x4, size 0x4
    unsigned int bufSize; // offset 0x8, size 0x4
    unsigned int maxTags; // offset 0xC, size 0x4
    unsigned int numTags; // offset 0x10, size 0x4
    unsigned int numBytes; // offset 0x14, size 0x4
};
class sceGsFba {
    // total size: 0x8
public:
    unsigned long FBA : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class NNS_DRAW_PARAM_PS2 {
    // total size: 0x14
public:
    unsigned int usealpha; // offset 0x0, size 0x4
    unsigned int shader; // offset 0x4, size 0x4
    unsigned int shadermaterial; // offset 0x8, size 0x4
    unsigned int texmark; // offset 0xC, size 0x4
    enum NNE_BOOL enablefastshadersub; // offset 0x10, size 0x4
};
class NNS_TEXPATH3DMA_PS2 {
    // total size: 0xE
public:
    unsigned short nBlock; // offset 0x0, size 0x2
    unsigned short iCurrBlock; // offset 0x2, size 0x2
    unsigned short iTail; // offset 0x4, size 0x2
    unsigned short iDraw; // offset 0x6, size 0x2
    signed short iStall; // offset 0x8, size 0x2
    unsigned short fGIFStall; // offset 0xA, size 0x2
    unsigned short fVIFStall; // offset 0xC, size 0x2
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
class sceGsPrmodecont {
    // total size: 0x8
public:
    unsigned long AC : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class NVS_CLUTINFO {
    // total size: 0x8
public:
    unsigned int localptr; // offset 0x0, size 0x4
    unsigned int psm; // offset 0x4, size 0x4
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
class sceGsXyoffset {
    // total size: 0x8
public:
    unsigned long OFX : 16; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long OFY : 16; // offset 0x0, size 0x4
    unsigned long pad48 : 16; // offset 0x0, size 0x4
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
class sceGsTexclut {
    // total size: 0x8
public:
    unsigned long CBW : 6; // offset 0x0, size 0x4
    unsigned long COU : 6; // offset 0x0, size 0x4
    unsigned long COV : 10; // offset 0x0, size 0x4
    unsigned long pad22 : 42; // offset 0x0, size 0x4
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
class NNS_TEXBUFF_PS2 {
    // total size: 0x34
public:
    unsigned int Flag; // offset 0x0, size 0x4
    unsigned int StartAddr[3]; // offset 0x4, size 0xC
    unsigned int EndAddr[3]; // offset 0x10, size 0xC
    unsigned int CurrAddr; // offset 0x1C, size 0x4
    unsigned int BlockSize; // offset 0x20, size 0x4
    unsigned char nBlock; // offset 0x24, size 0x1
    unsigned char iCurrBlock; // offset 0x25, size 0x1
    unsigned short iCurrBlockTotal; // offset 0x26, size 0x2
    unsigned short iCurr; // offset 0x28, size 0x2
    unsigned short fReqSync; // offset 0x2A, size 0x2
    unsigned int TransferNum; // offset 0x2C, size 0x4
    unsigned int TransferSize; // offset 0x30, size 0x4
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
class sceGsFogcol {
    // total size: 0x8
public:
    unsigned long FCR : 8; // offset 0x0, size 0x4
    unsigned long FCG : 8; // offset 0x0, size 0x4
    unsigned long FCB : 8; // offset 0x0, size 0x4
    unsigned long pad24 : 40; // offset 0x0, size 0x4
};
class sceGsTexflush {
    // total size: 0x8
public:
    unsigned long pad00; // offset 0x0, size 0x4
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
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
class NVS_SVRHEADER {
    // total size: 0x8
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short miplevel; // offset 0x2, size 0x2
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
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
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
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
class NNS_TEXBUFF_CHANGETEXBUFFSTAT_PS2 {
    // total size: 0xC
public:
    enum NNE_BOOL bReserved; // offset 0x0, size 0x4
    void * localbuf; // offset 0x4, size 0x4
    unsigned int localsize; // offset 0x8, size 0x4
};
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
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
class sceGsDthe {
    // total size: 0x8
public:
    unsigned long DTHE : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};

// Range: 0x13FC80 -> 0x13FDD0
signed int nnTextureBufferPath3DmacFuncGIF() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13FC80 -> 0x13FDD0
        unsigned int d2_chcr; // r2
    }
}


// Range: 0x13FDD0 -> 0x13FE98
signed int nnTextureBufferPath3IntcFuncVIF1() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13FDD0 -> 0x13FE98
        unsigned int vif1stat; // r2
        unsigned int vif1mark; // r2
    }
}


// Range: 0x13FEA0 -> 0x13FF64
void nnPutTextureBufferCorePS2(class _NNS_TEXINFO * pTexInfo /* r18 */, void * localbuf /* r17 */, void * dmatagbuf /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13FEA0 -> 0x13FF64
        void * p; // r29+0x4C
        class NVS_CLUTINFO info; // r29+0x40
    }
}


// Range: 0x13FF70 -> 0x1402A8
signed int nnPutTextureBufferPS2(class _NNS_TEXINFO * * ppTexInfo /* r2 */, signed int nTex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13FF70 -> 0x1402A8
        signed int i; // r8
        unsigned char * dmatag; // r2
        class _NNS_TEXINFO * pTexInfo; // r2
        class _NNS_TEXINFO * pTexInfoD2[2]; // r29+0x78
        signed int fInt; // r17
        class NNS_PUSHBUFFER * pb; // r2
        class NNS_PUSHBUFFER1 * db; // r2
        unsigned int nLocalBytes; // r7
        unsigned int nReqTransferTex; // r16
        unsigned int * p; // r2
        unsigned short texmark; // r16
    }
}


// Range: 0x1402B0 -> 0x14033C
void * nnInitTexturePushBufferPS2(void * pushbuf /* r18 */, unsigned int pushsize /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1402B0 -> 0x14033C
        class NNS_PUSHBUFFER * pb; // r2
        class NNS_PUSHBUFFER1 * db; // r2
        unsigned char * p; // r2
    }
}


// Range: 0x140340 -> 0x140560
void * nnInitTextureBufferPS2(void * pushbuf /* r2 */, unsigned int pushsize /* r2 */, void * localbuf /* r18 */, unsigned int localsize /* r17 */, signed int blocknum /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x140340 -> 0x140560
        signed int i; // r9
        unsigned int StartAddr; // r2
    }
}


// Range: 0x140560 -> 0x140620
void nnExitTextureBufferPS2() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x140560 -> 0x140620
    }
}


// Range: 0x140620 -> 0x1407C8
void nnExecTextureBufferPS2() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x140620 -> 0x1407C8
        class NNS_PUSHBUFFER * pb; // r17
        class NNS_PUSHBUFFER1 * db; // r16
        class PXS_DMATAG * dt; // r2
    }
}


// Range: 0x1407D0 -> 0x1408A8
static void nnChangeTextureBufferCorePS2(void * localbuf /* r17 */, unsigned int localsize /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1407D0 -> 0x1408A8
        signed int i; // r9
        unsigned int StartAddr; // r2
    }
}


// Range: 0x1408B0 -> 0x1409CC
signed int nnChangeTextureBufferPS2(void * localbuf /* r17 */, unsigned int localsize /* r16 */, enum NNE_BOOL immediate /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1408B0 -> 0x1409CC
    }
}


// Range: 0x1409D0 -> 0x1409E8
void nnRequestTextureBufferSyncPS2() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1409D0 -> 0x1409E8
    }
}


