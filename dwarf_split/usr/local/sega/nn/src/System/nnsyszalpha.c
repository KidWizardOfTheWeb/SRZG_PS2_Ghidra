/*
    Compile unit: C:\usr\local\sega\nn\src\System\nnsyszalpha.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned char cb_buf[48]; // size: 0x30, address: 0x6E1040
static class PXS_CONTEXTBUFFER * cb; // size: 0x4, address: 0x6D1D80
static signed int nnsCbCurr; // size: 0x4, address: 0x6D1D84
class NNS_GSZBUF nngGsZbuf; // size: 0x18, address: 0x5F60B0
class NNS_GSTEST nngGsTest; // size: 0x10, address: 0x5F60D0
class PXS_CONTEXTBUFFER {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class PXS_GSREG_AD reg[1]; // offset 0x10, size 0x10
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
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
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
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
};

// Range: 0x145500 -> 0x14559C
void nnSetZWriteModePS2(enum NNE_BOOL mode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x145500 -> 0x14559C
        signed int i; // r16
    }
}


// Range: 0x1455A0 -> 0x1456AC
void nnSetAlphaCompModePS2(unsigned int on_off /* r2 */, unsigned int compmode /* r2 */, unsigned char aref /* r2 */, unsigned int failmode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1455A0 -> 0x1456AC
        signed int i; // r16
    }
}


// Range: 0x1456B0 -> 0x145778
void nnSetDestAlphaCompModePS2(unsigned int on_off /* r2 */, unsigned int mode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1456B0 -> 0x145778
        signed int i; // r16
    }
}


// Range: 0x145780 -> 0x145824
void nnSetZCompModePS2(unsigned int mode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x145780 -> 0x145824
        signed int i; // r16
    }
}


