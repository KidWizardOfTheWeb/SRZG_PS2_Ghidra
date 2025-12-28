/*
    Compile unit: C:\usr\local\sega\nn\src\Morph\nnmorph.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int nnCalcVBA_RPNT_R_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x1464D0
unsigned int nnCalcVBA_RPNTT_R_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x146500
class PXS_SVF_POSITION {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
class NNS_MORPHTARGETPTR {
    // total size: 0x8
public:
    signed int nVtxList; // offset 0x0, size 0x4
    class NNS_VTXLISTPTR * pMorphTarget; // offset 0x4, size 0x4
};
class NNS_VTXLIST_PS2_VU_DESC {
    // total size: 0x14
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nDmaQwc; // offset 0x4, size 0x4
    void * pVertex; // offset 0x8, size 0x4
    signed int nBoneMtx; // offset 0xC, size 0x4
    void * pBoneMtxList; // offset 0x10, size 0x4
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
class PXS_SVF_NORMAL {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
class NNS_MORPHTARGETLIST {
    // total size: 0x8
public:
    signed int nMorphTarget; // offset 0x0, size 0x4
    class NNS_MORPHTARGETPTR * pMorphTargetPtrList; // offset 0x4, size 0x4
};
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class PXS_SVF_UV {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class NNS_VTXLIST_PS2_DESC_MORPH_TARGET {
    // total size: 0x2C
public:
    signed int nStrip; // offset 0x0, size 0x4
    class NNS_VTXLIST_PS2_DESC_TYPE Pos; // offset 0x4, size 0x8
    class NNS_VTXLIST_PS2_DESC_TYPE Nrm; // offset 0xC, size 0x8
    class NNS_VTXLIST_PS2_DESC_TYPE Col; // offset 0x14, size 0x8
    class NNS_VTXLIST_PS2_DESC_TYPE Tex; // offset 0x1C, size 0x8
    class NNS_VTXLIST_PS2_DESC_TYPE Weight; // offset 0x24, size 0x8
};
class PXS_FXYZW {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class PXS_SVF_NORMAL16 {
    // total size: 0x6
public:
    signed short x; // offset 0x0, size 0x2
    signed short y; // offset 0x2, size 0x2
    signed short z; // offset 0x4, size 0x2
};
class PXS_SVF_COLOR {
    // total size: 0x4
public:
    union { // inferred
        unsigned int color; // offset 0x0, size 0x4
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
    };
};
class NNS_RGBA_U32 {
    // total size: 0x10
public:
    unsigned int r; // offset 0x0, size 0x4
    unsigned int g; // offset 0x4, size 0x4
    unsigned int b; // offset 0x8, size 0x4
    unsigned int a; // offset 0xC, size 0x4
};
class NNS_VTXLIST_PS2_VU_DESC_MORPH_OBJECT {
    // total size: 0x20
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nDmaQwc; // offset 0x4, size 0x4
    void * pVertex; // offset 0x8, size 0x4
    signed int nBoneMtx; // offset 0xC, size 0x4
    void * pBoneMtxList; // offset 0x10, size 0x4
    void * pRsrvVertex; // offset 0x14, size 0x4
    void * pOrgVertex; // offset 0x18, size 0x4
    signed int nStrip; // offset 0x1C, size 0x4
};
class NNS_RGBA_U8 {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
class NNS_VTXLIST_PS2_DESC_COMBINED_MORPH_TARGET {
    // total size: 0xC
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nStrip; // offset 0x4, size 0x4
    void * pVertex; // offset 0x8, size 0x4
};
class PXS_SVF_UV16 {
    // total size: 0x4
public:
    signed short u; // offset 0x0, size 0x2
    signed short v; // offset 0x2, size 0x2
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
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};
class NNS_VTXLIST_PS2_DESC_TYPE {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pList; // offset 0x4, size 0x4
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
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
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

// Range: 0x145830 -> 0x145D90
unsigned int nnCalcMorphObjectBufferSize(class NNS_OBJECT * obj /* r17 */, class NNS_MORPHTARGETLIST * mtgt /* r2 */, unsigned int flag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x145830 -> 0x145D90
        signed int nVtxListMorph; // r16
        signed int nMorphTarget; // r2
        signed int nVtxList; // r2
        class NNS_VTXLISTPTR * pMorphTarget; // r2
        class NNS_VTXLIST_PS2_DESC_MORPH_TARGET * pMorphTargetDesc; // r2
        class NNS_VTXLIST_PS2_DESC_COMBINED_MORPH_TARGET * pCombinedMorphTargetDesc; // r2
        signed int i; // r22
        signed int j; // r21
        signed int size; // r2
        signed int PosType; // r20
        signed int NrmType; // r19
        signed int ColType; // r18
        signed int TexType; // r25
        signed int nBuffer; // r24
        class NNS_VTXLIST_PS2_VU_DESC * vdesc; // r2
        class NNS_VTXLIST_PS2_VU_DESC * vdesc; // r2
    }
}


