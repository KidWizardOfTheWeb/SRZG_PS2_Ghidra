/*
    Compile unit: C:\usr\local\sega\nn\src\DrawObj\nncopyobject.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
};
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
};
class NNS_MATERIAL_COLOR_PXPLUS2 {
    // total size: 0x50
public:
    class NNS_RGB Diffuse; // offset 0x0, size 0xC
    float Specular; // offset 0xC, size 0x4
    class NNS_RGB Ambient; // offset 0x10, size 0xC
    float Alpha; // offset 0x1C, size 0x4
    class NNS_RGBA Emissive; // offset 0x20, size 0x10
    class NNS_RGBA Clamp[2]; // offset 0x30, size 0x20
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
class NNS_MATERIAL_DESC {
    // total size: 0x20
public:
    unsigned int fMatFlag; // offset 0x0, size 0x4
    unsigned int User; // offset 0x4, size 0x4
    void * pMatColor; // offset 0x8, size 0x4
    class NNS_MATERIAL_LOGIC * pMatLogic; // offset 0xC, size 0x4
    class NNS_MATERIAL_TEXMAP_DESC_EX * pTexDesc; // offset 0x10, size 0x4
    float PolyArea; // offset 0x14, size 0x4
    unsigned int Reserved[2]; // offset 0x18, size 0x8
};
class NNS_VTXLIST_COMMON_DESC {
    // total size: 0x40
public:
    class NNS_VTXLIST_COMMON_ARRAY List0; // offset 0x0, size 0x10
    class NNS_VTXLIST_COMMON_ARRAY List1; // offset 0x10, size 0x10
    class NNS_VTXLIST_COMMON_ARRAY List2; // offset 0x20, size 0x10
    class NNS_VTXLIST_COMMON_ARRAY List3; // offset 0x30, size 0x10
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
class NNS_MATERIAL_TEXMAP_DESC_EX {
    // total size: 0x40
public:
    unsigned int fTexMapType; // offset 0x0, size 0x4
    signed int iTexIdx; // offset 0x4, size 0x4
    class NNS_TEXCOORD UVOffset; // offset 0x8, size 0x8
    float Blend; // offset 0x10, size 0x4
    class _NNS_TEXINFO * pTexInfo; // offset 0x14, size 0x4
    unsigned long GsTex1; // offset 0x18, size 0x4
    unsigned long GsTex0; // offset 0x20, size 0x4
    unsigned long GsClamp; // offset 0x28, size 0x4
    unsigned long GsTexa; // offset 0x30, size 0x4
    float UVArea; // offset 0x38, size 0x4
    unsigned int Reserved; // offset 0x3C, size 0x4
};
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
};
class NNS_VTXLIST_COMMON_ARRAY {
    // total size: 0x10
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int Number; // offset 0x4, size 0x4
    unsigned int Size; // offset 0x8, size 0x4
    void * pList; // offset 0xC, size 0x4
};
class sceGsMiptbp1 {
    // total size: 0x8
public:
    unsigned long TBP1 : 14; // offset 0x0, size 0x4
    unsigned long TBW1 : 6; // offset 0x0, size 0x4
    unsigned long TBP2 : 14; // offset 0x0, size 0x4
    unsigned long TBW2 : 6; // offset 0x0, size 0x4
    unsigned long TBP3 : 14; // offset 0x0, size 0x4
    unsigned long TBW3 : 6; // offset 0x0, size 0x4
    unsigned long pad60 : 4; // offset 0x0, size 0x4
};
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
class _NNS_TEXINFO {
    // total size: 0x50
public:
    class NVS_SVROBJ SvrObj; // offset 0x0, size 0x30
    void * pMainMemory; // offset 0x30, size 0x4
    void * pLocalMemory; // offset 0x34, size 0x4
    unsigned int nLocalBytes; // offset 0x38, size 0x4
    unsigned int nDmaTagBytes; // offset 0x3C, size 0x4
    unsigned int GlobalIndex; // offset 0x40, size 0x4
    unsigned int Bank; // offset 0x44, size 0x4
    unsigned short MinFilter; // offset 0x48, size 0x2
    unsigned short MagFilter; // offset 0x4A, size 0x2
    unsigned int Flag; // offset 0x4C, size 0x4
};
class NNS_RGB {
    // total size: 0xC
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
};
class NNS_PRIMLIST_COMMON_TRIANGLE_STRIP_R {
    // total size: 0x14
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nIndexSetSize; // offset 0x4, size 0x4
    signed int nStrip; // offset 0x8, size 0x4
    unsigned short * pLengthList; // offset 0xC, size 0x4
    unsigned short * pStripList; // offset 0x10, size 0x4
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
class NNS_MATERIAL_LOGIC {
    // total size: 0x10
public:
    unsigned int fGsPrimMode; // offset 0x0, size 0x4
    unsigned int GsTest; // offset 0x4, size 0x4
    unsigned int GsAlpha; // offset 0x8, size 0x4
    unsigned int Reserved; // offset 0xC, size 0x4
};
class sceGsMiptbp2 {
    // total size: 0x8
public:
    unsigned long TBP4 : 14; // offset 0x0, size 0x4
    unsigned long TBW4 : 6; // offset 0x0, size 0x4
    unsigned long TBP5 : 14; // offset 0x0, size 0x4
    unsigned long TBW5 : 6; // offset 0x0, size 0x4
    unsigned long TBP6 : 14; // offset 0x0, size 0x4
    unsigned long TBW6 : 6; // offset 0x0, size 0x4
    unsigned long pad60 : 4; // offset 0x0, size 0x4
};
class sceGsTex0 {
    // total size: 0x8
public:
    unsigned long TBP0 : 14; // offset 0x0, size 0x4
    unsigned long TBW : 6; // offset 0x0, size 0x4
    unsigned long PSM : 6; // offset 0x0, size 0x4
    unsigned long TW : 4; // offset 0x0, size 0x4
    unsigned long TH : 4; // offset 0x0, size 0x4
    unsigned long TCC : 1; // offset 0x0, size 0x4
    unsigned long TFX : 2; // offset 0x0, size 0x4
    unsigned long CBP : 14; // offset 0x0, size 0x4
    unsigned long CPSM : 4; // offset 0x0, size 0x4
    unsigned long CSM : 1; // offset 0x0, size 0x4
    unsigned long CSA : 5; // offset 0x0, size 0x4
    unsigned long CLD : 3; // offset 0x0, size 0x4
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
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
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
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};
class sceGsTex1 {
    // total size: 0x8
public:
    unsigned long LCM : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 1; // offset 0x0, size 0x4
    unsigned long MXL : 3; // offset 0x0, size 0x4
    unsigned long MMAG : 1; // offset 0x0, size 0x4
    unsigned long MMIN : 3; // offset 0x0, size 0x4
    unsigned long MTBA : 1; // offset 0x0, size 0x4
    unsigned long pad10 : 9; // offset 0x0, size 0x4
    unsigned long L : 2; // offset 0x0, size 0x4
    unsigned long pad21 : 11; // offset 0x0, size 0x4
    unsigned long K : 12; // offset 0x0, size 0x4
    unsigned long pad44 : 20; // offset 0x0, size 0x4
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
class NVS_SVRHEADER {
    // total size: 0x8
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short miplevel; // offset 0x2, size 0x2
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
};
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
};

// Range: 0x153F10 -> 0x1541E0
unsigned int nnCalcObjectMaterialSizeCore(class NNS_OBJECT * obj /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x153F10 -> 0x1541E0
        signed int nMaterial; // r2
        class NNS_MATERIALPTR * pMatPtrList; // r8
        signed int i; // r7
        unsigned int size; // r2
        enum NNE_BOOL fPXPlus; // r6
        signed int j; // r25
        class NNS_MATERIAL_DESC * pMatDesc0; // r2
        class NNS_MATERIAL_DESC * pMatDesc1; // r2
        enum NNE_BOOL bSame; // r24
        class NNS_MATERIAL_COLOR_PXPLUS2 * pMatColor0; // r2
        unsigned int nMatColor1; // r6
        unsigned int nMatColor2; // r5
        class NNS_MATERIAL_LOGIC * pMatLogic0; // r2
        unsigned int nMatLogic; // r2
        class NNS_MATERIAL_TEXMAP_DESC_EX * pMatTex0; // r2
        unsigned int nMatTex; // r15
    }
}


// Range: 0x1541E0 -> 0x154634
unsigned char * nnCopyObjectMaterial(class NNS_OBJECT * dstobj /* r21 */, class NNS_OBJECT * srcobj /* r20 */, unsigned char * ptr /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1541E0 -> 0x154634
        signed int nMaterial; // r2
        class NNS_MATERIALPTR * pMatPtrList; // r21
        class NNS_MATERIALPTR * pMatPtrListSrc; // r20
        unsigned int size; // r18
        signed int i; // r18
        signed int j; // r8
        enum NNE_BOOL fPXPlus; // r22
        class NNS_MATERIAL_DESC * pMatDescSrc0; // r7
        class NNS_MATERIAL_DESC * pMatDescSrc1; // r2
        class NNS_MATERIAL_DESC * pMatDescDst0; // r2
        class NNS_MATERIAL_DESC * pMatDescDst1; // r2
        enum NNE_BOOL bSame; // r6
        class NNS_MATERIAL_COLOR_PXPLUS2 * pMatColorSrc0; // r2
        signed int nSameColor; // r23
        class NNS_MATERIAL_LOGIC * pMatLogicSrc0; // r2
        signed int nSameLogic; // r30
        class NNS_MATERIAL_TEXMAP_DESC_EX * pMatTexSrc0; // r2
        unsigned int nSameTex; // r29+0xAC
    }
}


