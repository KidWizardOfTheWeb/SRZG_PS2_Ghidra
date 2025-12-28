/*
    Compile unit: C:\usr\local\sega\nn\src\Node\nncalcmatrixpalettemotion.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int nnsSubMotIdx; // size: 0x4, address: 0x6D1B34
static float (* nnsBaseMtx)[4][4]; // size: 0x4, address: 0x6D1B40
static float (* nnsMtxPal)[4][4]; // size: 0x4, address: 0x6D1B50
static unsigned int * nnsNodeStatList; // size: 0x4, address: 0x6D1B54
static unsigned int nnsNSFlag; // size: 0x4, address: 0x6D1B58
static class NNS_OBJECT * nnsObj; // size: 0x4, address: 0x6D1B5C
static class NNS_NODE * nnsNodeList; // size: 0x4, address: 0x6D1B60
static class NNS_MATRIXSTACK * nnsMstk; // size: 0x4, address: 0x6D1B64
static class NNS_MOTION * nnsMot; // size: 0x4, address: 0x6D1B68
static float nnsFrame; // size: 0x4, address: 0x6D1B6C
static float nnsRootScale; // size: 0x4, address: 0x6D1A84
float nngUnitMatrix[4][4]; // size: 0x40, address: 0x657F30
float nngNodeUserMotionTriggerTime; // size: 0x4, address: 0x6D1AE8
void (* nngNodeUserMotionCallbackFunc)(class NNS_NODEUSRMOT_CALLBACK_VAL *); // size: 0x4, address: 0x6D1DD8
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
};
class NNS_MATRIXSTACK {
    // total size: 0x10
public:
    unsigned int nMtx; // offset 0x0, size 0x4
    unsigned int StackIdx; // offset 0x4, size 0x4
    float (* pStackTop)[4][4]; // offset 0x8, size 0x4
    float (* pCurrent)[4][4]; // offset 0xC, size 0x4
};
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
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class NNS_NODE {
    // total size: 0x90
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed short iMatrix; // offset 0x4, size 0x2
    signed short iParent; // offset 0x6, size 0x2
    signed short iChild; // offset 0x8, size 0x2
    signed short iSibling; // offset 0xA, size 0x2
    class NNS_VECTOR Translation; // offset 0xC, size 0xC
    class NNS_ROTATE_A32 Rotation; // offset 0x18, size 0xC
    class NNS_VECTOR Scaling; // offset 0x24, size 0xC
    float InvInitMtx[4][4]; // offset 0x30, size 0x40
    class NNS_VECTOR Center; // offset 0x70, size 0xC
    float Radius; // offset 0x7C, size 0x4
    unsigned int User; // offset 0x80, size 0x4
    union { // inferred
        float SIIKBoneLength; // offset 0x84, size 0x4
        float BoundingBoxX; // offset 0x84, size 0x4
    };
    float BoundingBoxY; // offset 0x88, size 0x4
    float BoundingBoxZ; // offset 0x8C, size 0x4
};
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
};
class NNS_OBJECT {
    // total size: 0x58
public:
    class NNS_VECTOR Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
    signed int nMaterial; // offset 0x10, size 0x4
    class NNS_MATERIALPTR * pMatPtrList; // offset 0x14, size 0x4
    signed int nVtxList; // offset 0x18, size 0x4
    class NNS_VTXLISTPTR * pVtxListPtrList; // offset 0x1C, size 0x4
    signed int nPrimList; // offset 0x20, size 0x4
    class NNS_PRIMLISTPTR * pPrimListPtrList; // offset 0x24, size 0x4
    signed int nNode; // offset 0x28, size 0x4
    signed int MaxNodeDepth; // offset 0x2C, size 0x4
    union { // inferred
        class NNS_NODE * pNodeList; // offset 0x30, size 0x4
        class NNS_NODEEXPTR * pNodeExPtrList; // offset 0x30, size 0x4
    };
    signed int nMtxPal; // offset 0x34, size 0x4
    signed int nSubobj; // offset 0x38, size 0x4
    class NNS_SUBOBJ * pSubobjList; // offset 0x3C, size 0x4
    signed int nTex; // offset 0x40, size 0x4
    unsigned int fType; // offset 0x44, size 0x4
    signed int Version; // offset 0x48, size 0x4
    float BoundingBoxX; // offset 0x4C, size 0x4
    float BoundingBoxY; // offset 0x50, size 0x4
    float BoundingBoxZ; // offset 0x54, size 0x4
};
class NNS_MESHSET {
    // total size: 0x24
public:
    class NNS_VECTOR Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
    signed int iNode; // offset 0x10, size 0x4
    signed int iMatrix; // offset 0x14, size 0x4
    signed int iMaterial; // offset 0x18, size 0x4
    signed int iVtxList; // offset 0x1C, size 0x4
    signed int iPrimList; // offset 0x20, size 0x4
};
class NNS_QUATERNION {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class NNS_SUBOBJ {
    // total size: 0x14
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nMeshset; // offset 0x4, size 0x4
    class NNS_MESHSET * pMeshsetList; // offset 0x8, size 0x4
    signed int nTex; // offset 0xC, size 0x4
    signed int * pTexNumList; // offset 0x10, size 0x4
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
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
};
class NNS_NODEUSRMOT_CALLBACK_VAL {
    // total size: 0x20
public:
    signed int iNode; // offset 0x0, size 0x4
    float Frame; // offset 0x4, size 0x4
    union { // inferred
        unsigned int IValue; // offset 0x8, size 0x4
        float FValue; // offset 0x8, size 0x4
    };
    class NNS_MOTION * pMotion; // offset 0xC, size 0x4
    signed int iSubmot; // offset 0x10, size 0x4
    unsigned int fSubmotType; // offset 0x14, size 0x4
    unsigned int fSubmotIPType; // offset 0x18, size 0x4
    class NNS_OBJECT * pObject; // offset 0x1C, size 0x4
};
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};
class _NNS_NODEEX {
    // total size: 0x90
public:
    unsigned int fNodeExType; // offset 0x0, size 0x4
    unsigned int fNodeType; // offset 0x4, size 0x4
    signed short iMatrix; // offset 0x8, size 0x2
    signed short iNode; // offset 0xA, size 0x2
    class _NNS_NODEEX * pParent; // offset 0xC, size 0x4
    class _NNS_NODEEX * pChild; // offset 0x10, size 0x4
    class _NNS_NODEEX * pSibling; // offset 0x14, size 0x4
    class NNS_VECTOR Translation; // offset 0x18, size 0xC
    class NNS_ROTATE_A32 Rotation; // offset 0x24, size 0xC
    class NNS_VECTOR Scaling; // offset 0x30, size 0xC
    unsigned int User; // offset 0x3C, size 0x4
    float InvInitMtx[4][4]; // offset 0x40, size 0x40
    unsigned int reserved; // offset 0x80, size 0x4
};
class NNS_ROTATE_A16 {
    // total size: 0x6
public:
    signed short x; // offset 0x0, size 0x2
    signed short y; // offset 0x2, size 0x2
    signed short z; // offset 0x4, size 0x2
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
};

// Range: 0x1333D0 -> 0x1334E4
void nnCalcMatrixPaletteMotion(float (* mtxpal)[4][4] /* r20 */, unsigned int * nodestatlist /* r21 */, class NNS_OBJECT * obj /* r19 */, class NNS_MOTION * mot /* r18 */, float frame /* r29+0x90 */, float (* basemtx)[4][4] /* r17 */, class NNS_MATRIXSTACK * mstk /* r16 */, unsigned int flag /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1333D0 -> 0x1334E4
        float (* nnsBaseMtx'51)[4][4]; // r2
        float nframe; // r29+0x8C
        signed int truefalse; // r2
    }
}


