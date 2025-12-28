/*
    Compile unit: C:\usr\local\sega\nn\src\Matrix\nnmakematrix.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_QUATERNION {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};

// Range: 0x13BDB0 -> 0x13BDD4
void nnMakeUnitMatrix(float (* dst)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13BDB0 -> 0x13BDD4
    }
}


// Range: 0x13BDE0 -> 0x13BE70
void nnMakeQuaternionMatrix(float (* dst)[4][4] /* r2 */, class NNS_QUATERNION * quat /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13BDE0 -> 0x13BE70
    }
}


// Range: 0x13BE70 -> 0x13BEE0
void nnMakeRotateXMatrix(float (* dst)[4][4] /* r16 */, signed int ax /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13BE70 -> 0x13BEE0
        unsigned int s; // r29+0x2C
        unsigned int c; // r29+0x28
    }
}


// Range: 0x13BEE0 -> 0x13BF50
void nnMakeRotateYMatrix(float (* dst)[4][4] /* r16 */, signed int ay /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13BEE0 -> 0x13BF50
        unsigned int s; // r29+0x2C
        unsigned int c; // r29+0x28
    }
}


// Range: 0x13BF50 -> 0x13BFB8
void nnMakeRotateZMatrix(float (* dst)[4][4] /* r16 */, signed int az /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13BF50 -> 0x13BFB8
        unsigned int s; // r29+0x2C
        unsigned int c; // r29+0x28
    }
}


// Range: 0x13BFC0 -> 0x13BFF0
void nnMakeRotateYMatrixSinCos(float (* mtx)[4][4] /* r2 */, float s /* r29 */, float c /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13BFC0 -> 0x13BFF0
    }
}


// Range: 0x13BFF0 -> 0x13C01C
void nnMakeRotateZMatrixSinCos(float (* mtx)[4][4] /* r2 */, float s /* r29 */, float c /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13BFF0 -> 0x13C01C
    }
}


// Range: 0x13C020 -> 0x13C108
void nnMakeRotateXYZMatrix(float (* dst)[4][4] /* r16 */, signed int ax /* r2 */, signed int ay /* r18 */, signed int az /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13C020 -> 0x13C108
        unsigned int sx; // r29+0x5C
        unsigned int cx; // r29+0x58
        unsigned int sy; // r29+0x54
        unsigned int cy; // r29+0x50
        unsigned int sz; // r29+0x4C
        unsigned int cz; // r29+0x48
    }
}


// Range: 0x13C110 -> 0x13C200
void nnMakeRotateXZYMatrix(float (* dst)[4][4] /* r16 */, signed int ax /* r2 */, signed int ay /* r18 */, signed int az /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13C110 -> 0x13C200
        unsigned int sx; // r29+0x5C
        unsigned int cx; // r29+0x58
        unsigned int sy; // r29+0x54
        unsigned int cy; // r29+0x50
        unsigned int sz; // r29+0x4C
        unsigned int cz; // r29+0x48
    }
}


// Range: 0x13C200 -> 0x13C2F0
void nnMakeRotateZXYMatrix(float (* dst)[4][4] /* r16 */, signed int ax /* r2 */, signed int ay /* r18 */, signed int az /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13C200 -> 0x13C2F0
        unsigned int sx; // r29+0x5C
        unsigned int cx; // r29+0x58
        unsigned int sy; // r29+0x54
        unsigned int cy; // r29+0x50
        unsigned int sz; // r29+0x4C
        unsigned int cz; // r29+0x48
    }
}


// Range: 0x13C2F0 -> 0x13C3D0
void nnMakeRotateAxisMatrix(float (* dst)[4][4] /* r16 */, float vx /* r29+0x30 */, float vy /* r29+0x30 */, float vz /* r29+0x30 */, signed int ang /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13C2F0 -> 0x13C3D0
        unsigned int s; // r29+0x2C
        unsigned int c; // r29+0x28
    }
}


// Range: 0x13C3D0 -> 0x13C3F0
void nnMakeScaleMatrix(float (* dst)[4][4] /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13C3D0 -> 0x13C3F0
    }
}


// Range: 0x13C3F0 -> 0x13C420
void nnMakeTranslateMatrix(float (* dst)[4][4] /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13C3F0 -> 0x13C420
    }
}


// Range: 0x13C420 -> 0x13C598
void nnMakePerspectiveMatrix(float (* mtx)[4][4] /* r16 */, signed int fovy /* r2 */, float aspect /* r20 */, float znear /* r22 */, float zfar /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13C420 -> 0x13C598
        double cot; // r17
    }
}


// Range: 0x13C5A0 -> 0x13C758
void nnMakeOrthoMatrix(float (* mtx)[4][4] /* r16 */, float left /* r26 */, float right /* r25 */, float bottom /* r24 */, float top /* r23 */, float znear /* r22 */, float zfar /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13C5A0 -> 0x13C758
    }
}


