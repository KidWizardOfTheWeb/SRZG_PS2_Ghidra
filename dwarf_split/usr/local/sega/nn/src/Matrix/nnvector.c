/*
    Compile unit: C:\usr\local\sega\nn\src\Matrix\nnvector.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class NNS_VECTOR4D {
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

// Range: 0x131FF0 -> 0x132024
void nnAddVector(class NNS_VECTOR * dst /* r2 */, class NNS_VECTOR * vec1 /* r2 */, class NNS_VECTOR * vec2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x131FF0 -> 0x132024
    }
}


// Range: 0x132030 -> 0x132070
void nnCrossProductVector(class NNS_VECTOR * dst /* r2 */, class NNS_VECTOR * vec1 /* r2 */, class NNS_VECTOR * vec2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132030 -> 0x132070
    }
}


// Range: 0x132070 -> 0x132078
void nnCopyVector(class NNS_VECTOR * dst /* r2 */, class NNS_VECTOR * src /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132070 -> 0x132078
    }
}


// Range: 0x132080 -> 0x1320A8
float nnDotProductVector(class NNS_VECTOR * vec1 /* r2 */, class NNS_VECTOR * vec2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132080 -> 0x1320A8
    }
}


// Range: 0x1320B0 -> 0x1320CC
float nnLengthVector(class NNS_VECTOR * vec /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1320B0 -> 0x1320CC
        float n; // r29
    }
}


// Range: 0x1320D0 -> 0x132104
float nnDistanceVector(class NNS_VECTOR * vec1 /* r2 */, class NNS_VECTOR * vec2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1320D0 -> 0x132104
        float dx; // r29
        float dy; // r29
        float dz; // r29
    }
}


// Range: 0x132110 -> 0x1321A8
enum NNE_BOOL nnNormalizeVector(class NNS_VECTOR * dst /* r17 */, class NNS_VECTOR * src /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132110 -> 0x1321A8
        float n; // r29+0x30
    }
}


// Range: 0x1321B0 -> 0x1321D8
void nnScaleVector(class NNS_VECTOR * dst /* r2 */, class NNS_VECTOR * src /* r2 */, float scale /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1321B0 -> 0x1321D8
    }
}


// Range: 0x1321E0 -> 0x132228
void nnScaleAddVector(class NNS_VECTOR * dst /* r2 */, class NNS_VECTOR * vec1 /* r2 */, class NNS_VECTOR * vec2 /* r2 */, float scale /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1321E0 -> 0x132228
        float y; // r29
        float z; // r29
    }
}


// Range: 0x132230 -> 0x132264
void nnSubtractVector(class NNS_VECTOR * dst /* r2 */, class NNS_VECTOR * vec1 /* r2 */, class NNS_VECTOR * vec2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132230 -> 0x132264
    }
}


// Range: 0x132270 -> 0x1322EC
void nnTransformVector(class NNS_VECTOR * dst /* r2 */, float (* mtx)[4][4] /* r2 */, class NNS_VECTOR * src /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132270 -> 0x1322EC
        float y; // r29
        float z; // r29
    }
}


// Range: 0x1322F0 -> 0x132354
void nnTransformNormalVector(class NNS_VECTOR * dst /* r2 */, float (* mtx)[4][4] /* r2 */, class NNS_VECTOR * src /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1322F0 -> 0x132354
        float y; // r29
        float z; // r29
    }
}


// Range: 0x132360 -> 0x132378
void nnSetUpVectorFast(class NNS_VECTORFAST * dst /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132360 -> 0x132378
    }
}


// Range: 0x132380 -> 0x1323BC
void nnAddVectorFast(class NNS_VECTORFAST * dst /* r2 */, class NNS_VECTORFAST * vec1 /* r2 */, class NNS_VECTORFAST * vec2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132380 -> 0x1323BC
    }
}