// Range: 0x1334F0 -> 0x1336D8
signed int nnCalcMotionFrame(float * dstframe /* r2 */, unsigned int fType /* r2 */, float startframe /* r29 */, float endframe /* r29 */, float frame /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1334F0 -> 0x1336D8
        float frame0; // r29
        float frame1; // r2
        float f; // r29
        signed int n; // r2
    }
}


// Range: 0x1336E0 -> 0x1338C8
void nnCalcMatrixPaletteMotionNode(signed int nodeIdx /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1336E0 -> 0x1338C8
        class NNS_NODE * node; // r17
        float (* pCurMtx)[4][4]; // r16
        signed int hideflag; // r29+0x4C
    }
}


// Range: 0x1338D0 -> 0x133DF8
signed int nnCalcNodeMotionCore(float (* pNodeMtx)[4][4] /* r30 */, signed int * pHideFlag /* r22 */, float (* pBaseMtx)[4][4] /* r29+0xE0 */, class NNS_NODE * pNode /* r29+0xDC */, signed int NodeIdx /* r20 */, class NNS_MOTION * pMot /* r19 */, signed int SubMotIdx /* r29+0xD8 */, float frame /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1338D0 -> 0x133DF8
        signed int i; // r18
        signed int tflag; // r21
        signed int rflag; // r23
        signed int sflag; // r29+0xC0
        float nframe; // r29+0x15C
        class NNS_VECTOR tv; // r29+0x150
        class NNS_ROTATE_A32 rv; // r29+0x140
        class NNS_QUATERNION rq; // r29+0x120
        class NNS_VECTOR sv; // r29+0x130
        class NNS_SUBMOTION * pSubMot; // r17
        unsigned int smotiptype; // r2
        unsigned int nodetype; // r2
        unsigned int rtype; // r29+0xB0
        class NNS_NODEUSRMOT_CALLBACK_VAL val; // r29+0x100
        class NNS_VECTORFAST trans; // r29+0xF0
    }
}


