/*
    Compile unit: C:\usr\local\sega\nn\src\DrawObj\nndrawverticesext.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int * nngShaderTblTbl[]; // size: 0x0, address: 0x5F76E0
unsigned int * nngShaderTblReducedTbl[]; // size: 0x0, address: 0x5F8360
unsigned int nngWireType; // size: 0x4, address: 0x6D1DC8
class NNS_OBJECT_FLAG_PS2 nngSubObjectFlag; // size: 0x38, address: 0x6DEE30
class NNS_PREV_PARAM_PS2 nngPrevParam; // size: 0x38, address: 0x6DEE90
float nngDivColorAlpha; // size: 0x4, address: 0x6D1DD4
class NNS_DRAWCALLBACK_VAL nngDrawCallBackVal; // size: 0x40, address: 0x6DEDB0
class NNS_DRAW_PARAM_PS2 nngDrawParam; // size: 0x14, address: 0x6DEE70
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
};
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
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
class NNS_VTXLIST_PS2_VU_DESC {
    // total size: 0x14
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nDmaQwc; // offset 0x4, size 0x4
    void * pVertex; // offset 0x8, size 0x4
    signed int nBoneMtx; // offset 0xC, size 0x4
    void * pBoneMtxList; // offset 0x10, size 0x4
};
class NNS_OBJECT_FLAG_PS2 {
    // total size: 0x38
public:
    enum NNE_BOOL doubleside; // offset 0x0, size 0x4
    enum NNE_BOOL backside; // offset 0x4, size 0x4
    enum NNE_BOOL frontside; // offset 0x8, size 0x4
    enum NNE_BOOL inside; // offset 0xC, size 0x4
    enum NNE_BOOL gsinside; // offset 0x10, size 0x4
    enum NNE_BOOL meshsetclip; // offset 0x14, size 0x4
    enum NNE_BOOL crossnear; // offset 0x18, size 0x4
    enum NNE_BOOL ignorematambi; // offset 0x1C, size 0x4
    enum NNE_BOOL ignorematspec; // offset 0x20, size 0x4
    enum NNE_BOOL disablelighting; // offset 0x24, size 0x4
    enum NNE_BOOL ignoretexture; // offset 0x28, size 0x4
    enum NNE_BOOL specular; // offset 0x2C, size 0x4
    enum NNE_BOOL usealpha; // offset 0x30, size 0x4
    unsigned int drawtype; // offset 0x34, size 0x4
};
class NNS_PREV_PARAM_PS2 {
    // total size: 0x38
public:
    enum NNE_BOOL fautoclearsw; // offset 0x0, size 0x4
    unsigned int shader; // offset 0x4, size 0x4
    unsigned int cull; // offset 0x8, size 0x4
    signed int specular; // offset 0xC, size 0x4
    signed int disablelighting; // offset 0x10, size 0x4
    signed int texidx[2]; // offset 0x14, size 0x8
    unsigned int clampmode[2]; // offset 0x1C, size 0x8
    class NNS_TEXCOORD texuvofs; // offset 0x24, size 0x8
    unsigned int fgsprimmode[2]; // offset 0x2C, size 0x8
    void * pBoneList; // offset 0x34, size 0x4
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
class NNS_DRAW_PARAM_PS2 {
    // total size: 0x14
public:
    unsigned int usealpha; // offset 0x0, size 0x4
    unsigned int shader; // offset 0x4, size 0x4
    unsigned int shadermaterial; // offset 0x8, size 0x4
    unsigned int texmark; // offset 0xC, size 0x4
    enum NNE_BOOL enablefastshadersub; // offset 0x10, size 0x4
};
class NNS_DRAWCALLBACK_VAL {
    // total size: 0x40
public:
    signed int iMaterial; // offset 0x0, size 0x4
    signed int iPrevMaterial; // offset 0x4, size 0x4
    signed int iVtxList; // offset 0x8, size 0x4
    signed int iPrevVtxList; // offset 0xC, size 0x4
    signed int iNode; // offset 0x10, size 0x4
    signed int iMeshset; // offset 0x14, size 0x4
    signed int iSubobject; // offset 0x18, size 0x4
    class NNS_MATERIALPTR * pMaterial; // offset 0x1C, size 0x4
    class NNS_VTXLISTPTR * pVtxListPtr; // offset 0x20, size 0x4
    class NNS_OBJECT * pObject; // offset 0x24, size 0x4
    float (* pMatrixPalette)[4][4]; // offset 0x28, size 0x4
    unsigned int * pNodeStatusList; // offset 0x2C, size 0x4
    unsigned int DrawSubobjType; // offset 0x30, size 0x4
    unsigned int DrawFlag; // offset 0x34, size 0x4
    enum NNE_BOOL bModified; // offset 0x38, size 0x4
    enum NNE_BOOL bReDraw; // offset 0x3C, size 0x4
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
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};

// Range: 0x14D980 -> 0x14D9E0
unsigned int nnGetPxShader(unsigned int shader /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14D980 -> 0x14D9E0
    }
}


// Range: 0x14D9E0 -> 0x14DC30
void nnDrawPliableVerticesProcessVUExt(class NNS_VTXLISTPTR * pVtx /* r2 */, float (* pMtxPal)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14D9E0 -> 0x14DC30
        class NNS_VTXLIST_PS2_VU_DESC * pVDesc; // r17
        unsigned int shader; // r16
        unsigned int fType; // r2
    }
}


// Range: 0x14DC30 -> 0x14DE04
void nnDrawRigidVerticesProcessVUExt(class NNS_VTXLISTPTR * pVtx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14DC30 -> 0x14DE04
        class NNS_VTXLIST_PS2_VU_DESC * pVDesc; // r17
        unsigned int shader; // r16
        unsigned int fType; // r2
    }
}


