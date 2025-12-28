/*
    Compile unit: C:\usr\local\sega\nvs\src\nvs.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char * nvgVersion; // size: 0x4, address: 0x0
char * nvgVersionPtr; // size: 0x4, address: 0x0
static class NVS_TEXSIZEINFO nvg_sizeInfo[59]; // size: 0x1D8, address: 0x659010
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
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
};
class NVS_TEXSIZEINFO {
    // total size: 0x8
public:
    unsigned char sbit; // offset 0x0, size 0x1
    unsigned char w_shift; // offset 0x1, size 0x1
    unsigned char h_shift; // offset 0x2, size 0x1
    unsigned char reserved; // offset 0x3, size 0x1
    unsigned short w_min; // offset 0x4, size 0x2
    unsigned short h_min; // offset 0x6, size 0x2
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
class NVS_SVROBJ2 {
    // total size: 0x60
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ2 texobj; // offset 0x10, size 0x50
};
class PXS_TEXOBJ2 {
    // total size: 0x50
public:
    class PXS_TEXREG2 texReg; // offset 0x0, size 0x50
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
class NVS_CLUTINFO {
    // total size: 0x8
public:
    unsigned int localptr; // offset 0x0, size 0x4
    unsigned int psm; // offset 0x4, size 0x4
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
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};

// Range: 0x1586D0 -> 0x158874
unsigned short nvGetMipLevel(unsigned short type /* r2 */, unsigned short width /* r2 */, unsigned int cnksize /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1586D0 -> 0x158874
        unsigned int size; // r5
        unsigned int tmpsize; // r4
        unsigned int bit; // r9
        unsigned int pal; // r8
        unsigned int level; // r2
    }
}


// Range: 0x158880 -> 0x1589AC
void * nvGetSVRHeader(class NVS_SVROBJ * svrobj /* r20 */, void * texptr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x158880 -> 0x1589AC
        unsigned int ch; // r2
        unsigned int * ptr; // r2
        unsigned int size; // r2
        unsigned int * texelptr; // r19
    }
}


// Range: 0x1589B0 -> 0x158A88
unsigned int nvCalcSVRTexLocalMemorySize(class NVS_SVROBJ * svrobj /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1589B0 -> 0x158A88
        unsigned int width; // r9
        unsigned int height; // r2
        unsigned int type; // r2
        unsigned int size; // r2
        unsigned int bit; // r2
        unsigned int pal; // r16
        unsigned int level; // r2
    }
}


// Range: 0x158A90 -> 0x158E08
void nvSetupSVRTexObj(class NVS_SVROBJ * svrobj /* r2 */, unsigned int localptr /* r2 */, unsigned int clutptr /* r6 */, unsigned int cluttype /* r2 */, unsigned int mag /* r2 */, unsigned int min /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x158A90 -> 0x158E08
        unsigned int width; // r2
        unsigned int height; // r2
        unsigned int type; // r2
        unsigned int color; // r2
        unsigned int mxl; // r2
    }
}


// Range: 0x158E10 -> 0x158F84
signed int nvCalcSVRTexDMANum(class NVS_SVROBJ * svrobj /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x158E10 -> 0x158F84
        signed int tag; // r2
        signed int loop; // r13
        signed int size; // r2
        unsigned int width; // r7
        unsigned int height; // r6
        unsigned int type; // r2
        signed int i; // r12
        signed int level; // r2
    }
}


// Range: 0x158F90 -> 0x15934C
void nvPrepareSVRTexImagePacket(void * startbuf /* r23 */, void * * curtbuf /* r22 */, class NVS_SVROBJ * svrobj /* r2 */, void * texptr /* r2 */, unsigned int localptr /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x158F90 -> 0x15934C
        unsigned int width; // r20
        unsigned int height; // r19
        unsigned int sbit; // r18
        unsigned int w_min; // r2
        unsigned int h_min; // r2
        unsigned int w_shift; // r2
        unsigned int h_shift; // r2
        unsigned int psm; // r29+0x100
        unsigned int surface; // r2
        unsigned int texture; // r17
        unsigned int i; // r30
        unsigned int j; // r16
        unsigned int elevel; // r2
        unsigned int w; // r29+0x11C
        unsigned int h; // r29+0x118
        class NVS_TEXSIZEINFO * pSizeInfo; // r2
    }
}