// Range: 0x145D90 -> 0x1464CC
unsigned int nnInitMorphObject(class NNS_OBJECT * mobj /* r21 */, class NNS_OBJECT * obj /* r20 */, class NNS_MORPHTARGETLIST * mtgt /* r29+0x15C */, unsigned int flag /* r29+0x158 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x145D90 -> 0x1464CC
        unsigned char * ptr; // r2
        signed int nMorphTarget; // r2
        signed int nVtxList; // r2
        class NNS_VTXLISTPTR * pMorphTarget; // r2
        class NNS_VTXLIST_PS2_DESC_MORPH_TARGET * pMorphTargetDesc; // r7
        class NNS_VTXLIST_PS2_DESC_COMBINED_MORPH_TARGET * pCombinedMorphTargetDesc; // r2
        class NNS_VTXLISTPTR * pVtxListPtrList; // r2
        class NNS_VTXLIST_PS2_VU_DESC_MORPH_OBJECT * pVtxListDescMorphObjPtr; // r2
        class NNS_VTXLISTPTR * pVtxListPtrListSrc; // r29+0x140
        class NNS_VTXLIST_PS2_VU_DESC * pVtxListDescPtrSrc; // r2
        class NNS_VTXLIST_PS2_VU_DESC * pVtxListDescPtr; // r2
        signed int i; // r6
        signed int j; // r29+0x130
        signed int PosType; // r5
        signed int NrmType; // r4
        signed int ColType; // r3
        signed int TexType; // r2
        signed int VtxListPtrListFlag; // r30
        unsigned int fMorphNrm; // r29+0x120
        signed int nStrip; // r19
    }
}


// Range: 0x1464D0 -> 0x146500
static unsigned int nnCalcVBA_RPNT_R_NEXTPRIM_OFS_PS2(unsigned int nVtx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1464D0 -> 0x146500
    }
}


// Range: 0x146500 -> 0x146530
static unsigned int nnCalcVBA_RPNTT_R_NEXTPRIM_OFS_PS2(unsigned int nVtx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x146500 -> 0x146530
    }
}


// Range: 0x146530 -> 0x1467D8
static void nnNormalizeObjectVertexNormal(class NNS_OBJECT * obj /* r30 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x146530 -> 0x1467D8
        class NNS_VTXLISTPTR * pVtxListPtrList; // r16
        class NNS_VTXLIST_PS2_VU_DESC * pVtxDesc; // r2
        unsigned int (* funcCalcVBA_NEXTPRIM_OFS_PS2)(unsigned int); // r2
        unsigned char * pPrim; // r21
        unsigned int nVtx; // r2
        signed int j; // r22
        unsigned int l; // r20
        unsigned int eov; // r2
        class PXS_SVF_NORMAL16 * pNrm16; // r19
        class PXS_SVF_NORMAL16 * n; // r2
        signed int nStride; // r7
        unsigned int * vbuf; // r21
        class PXS_FXYZW * v; // r2
        class PXS_SVF_NORMAL nrm; // r29+0xA0
    }
}


// Range: 0x1467E0 -> 0x146AD4
static void nnSetUpMorphVertexMemberOffset(unsigned int fVtxType /* r2 */, unsigned int nVtx /* r2 */, unsigned int * pNextPrimOfs /* r2 */, unsigned int * pPosOfs /* r2 */, unsigned int * pNrmOfs /* r2 */, unsigned int * pColOfs /* r2 */, unsigned int * pUVOfs /* r2 */, unsigned int * pnUV /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1467E0 -> 0x146AD4
    }
}


