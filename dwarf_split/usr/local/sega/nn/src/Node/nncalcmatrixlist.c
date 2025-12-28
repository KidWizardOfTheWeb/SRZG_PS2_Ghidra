/*
    Compile unit: C:\usr\local\sega\nn\src\Node\nncalcmatrixlist.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
float nngUnitMatrix[4][4]; // size: 0x40, address: 0x657F30
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
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
class NNS_TRS {
    // total size: 0x30
public:
    class NNS_VECTORFAST Translation; // offset 0x0, size 0x10
    class NNS_QUATERNION Rotation; // offset 0x10, size 0x10
    class NNS_VECTORFAST Scaling; // offset 0x20, size 0x10
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
class NNS_SUBOBJ {
    // total size: 0x14
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nMeshset; // offset 0x4, size 0x4
    class NNS_MESHSET * pMeshsetList; // offset 0x8, size 0x4
    signed int nTex; // offset 0xC, size 0x4
    signed int * pTexNumList; // offset 0x10, size 0x4
};
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class NNS_QUATERNION {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
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
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
};

// Range: 0x149360 -> 0x1495F4
void nnCalcMatrixList(float (* mtxlist)[4][4] /* r21 */, class NNS_OBJECT * obj /* r18 */, float (* basemtx)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x149360 -> 0x1495F4
        signed int i; // r20
        signed int numNode; // r2
        class NNS_NODE * pNode; // r19
        float (* pCurMtx)[4][4]; // r18
        float (* pDrawMtx)[4][4]; // r17
        class NNS_VECTOR effpos; // r29+0x70
    }
}


// Range: 0x149600 -> 0x1497A4
void nnCalcMatrixListMotionNode(float (* mtxlist)[4][4] /* r21 */, class NNS_OBJECT * obj /* r23 */, float (* basemtx)[4][4] /* r20 */, class NNS_MOTION * mot /* r22 */, float frame /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x149600 -> 0x1497A4
        signed int numNode; // r2
        signed int NodeIdx; // r19
        signed int SubMotIdx; // r18
        class NNS_NODE * pNode; // r17
        float (* pCurMtx)[4][4]; // r16
        float (* pDrawMtx)[4][4]; // r2
    }
}


// Range: 0x1497B0 -> 0x14985C
void nnCalcMatrixListMotion(float (* mtxlist)[4][4] /* r19 */, class NNS_OBJECT * obj /* r18 */, class NNS_MOTION * mot /* r17 */, float frame /* r29+0x60 */, float (* basemtx)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1497B0 -> 0x14985C
        float (* pBaseMtx)[4][4]; // r2
        float nframe; // r29+0x5C
        signed int truefalse; // r2
    }
}


// Range: 0x149860 -> 0x149B10
void nnCalcMatrixListTRSList(float (* mtxlist)[4][4] /* r21 */, class NNS_OBJECT * obj /* r20 */, class NNS_TRS * trslist /* r30 */, float (* basemtx)[4][4] /* r29+0xB0 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x149860 -> 0x149B10
        signed int i; // r19
        class NNS_NODE * pNode; // r18
        float (* pDestMtx)[4][4]; // r2
        float (* pDrawMtx)[4][4]; // r29+0xA0
        float (* pBaseMtx)[4][4]; // r22
    }
}


// Range: 0x149B10 -> 0x149C38
void nnCalcMatrixPaletteMatrixList(float (* mtxpal)[4][4] /* r21 */, class NNS_OBJECT * obj /* r20 */, float (* mtxlist)[4][4] /* r2 */, float (* basemtx)[4][4] /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x149B10 -> 0x149C38
        signed int i; // r19
        class NNS_NODE * pNode; // r2
    }
}


// Range: 0x149C40 -> 0x149DC0
void nnCalcMatrixListMotionNode1BoneSIIK(float (* mtxlist)[4][4] /* r2 */, class NNS_OBJECT * obj /* r2 */, float (* basemtx)[4][4] /* r21 */, signed int jnt1idx /* r20 */, signed int submotidx /* r19 */, class NNS_MOTION * mot /* r22 */, float frame /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x149C40 -> 0x149DC0
        class NNS_NODE * nodelist; // r2
        class NNS_NODE * jnt1node; // r18
        float (* jnt1mtx)[4][4]; // r23
        float ojnt1motmtx[4][4]; // r29+0xC0
        class NNS_NODE * effnode; // r30
        signed int effnodeIdx; // r17
        float (* effmtx)[4][4]; // r16
        class NNS_VECTORFAST effpos; // r29+0xB0
        float lbone1; // r20
    }
}


// Range: 0x149DC0 -> 0x149FC8
void nnCalcMatrixListMotionNode2BoneSIIK(float (* mtxlist)[4][4] /* r2 */, class NNS_OBJECT * obj /* r2 */, float (* basemtx)[4][4] /* r30 */, signed int jnt1idx /* r21 */, signed int submotidx /* r22 */, class NNS_MOTION * mot /* r23 */, float frame /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x149DC0 -> 0x149FC8
        class NNS_NODE * nodelist; // r2
        class NNS_NODE * jnt1node; // r20
        float (* jnt1mtx)[4][4]; // r29+0xD0
        float ojnt1motmtx[4][4]; // r29+0x130
        class NNS_NODE * jnt2node; // r19
        signed int jnt2nodeIdx; // r18
        float (* jnt2mtx)[4][4]; // r29+0xC0
        float ojnt2motmtx[4][4]; // r29+0xF0
        class NNS_NODE * effnode; // r29+0xB0
        signed int effnodeIdx; // r17
        float (* effmtx)[4][4]; // r16
        class NNS_VECTORFAST effpos; // r29+0xE0
        float lbone1; // r21
        float lbone2; // r20
    }
}


