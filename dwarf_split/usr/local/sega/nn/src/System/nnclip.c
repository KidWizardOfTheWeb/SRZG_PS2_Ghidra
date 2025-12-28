/*
    Compile unit: C:\usr\local\sega\nn\src\System\nnclip.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int * nnsNodeStatList; // size: 0x4, address: 0x6D1B00
static class NNS_NODE * nnsNodeList; // size: 0x4, address: 0x6D1B04
signed int nngSubMotIdx; // size: 0x4, address: 0x0
class NNS_CLIP_PLANE nngClipPlane; // size: 0x20, address: 0x6DE5D0
class NNS_CLIP_PLANE nngClipPlaneGs; // size: 0x20, address: 0x6DE5F0
enum NNE_PROJECTION_TYPE nngProjectionType; // size: 0x4, address: 0x6D1BD0
class NNS_CLIP nngClip3d; // size: 0x18, address: 0x6DECD0
class NNS_CLIP_PLANE_XZ {
    // total size: 0x8
public:
    union { // inferred
        float nx; // offset 0x0, size 0x4
        float mul; // offset 0x0, size 0x4
    };
    union { // inferred
        float nz; // offset 0x4, size 0x4
        float ofs; // offset 0x4, size 0x4
    };
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
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class NNS_CLIP_PLANE_YZ {
    // total size: 0x8
public:
    union { // inferred
        float ny; // offset 0x0, size 0x4
        float mul; // offset 0x0, size 0x4
    };
    union { // inferred
        float nz; // offset 0x4, size 0x4
        float ofs; // offset 0x4, size 0x4
    };
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
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
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
class NNS_CLIP_PLANE {
    // total size: 0x20
public:
    class NNS_CLIP_PLANE_YZ Top; // offset 0x0, size 0x8
    class NNS_CLIP_PLANE_YZ Bottom; // offset 0x8, size 0x8
    class NNS_CLIP_PLANE_XZ Right; // offset 0x10, size 0x8
    class NNS_CLIP_PLANE_XZ Left; // offset 0x18, size 0x8
};
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
};
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
};
class NNS_CLIP {
    // total size: 0x18
public:
    float f_clip; // offset 0x0, size 0x4
    float n_clip; // offset 0x4, size 0x4
    float x1; // offset 0x8, size 0x4
    float x0; // offset 0xC, size 0x4
    float y1; // offset 0x10, size 0x4
    float y0; // offset 0x14, size 0x4
};
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
};
enum NNE_PROJECTION_TYPE {
    NNE_PROJECTION_TYPE_PERSPECTIVE = 0,
    NNE_PROJECTION_TYPE_ORTHO = 1,
};

// Range: 0x12FB20 -> 0x130414
unsigned int nnCalcClipBox(class NNS_VECTOR * center /* r3 */, float sx /* r27 */, float sy /* r24 */, float sz /* r29 */, float (* mtx)[4][4] /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x12FB20 -> 0x130414
        unsigned int status; // r16
        float d; // r29+0x80
        class NNS_VECTORFAST Q; // r29+0x70
        class NNS_VECTORFAST tmpvec; // r29+0x60
        float Rx; // r28
        float Ry; // r27
        float Rz; // r26
        float Sx; // r25
        float Sy; // r24
        float Sz; // r23
        float Tx; // r21
        float Ty; // r20
        float Tz; // r22
        float radius; // r4
        float znear; // r21
        float zfar; // r20
        float radiusy; // r5
    }
}


// Range: 0x130420 -> 0x1308C0
unsigned int nnCalcClipCore(class NNS_VECTOR * center /* r3 */, float radius /* r20 */, float (* mtx)[4][4] /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x130420 -> 0x1308C0
        unsigned int status; // r16
        float d; // r29+0x60
        float znear; // r22
        float zfar; // r21
        class NNS_VECTORFAST c; // r29+0x50
        class NNS_VECTORFAST tmpvec; // r29+0x40
    }
}


// Range: 0x1308C0 -> 0x130924
unsigned int nnCalcClip(class NNS_VECTOR * center /* r17 */, float radius /* r20 */, float (* mtx)[4][4] /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1308C0 -> 0x130924
    }
}


// Range: 0x130930 -> 0x130B5C
void nnCalcClipSetNodeStatus(unsigned int * pNodeStatList /* r2 */, class NNS_NODE * pNodeList /* r2 */, signed int nodeIdx /* r2 */, float (* pNodeMtx)[4][4] /* r19 */, float rootscale /* r29+0x60 */, unsigned int flag /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x130930 -> 0x130B5C
        unsigned int * nodestat; // r17
        class NNS_NODE * pNode; // r16
    }
}


// Range: 0x130B60 -> 0x130D3C
void nnSetUpNodeStatusListFlag(signed int nodeidx /* r2 */, unsigned int flag /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x130B60 -> 0x130D3C
        class NNS_NODE * node; // r2
    }
}


// Range: 0x130D40 -> 0x130EA8
unsigned int nnCheckObjectClip(class NNS_OBJECT * obj /* r18 */, float (* basemtx)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x130D40 -> 0x130EA8
        float tmpmtx[4][4]; // r29+0x50
        float (* pCurMtx)[4][4]; // r17
        class NNS_NODE * node; // r16
        unsigned int clipstat; // r2
    }
}


// Range: 0x130EB0 -> 0x131040
float nnEstimateMatrixScaling(float (* mtx)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x130EB0 -> 0x131040
        class NNS_VECTORFAST * pe0; // r18
        class NNS_VECTORFAST * pe1; // r17
        class NNS_VECTORFAST * pe2; // r16
        float a; // r29+0x50
        float b; // r29+0x50
        float tmp; // r29+0x50
    }
}


