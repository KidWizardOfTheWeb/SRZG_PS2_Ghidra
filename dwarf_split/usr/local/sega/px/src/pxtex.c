/*
    Compile unit: C:\usr\local\sega\px\src\pxtex.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class PXS_CONTEXT pxg_context[2]; // size: 0x2C0, address: 0x6E66C0
static class PXS_TEXSIZEINFO pxg_sizeInfo[59]; // size: 0x162, address: 0x5FAFB0
class PXS_TEXREG2 {
    // total size: 0x50
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class sceGsTex1 tex1; // offset 0x10, size 0x8
    unsigned long tex1addr; // offset 0x18, size 0x4
    class sceGsTex0 tex0; // offset 0x20, size 0x8
    unsigned long tex0addr; // offset 0x28, size 0x4
    class sceGsMiptbp1 miptbp1; // offset 0x30, size 0x8
    unsigned long miptbp1addr; // offset 0x38, size 0x4
    class sceGsMiptbp2 miptbp2; // offset 0x40, size 0x8
    unsigned long miptbp2addr; // offset 0x48, size 0x4
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
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
enum PXE_CTX {
    PXE_CTX1 = 0,
    PXE_CTX2 = 1,
};
class PXS_TEXOBJ2 {
    // total size: 0x50
public:
    class PXS_TEXREG2 texReg; // offset 0x0, size 0x50
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
class sceGsDthe {
    // total size: 0x8
public:
    unsigned long DTHE : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class PXS_TEXSIZEINFO {
    // total size: 0x6
public:
    unsigned char dbit; // offset 0x0, size 0x1
    unsigned char shift; // offset 0x1, size 0x1
    unsigned short wmin; // offset 0x2, size 0x2
    unsigned short hmin; // offset 0x4, size 0x2
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
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
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

// Range: 0x15C820 -> 0x15C8F4
void PXTexBlockSizeToWidthHeight(unsigned int bit /* r2 */, unsigned int inw /* r2 */, unsigned int inh /* r2 */, unsigned int * outw /* r2 */, unsigned int * outh /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C820 -> 0x15C8F4
        unsigned int blockw; // r10
        unsigned int blockh; // r9
    }
}


// Range: 0x15C900 -> 0x15C9FC
unsigned int PXTexWidthHeightToLevel(unsigned int wh /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C900 -> 0x15C9FC
    }
}


// Range: 0x15CA00 -> 0x15CB48
unsigned int PXCalcTexLocalMemorySize(unsigned int width /* r21 */, unsigned int height /* r20 */, unsigned int bit /* r19 */, unsigned int miplevel /* r2 */, unsigned int * tb /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15CA00 -> 0x15CB48
        unsigned int total; // r18
        signed int level; // r2
        unsigned int w; // r29+0x9C
        unsigned int h; // r29+0x98
        unsigned int nsize; // r3
        signed int i; // r4
    }
}


// Range: 0x15CB50 -> 0x15CDA4
void PXSetupTexObj(class PXS_TEXOBJ * texobj /* r21 */, unsigned int localptr /* r2 */, unsigned int type /* r20 */, unsigned int width /* r19 */, unsigned int height /* r18 */, unsigned int tcc /* r30 */, unsigned int tfx /* r29+0xBC */, unsigned int clutptr /* r29+0xB8 */, unsigned int cluttype /* r29+0xC0 */, unsigned int csm /* r29+0xC8 */, unsigned int csa /* r29+0xD0 */, unsigned int lcm /* r29+0xD8 */, unsigned int miplevel /* r29+0xE0 */, unsigned int mag /* r29+0xE8 */, unsigned int min /* r29+0xF0 */, unsigned int l /* r29+0xF8 */, unsigned int k /* r29+0x100 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15CB50 -> 0x15CDA4
        unsigned int tbp0; // r2
        unsigned int tbw; // r5
        unsigned int tw; // r17
        unsigned int th; // r2
        unsigned int cbp; // r16
        unsigned int cld; // r22
        unsigned int cpsm; // r23
    }
}


// Range: 0x15CDB0 -> 0x15CE94
unsigned int PXPrepareTexImagePacketSub(class PXS_QWDATA * p /* r2 */, unsigned int localptr /* r2 */, unsigned int dbw /* r2 */, unsigned int type /* r2 */, unsigned int bytesize /* r2 */, unsigned int width /* r2 */, unsigned int height /* r2 */, unsigned int sflag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15CDB0 -> 0x15CE94
        unsigned int nloop; // r3
        unsigned int qwc; // r2
    }
}


// Range: 0x15CEA0 -> 0x15D0D8
unsigned int PXPrepareTexImagePacket(void * startbuf /* r2 */, void * * curtbuf /* r29+0xCC */, unsigned int type /* r23 */, unsigned int sbit /* r2 */, unsigned int in_width /* r2 */, unsigned int in_height /* r2 */, unsigned int localptr /* r21 */, unsigned int hostptr /* r22 */, unsigned int sflag /* r29+0xD0 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15CEA0 -> 0x15D0D8
        class PXS_QWDATA * p; // r20
        unsigned int n; // r2
        unsigned int dbw; // r30
        unsigned int i; // r19
        unsigned int dbit; // r2
        unsigned int shift; // r2
        unsigned int sbytesize; // r18
        unsigned int dbytesize; // r2
        unsigned int loop; // r17
        class PXS_TEXSIZEINFO * pSizeInfo; // r6
        unsigned int width; // r29+0xC8
        unsigned int height; // r16
        unsigned int qwc; // r2
    }
}


// Range: 0x15D0E0 -> 0x15D158
enum PXE_ERR PXLoadTex(void * tagbuf /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15D0E0 -> 0x15D158
    }
}


// Range: 0x15D160 -> 0x15D168
void PXPutTexImage(void * imgtag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15D160 -> 0x15D168
    }
}


// Range: 0x15D170 -> 0x15D420
unsigned int PXPrepareTexImagePacketLinear(void * startbuf /* r2 */, void * * curtbuf /* r29+0xDC */, unsigned int type /* r21 */, unsigned int sbit /* r2 */, unsigned int width /* r22 */, unsigned int height /* r20 */, unsigned int localptr /* r19 */, unsigned int hostptr /* r18 */, unsigned int sflag /* r29+0xE0 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15D170 -> 0x15D420
        class PXS_QWDATA * p; // r17
        unsigned int n; // r2
        unsigned int dbw; // r29+0xC0
        unsigned int i; // r16
        unsigned int dbit; // r2
        unsigned int sbytesize; // r30
        unsigned int dbytesize; // r2
        unsigned int blkheight; // r4
        unsigned int loop; // r23
        unsigned int qwc; // r2
    }
}


