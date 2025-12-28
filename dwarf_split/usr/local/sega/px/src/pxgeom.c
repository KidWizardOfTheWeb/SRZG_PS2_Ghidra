/*
    Compile unit: C:\usr\local\sega\px\src\pxgeom.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class PXS_FXYZW pxgLightMatrix[8]; // size: 0x80, address: 0x6E64D0
class PXS_FXYZW pxgLight[4]; // size: 0x40, address: 0x6E6550
class tagPXS_PUSHBUFFER * pxgCurrentPB; // size: 0x4, address: 0x6D1F08
class PXS_FXYZW pxgVuClipParam[2]; // size: 0x20, address: 0x5FAF20
class PXS_MATRIX pxgViewMatrix; // size: 0x40, address: 0x6E6590
class PXS_SCREENPARAM pxgScreenParam; // size: 0x20, address: 0x6E66A0
class PXS_SUBSHADERPARAM pxgSubShaderParam; // size: 0x30, address: 0x6E6670
class PXS_MATRIX {
    // total size: 0x40
public:
    union { // inferred
        float m[4][4]; // offset 0x0, size 0x40
        struct { // inferred
            float _11; // offset 0x0, size 0x4
            float _12; // offset 0x4, size 0x4
            float _13; // offset 0x8, size 0x4
            float _14; // offset 0xC, size 0x4
            float _21; // offset 0x10, size 0x4
            float _22; // offset 0x14, size 0x4
            float _23; // offset 0x18, size 0x4
            float _24; // offset 0x1C, size 0x4
            float _31; // offset 0x20, size 0x4
            float _32; // offset 0x24, size 0x4
            float _33; // offset 0x28, size 0x4
            float _34; // offset 0x2C, size 0x4
            float _41; // offset 0x30, size 0x4
            float _42; // offset 0x34, size 0x4
            float _43; // offset 0x38, size 0x4
            float _44; // offset 0x3C, size 0x4
        };
    };
};
class PXS_MATERIAL {
    // total size: 0x40
public:
    float diffuse[3]; // offset 0x0, size 0xC
    union { // inferred
        float alpha; // offset 0xC, size 0x4
        float specular; // offset 0xC, size 0x4
    };
    float ambient[4]; // offset 0x10, size 0x10
    float emissive[4]; // offset 0x20, size 0x10
    float power; // offset 0x30, size 0x4
    float colorClamp; // offset 0x34, size 0x4
    float alphaClamp; // offset 0x38, size 0x4
    float reserved; // offset 0x3C, size 0x4
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
class PXS_NORMALPARAM {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    float lx; // offset 0x10, size 0x4
    float ly; // offset 0x14, size 0x4
    float lz; // offset 0x18, size 0x4
    float lw; // offset 0x1C, size 0x4
};
class PXS_FXYZW {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class PXS_PARTICLEMATERIAL2 {
    // total size: 0x30
public:
    unsigned int giftag_tristrip[4]; // offset 0x0, size 0x10
    unsigned int giftag_eop[4]; // offset 0x10, size 0x10
    float r; // offset 0x20, size 0x4
    float g; // offset 0x24, size 0x4
    float b; // offset 0x28, size 0x4
    float a; // offset 0x2C, size 0x4
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
class PXS_SHADOWPARAM {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float len; // offset 0xC, size 0x4
};
class PXS_PRMODESET {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    unsigned int prmode0; // offset 0x10, size 0x4
    unsigned int prmode1; // offset 0x14, size 0x4
    unsigned long prmodeaddr; // offset 0x18, size 0x4
};
class PXS_PARTICLEMATERIAL {
    // total size: 0x30
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float rsvd0; // offset 0x8, size 0x4
    float rsvd1; // offset 0xC, size 0x4
    float s0; // offset 0x10, size 0x4
    float t0; // offset 0x14, size 0x4
    float q0; // offset 0x18, size 0x4
    float rsvd2; // offset 0x1C, size 0x4
    float s1; // offset 0x20, size 0x4
    float t1; // offset 0x24, size 0x4
    float q1; // offset 0x28, size 0x4
    float rsvd3; // offset 0x2C, size 0x4
};
enum PXE_CULL {
    PXE_CULL_NONE = 0,
    PXE_CULL_CW = 1,
    PXE_CULL_CCW = 2,
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
class PXS_SUBSHADERPARAM {
    // total size: 0x30
public:
    float uOfs; // offset 0x0, size 0x4
    float vOfs; // offset 0x4, size 0x4
    float rsvd0; // offset 0x8, size 0x4
    float fa; // offset 0xC, size 0x4
    float uScale; // offset 0x10, size 0x4
    float vScale; // offset 0x14, size 0x4
    float rsvd1; // offset 0x18, size 0x4
    float fb; // offset 0x1C, size 0x4
    unsigned int scisMode; // offset 0x20, size 0x4
    unsigned int triFan; // offset 0x24, size 0x4
    unsigned int rsvd2; // offset 0x28, size 0x4
    float fognear; // offset 0x2C, size 0x4
};
enum PXE_TRANSFORM {
    PXE_TRANSFORM_LIGHT = 0,
    PXE_TRANSFORM_VIEWPROJ = 1,
    PXE_TRANSFORM_TEXTURE1 = 2,
    PXE_TRANSFORM_TEXTURE2 = 3,
};
enum PXE_LIGHT {
    PXE_LIGHT_0 = 0,
    PXE_LIGHT_1 = 1,
    PXE_LIGHT_2 = 2,
};

// Range: 0x15A6F0 -> 0x15A72C
void PXNormalizeVector(class PXS_FXYZW * v0 /* r2 */, class PXS_FXYZW * v1 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A6F0 -> 0x15A72C
    }
}