// Range: 0x1323C0 -> 0x132408
void nnCrossProductVectorFast(class NNS_VECTORFAST * dst /* r2 */, class NNS_VECTORFAST * vec1 /* r2 */, class NNS_VECTORFAST * vec2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1323C0 -> 0x132408
    }
}


// Range: 0x132410 -> 0x132418
void nnCopyVectorFast(class NNS_VECTORFAST * dst /* r2 */, class NNS_VECTORFAST * src /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132410 -> 0x132418
    }
}


// Range: 0x132420 -> 0x132448
float nnDotProductVectorFast(class NNS_VECTORFAST * vec1 /* r2 */, class NNS_VECTORFAST * vec2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132420 -> 0x132448
    }
}


// Range: 0x132450 -> 0x13246C
float nnLengthVectorFast(class NNS_VECTORFAST * vec /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132450 -> 0x13246C
        float n; // r29
    }
}


// Range: 0x132470 -> 0x1324A4
float nnDistanceVectorFast(class NNS_VECTORFAST * vec1 /* r2 */, class NNS_VECTORFAST * vec2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132470 -> 0x1324A4
        float dx; // r29
        float dy; // r29
        float dz; // r29
    }
}


// Range: 0x1324B0 -> 0x1324CC
float nnLengthSqVectorFast(class NNS_VECTORFAST * vec /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1324B0 -> 0x1324CC
    }
}


// Range: 0x1324D0 -> 0x132504
float nnDistanceSqVectorFast(class NNS_VECTORFAST * vec1 /* r2 */, class NNS_VECTORFAST * vec2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1324D0 -> 0x132504
        float dx; // r29
        float dy; // r29
        float dz; // r29
    }
}


// Range: 0x132510 -> 0x1325B4
enum NNE_BOOL nnNormalizeVectorFast(class NNS_VECTORFAST * dst /* r17 */, class NNS_VECTORFAST * src /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132510 -> 0x1325B4
        float n; // r29+0x30
        float y; // r29+0x30
        float z; // r29+0x30
    }
}


// Range: 0x1325C0 -> 0x1325F0
void nnScaleVectorFast(class NNS_VECTORFAST * dst /* r2 */, class NNS_VECTORFAST * src /* r2 */, float scale /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1325C0 -> 0x1325F0
        float y; // r29
        float z; // r29
    }
}


// Range: 0x1325F0 -> 0x132640
void nnScaleAddVectorFast(class NNS_VECTORFAST * dst /* r2 */, class NNS_VECTORFAST * vec1 /* r2 */, class NNS_VECTORFAST * vec2 /* r2 */, float scale /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1325F0 -> 0x132640
        float y; // r29
        float z; // r29
    }
}


// Range: 0x132640 -> 0x13267C
void nnSubtractVectorFast(class NNS_VECTORFAST * dst /* r2 */, class NNS_VECTORFAST * vec1 /* r2 */, class NNS_VECTORFAST * vec2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132640 -> 0x13267C
        float y; // r29
        float z; // r29
    }
}


// Range: 0x132680 -> 0x132704
void nnTransformVectorFast(class NNS_VECTORFAST * dst /* r2 */, float (* mtx)[4][4] /* r2 */, class NNS_VECTORFAST * src /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132680 -> 0x132704
        float y; // r29
        float z; // r29
    }
}


// Range: 0x132710 -> 0x13277C
void nnTransformNormalVectorFast(class NNS_VECTORFAST * dst /* r2 */, float (* mtx)[4][4] /* r2 */, class NNS_VECTORFAST * src /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132710 -> 0x13277C
        float y; // r29
        float z; // r29
    }
}


// Range: 0x132780 -> 0x13278C
void nnCopyMatrixTranslationVector(class NNS_VECTOR * dst /* r2 */, float (* mtx)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132780 -> 0x13278C
    }
}


// Range: 0x132790 -> 0x13279C
void nnCopyMatrixTranslationVectorFast(class NNS_VECTORFAST * dst /* r2 */, float (* mtx)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x132790 -> 0x13279C
    }
}


