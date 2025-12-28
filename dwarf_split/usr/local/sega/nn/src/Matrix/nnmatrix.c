/*
    Compile unit: C:\usr\local\sega\nn\src\Matrix\nnmatrix.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class NNS_QUATERNION {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};

// Range: 0x1327A0 -> 0x1327C4
void nnCopyMatrix(float (* dst)[4][4] /* r2 */, float (* src)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1327A0 -> 0x1327C4
    }
}


// Range: 0x1327D0 -> 0x132904
enum NNE_BOOL nnInvertMatrix(float (* dst)[4][4] /* r2 */, float (* src)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1327D0 -> 0x132904
    }
}


// Range: 0x132910 -> 0x13297C
void nnInvertOrthoMatrix(float (* dst)[4][4] /* r2 */, float (* src)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132910 -> 0x13297C
    }
}


// Range: 0x132980 -> 0x1329F4
void nnMultiplyMatrix(float (* dst)[4][4] /* r2 */, float (* mtx1)[4][4] /* r2 */, float (* mtx2)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132980 -> 0x1329F4
    }
}


// Range: 0x132A00 -> 0x132ABC
void nnQuaternionMatrix(float (* dst)[4][4] /* r2 */, float (* src)[4][4] /* r2 */, class NNS_QUATERNION * quat /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132A00 -> 0x132ABC
    }
}


// Range: 0x132AC0 -> 0x132B40
void nnRotateXMatrix(float (* dst)[4][4] /* r17 */, float (* src)[4][4] /* r16 */, signed int ax /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132AC0 -> 0x132B40
        unsigned int cos; // r29+0x3C
        unsigned int sin; // r29+0x38
    }
}


// Range: 0x132B40 -> 0x132BC0
void nnRotateYMatrix(float (* dst)[4][4] /* r17 */, float (* src)[4][4] /* r16 */, signed int ay /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132B40 -> 0x132BC0
        unsigned int cos; // r29+0x3C
        unsigned int sin; // r29+0x38
    }
}


// Range: 0x132BC0 -> 0x132C40
void nnRotateZMatrix(float (* dst)[4][4] /* r17 */, float (* src)[4][4] /* r16 */, signed int az /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132BC0 -> 0x132C40
        unsigned int cos; // r29+0x3C
        unsigned int sin; // r29+0x38
    }
}


// Range: 0x132C40 -> 0x132CC0
void nnRotateXYZMatrix(float (* dst)[4][4] /* r18 */, float (* src)[4][4] /* r2 */, signed int ax /* r17 */, signed int ay /* r16 */, signed int az /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132C40 -> 0x132CC0
    }
}


// Range: 0x132CC0 -> 0x132D40
void nnRotateZXYMatrix(float (* dst)[4][4] /* r18 */, float (* src)[4][4] /* r2 */, signed int ax /* r17 */, signed int ay /* r2 */, signed int az /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132CC0 -> 0x132D40
    }
}


// Range: 0x132D40 -> 0x132D88
void nnScaleMatrix(float (* dst)[4][4] /* r2 */, float (* src)[4][4] /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132D40 -> 0x132D88
    }
}


// Range: 0x132D90 -> 0x132DE0
void nnTranslateMatrix(float (* dst)[4][4] /* r2 */, float (* src)[4][4] /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132D90 -> 0x132DE0
    }
}


// Range: 0x132DE0 -> 0x132DF8
void nnCopyVectorMatrixTranslation(float (* mtx)[4][4] /* r2 */, class NNS_VECTOR * vec /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132DE0 -> 0x132DF8
    }
}


// Range: 0x132E00 -> 0x132E0C
void nnCopyVectorFastMatrixTranslation(float (* mtx)[4][4] /* r2 */, class NNS_VECTORFAST * vec /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132E00 -> 0x132E0C
    }
}