// Range: 0x159350 -> 0x159410
void nvTexBlockSizeToWidthHeight(unsigned int bit /* r2 */, unsigned int inw /* r2 */, unsigned int inh /* r2 */, unsigned int * outw /* r2 */, unsigned int * outh /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x159350 -> 0x159410
        unsigned int blockw; // r9
        unsigned int blockh; // r4
    }
}


// Range: 0x159410 -> 0x159558
unsigned int nvPrepareClutImagePacket(void * startbuf /* r2 */, void * * curtbuf /* r2 */, unsigned int type /* r2 */, unsigned int width /* r2 */, unsigned int height /* r2 */, unsigned int localptr /* r2 */, unsigned int hostptr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x159410 -> 0x159558
        class PXS_QWDATA * p; // r3
        unsigned int dbitsize; // r2
        unsigned int nloop; // r2
    }
}


// Range: 0x159560 -> 0x159830
void nvPrepareSVRTexImagePacketLinear(void * startbuf /* r30 */, void * * curtbuf /* r23 */, class NVS_SVROBJ * svrobj /* r2 */, void * texptr /* r2 */, unsigned int localptr /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x159560 -> 0x159830
        unsigned int width; // r20
        unsigned int height; // r19
        unsigned int sbit; // r18
        unsigned int psm; // r29+0xC0
        unsigned int surface; // r2
        unsigned int texture; // r17
        unsigned int i; // r22
        unsigned int j; // r16
        unsigned int elevel; // r2
        unsigned int w; // r29+0xDC
        unsigned int h; // r29+0xD8
    }
}


// Range: 0x159830 -> 0x1599C0
signed int nvLoadSVRMemoryTexture(class NVS_SVROBJ * svrobj /* r16 */, void * tex /* r18 */, class NVS_SVRHEADER * svrh /* r17 */, signed int mag /* r21 */, signed int min /* r20 */, unsigned int bank /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x159830 -> 0x1599C0
        void * texstart; // r19
        void * tagbuf; // r18
        void * dmy; // r29+0x8C
        signed int sendnum; // r2
        unsigned int localsize; // r2
        unsigned int localptr; // r17
        class NVS_CLUTINFO info; // r29+0x80
    }
}


// Range: 0x1599C0 -> 0x159B50
signed int nvLoadSVRMemoryTextureLinear(class NVS_SVROBJ * svrobj /* r16 */, void * tex /* r18 */, class NVS_SVRHEADER * svrh /* r17 */, signed int mag /* r21 */, signed int min /* r20 */, unsigned int bank /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1599C0 -> 0x159B50
        void * texstart; // r19
        void * tagbuf; // r18
        void * dmy; // r29+0x8C
        signed int sendnum; // r2
        unsigned int localsize; // r2
        unsigned int localptr; // r17
        class NVS_CLUTINFO info; // r29+0x80
    }
}


// Range: 0x159B50 -> 0x159BF4
signed int nvReleaseSVRTexture(class NVS_SVROBJ * svrobj /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x159B50 -> 0x159BF4
        unsigned int localPtr; // r2
    }
}


// Range: 0x159C00 -> 0x159D8C
signed int nvCalcSVRTexDMANumHigh(class NVS_SVROBJ * svrobj /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x159C00 -> 0x159D8C
        signed int tag; // r2
        unsigned int width; // r2
        unsigned int height; // r2
        unsigned int type; // r2
        signed int i; // r7
        signed int level; // r2
        signed int blkheight; // r2
    }
}


