/*
    Compile unit: C:\usr\local\sega\nn\src\Morph\nnmorphmotion.c
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
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class NNS_MORPHTARGETLIST {
    // total size: 0x8
public:
    signed int nMorphTarget; // offset 0x0, size 0x4
    class NNS_MORPHTARGETPTR * pMorphTargetPtrList; // offset 0x4, size 0x4
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
class NNS_MORPHTARGETPTR {
    // total size: 0x8
public:
    signed int nVtxList; // offset 0x0, size 0x4
    class NNS_VTXLISTPTR * pMorphTarget; // offset 0x4, size 0x4
};
class NNS_MOTION_KEY_FLOAT {
    // total size: 0x8
public:
    float Frame; // offset 0x0, size 0x4
    float Value; // offset 0x4, size 0x4
};
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};

// Range: 0x148AD0 -> 0x148B78
enum NNE_BOOL nnCalcMorphMotionWeight(class NNS_SUBMOTION * submot /* r5 */, float frame /* r29+0x10 */, float * weight /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x148AD0 -> 0x148B78
        enum NNE_BOOL flag; // r2
        class NNS_MOTION_KEY_FLOAT * vk; // r2
    }
}


// Range: 0x148B80 -> 0x148CBC
void nnCalcMorphMotion(float * mwpal /* r19 */, class NNS_MORPHTARGETLIST * mtgt /* r16 */, class NNS_MOTION * mot /* r18 */, float frame /* r29+0x60 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x148B80 -> 0x148CBC
        float nframe; // r29+0x5C
        float nnframe; // r29+0x58
        signed int truefalse; // r2
        class NNS_SUBMOTION * pSubMot; // r17
        signed int i; // r5
        float weight; // r29+0x54
    }
}


