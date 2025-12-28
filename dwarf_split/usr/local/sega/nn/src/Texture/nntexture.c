/*
    Compile unit: C:\usr\local\sega\nn\src\Texture\nntexture.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class _NNS_TEXLIST * nngCurrentTextureList; // size: 0x4, address: 0x6D1BC8
class NNS_TEXAREA_PARAM nngTexArea; // size: 0x10, address: 0x6DE6C0
enum NNE_BOOL nnsIgnoreTextureSwitch; // size: 0x4, address: 0x6D1A8C
signed int (* nngPutTextureFunc)(class _NNS_TEXINFO * *, signed int); // size: 0x4, address: 0x6D1C4C
class NNS_PREV_PARAM_PS2 nngPrevParam; // size: 0x38, address: 0x6DEE90
signed int nngPrimPutTexRequest; // size: 0x4, address: 0x6D1C90
class tagPXS_PUSHBUFFER * pxgCurrentPB; // size: 0x4, address: 0x6D1F08
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
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
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
class NVS_CLUTINFO {
    // total size: 0x8
public:
    unsigned int localptr; // offset 0x0, size 0x4
    unsigned int psm; // offset 0x4, size 0x4
};
class _NNS_TEXLIST {
    // total size: 0x8
public:
    signed int nTex; // offset 0x0, size 0x4
    class _NNS_TEXINFO * pTexInfoList; // offset 0x4, size 0x4
};
class NNS_TEXAREA_PARAM {
    // total size: 0x10
public:
    unsigned int startaddr; // offset 0x0, size 0x4
    unsigned int endaddr; // offset 0x4, size 0x4
    unsigned int curraddr; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
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
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
};
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
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
class NNS_PREV_PARAM_PS2 {
    // total size: 0x38
public:
    enum NNE_BOOL fautoclearsw; // offset 0x0, size 0x4
    unsigned int shader; // offset 0x4, size 0x4
    unsigned int cull; // offset 0x8, size 0x4
    signed int specular; // offset 0xC, size 0x4
    signed int disablelighting; // offset 0x10, size 0x4
    signed int texidx[2]; // offset 0x14, size 0x8
    unsigned int clampmode[2]; // offset 0x1C, size 0x8
    class NNS_TEXCOORD texuvofs; // offset 0x24, size 0x8
    unsigned int fgsprimmode[2]; // offset 0x2C, size 0x8
    void * pBoneList; // offset 0x34, size 0x4
};
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
enum NNE_TEXSLOT {
    NNE_TEXSLOT_0 = 0,
    NNE_TEXSLOT_1 = 1,
    NNE_TEXSLOT_MAX = 2,
};

// Range: 0x138F50 -> 0x138F6C
void nnSetInitIgnoreTextureSwitchPS2(enum NNE_BOOL on_off /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138F50 -> 0x138F6C
    }
}


// Range: 0x138F70 -> 0x138FE4
void nnInitTexturePS2(unsigned int localptr /* r17 */, unsigned int size /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138F70 -> 0x138FE4
    }
}


// Range: 0x138FF0 -> 0x139040
void nnExitTexturePS2() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138FF0 -> 0x139040
    }
}


// Range: 0x139040 -> 0x139054
unsigned int nnEstimateTexlistSize(signed int num /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139040 -> 0x139054
    }
}


// Range: 0x139060 -> 0x1390DC
void nnSetUpTexlist(class _NNS_TEXLIST * * texlist /* r2 */, signed int num /* r17 */, void * buf /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139060 -> 0x1390DC
        class _NNS_TEXLIST * ptexlist; // r2
        class _NNS_TEXINFO * texinfo; // r2
    }
}


// Range: 0x1390E0 -> 0x139104
signed int nnSetTextureList(class _NNS_TEXLIST * pTexList /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1390E0 -> 0x139104
    }
}


// Range: 0x139110 -> 0x139344
signed int nnLoadTextureMemoryOne(class _NNS_TEXINFO * pTexInfo /* r21 */, void * tex /* r20 */, unsigned short minfilter /* r19 */, unsigned short magfilter /* r18 */, unsigned int globalindex /* r17 */, unsigned int bank /* r22 */, unsigned int flag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139110 -> 0x139344
        signed int ret; // r16
        signed int mag; // r2
        signed int min; // r2
        class NVS_SVROBJ svrobj0; // r29+0x80
        class NVS_SVRHEADER * pSvrh; // r16
        void * ptr; // r2
    }
}


// Range: 0x139350 -> 0x1393FC
signed int nnReleaseTextureOne(class _NNS_TEXINFO * pTexInfo /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139350 -> 0x1393FC
        signed int ret; // r2
    }
}


// Range: 0x139400 -> 0x139408
void * nnAllocTexLocalMemoryPS2(unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139400 -> 0x139408
    }
}


// Range: 0x139410 -> 0x139418
void nnFreeTexLocalMemoryPS2(void * addr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139410 -> 0x139418
    }
}


// Range: 0x139420 -> 0x139444
unsigned int nnCalcTexLocalMemoryFreeMaxPS2() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139420 -> 0x139444
        unsigned int allFree; // r29+0x1C
        unsigned int maxFree; // r29+0x18
    }
}


// Range: 0x139450 -> 0x1394A0
unsigned int nnCalcTexDmaTagSizeOneCorePS2(class _NNS_TEXINFO * pTexInfo /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139450 -> 0x1394A0
        class NVS_SVROBJ * svrobj; // r2
        signed int sendnum; // r2
    }
}


