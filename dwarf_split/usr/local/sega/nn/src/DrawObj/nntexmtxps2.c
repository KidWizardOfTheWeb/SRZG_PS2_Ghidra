/*
    Compile unit: C:\usr\local\sega\nn\src\DrawObj\nntexmtxps2.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
float (* nngpTextureMatrix)[4][4]; // size: 0x4, address: 0x6D1B80
void (* nngPutEnvTextureMatrixFunc)(float (*)[4][4], enum PXE_TRANSFORM); // size: 0x4, address: 0x6D1A88
void nnPutEnvTextureMatrix(float (*)[4][4], enum PXE_TRANSFORM); // size: 0x0, address: 0x1387E0
void nnPutEnvTextureMatrixNormalize(float (*)[4][4], enum PXE_TRANSFORM); // size: 0x0, address: 0x138860
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};
enum PXE_TRANSFORM {
    PXE_TRANSFORM_LIGHT = 0,
    PXE_TRANSFORM_VIEWPROJ = 1,
    PXE_TRANSFORM_TEXTURE1 = 2,
    PXE_TRANSFORM_TEXTURE2 = 3,
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};

// Range: 0x1387D0 -> 0x1387D8
void nnSetTextureMatrixPS2(float (* mtx)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1387D0 -> 0x1387D8
    }
}


// Range: 0x1387E0 -> 0x138860
void nnPutEnvTextureMatrix(float (* mtx)[4][4] /* r2 */, enum PXE_TRANSFORM transtex /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1387E0 -> 0x138860
        float mtxTex[4][4]; // r29+0x60
        float mtxEnv[4][4]; // r29+0x20
    }
}


// Range: 0x138860 -> 0x13893C
void nnPutEnvTextureMatrixNormalize(float (* mtx)[4][4] /* r17 */, enum PXE_TRANSFORM transtex /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138860 -> 0x13893C
        float mtxEnv[4][4]; // r29+0x90
        class NNS_VECTORFAST xvec; // r29+0x80
        class NNS_VECTORFAST yvec; // r29+0x70
        float m[4][4]; // r29+0x30
        float em0; // r29+0xD0
        float em1; // r29+0xD0
    }
}


// Range: 0x138940 -> 0x13897C
void nnPutProjTextureMatrix(float (* mtx)[4][4] /* r2 */, enum PXE_TRANSFORM transtex /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138940 -> 0x13897C
        float mtxTex[4][4]; // r29+0x20
    }
}


// Range: 0x138980 -> 0x138990
void nnPutTextureMatrix(float (* mtx)[4][4] /* r2 */, enum PXE_TRANSFORM transtex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138980 -> 0x138990
    }
}


