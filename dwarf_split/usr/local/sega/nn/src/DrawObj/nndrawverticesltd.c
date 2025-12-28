/*
    Compile unit: C:\usr\local\sega\nn\src\DrawObj\nndrawverticesltd.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int * nngShaderTblTbl[]; // size: 0x0, address: 0x5F76E0
unsigned int * nngShaderTblReducedTbl[]; // size: 0x0, address: 0x5F8360
class tagPXS_PUSHBUFFER * pxgCurrentPB; // size: 0x4, address: 0x6D1F08
class NNS_PREV_PARAM_PS2 nngPrevParam; // size: 0x38, address: 0x6DEE90
class NNS_DRAW_PARAM_PS2 nngDrawParam; // size: 0x14, address: 0x6DEE70
class NNS_OBJECT_FLAG_PS2 nngSubObjectFlag; // size: 0x38, address: 0x6DEE30
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
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class NNS_OBJECT_FLAG_PS2 {
    // total size: 0x38
public:
    enum NNE_BOOL doubleside; // offset 0x0, size 0x4
    enum NNE_BOOL backside; // offset 0x4, size 0x4
    enum NNE_BOOL frontside; // offset 0x8, size 0x4
    enum NNE_BOOL inside; // offset 0xC, size 0x4
    enum NNE_BOOL gsinside; // offset 0x10, size 0x4
    enum NNE_BOOL meshsetclip; // offset 0x14, size 0x4
    enum NNE_BOOL crossnear; // offset 0x18, size 0x4
    enum NNE_BOOL ignorematambi; // offset 0x1C, size 0x4
    enum NNE_BOOL ignorematspec; // offset 0x20, size 0x4
    enum NNE_BOOL disablelighting; // offset 0x24, size 0x4
    enum NNE_BOOL ignoretexture; // offset 0x28, size 0x4
    enum NNE_BOOL specular; // offset 0x2C, size 0x4
    enum NNE_BOOL usealpha; // offset 0x30, size 0x4
    unsigned int drawtype; // offset 0x34, size 0x4
};
class NNS_VTXLIST_PS2_VU_DESC {
    // total size: 0x14
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nDmaQwc; // offset 0x4, size 0x4
    void * pVertex; // offset 0x8, size 0x4
    signed int nBoneMtx; // offset 0xC, size 0x4
    void * pBoneMtxList; // offset 0x10, size 0x4
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
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
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
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};

// Range: 0x13DC70 -> 0x13DCD0
void nnPutShader(unsigned int shader /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13DC70 -> 0x13DCD0
    }
}


// Range: 0x13DCD0 -> 0x13DD98
void nnPutBoneMatrix(float (* pMtxPal)[4][4] /* r18 */, signed int * pBoneMtxList /* r17 */, unsigned int nBoneMtx /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13DCD0 -> 0x13DD98
        signed int i; // r6
        unsigned int * p; // r2
        __int128 * d128; // r2
        __int128 * s128; // r2
    }
}


// Range: 0x13DDA0 -> 0x13DED4
void nnDrawPliableVerticesProcessVULtd(class NNS_VTXLISTPTR * pVtx /* r2 */, float (* pMtxPal)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13DDA0 -> 0x13DED4
        class NNS_VTXLIST_PS2_VU_DESC * pVDesc; // r2
        unsigned int shader; // r2
        unsigned int fType; // r2
    }
}


// Range: 0x13DEE0 -> 0x13DFF8
void nnDrawRigidVerticesProcessVULtd(class NNS_VTXLISTPTR * pVtx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13DEE0 -> 0x13DFF8
        class NNS_VTXLIST_PS2_VU_DESC * pVDesc; // r2
        unsigned int shader; // r2
        unsigned int fType; // r2
    }
}


