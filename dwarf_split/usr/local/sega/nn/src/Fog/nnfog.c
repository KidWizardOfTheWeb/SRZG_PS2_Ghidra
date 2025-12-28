/*
    Compile unit: C:\usr\local\sega\nn\src\Fog\nnfog.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int nngFogFlag; // size: 0x4, address: 0x6D1D60
unsigned int nngFogFlagPXPlus; // size: 0x4, address: 0x6D1D64
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};

// Range: 0x145300 -> 0x145330
void nnSetFogSwitch(enum NNE_BOOL on_off /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x145300 -> 0x145330
    }
}


// Range: 0x145330 -> 0x1454AC
void nnSetFogColor(float r /* r22 */, float g /* r21 */, float b /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x145330 -> 0x1454AC
        unsigned long * cb; // r16
    }
}


// Range: 0x1454B0 -> 0x1454F8
void nnSetFogRangePS2(float fnear /* r29+0x10 */, float ffar /* r29+0x10 */, float fmin /* r29+0x10 */, float fmax /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1454B0 -> 0x1454F8
    }
}


