/*
    Compile unit: C:\usr\local\sega\nn\src\Node\nncalctrsmotion.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class NNS_OBJECT * nnsObj; // size: 0x4, address: 0x6D1B70
static float (* nnsBaseMtx)[4][4]; // size: 0x4, address: 0x0
static float (* nnsMtxPal)[4][4]; // size: 0x4, address: 0x0
static unsigned int * nnsNodeStatList; // size: 0x4, address: 0x0
static unsigned int nnsNSFlag; // size: 0x4, address: 0x0
static class NNS_NODE * nnsNodeList; // size: 0x4, address: 0x0
static class NNS_TRS * nnsTrsList; // size: 0x4, address: 0x0
static class NNS_MATRIXSTACK * nnsMstk; // size: 0x4, address: 0x0
static float nnsRootScale; // size: 0x4, address: 0x0
static class NNS_MOTION * nnsMot0; // size: 0x4, address: 0x0
static class NNS_MOTION * nnsMot1; // size: 0x4, address: 0x0
static float nnsFrame0; // size: 0x4, address: 0x0
static float nnsFrame1; // size: 0x4, address: 0x0
static float nnsRatio; // size: 0x4, address: 0x0
static signed int nnsSubMotIdx0; // size: 0x4, address: 0x0
static signed int nnsSubMotIdx1; // size: 0x4, address: 0x0
void (* nngNodeUserMotionCallbackFunc)(class NNS_NODEUSRMOT_CALLBACK_VAL *); // size: 0x4, address: 0x6D1DD8
float nngUnitMatrix[4][4]; // size: 0x40, address: 0x657F30
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
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
};
class NNS_TRS {
    // total size: 0x30
public:
    class NNS_VECTORFAST Translation; // offset 0x0, size 0x10
    class NNS_QUATERNION Rotation; // offset 0x10, size 0x10
    class NNS_VECTORFAST Scaling; // offset 0x20, size 0x10
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
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
enum NNE_MOTIONBLEND {
    NNE_MOTIONBLEND_REPLACE_ALL = 0,
    NNE_MOTIONBLEND_ADD_TRANSLATION = 1,
    NNE_MOTIONBLEND_ADD_ALL = 2,
};
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
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

// Range: 0x137B80 -> 0x137CE4
void nnCalcTRSList(class NNS_TRS * trslist /* r2 */, class NNS_OBJECT * obj /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x137B80 -> 0x137CE4
        signed int i; // r18
        signed int rotx; // r2
        signed int roty; // r2
        signed int rotz; // r2
        unsigned int nodetype; // r2
        unsigned int rtype; // r2
    }
}


// Range: 0x137CF0 -> 0x1380EC
signed int nnCalcNodeMotionTRSCore(signed int * tflag /* r23 */, signed int * rflag /* r20 */, signed int * sflag /* r30 */, class NNS_VECTOR * tv /* r29+0xCC */, class NNS_VECTOR * sv /* r29+0xC8 */, class NNS_QUATERNION * rq /* r22 */, class NNS_QUATERNION * invrq /* r16 */, class NNS_NODE * pNode /* r2 */, signed int NodeIdx /* r21 */, class NNS_MOTION * pMot /* r19 */, signed int SubMotIdx /* r29+0x110 */, float frame /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x137CF0 -> 0x1380EC
        signed int i; // r18
        float nframe; // r29+0xFC
        unsigned int nodetype; // r2
        unsigned int rtype; // r29+0xB0
        class NNS_ROTATE_A32 rv; // r29+0xF0
        class NNS_SUBMOTION * pSubMot; // r17
        class NNS_NODEUSRMOT_CALLBACK_VAL val; // r29+0xD0
    }
}


// Range: 0x1380F0 -> 0x138230
void nnCalcTRSListMotion(class NNS_TRS * trslist /* r20 */, class NNS_OBJECT * obj /* r19 */, class NNS_MOTION * mot /* r18 */, float frame /* r29+0x8C */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1380F0 -> 0x138230
        signed int NodeIdx; // r17
        signed int SubMotIdx; // r6
        signed int tflag; // r29+0xCC
        signed int rflag; // r29+0xC8
        signed int sflag; // r29+0xC4
        signed int truefalse; // r2
        class NNS_VECTOR tv; // r29+0xB8
        class NNS_VECTOR sv; // r29+0xA8
        class NNS_QUATERNION rq; // r29+0x90
    }
}


// Range: 0x138230 -> 0x138354
void nnLinkMotion(class NNS_TRS * dstpose /* r20 */, class NNS_TRS * pose0 /* r19 */, class NNS_TRS * pose1 /* r18 */, signed int nnode /* r17 */, float ratio /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138230 -> 0x138354
        signed int i; // r16
    }
}


// Range: 0x138360 -> 0x1384A4
void nnCalcMatrixTRSList1BoneSIIK(float (* jnt1mtx)[4][4] /* r22 */, float (* effmtx)[4][4] /* r21 */, class NNS_OBJECT * obj /* r2 */, class NNS_TRS * trslist /* r2 */, float (* basemtx)[4][4] /* r20 */, signed int jnt1idx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x138360 -> 0x1384A4
        class NNS_NODE * nodelist; // r2
        class NNS_NODE * jnt1node; // r2
        class NNS_TRS * jnt1trs; // r2
        float ojnt1motmtx[4][4]; // r29+0xA0
        signed int effnodeIdx; // r2
        class NNS_TRS * efftrs; // r19
        class NNS_VECTORFAST effpos; // r29+0x90
        float lbone1; // r20
    }
}


// Range: 0x1384B0 -> 0x13868C
void nnCalcMatrixTRSList2BoneSIIK(float (* jnt1mtx)[4][4] /* r23 */, float (* jnt2mtx)[4][4] /* r30 */, float (* effmtx)[4][4] /* r21 */, class NNS_OBJECT * obj /* r2 */, class NNS_TRS * trslist /* r2 */, float (* basemtx)[4][4] /* r20 */, signed int jnt1idx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1384B0 -> 0x13868C
        class NNS_NODE * nodelist; // r2
        class NNS_NODE * jnt1node; // r2
        class NNS_TRS * jnt1trs; // r2
        float ojnt1motmtx[4][4]; // r29+0x110
        class NNS_NODE * jnt2node; // r2
        signed int jnt2nodeIdx; // r2
        class NNS_TRS * jnt2trs; // r2
        float ojnt2motmtx[4][4]; // r29+0xD0
        class NNS_NODE * effnode; // r2
        signed int effnodeIdx; // r2
        class NNS_TRS * efftrs; // r19
        class NNS_VECTORFAST effpos; // r29+0xC0
        float lbone1; // r21
        float lbone2; // r20
    }
}