// Range: 0x133E00 -> 0x134204
signed int nnCalcMotionRotate(class NNS_SUBMOTION * submot /* r2 */, float frame /* r29+0x50 */, class NNS_ROTATE_A32 * rv /* r16 */, class NNS_QUATERNION * rq /* r2 */, unsigned int rtype /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x133E00 -> 0x134204
        signed int motiontype; // r18
        void * pKeyList; // r2
        signed int nKeyFrame; // r2
        class NNS_ROTATE_A16 rsv; // r29+0x48
        unsigned int fAngleType; // r2
        signed int * arv; // r2
        signed short * arsv; // r17
        signed int n; // r10
    }
}


// Range: 0x134210 -> 0x1343D0
void nnRotateXYZMatrixFast(float (* mtx)[4][4] /* r18 */, signed int ax /* r17 */, signed int ay /* r16 */, signed int az /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x134210 -> 0x1343D0
        float sw; // r29+0x4C
        float cw; // r29+0x48
        float save0; // r29+0x50
        float save1; // r29+0x50
        float save2; // r29+0x50
        float save3; // r29+0x50
    }
}


// Range: 0x1343D0 -> 0x134590
void nnRotateXZYMatrixFast(float (* mtx)[4][4] /* r18 */, signed int ax /* r17 */, signed int ay /* r2 */, signed int az /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1343D0 -> 0x134590
        float sw; // r29+0x4C
        float cw; // r29+0x48
        float save0; // r29+0x50
        float save1; // r29+0x50
        float save2; // r29+0x50
        float save3; // r29+0x50
    }
}


// Range: 0x134590 -> 0x134750
void nnRotateZXYMatrixFast(float (* mtx)[4][4] /* r18 */, signed int ax /* r17 */, signed int ay /* r2 */, signed int az /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x134590 -> 0x134750
        float sw; // r29+0x4C
        float cw; // r29+0x48
        float save0; // r29+0x50
        float save1; // r29+0x50
        float save2; // r29+0x50
        float save3; // r29+0x50
    }
}


