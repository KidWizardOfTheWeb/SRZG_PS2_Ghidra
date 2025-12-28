/*
    Compile unit: C:\usr\local\sega\px\src\pxtex2.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int pxgPath3TransAddr; // size: 0x4, address: 0x6D1F38
unsigned int pxgPath3TransInvokeCount; // size: 0x4, address: 0x6D1F3C
class sceGsBitbltbuf {
    // total size: 0x8
public:
    unsigned long SBP : 14; // offset 0x0, size 0x4
    unsigned long pad14 : 2; // offset 0x0, size 0x4
    unsigned long SBW : 6; // offset 0x0, size 0x4
    unsigned long pad22 : 2; // offset 0x0, size 0x4
    unsigned long SPSM : 6; // offset 0x0, size 0x4
    unsigned long pad30 : 2; // offset 0x0, size 0x4
    unsigned long DBP : 14; // offset 0x0, size 0x4
    unsigned long pad46 : 2; // offset 0x0, size 0x4
    unsigned long DBW : 6; // offset 0x0, size 0x4
    unsigned long pad54 : 2; // offset 0x0, size 0x4
    unsigned long DPSM : 6; // offset 0x0, size 0x4
    unsigned long pad62 : 2; // offset 0x0, size 0x4
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

// Range: 0x15D420 -> 0x15D47C
enum PXE_ERR PXStartPath3Trans(void * tagAddr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15D420 -> 0x15D47C
    }
}


