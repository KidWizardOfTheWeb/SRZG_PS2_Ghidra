/*
    Compile unit: C:\usr\local\sega\nn\src\Morph\nnmorphpxplus.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int nnCalcVBA_PNCTT1I0W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNCTT4I4W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNCTT2I2W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNCTT_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNTT1I0W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNTT4I4W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNTT2I2W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNTT_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNCT1I0W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNCT4I4W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNCT2I2W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNCT_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNC1I0W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNC4I4W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNC2I2W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNC_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNT1I0W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNT4I4W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNT2I2W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PNT_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PN1I0W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PN4I4W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PN2I2W_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
unsigned int nnCalcVBA_PN_P_NEXTPRIM_OFS_PS2(unsigned int); // size: 0x0, address: 0x0
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
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
class PXS_SVF_NORMAL16 {
    // total size: 0x6
public:
    signed short x; // offset 0x0, size 0x2
    signed short y; // offset 0x2, size 0x2
    signed short z; // offset 0x4, size 0x2
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
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
};

// Range: 0x156570 -> 0x156EBC
void nnSetUpMorphVertexMemberOffsetPXPlus(unsigned int fVtxType /* r2 */, unsigned int nVtx /* r2 */, unsigned int * pNextPrimOfs /* r2 */, unsigned int * pPosOfs /* r2 */, unsigned int * pNrmOfs /* r2 */, unsigned int * pColOfs /* r2 */, unsigned int * pUVOfs /* r2 */, unsigned int * pnUV /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x156570 -> 0x156EBC
        unsigned int tmp; // r5
    }
}