// Range: 0x134750 -> 0x1348A4
signed int nnCalcMotionTranslate(class NNS_SUBMOTION * submot /* r2 */, float frame /* r29+0x10 */, class NNS_VECTOR * tv /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x134750 -> 0x1348A4
        signed int motiontype; // r2
        void * pKeyList; // r9
        signed int nKeyFrame; // r2
        unsigned int fType; // r2
        float * ftv; // r8
    }
}


// Range: 0x1348B0 -> 0x134928
void nnTranslateMatrixFast(float (* mtx)[4][4] /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1348B0 -> 0x134928
    }
}


// Range: 0x134930 -> 0x134A88
signed int nnCalcMotionScale(class NNS_SUBMOTION * submot /* r2 */, float frame /* r29+0x10 */, class NNS_VECTOR * sv /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x134930 -> 0x134A88
        signed int motiontype; // r2
        void * pKeyList; // r3
        signed int nKeyFrame; // r2
        unsigned int fType; // r2
        float * fsv; // r9
    }
}


// Range: 0x134A90 -> 0x134B0C
void nnScaleMatrixFast(float (* mtx)[4][4] /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x134A90 -> 0x134B0C
    }
}


// Range: 0x134B10 -> 0x134E74
void nnCalcMatrixPaletteMotionNode2BoneSIIK(signed int jnt1nodeIdx /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x134B10 -> 0x134E74
        class NNS_NODE * jnt1node; // r19
        float (* jnt1mtx)[4][4]; // r23
        float ojnt1mtx[4][4]; // r29+0x1C0
        float ojnt1motmtx[4][4]; // r29+0x180
        class NNS_NODE * jnt2node; // r18
        signed int jnt2nodeIdx; // r17
        float (* jnt2mtx)[4][4]; // r30
        float ojnt2mtx[4][4]; // r29+0x140
        float ojnt2motmtx[4][4]; // r29+0x100
        class NNS_NODE * effnode; // r16
        signed int effnodeIdx; // r21
        float (* effmtx)[4][4]; // r22
        float oeffmtx[4][4]; // r29+0xC0
        class NNS_VECTORFAST effpos; // r29+0xB0
        float lbone1; // r21
        float lbone2; // r20
    }
}


// Range: 0x134E80 -> 0x1350C4
void nnCalcMatrixPaletteMotionNode1BoneSIIK(signed int jnt1nodeIdx /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x134E80 -> 0x1350C4
        class NNS_NODE * jnt1node; // r19
        float (* jnt1mtx)[4][4]; // r21
        float ojnt1mtx[4][4]; // r29+0x100
        float ojnt1motmtx[4][4]; // r29+0xC0
        class NNS_NODE * effnode; // r18
        signed int effnodeIdx; // r17
        float (* effmtx)[4][4]; // r16
        float oeffmtx[4][4]; // r29+0x80
        class NNS_VECTORFAST effpos; // r29+0x70
    }
}


// Range: 0x1350D0 -> 0x13522C
enum NNE_BOOL nnCalcMotionUserData(class NNS_NODEUSRMOT_CALLBACK_VAL * val /* r2 */, class NNS_SUBMOTION * submot /* r2 */, float frame /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1350D0 -> 0x13522C
        unsigned int fType; // r2
        void * pKeyList; // r2
        signed int nKeyFrame; // r2
        float * fv; // r2
        unsigned int * iv; // r2
    }
}


// Range: 0x135230 -> 0x1352AC
void nnNormalizeColumn(float (* mtx)[4][4] /* r2 */, signed int clm /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x135230 -> 0x1352AC
        float c; // r29+0x40
        float scl; // r29+0x40
        float sclisq; // r29+0x40
    }
}


