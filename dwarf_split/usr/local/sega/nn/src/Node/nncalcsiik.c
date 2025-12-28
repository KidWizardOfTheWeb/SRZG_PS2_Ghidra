/*
    Compile unit: C:\usr\local\sega\nn\src\Node\nncalcsiik.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};

// Range: 0x149FD0 -> 0x14A128
void nnCalc1BoneSIIK(float (* jnt1mtx)[4][4] /* r18 */, float (* jnt1motmtx)[4][4] /* r17 */, float (* effmtx)[4][4] /* r16 */, float lbone1 /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x149FD0 -> 0x14A128
        class NNS_VECTORFAST effpos; // r29+0xD0
        float invmtx[4][4]; // r29+0x90
        float effrotmtx[4][4]; // r29+0x50
        float sclb1; // r20
    }
}


// Range: 0x14A130 -> 0x14A448
void nnCalc2BoneSIIK(float (* jnt1mtx)[4][4] /* r21 */, float (* jnt1motmtx)[4][4] /* r20 */, float (* jnt2mtx)[4][4] /* r19 */, float (* jnt2motmtx)[4][4] /* r18 */, float (* effmtx)[4][4] /* r17 */, float lbone1 /* r20 */, float lbone2 /* r25 */, enum NNE_BOOL zpref /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14A130 -> 0x14A448
        float jnt1sin; // r29+0x14C
        float jnt1cos; // r29+0x148
        float jnt2sin; // r29+0x144
        float jnt2cos; // r29+0x140
        float sclb1; // r24
        float sclb2; // r23
        class NNS_VECTORFAST effpos; // r29+0x130
        float leff; // r22
        float tmpmtx[4][4]; // r29+0xF0
        float effrotmtx[4][4]; // r29+0xB0
        class NNS_VECTORFAST jnt1pos; // r29+0xA0
        class NNS_VECTORFAST jnt2pos; // r29+0x90
    }
}


// Range: 0x14A450 -> 0x14A4FC
void nnAdjustMatrixXaxis(float (* mtx)[4][4] /* r17 */, class NNS_VECTORFAST * pos /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14A450 -> 0x14A4FC
        float scal1; // r29+0x40
        float scal2; // r29+0x40
        float invsqrt1; // r29+0x40
        float invsqrt2; // r29+0x40
    }
}


// Range: 0x14A500 -> 0x14A64C
void nnCalcCosineTheorem2(float * sin0 /* r19 */, float * cos0 /* r18 */, float * sin1 /* r17 */, float * cos1 /* r16 */, float a /* r29+0x60 */, float b /* r29+0x60 */, float c /* r29+0x60 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14A500 -> 0x14A64C
        float ab2; // r29+0x60
        float ac2; // r29+0x60
        float aa; // r29+0x60
        float bb; // r29+0x60
        float cc; // r29+0x60
        float tcos0; // r21
        float tcos1; // r20
    }
}


// Range: 0x14A650 -> 0x14A6B8
void nnRotateYMatrixSinCosFast(float (* mtx)[4][4] /* r2 */, float s /* r29 */, float c /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14A650 -> 0x14A6B8
        float save0; // r29
        float save1; // r29
    }
}


// Range: 0x14A6C0 -> 0x14A728
void nnRotateZMatrixSinCosFast(float (* mtx)[4][4] /* r2 */, float s /* r29 */, float c /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14A6C0 -> 0x14A728
        float save0; // r29
        float save1; // r29
    }
}


