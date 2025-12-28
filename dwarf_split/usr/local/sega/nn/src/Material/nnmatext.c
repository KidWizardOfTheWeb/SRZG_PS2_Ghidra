/*
    Compile unit: C:\usr\local\sega\nn\src\Material\nnmatext.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NVS_SVROBJ nngIgnoreTex5551SvrObj; // size: 0x30, address: 0x6DE610
class NVS_SVROBJ nngIgnoreTex8888SvrObj; // size: 0x30, address: 0x6DE640
static unsigned char cb_buf[64]; // size: 0x40, address: 0x6DE680
static class PXS_CONTEXTBUFFER * cb; // size: 0x4, address: 0x6D1BC0
static signed int nnsCbCurr; // size: 0x4, address: 0x6D1BC4
class NNS_MATERIAL_SINGLE nngMonoWireMaterial[]; // size: 0x0, address: 0x5F8A80
class NNS_RGBA_U8 nngWireColor; // size: 0x4, address: 0x6D1DC4
unsigned int nngWireType; // size: 0x4, address: 0x6D1DC8
float nngDivColorAlpha; // size: 0x4, address: 0x6D1DD4
float nngNormalLength; // size: 0x4, address: 0x6D1DD0
class NNS_RGBA_U8 nngNormalColor; // size: 0x4, address: 0x6D1DCC
class NNS_DRAW_PARAM_PS2 nngDrawParam; // size: 0x14, address: 0x6DEE70
class NNS_GSZBUF nngGsZbuf; // size: 0x18, address: 0x5F60B0
unsigned char nngIgnoreTexture8888[]; // size: 0x0, address: 0x5F8CC0
unsigned char nngIgnoreTexture5551[]; // size: 0x0, address: 0x5F8C40
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
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};
class PXS_CONTEXTBUFFER {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class PXS_GSREG_AD reg[1]; // offset 0x10, size 0x10
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
class NNS_MATERIAL_TEXMAP_DESC {
    // total size: 0x20
public:
    unsigned int fTexMapType; // offset 0x0, size 0x4
    unsigned short fTexWrapMode; // offset 0x4, size 0x2
    unsigned short iTexIdx; // offset 0x6, size 0x2
    class NNS_TEXCOORD Offset; // offset 0x8, size 0x8
    unsigned int GsTexA; // offset 0x10, size 0x4
    unsigned short GsTexLODL; // offset 0x14, size 0x2
    signed short GsTexLODK; // offset 0x16, size 0x2
    unsigned short GsClampMINU; // offset 0x18, size 0x2
    unsigned short GsClampMAXU; // offset 0x1A, size 0x2
    unsigned short GsClampMINV; // offset 0x1C, size 0x2
    unsigned short GsClampMAXV; // offset 0x1E, size 0x2
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
class NNS_RGB {
    // total size: 0xC
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
};
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
};
class PXS_PRMODESET {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    unsigned int prmode0; // offset 0x10, size 0x4
    unsigned int prmode1; // offset 0x14, size 0x4
    unsigned long prmodeaddr; // offset 0x18, size 0x4
};
class NNS_MATERIAL_SINGLE {
    // total size: 0x70
public:
    class NNS_RGB Diffuse; // offset 0x0, size 0xC
    float Specular; // offset 0xC, size 0x4
    class NNS_RGB Ambient; // offset 0x10, size 0xC
    float Alpha; // offset 0x1C, size 0x4
    class NNS_RGBA Emissive; // offset 0x20, size 0x10
    float Power; // offset 0x30, size 0x4
    float ColorClamp; // offset 0x34, size 0x4
    float AlphaClamp; // offset 0x38, size 0x4
    unsigned int GsTest; // offset 0x3C, size 0x4
    unsigned int fMatFlag; // offset 0x40, size 0x4
    unsigned int fGsPrimMode; // offset 0x44, size 0x4
    unsigned int GsAlpha; // offset 0x48, size 0x4
    unsigned int User; // offset 0x4C, size 0x4
    class NNS_MATERIAL_TEXMAP_DESC TexDesc[1]; // offset 0x50, size 0x20
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
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
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
class NNS_DRAW_PARAM_PS2 {
    // total size: 0x14
public:
    unsigned int usealpha; // offset 0x0, size 0x4
    unsigned int shader; // offset 0x4, size 0x4
    unsigned int shadermaterial; // offset 0x8, size 0x4
    unsigned int texmark; // offset 0xC, size 0x4
    enum NNE_BOOL enablefastshadersub; // offset 0x10, size 0x4
};
class PXS_NORMALPARAM {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    float lx; // offset 0x10, size 0x4
    float ly; // offset 0x14, size 0x4
    float lz; // offset 0x18, size 0x4
    float lw; // offset 0x1C, size 0x4
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
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};

// Range: 0x138990 -> 0x138B04
void nnSetWireColor(float r /* r29 */, float g /* r29 */, float b /* r29 */, float a /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138990 -> 0x138B04
    }
}


// Range: 0x138B10 -> 0x138B58
void nnPutSubMaterialWire() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138B10 -> 0x138B58
        class PXS_WIREPARAM wp; // r29+0x10
    }
}


// Range: 0x138B60 -> 0x138B68
void nnSetDrawObjectDivColorAlpha(float a /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138B60 -> 0x138B68
    }
}


// Range: 0x138B70 -> 0x138B78
void nnSetNormalLength(float len /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138B70 -> 0x138B78
    }
}


// Range: 0x138B80 -> 0x138CD4
void nnSetNormalColor(float r /* r29 */, float g /* r29 */, float b /* r29 */, float a /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138B80 -> 0x138CD4
    }
}


// Range: 0x138CE0 -> 0x138DE0
void nnPutMaterialNormal() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138CE0 -> 0x138DE0
        class PXS_PRMODESET prmode; // r29+0x30
        class PXS_NORMALPARAM norm; // r29+0x10
    }
}


// Range: 0x138DE0 -> 0x138F18
void nnLoadIgnoreTexture(void * tex5551 /* r4 */, void * tex8888 /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138DE0 -> 0x138F18
        class NVS_SVRHEADER svrh; // r29+0x28
    }
}


// Range: 0x138F20 -> 0x138F4C
void nnReleaseIgnoreTexture() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138F20 -> 0x138F4C
    }
}


