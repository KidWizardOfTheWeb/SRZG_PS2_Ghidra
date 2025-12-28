/*
    Compile unit: C:\usr\local\sega\nn\src\Print\nnprint.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int nnsPrintMax; // size: 0x4, address: 0x6D1E10
static class NNS_PRINT_BUF_PS2 * nnsPrintBuf; // size: 0x4, address: 0x6D1E14
static unsigned char * nnsPrintChar; // size: 0x4, address: 0x6D1E18
static class NNS_VECTOR2D nnsPrintCharSize; // size: 0x8, address: 0x6D1E20
static class NVS_SVROBJ nnsPrintSvrObj; // size: 0x30, address: 0x6E1350
static class NNS_RGBA_U8 nnsPrintCol; // size: 0x4, address: 0x6D1E28
static signed int nnsPrintNum; // size: 0x4, address: 0x6D1E2C
static unsigned int nnsPrintZ; // size: 0x4, address: 0x6D1AEC
static class NNS_VECTOR2D nnsPrintAspect; // size: 0x8, address: 0x6D1E30
static class NNS_VECTOR2D nnsPrint2d; // size: 0x8, address: 0x6D1E38
static unsigned char cb_buf1[144]; // size: 0x90, address: 0x6E1380
static unsigned char cb_buf2[48]; // size: 0x30, address: 0x6E1440
static class PXS_CONTEXTBUFFER * cb1; // size: 0x4, address: 0x6D1E40
static class PXS_CONTEXTBUFFER * cb2; // size: 0x4, address: 0x6D1E80
class NNS_GSZBUF nngGsZbuf; // size: 0x18, address: 0x5F60B0
class NNS_SCREEN nngScreen; // size: 0x30, address: 0x6DEC80
unsigned char nngPrintTexture[]; // size: 0x0, address: 0x5F8F00
class NNS_GSTEST nngGsTest; // size: 0x10, address: 0x5F60D0
class NNS_PRINT_BUF_PS2 {
    // total size: 0x14
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float sx; // offset 0x8, size 0x4
    float sy; // offset 0xC, size 0x4
    unsigned char a; // offset 0x10, size 0x1
    unsigned char r; // offset 0x11, size 0x1
    unsigned char g; // offset 0x12, size 0x1
    unsigned char b; // offset 0x13, size 0x1
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
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
class NVS_SVRHEADER {
    // total size: 0x8
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short miplevel; // offset 0x2, size 0x2
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
};
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
};
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
};
class NNS_VECTOR2D {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
};
class PXS_CONTEXTBUFFER {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class PXS_GSREG_AD reg[1]; // offset 0x10, size 0x10
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
class NNS_SCREEN {
    // total size: 0x30
public:
    float xad; // offset 0x0, size 0x4
    float yad; // offset 0x4, size 0x4
    float cx; // offset 0x8, size 0x4
    float cy; // offset 0xC, size 0x4
    float ooxad; // offset 0x10, size 0x4
    float ooyad; // offset 0x14, size 0x4
    float dist; // offset 0x18, size 0x4
    float ax; // offset 0x1C, size 0x4
    float ay; // offset 0x20, size 0x4
    float aspect; // offset 0x24, size 0x4
    float w; // offset 0x28, size 0x4
    float h; // offset 0x2C, size 0x4
};
class NNS_RGBA_U8 {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
class NNS_GSZBUF {
    // total size: 0x18
public:
    enum NNE_BOOL fForce; // offset 0x0, size 0x4
    enum NNE_BOOL fSwitch; // offset 0x4, size 0x4
    class sceGsZbuf reg[2]; // offset 0x8, size 0x10
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
class NNS_GSTEST {
    // total size: 0x10
public:
    enum NNE_BOOL fForce; // offset 0x0, size 0x4
    class sceGsTest reg; // offset 0x8, size 0x8
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

// Range: 0x155C20 -> 0x155C34
unsigned int nnGetPrintBufferSize(signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x155C20 -> 0x155C34
    }
}


// Range: 0x155C40 -> 0x155FB8
void nnInitPrint(void * buf /* r17 */, signed int n /* r16 */, void * font /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x155C40 -> 0x155FB8
        class NVS_SVRHEADER svrh; // r29+0x38
    }
}


// Range: 0x155FC0 -> 0x155FE4
void nnExitPrint() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x155FC0 -> 0x155FE4
    }
}


// Range: 0x155FF0 -> 0x155FFC
void nnSetPrintSize(float sizex /* r29 */, float sizey /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x155FF0 -> 0x155FFC
    }
}


// Range: 0x156000 -> 0x15604C
void nnSetPrintColor(unsigned int c /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x156000 -> 0x15604C
    }
}


// Range: 0x156050 -> 0x15624C
void nnPrint(signed int x /* r17 */, signed int y /* r16 */, char * fmt /* r29+0xD8 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x156050 -> 0x15624C
        char * fmt'121; // r2
        char * ap; // r2
        char buf[128]; // r29+0x30
    }
}


// Range: 0x156250 -> 0x156568
void nnFlushPrint() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x156250 -> 0x156568
        float u0; // r10
        float v0; // r9
        float fx; // r8
        float fy; // r7
        float sx; // r2
        float sy; // r6
        signed int i; // r8
        signed int ccnt; // r7
        unsigned int * p; // r2
        unsigned int * vtop; // r6
    }
}


