/*
    Compile unit: C:\usr\local\sega\px\src\pxpushbuffer.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class tagPXS_PUSHBUFFER * pxgLastDrawPB; // size: 0x4, address: 0x6D1F34
class PXS_INITPARAM pxgInitParam; // size: 0x20, address: 0x6E64B0
unsigned int pxgRenderDmaBusy; // size: 0x4, address: 0x6D1F24
signed int (* pxgDmaStartCallback)(void *); // size: 0x4, address: 0x6D1F10
unsigned int pxgLastDmaAddr; // size: 0x4, address: 0x6D1F28
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
class PXS_DMATAG {
    // total size: 0x10
public:
    unsigned short qwc; // offset 0x0, size 0x2
    unsigned short id; // offset 0x2, size 0x2
    void * addr; // offset 0x4, size 0x4
    unsigned int vifnop; // offset 0x8, size 0x4
    unsigned int directhl; // offset 0xC, size 0x4
};
class PXS_SPB_DATABUFINFO {
    // total size: 0x10
public:
    void * dataBuf[2]; // offset 0x0, size 0x8
    unsigned int dataBufSize; // offset 0x8, size 0x4
    unsigned int reserved; // offset 0xC, size 0x4
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

// Range: 0x15B750 -> 0x15B8E0
class tagPXS_PUSHBUFFER * PXSetupPB(class tagPXS_PUSHBUFFER * pb /* r21 */, unsigned int nTagBytes /* r22 */, unsigned int nDataBytes /* r20 */, void * addr /* r2 */, unsigned int bufsize /* r2 */, unsigned int flag /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B750 -> 0x15B8E0
        class PXS_PUSHBUFFER1 * db; // r7
        unsigned char * p; // r18
        signed int i; // r6
        signed int num; // r2
        class PXS_DMATAG * dt; // r2
    }
}


// Range: 0x15B8E0 -> 0x15B910
void PXAddTagEnd(class PXS_PUSHBUFFER1 * db /* r2 */, unsigned int irq /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B8E0 -> 0x15B910
        class PXS_DMATAG * dt; // r2
    }
}


// Range: 0x15B910 -> 0x15BA6C
void PXFlipPB(class tagPXS_PUSHBUFFER * pb /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B910 -> 0x15BA6C
        class PXS_PUSHBUFFER1 * db; // r16
        signed int flg; // r2
    }
}


// Range: 0x15BA70 -> 0x15BD78
enum PXE_ERR PXRenderPB(class tagPXS_PUSHBUFFER * pb /* r20 */, unsigned int flag /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15BA70 -> 0x15BD78
        class PXS_PUSHBUFFER1 * db; // r18
        signed int cbret; // r21
        unsigned int dma_addr; // r17
        class tagPXS_PUSHBUFFER * next; // r2
        class tagPXS_PUSHBUFFER * next; // r16
    }
}


// Range: 0x15BD80 -> 0x15BDB4
void * PXBeginPB(class tagPXS_PUSHBUFFER * pb /* r2 */, unsigned int flag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15BD80 -> 0x15BDB4
        class PXS_PUSHBUFFER1 * db; // r2
        __int128 * bp; // r2
    }
}


// Range: 0x15BDC0 -> 0x15BE00
void PXAddTagCall(class PXS_PUSHBUFFER1 * db /* r2 */, void * addr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15BDC0 -> 0x15BE00
        class PXS_DMATAG * dt; // r2
    }
}


// Range: 0x15BE00 -> 0x15BE4C
void PXPutCallPB(class tagPXS_PUSHBUFFER * pb /* r2 */, void * addr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15BE00 -> 0x15BE4C
        class PXS_PUSHBUFFER1 * db; // r2
    }
}


// Range: 0x15BE50 -> 0x15BF00
void PXPutRefPB(class tagPXS_PUSHBUFFER * pb /* r2 */, void * addr /* r2 */, unsigned int qwc /* r2 */, unsigned int flag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15BE50 -> 0x15BF00
        class PXS_PUSHBUFFER1 * db; // r2
    }
}


// Range: 0x15BF00 -> 0x15BF80
void PXAdjustSharedPB(class tagPXS_PUSHBUFFER * pb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15BF00 -> 0x15BF80
        class PXS_PUSHBUFFER1 * db; // r2
        class tagPXS_PUSHBUFFER * next; // r8
        class PXS_PUSHBUFFER1 * nextdb; // r2
        class tagPXS_PUSHBUFFER * prev; // r5
        class PXS_PUSHBUFFER1 * prevdb; // r2
    }
}


// Range: 0x15BF80 -> 0x15C0E8
void PXEndPB(class tagPXS_PUSHBUFFER * pb /* r2 */, void * pEnd /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15BF80 -> 0x15C0E8
        class PXS_PUSHBUFFER1 * db; // r2
        unsigned int qwc; // r6
        unsigned int flag; // r2
        __int128 * pOldPtr; // r2
        unsigned int * p; // r2
    }
}


// Range: 0x15C0F0 -> 0x15C140
void PXPutShaderPB(class tagPXS_PUSHBUFFER * pb /* r2 */, void * addr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C0F0 -> 0x15C140
        class PXS_PUSHBUFFER1 * db; // r2
        class PXS_DMATAG * dt; // r2
    }
}


// Range: 0x15C140 -> 0x15C1C0
void PXPutShaderConstPB(class tagPXS_PUSHBUFFER * pb /* r2 */, unsigned int vumem /* r2 */, void * addr /* r2 */, unsigned int qwc /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C140 -> 0x15C1C0
        unsigned int * p; // r2
        __int128 * d128; // r2
        __int128 * s128; // r2
    }
}


// Range: 0x15C1C0 -> 0x15C21C
void PXReferShaderConstPB(class tagPXS_PUSHBUFFER * pb /* r2 */, unsigned int vumem /* r2 */, void * addr /* r2 */, unsigned int qwc /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C1C0 -> 0x15C21C
        class PXS_PUSHBUFFER1 * db; // r2
        class PXS_DMATAG * dt; // r2
    }
}


// Range: 0x15C220 -> 0x15C228
void * PXGetLastShaderConstAddrPB(class tagPXS_PUSHBUFFER * pb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C220 -> 0x15C228
    }
}


// Range: 0x15C230 -> 0x15C294
void PXPutRegPB(class tagPXS_PUSHBUFFER * pb /* r2 */, unsigned int addr /* r2 */, unsigned long data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C230 -> 0x15C294
        unsigned long * p; // r2
    }
}


// Range: 0x15C2A0 -> 0x15C2FC
void PXStartShaderPB(class tagPXS_PUSHBUFFER * pb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C2A0 -> 0x15C2FC
        unsigned int * p; // r2
    }
}


// Range: 0x15C300 -> 0x15C3D0
void * PXBeginPrimPB(class tagPXS_PUSHBUFFER * pb /* r2 */, void * addr /* r2 */, unsigned int vertices /* r2 */, unsigned int stride /* r2 */, unsigned int prim /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C300 -> 0x15C3D0
        class PXS_PUSHBUFFER1 * db; // r2
        unsigned int * p; // r2
    }
}


// Range: 0x15C3D0 -> 0x15C3EC
void * PXEndPrimPB(void * addr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15C3D0 -> 0x15C3EC
        unsigned int * p; // r2
    }
}


