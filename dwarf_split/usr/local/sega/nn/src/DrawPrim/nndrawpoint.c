/*
    Compile unit: C:\usr\local\sega\nn\src\DrawPrim\nndrawpoint.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int nnsTrans; // size: 0x4, address: 0x6D1D2C
static signed int nnsPrimPointType2D; // size: 0x4, address: 0x6D1D30
static signed int nnsPrimPointType3D; // size: 0x4, address: 0x0
static signed int nnsPrimSkip; // size: 0x4, address: 0x0
static enum NNE_BOOL nnsPrimReqStartShader; // size: 0x4, address: 0x0
static unsigned int * nnspPushBuffer; // size: 0x4, address: 0x0
static unsigned int * p; // size: 0x4, address: 0x6D1D34
static unsigned int * lastp; // size: 0x4, address: 0x6D1D38
class NNS_GSZBUF nngGsZbuf; // size: 0x18, address: 0x5F60B0
class NNS_GSTEST nngGsTest; // size: 0x10, address: 0x5F60D0
unsigned long nngPrimBlendGsAlpha64; // size: 0x4, address: 0x6D1AB8
class NNS_PRIM2D_PARAM nngPrim2dParam; // size: 0x10, address: 0x6DECF0
enum NNE_PROJECTION_TYPE nngProjectionType; // size: 0x4, address: 0x6D1BD0
float nngPrimMtx[4][4]; // size: 0x40, address: 0x6DF170
float nngProjectionMatrix[4][4]; // size: 0x40, address: 0x6DEC20
class NNS_PRIM2D_PC {
    // total size: 0xC
public:
    class NNS_VECTOR2D Pos; // offset 0x0, size 0x8
    unsigned int Col; // offset 0x8, size 0x4
};
class NNS_PX_VERTEX {
    // total size: 0x30
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
    unsigned int r; // offset 0x10, size 0x4
    unsigned int g; // offset 0x14, size 0x4
    unsigned int b; // offset 0x18, size 0x4
    unsigned int a; // offset 0x1C, size 0x4
    float u; // offset 0x20, size 0x4
    float v; // offset 0x24, size 0x4
    float q; // offset 0x28, size 0x4
    float rsvd; // offset 0x2C, size 0x4
};
class PXS_SCREENPARAM {
    // total size: 0x20
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float zmul; // offset 0x8, size 0x4
    float rsvd0; // offset 0xC, size 0x4
    float cx; // offset 0x10, size 0x4
    float cy; // offset 0x14, size 0x4
    float zbias; // offset 0x18, size 0x4
    float guardband; // offset 0x1C, size 0x4
};
enum NNE_PROJECTION_TYPE {
    NNE_PROJECTION_TYPE_PERSPECTIVE = 0,
    NNE_PROJECTION_TYPE_ORTHO = 1,
};
class NNS_GSZBUF {
    // total size: 0x18
public:
    enum NNE_BOOL fForce; // offset 0x0, size 0x4
    enum NNE_BOOL fSwitch; // offset 0x4, size 0x4
    class sceGsZbuf reg[2]; // offset 0x8, size 0x10
};
class NNS_VECTOR2D {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class NNS_PRIM2D_PARAM {
    // total size: 0x10
public:
    float xbias; // offset 0x0, size 0x4
    float xmul; // offset 0x4, size 0x4
    float ybias; // offset 0x8, size 0x4
    float ymul; // offset 0xC, size 0x4
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
enum NNE_PRIM2D_POINT_FMT {
    NNE_PRIM2D_POINT_FMT_P = 0,
    NNE_PRIM2D_POINT_FMT_PC = 1,
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class NNS_GSTEST {
    // total size: 0x10
public:
    enum NNE_BOOL fForce; // offset 0x0, size 0x4
    class sceGsTest reg; // offset 0x8, size 0x8
};
class NNS_PRIM2D_P {
    // total size: 0x8
public:
    class NNS_VECTOR2D Pos; // offset 0x0, size 0x8
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
enum NNE_PRIM3D_POINT_FMT {
    NNE_PRIM3D_POINT_FMT_P = 0,
    NNE_PRIM3D_POINT_FMT_PC = 1,
};
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};
class PXS_WIREPARAM {
    // total size: 0x30
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    unsigned int mode; // offset 0x10, size 0x4
    unsigned int colflag; // offset 0x14, size 0x4
    unsigned int reserved[2]; // offset 0x18, size 0x8
    unsigned int r; // offset 0x20, size 0x4
    unsigned int g; // offset 0x24, size 0x4
    unsigned int b; // offset 0x28, size 0x4
    unsigned int a; // offset 0x2C, size 0x4
};
class NNS_RGBA_U32 {
    // total size: 0x10
public:
    unsigned int r; // offset 0x0, size 0x4
    unsigned int g; // offset 0x4, size 0x4
    unsigned int b; // offset 0x8, size 0x4
    unsigned int a; // offset 0xC, size 0x4
};
enum NNE_PRIM_ALPHABLEND {
    NNE_PRIM_ALPHABLEND_OFF = 0,
    NNE_PRIM_ALPHABLEND_ON = 1,
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

// Range: 0x1431E0 -> 0x1434A8
void nnBeginDrawPrimitivePoint2D(enum NNE_PRIM2D_POINT_FMT fmt /* r20 */, class NNS_RGBA * col /* r19 */, enum NNE_PRIM_ALPHABLEND blend /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1431E0 -> 0x1434A8
        unsigned long * cb; // r17
        unsigned int cb_curr; // r16
    }
}


// Range: 0x1434B0 -> 0x143F8C
void nnDrawPrimitivePoint2D(void * vtx /* r17 */, signed int count /* r16 */, float pri /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1434B0 -> 0x143F8C
        unsigned int * p'224; // r24
        signed int i; // r21
        class NNS_PRIM2D_P * pP; // r2
        class NNS_PRIM2D_PC * pPC; // r2
        unsigned int z; // r2
        class PXS_SCREENPARAM sprm; // r29+0x1C0
    }
}


// Range: 0x143F90 -> 0x143FB4
void nnEndDrawPrimitivePoint2D() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x143F90 -> 0x143FB4
    }
}


