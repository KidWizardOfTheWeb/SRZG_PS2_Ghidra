/*
    Compile unit: C:\usr\local\sega\nn\src\DrawPrim\nndrawprimvbps2.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_RGBA_U32 nngPrimLineColor; // size: 0x10, address: 0x6DF260
float nngProjectionMatrix[4][4]; // size: 0x40, address: 0x6DEC20
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
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
enum NNE_PRIM3D_FMT {
    NNE_PRIM3D_FMT_P = 0,
    NNE_PRIM3D_FMT_PN = 1,
    NNE_PRIM3D_FMT_PC = 2,
    NNE_PRIM3D_FMT_PNT = 3,
    NNE_PRIM3D_FMT_PCT = 4,
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
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
enum NNE_PRIM_TRIANGLE {
    NNE_PRIM_TRIANGLE_LIST = 0,
    NNE_PRIM_TRIANGLE_STRIP = 1,
};
enum NNE_PRIM_LINE {
    NNE_PRIM_LINE_LIST = 0,
    NNE_PRIM_LINE_STRIP = 1,
};

// Range: 0x143FC0 -> 0x143FC8
void * nnSetUpVBPS2(void * vbbuf /* r2 */, signed int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x143FC0 -> 0x143FC8
    }
}


// Range: 0x143FD0 -> 0x144330
void nnSetUpPrimitiveLine3DVBPS2(void * vb /* r21 */, enum NNE_PRIM_LINE type /* r18 */, void * vtx /* r20 */, signed int count /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x143FD0 -> 0x144330
        unsigned int * p; // r2
        class NNS_PX_VERTEX * v; // r2
        signed int i; // r7
        signed int nVert; // r18
        float * src; // r2
        unsigned int prim; // r17
        class NNS_VECTORFAST * pvec; // r2
    }
}


