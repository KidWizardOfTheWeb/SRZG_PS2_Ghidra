/*
    Compile unit: C:\usr\local\sega\nn\src\Matrix\nnmatrixstack.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_MATRIXSTACK {
    // total size: 0x10
public:
    unsigned int nMtx; // offset 0x0, size 0x4
    unsigned int StackIdx; // offset 0x4, size 0x4
    float (* pStackTop)[4][4]; // offset 0x8, size 0x4
    float (* pCurrent)[4][4]; // offset 0xC, size 0x4
};

// Range: 0x137AA0 -> 0x137AB8
void nnSetUpMatrixStack(class NNS_MATRIXSTACK * mstk /* r2 */, void * buf /* r2 */, unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x137AA0 -> 0x137AB8
    }
}


// Range: 0x137AC0 -> 0x137AC8
float (* nnGetCurrentMatrix(class NNS_MATRIXSTACK * mstk /* r2 */))[4][4] {
    // Blocks
    /* anonymous block */ {
        // Range: 0x137AC0 -> 0x137AC8
    }
}


// Range: 0x137AD0 -> 0x137AD8
void nnSetCurrentMatrix(class NNS_MATRIXSTACK * mstk /* r2 */, float (* mtx)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x137AD0 -> 0x137AD8
    }
}


// Range: 0x137AE0 -> 0x137B4C
void nnPushMatrix(class NNS_MATRIXSTACK * mstk /* r16 */, float (* mtx)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x137AE0 -> 0x137B4C
    }
}


// Range: 0x137B50 -> 0x137B7C
void nnPopMatrix(class NNS_MATRIXSTACK * mstk /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x137B50 -> 0x137B7C
    }
}


