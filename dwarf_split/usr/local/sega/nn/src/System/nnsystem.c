/*
    Compile unit: C:\usr\local\sega\nn\src\System\nnsystem.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char * nngCopyright; // size: 0x4, address: 0x657EE8
static char * nngBuild; // size: 0x4, address: 0x657F20
char * nngVersion; // size: 0x4, address: 0x6D1A94
unsigned char * nngBuildAddr; // size: 0x4, address: 0x6D1BCC
float nngProjectionMatrix[4][4]; // size: 0x40, address: 0x6DEC20
enum NNE_PROJECTION_TYPE nngProjectionType; // size: 0x4, address: 0x6D1BD0
float nngUnitMatrix[4][4]; // size: 0x40, address: 0x657F30
class NNS_CONFIG_PS2 nngConfigPs2; // size: 0x14, address: 0x6DEC60
class NNS_SCREEN nngScreen; // size: 0x30, address: 0x6DEC80
class NNS_CLIP nngClip2d; // size: 0x18, address: 0x6DECB0
class NNS_CLIP nngClip3d; // size: 0x18, address: 0x6DECD0
unsigned char nngZBuffBasePoint; // size: 0x1, address: 0x0
class NNS_GSZBUF nngGsZbuf; // size: 0x18, address: 0x5F60B0
class NNS_GSTEST nngGsTest; // size: 0x10, address: 0x5F60D0
class NNS_PRIM2D_PARAM nngPrim2dParam; // size: 0x10, address: 0x6DECF0
double nngZMulPs2; // size: 0x8, address: 0x6D1BD8
static unsigned char cb_buf[176]; // size: 0xB0, address: 0x6DED00
static class PXS_CONTEXTBUFFER * cb; // size: 0x4, address: 0x6D1C00
static signed int nnsCbCurr; // size: 0x4, address: 0x6D1C04
class NNS_PREV_PARAM_PS2 nngPrevParam; // size: 0x38, address: 0x6DEE90
class NNS_CONFIG_PS2 {
    // total size: 0x14
public:
    unsigned short GsInterMode; // offset 0x0, size 0x2
    unsigned short GsOutMode; // offset 0x2, size 0x2
    unsigned short GsFFMode; // offset 0x4, size 0x2
    unsigned short DrawBuffPsm; // offset 0x6, size 0x2
    unsigned short DrawBuffWidth; // offset 0x8, size 0x2
    unsigned short DrawBuffHeight; // offset 0xA, size 0x2
    unsigned short ResolutionWidth; // offset 0xC, size 0x2
    unsigned short ResolutionHeight; // offset 0xE, size 0x2
    unsigned short DrawBuffZbp; // offset 0x10, size 0x2
    unsigned short DrawBuffZPsm; // offset 0x12, size 0x2
};
class PXS_CONTEXTBUFFER {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class PXS_GSREG_AD reg[1]; // offset 0x10, size 0x10
};
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
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
class NNS_PRIM2D_PARAM {
    // total size: 0x10
public:
    float xbias; // offset 0x0, size 0x4
    float xmul; // offset 0x4, size 0x4
    float ybias; // offset 0x8, size 0x4
    float ymul; // offset 0xC, size 0x4
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
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};
class NNS_GSZBUF {
    // total size: 0x18
public:
    enum NNE_BOOL fForce; // offset 0x0, size 0x4
    enum NNE_BOOL fSwitch; // offset 0x4, size 0x4
    class sceGsZbuf reg[2]; // offset 0x8, size 0x10
};
class NNS_CLIP {
    // total size: 0x18
public:
    float f_clip; // offset 0x0, size 0x4
    float n_clip; // offset 0x4, size 0x4
    float x1; // offset 0x8, size 0x4
    float x0; // offset 0xC, size 0x4
    float y1; // offset 0x10, size 0x4
    float y0; // offset 0x14, size 0x4
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
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
enum NNE_PROJECTION_TYPE {
    NNE_PROJECTION_TYPE_PERSPECTIVE = 0,
    NNE_PROJECTION_TYPE_ORTHO = 1,
};

// Range: 0x13C760 -> 0x13C950
void nnInitSystemPS2() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13C760 -> 0x13C950
        float mtx[4][4]; // r29+0x10
    }
}


// Range: 0x13C950 -> 0x13CDD0
void nnConfigureSystemPS2(class NNS_CONFIG_PS2 * pConfigPs2 /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13C950 -> 0x13CDD0
    }
}


// Range: 0x13CDD0 -> 0x13CFF8
void nnSetProjection(float (* mtx)[4][4] /* r2 */, enum NNE_PROJECTION_TYPE type /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13CDD0 -> 0x13CFF8
        double a; // r19
        double b; // r18
        double znear; // r17
        class PXS_SCREENPARAM scrn; // r29+0x50
    }
}