// Range: 0x15A730 -> 0x15A75C
void PXSetLightColor(enum PXE_LIGHT num /* r2 */, float r /* r29 */, float g /* r29 */, float b /* r29 */, float a /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A730 -> 0x15A75C
        class PXS_FXYZW * p; // r2
    }
}


// Range: 0x15A760 -> 0x15A794
void PXSetLightVector(enum PXE_LIGHT num /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A760 -> 0x15A794
        class PXS_FXYZW * p; // r2
    }
}


// Range: 0x15A7A0 -> 0x15A7BC
void PXSetAmbientColor(float r /* r29 */, float g /* r29 */, float b /* r29 */, float a /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A7A0 -> 0x15A7BC
        class PXS_FXYZW * p; // r2
    }
}


// Range: 0x15A7C0 -> 0x15A7D0
void PXPutMaterial(class PXS_MATERIAL * mat /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A7C0 -> 0x15A7D0
    }
}


// Range: 0x15A7D0 -> 0x15A7E0
void PXPutMaterial2(class PXS_MATERIAL * mat /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A7D0 -> 0x15A7E0
    }
}


// Range: 0x15A7E0 -> 0x15A7E8
void * PXGetLastShaderConstAddr() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A7E0 -> 0x15A7E8
    }
}


// Range: 0x15A7F0 -> 0x15A800
void PXReferMaterial(class PXS_MATERIAL * mat /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A7F0 -> 0x15A800
    }
}


// Range: 0x15A800 -> 0x15A810
void PXReferMaterial2(class PXS_MATERIAL * mat /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A800 -> 0x15A810
    }
}


// Range: 0x15A810 -> 0x15A840
void PXSetupPrimMode(class PXS_PRMODESET * prmode /* r2 */, unsigned int prmode0 /* r2 */, unsigned int prmode1 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A810 -> 0x15A840
    }
}


// Range: 0x15A840 -> 0x15A850
void PXPutPrimMode(class PXS_PRMODESET * prmode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A840 -> 0x15A850
    }
}


// Range: 0x15A850 -> 0x15A884
void PXPutClipParam(enum PXE_CULL cullmode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A850 -> 0x15A884
        float cullmode_tbl[3]; // @ 0x005FAF40
    }
}


// Range: 0x15A890 -> 0x15A8AC
void PXPutNearZ(float nearz /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A890 -> 0x15A8AC
    }
}


// Range: 0x15A8B0 -> 0x15A8F4
void PXTransposeMatrix(class PXS_MATRIX * dst /* r2 */, class PXS_MATRIX * src /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A8B0 -> 0x15A8F4
    }
}


// Range: 0x15A900 -> 0x15A9DC
void PXCalcLightMatrix(class PXS_MATRIX * p /* r2 */, class PXS_FXYZW * l /* r2 */, class PXS_MATRIX * v /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A900 -> 0x15A9DC
    }
}


// Range: 0x15A9E0 -> 0x15AB68
void PXCalcLightMatrix2(class PXS_MATRIX * p /* r2 */, class PXS_FXYZW * l /* r2 */, class PXS_MATRIX * v /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A9E0 -> 0x15AB68
    }
}


// Range: 0x15AB70 -> 0x15AC70
void PXPutLightMatrix(void * mtx /* r4 */, unsigned int flag /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15AB70 -> 0x15AC70
        class PXS_MATRIX * p; // r17
        class PXS_FXYZW * l; // r2
        class PXS_FXYZW tmp[4]; // r29+0x40
        class PXS_MATRIX * v; // r16
    }
}