// Range: 0x146AE0 -> 0x148170
void nnCalcMorphSeparateVertices(class NNS_VTXLISTPTR * pVtxListPtrList /* r2 */, class NNS_MORPHTARGETLIST * mtgt /* r29+0xEC */, unsigned int iVtxList /* r2 */, float * mwpal /* r29+0xE8 */, unsigned int flag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x146AE0 -> 0x148170
        signed int nMorphTarget; // r2
        class NNS_VTXLISTPTR * pMorphTarget; // r2
        class NNS_VTXLIST_PS2_DESC_MORPH_TARGET * pMorphTargetDesc; // r2
        class NNS_VTXLIST_PS2_VU_DESC_MORPH_OBJECT * pVtxListDescMorphObjPtr; // r23
        signed int i; // r10
        float ratio; // r4
        class PXS_SVF_POSITION * v; // r21
        class PXS_SVF_POSITION * vOrg; // r15
        class PXS_SVF_NORMAL16 * n; // r24
        class PXS_SVF_NORMAL16 * nOrg; // r15
        class PXS_SVF_COLOR * c; // r24
        class PXS_SVF_COLOR * cOrg; // r15
        class PXS_SVF_UV16 * u; // r15
        float * src; // r6
        class NNS_RGBA_U8 * csrc; // r6
        signed int k; // r20
        unsigned int l; // r5
        unsigned char * pPrim; // r19
        unsigned char * pPrimOrg; // r18
        unsigned int nVtx; // r17
        class PXS_SVF_POSITION * pPosSrc[16]; // r29+0x1B0
        class PXS_SVF_NORMAL * pNrmSrc[16]; // r29+0x170
        class PXS_SVF_UV * pUVSrc[16]; // r29+0x130
        class PXS_SVF_COLOR * pColSrc[16]; // r29+0xF0
        unsigned int NextPrimOfs; // r29+0x20C
        unsigned int PosOfs; // r29+0x208
        unsigned int NrmOfs; // r29+0x204
        unsigned int ColOfs; // r29+0x200
        unsigned int UVOfs; // r29+0x1FC
        unsigned int nUV; // r29+0x1F8
    }
}


// Range: 0x148170 -> 0x1481B0
static void __morph_pos_f32(void * v /* r2 */, void * vOrg /* r2 */, void * src /* r2 */, signed int nv /* r2 */, signed int nStride /* r2 */, unsigned int ratio /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x148170 -> 0x1481B0
    }
}


// Range: 0x1481B0 -> 0x1481E4
static void __morph_pos_f32_diff(void * v /* r2 */, void * src /* r2 */, signed int nv /* r2 */, signed int nStride /* r2 */, unsigned int ratio /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1481B0 -> 0x1481E4
    }
}


// Range: 0x1481F0 -> 0x148260
static void __morph_col_p32(void * c /* r2 */, void * cOrg /* r2 */, void * csrc /* r2 */, signed int nv /* r2 */, signed int nStride /* r11 */, unsigned int ratio /* r3 */, void * clamp /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1481F0 -> 0x148260
    }
}


// Range: 0x148260 -> 0x148A88
void nnCalcMorphObject(class NNS_OBJECT * mobj /* r29+0x11C */, class NNS_MORPHTARGETLIST * mtgt /* r29+0x118 */, float * mwpal /* r29+0x114 */, unsigned int flag /* r29+0x110 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x148260 -> 0x148A88
        signed int nMorphTarget; // r2
        class NNS_MORPHTARGETPTR * pMorphTargetPtrList; // r2
        signed int nVtxList; // r2
        class NNS_VTXLISTPTR * pMorphTarget; // r7
        class NNS_VTXLIST_PS2_DESC_MORPH_TARGET * pMorphTargetDesc; // r21
        class NNS_VTXLISTPTR * pVtxListPtrList; // r19
        class NNS_VTXLIST_PS2_VU_DESC_MORPH_OBJECT * pVtxListDescMorphObjPtr; // r16
        signed int i; // r18
        signed int j; // r29+0x100
        float ratio; // r29+0x13C
        signed int nStride; // r20
        signed int nv; // r2
        unsigned int * vbuf; // r13
        unsigned int * vbufOrg; // r12
        class PXS_FXYZW * v; // r2
        class PXS_FXYZW * vOrg; // r2
        float * src; // r11
        class NNS_RGBA_U8 * csrc; // r19
        void * pSwapVertex; // r2
        signed int k; // r10
        signed int l; // r20
        unsigned int skip; // r2
        class PXS_FXYZW col_clamp; // r29+0x120
    }
}


// Range: 0x148A90 -> 0x148AC8
void nnDrawMorphObject(class NNS_OBJECT * mobj /* r2 */, float (* mtxpal)[4][4] /* r2 */, unsigned int * nodestatlist /* r2 */, unsigned int subobjtype /* r2 */, unsigned int flag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x148A90 -> 0x148AC8
    }
}


