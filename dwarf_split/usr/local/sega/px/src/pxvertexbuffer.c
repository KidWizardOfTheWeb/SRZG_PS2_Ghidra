/*
    Compile unit: C:\usr\local\sega\px\src\pxvertexbuffer.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class PXS_VERTEXBUFFER {
    // total size: 0x40
public:
    char magic[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned int flag; // offset 0xC, size 0x4
    __int128 * addr; // offset 0x10, size 0x4
    unsigned int qwc; // offset 0x14, size 0x4
    __int128 * bufPtr; // offset 0x18, size 0x4
    unsigned int lockFlag; // offset 0x1C, size 0x4
    unsigned int vuOffset; // offset 0x20, size 0x4
    unsigned int reserved2[3]; // offset 0x24, size 0xC
    unsigned int reserved3[4]; // offset 0x30, size 0x10
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

// Range: 0x15C630 -> 0x15C6C8
class PXS_VERTEXBUFFER * PXSetupVB(void * addr /* r18 */, unsigned int size /* r17 */, unsigned int flag /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C630 -> 0x15C6C8
        class PXS_VERTEXBUFFER * vb; // r2
    }
}


// Range: 0x15C6D0 -> 0x15C6DC
void * PXLockVB(class PXS_VERTEXBUFFER * vb /* r2 */, unsigned int flag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C6D0 -> 0x15C6DC
    }
}


// Range: 0x15C6E0 -> 0x15C734
void PXUnlockVB(class PXS_VERTEXBUFFER * vb /* r2 */, void * p /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C6E0 -> 0x15C734
    }
}


// Range: 0x15C740 -> 0x15C7F8
void * PXBeginPrimVB(class PXS_VERTEXBUFFER * vb /* r2 */, void * addr /* r2 */, unsigned int vertices /* r2 */, unsigned int stride /* r2 */, unsigned int prim /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C740 -> 0x15C7F8
        unsigned int * p; // r2
    }
}


// Range: 0x15C800 -> 0x15C81C
void * PXEndPrimVB(void * addr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C800 -> 0x15C81C
        unsigned int * p; // r2
    }
}