// Range: 0x15AC70 -> 0x15AD70
void PXPutLightVector(void * mtx /* r4 */, unsigned int flag /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15AC70 -> 0x15AD70
        class PXS_MATRIX * p; // r17
        class PXS_FXYZW * l; // r2
        class PXS_FXYZW tmp[4]; // r29+0x40
        class PXS_MATRIX * v; // r16
    }
}


// Range: 0x15AD70 -> 0x15AD88
void PXPutLightColor() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15AD70 -> 0x15AD88
    }
}


// Range: 0x15AD90 -> 0x15ADA8
void PXPutShaderConst(unsigned int vumem /* r4 */, void * addr /* r2 */, unsigned int qwc /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15AD90 -> 0x15ADA8
    }
}


// Range: 0x15ADB0 -> 0x15ADC8
void PXReferShaderConst(unsigned int vumem /* r4 */, void * addr /* r2 */, unsigned int qwc /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15ADB0 -> 0x15ADC8
    }
}


// Range: 0x15ADD0 -> 0x15AE08
void PXPutBoneMatrix(class PXS_MATRIX * mtx /* r4 */, signed int ofs /* r2 */, signed int num /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15ADD0 -> 0x15AE08
    }
}


// Range: 0x15AE10 -> 0x15AE3C
void PXMakeScreenParam(class PXS_SCREENPARAM * p /* r2 */, float width /* r29 */, float height /* r29 */, float cx /* r29 */, float cy /* r29 */, float zmul /* r29 */, float zbias /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15AE10 -> 0x15AE3C
    }
}


// Range: 0x15AE40 -> 0x15AE6C
void PXPutScreenParam(class PXS_SCREENPARAM * p /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15AE40 -> 0x15AE6C
        __int128 * d; // r2
        __int128 * s; // r2
    }
}


// Range: 0x15AE70 -> 0x15AE8C
void PXGetScreenParam(class PXS_SCREENPARAM * p /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15AE70 -> 0x15AE8C
        __int128 * d; // r2
        __int128 * s; // r2
    }
}


// Range: 0x15AE90 -> 0x15AF2C
void PXPutTransform(enum PXE_TRANSFORM type /* r2 */, void * mtx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15AE90 -> 0x15AF2C
    }
}


// Range: 0x15AF30 -> 0x15AFB0
void PXPutViewProjection(void * mtx /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15AF30 -> 0x15AFB0
        unsigned int * p; // r2
        __int128 * d128; // r2
        __int128 * s128; // r2
    }
}


// Range: 0x15AFB0 -> 0x15B01C
void PXInitSubShaderParam() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15AFB0 -> 0x15B01C
    }
}


// Range: 0x15B020 -> 0x15B0C8
void PXSetFogRange(float FogNear /* r29 */, float FogFar /* r29 */, float Fmin /* r29 */, float Fmax /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B020 -> 0x15B0C8
        float fa; // r29
        float fb; // r29
        class PXS_SUBSHADERPARAM * p; // r2
    }
}


// Range: 0x15B0D0 -> 0x15B0F4
void PXSetUvParam(float uoffset /* r29 */, float voffset /* r29 */, float uscale /* r29 */, float vscale /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B0D0 -> 0x15B0F4
    }
}


// Range: 0x15B100 -> 0x15B10C
void PXSetScissorMode(signed int mode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B100 -> 0x15B10C
    }
}


// Range: 0x15B110 -> 0x15B128
void PXPutSubShaderParam() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B110 -> 0x15B128
    }
}


// Range: 0x15B130 -> 0x15B164
void PXMakeNormalParam(class PXS_NORMALPARAM * param /* r2 */, float len /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B130 -> 0x15B164
    }
}


// Range: 0x15B170 -> 0x15B184
void PXPutNormalParam(class PXS_NORMALPARAM * param /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B170 -> 0x15B184
    }
}


// Range: 0x15B190 -> 0x15B1D0
void PXMakeWireParam(class PXS_WIREPARAM * param /* r2 */, unsigned int mode /* r2 */, unsigned int colflag /* r2 */, unsigned int prim /* r2 */, unsigned int r /* r2 */, unsigned int g /* r2 */, unsigned int b /* r2 */, unsigned int a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B190 -> 0x15B1D0
    }
}


// Range: 0x15B1D0 -> 0x15B1E4
void PXPutWireParam(class PXS_WIREPARAM * param /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15B1D0 -> 0x15B1E4
    }
}


