/*
    Compile unit: C:\usr\local\sega\nn\src\Node\nncalcnodehidemotion.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_SUBMOTION {
    // total size: 0x28
public:
    unsigned int fType; // offset 0x0, size 0x4
    unsigned int fIPType; // offset 0x4, size 0x4
    union { // inferred
        signed int Id; // offset 0x8, size 0x4
        struct { // inferred
            signed short Id0; // offset 0x8, size 0x2
            signed short Id1; // offset 0xA, size 0x2
        };
    };
    float StartFrame; // offset 0xC, size 0x4
    float EndFrame; // offset 0x10, size 0x4
    float StartKeyFrame; // offset 0x14, size 0x4
    float EndKeyFrame; // offset 0x18, size 0x4
    signed int nKeyFrame; // offset 0x1C, size 0x4
    signed int KeySize; // offset 0x20, size 0x4
    void * pKeyList; // offset 0x24, size 0x4
};
class NNS_MOTION {
    // total size: 0x20
public:
    unsigned int fType; // offset 0x0, size 0x4
    float StartFrame; // offset 0x4, size 0x4
    float EndFrame; // offset 0x8, size 0x4
    signed int nSubmotion; // offset 0xC, size 0x4
    class NNS_SUBMOTION * pSubmotion; // offset 0x10, size 0x4
    float FrameRate; // offset 0x14, size 0x4
    unsigned int Reserved0; // offset 0x18, size 0x4
    unsigned int Reserved1; // offset 0x1C, size 0x4
};

// Range: 0x154640 -> 0x154688
signed int nnCalcMotionNodeHide(class NNS_SUBMOTION * submot /* r2 */, float frame /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x154640 -> 0x154688
        void * pKeyList; // r2
        signed int nKeyFrame; // r2
        signed int v; // r29+0x1C
    }
}


// Range: 0x154690 -> 0x1547F8
void nnCalcNodeHideMotion(unsigned int * nodestatlist /* r20 */, class NNS_MOTION * mot /* r19 */, float frame /* r29+0x70 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x154690 -> 0x1547F8
        signed int i; // r18
        float nframe; // r29+0x6C
        float nnframe; // r29+0x68
        class NNS_SUBMOTION * submot; // r2
        unsigned int smotiptype; // r2
    }
}


