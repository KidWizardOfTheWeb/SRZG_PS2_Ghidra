/*
    Compile unit: C:\usr\local\sega\nn\src\DrawObj\nndrawcommonvertices.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed char nngBoneTable[128]; // size: 0x80, address: 0x6E11C0
class NNS_DRAWCALLBACK_VAL nngDrawCallBackVal; // size: 0x40, address: 0x6DEDB0
class NNS_OBJECT_FLAG_PS2 nngSubObjectFlag; // size: 0x38, address: 0x6DEE30
class NNS_PREV_PARAM_PS2 nngPrevParam; // size: 0x38, address: 0x6DEE90
float nngDivColorAlpha; // size: 0x4, address: 0x6D1DD4
class NNS_DRAW_PARAM_PS2 nngDrawParam; // size: 0x14, address: 0x6DEE70
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
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
};
class NNS_VTXLIST_COMMON_DESC {
    // total size: 0x40
public:
    class NNS_VTXLIST_COMMON_ARRAY List0; // offset 0x0, size 0x10
    class NNS_VTXLIST_COMMON_ARRAY List1; // offset 0x10, size 0x10
    class NNS_VTXLIST_COMMON_ARRAY List2; // offset 0x20, size 0x10
    class NNS_VTXLIST_COMMON_ARRAY List3; // offset 0x30, size 0x10
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
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class NNS_PX_VERTEX {
    // total size: 0x30
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
    unsigned int r; // offset 0x10, size 0x4
    unsigned int g; // offset 0x14, size 0x4
    unsigned int b; // offset 0x18, size 0x4
    unsigned int a; // offset 0x1C, size 0x4
    float u; // offset 0x20, size 0x4
    float v; // offset 0x24, size 0x4
    float q; // offset 0x28, size 0x4
    float rsvd; // offset 0x2C, size 0x4
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
class NNS_COMMON_WEIGHT2 {
    // total size: 0xC
public:
    signed int Index0; // offset 0x0, size 0x4
    signed int Index1; // offset 0x4, size 0x4
    float Ratio; // offset 0x8, size 0x4
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
class NNS_COMMON_PW4 {
    // total size: 0x2C
public:
    class NNS_VECTOR Pos; // offset 0x0, size 0xC
    class NNS_COMMON_WEIGHT Wgt[4]; // offset 0xC, size 0x20
};
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
};
class PXS_VERTEX_PCTT4I3W {
    // total size: 0x50
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w0; // offset 0xC, size 0x4
    unsigned int r; // offset 0x10, size 0x4
    unsigned int g; // offset 0x14, size 0x4
    unsigned int b; // offset 0x18, size 0x4
    unsigned int a; // offset 0x1C, size 0x4
    float u0; // offset 0x20, size 0x4
    float v0; // offset 0x24, size 0x4
    signed int i0; // offset 0x28, size 0x4
    signed int i1; // offset 0x2C, size 0x4
    float w1; // offset 0x30, size 0x4
    float w2; // offset 0x34, size 0x4
    signed int i2; // offset 0x38, size 0x4
    signed int i3; // offset 0x3C, size 0x4
    float u1; // offset 0x40, size 0x4
    float v1; // offset 0x44, size 0x4
    float rsvd0; // offset 0x48, size 0x4
    float rsvd1; // offset 0x4C, size 0x4
};
class NNS_VTXLIST_COMMON_ARRAY {
    // total size: 0x10
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int Number; // offset 0x4, size 0x4
    unsigned int Size; // offset 0x8, size 0x4
    void * pList; // offset 0xC, size 0x4
};
class NNS_COMMON_WEIGHT {
    // total size: 0x8
public:
    signed int Index; // offset 0x0, size 0x4
    float Ratio; // offset 0x4, size 0x4
};
class NNS_COMMON_PN {
    // total size: 0x18
public:
    class NNS_VECTOR Pos; // offset 0x0, size 0xC
    class NNS_VECTOR Nrm; // offset 0xC, size 0xC
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
class NNS_COMMON_PW2 {
    // total size: 0x18
public:
    class NNS_VECTOR Pos; // offset 0x0, size 0xC
    class NNS_COMMON_WEIGHT2 Wgt; // offset 0xC, size 0xC
};
class NNS_COMMON_PNW2 {
    // total size: 0x24
public:
    class NNS_VECTOR Pos; // offset 0x0, size 0xC
    class NNS_VECTOR Nrm; // offset 0xC, size 0xC
    class NNS_COMMON_WEIGHT2 Wgt; // offset 0x18, size 0xC
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
class NNS_COMMON_PNW4 {
    // total size: 0x38
public:
    class NNS_VECTOR Pos; // offset 0x0, size 0xC
    class NNS_VECTOR Nrm; // offset 0xC, size 0xC
    class NNS_COMMON_WEIGHT Wgt[4]; // offset 0x18, size 0x20
};
class NNS_COMMON_TEXCOORD2 {
    // total size: 0x10
public:
    class NNS_TEXCOORD Tex[2]; // offset 0x0, size 0x10
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
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
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
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

// Range: 0x14DE10 -> 0x14E588
void nnPutRigidCommonVerticesColorStripStripL(class NNS_VTXLIST_COMMON_DESC * pVDesc /* r2 */, class NNS_PRIMLIST_COMMON_TRIANGLE_STRIP_R * pPList /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14DE10 -> 0x14E588
        signed int i; // r29+0x160
        signed int j; // r5
        signed int listidx; // r12
        unsigned short * pLength; // r29+0x150
        unsigned short * pStrip; // r11
        class NNS_VECTOR * pPos; // r2
        class NNS_VECTOR * pPosLst; // r29+0x140
        class NNS_VECTOR * pNrm; // r2
        class NNS_VECTOR * pNrmLst; // r29+0x130
        class NNS_RGBA * pCol; // r2
        class NNS_RGBA * pColLst; // r23
        class NNS_TEXCOORD * pTex0; // r2
        class NNS_TEXCOORD * pTex0Lst; // r20
        class NNS_TEXCOORD * pTex1; // r2
        class NNS_TEXCOORD * pTex1Lst; // r22
        class NNS_COMMON_PN * pPN; // r2
        class NNS_COMMON_PNW2 * pPNW2; // r2
        class NNS_COMMON_PNW4 * pPNW4; // r2
        class NNS_COMMON_TEXCOORD2 * pTEX2; // r2
        unsigned char PosStride; // r10
        unsigned char NrmStride; // r9
        unsigned char ColStride; // r29+0x12F
        unsigned char Tex0Stride; // r8
        unsigned char Tex1Stride; // r7
        unsigned short * pPosIdx; // r29+0x110
        unsigned short * pNrmIdx; // r19
        unsigned short * pColIdx; // r18
        unsigned short * pTex0Idx; // r17
        unsigned short * pTex1Idx; // r16
        unsigned int * p; // r2
        class NNS_PX_VERTEX * v; // r2
        unsigned int idxshift; // r6
        signed int count; // r29+0x100
        signed int nVert; // r30
    }
}


// Range: 0x14E590 -> 0x14ECE8
void nnPutRigidCommonVerticesStripL(class NNS_VTXLIST_COMMON_DESC * pVDesc /* r30 */, class NNS_PRIMLIST_COMMON_TRIANGLE_STRIP_R * pPList /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14E590 -> 0x14ECE8
        signed int i; // r29+0x150
        signed int j; // r5
        signed int listidx; // r6
        unsigned short * pLength; // r29+0x140
        unsigned short * pStrip; // r5
        class NNS_VECTOR * pPos; // r2
        class NNS_VECTOR * pPosLst; // r29+0x130
        class NNS_VECTOR * pNrm; // r2
        class NNS_VECTOR * pNrmLst; // r29+0x120
        class NNS_RGBA * pCol; // r2
        class NNS_RGBA * pColLst; // r23
        class NNS_TEXCOORD * pTex0; // r2
        class NNS_TEXCOORD * pTex0Lst; // r20
        class NNS_TEXCOORD * pTex1; // r2
        class NNS_TEXCOORD * pTex1Lst; // r22
        class NNS_COMMON_PN * pPN; // r2
        class NNS_COMMON_PNW2 * pPNW2; // r2
        class NNS_COMMON_PNW4 * pPNW4; // r2
        class NNS_COMMON_TEXCOORD2 * pTEX2; // r2
        unsigned char PosStride; // r29+0x11F
        unsigned char NrmStride; // r29+0x11E
        unsigned char ColStride; // r29+0x11D
        unsigned char Tex0Stride; // r29+0x11C
        unsigned char Tex1Stride; // r29+0x11B
        unsigned short * pPosIdx; // r29+0x100
        unsigned short * pNrmIdx; // r19
        unsigned short * pColIdx; // r18
        unsigned short * pTex0Idx; // r17
        unsigned short * pTex1Idx; // r16
        unsigned int * p; // r2
        class NNS_PX_VERTEX * v; // r2
        unsigned int idxshift; // r4
        signed int count; // r29+0xF0
        signed int nVert; // r30
    }
}


// Range: 0x14ECF0 -> 0x14F610
void nnPutPliableCommonVerticesColorStripStripL(class NNS_VTXLIST_COMMON_DESC * pVDesc /* r2 */, class NNS_PRIMLIST_COMMON_TRIANGLE_STRIP_R * pPList /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14ECF0 -> 0x14F610
        signed int i; // r29+0x1B0
        signed int j; // r6
        signed int listidx; // r12
        unsigned short * pLength; // r29+0x1A0
        unsigned short * pStrip; // r11
        class NNS_VECTOR * pPos; // r2
        class NNS_VECTOR * pPosLst; // r29+0x190
        class NNS_VECTOR * pNrm; // r2
        class NNS_VECTOR * pNrmLst; // r29+0x180
        class NNS_RGBA * pCol; // r2
        class NNS_RGBA * pColLst; // r29+0x170
        class NNS_TEXCOORD * pTex0; // r2
        class NNS_TEXCOORD * pTex0Lst; // r22
        class NNS_TEXCOORD * pTex1; // r2
        class NNS_TEXCOORD * pTex1Lst; // r20
        class NNS_COMMON_WEIGHT2 * pWgt2; // r19
        class NNS_COMMON_WEIGHT2 * pWgt2Lst; // r29+0x160
        class NNS_COMMON_WEIGHT * pWgt; // r18
        class NNS_COMMON_WEIGHT * pWgtLst; // r29+0x150
        class NNS_COMMON_PN * pPN; // r2
        class NNS_COMMON_PW2 * pPW2; // r2
        class NNS_COMMON_PNW2 * pPNW2; // r2
        class NNS_COMMON_PW4 * pPW4; // r2
        class NNS_COMMON_PNW4 * pPNW4; // r2
        class NNS_COMMON_TEXCOORD2 * pTEX2; // r2
        unsigned char PosStride; // r10
        unsigned char NrmStride; // r9
        unsigned char ColStride; // r29+0x14F
        unsigned char Tex0Stride; // r8
        unsigned char Tex1Stride; // r7
        unsigned short * pPosIdx; // r17
        unsigned short * pNrmIdx; // r30
        unsigned short * pColIdx; // r29+0x130
        unsigned short * pTex0Idx; // r23
        unsigned short * pTex1Idx; // r16
        unsigned int * p; // r2
        class PXS_VERTEX_PCTT4I3W * v; // r2
        unsigned int stride; // r29+0x120
        unsigned int idxshift; // r6
        signed int count; // r29+0x110
        signed int nVert; // r29+0x100
    }
}


// Range: 0x14F610 -> 0x14FF60
void nnPutPliableCommonVerticesStripL(class NNS_VTXLIST_COMMON_DESC * pVDesc /* r29+0x1BC */, class NNS_PRIMLIST_COMMON_TRIANGLE_STRIP_R * pPList /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14F610 -> 0x14FF60
        signed int i; // r29+0x1A0
        signed int j; // r6
        signed int listidx; // r6
        unsigned short * pLength; // r29+0x190
        unsigned short * pStrip; // r5
        class NNS_VECTOR * pPos; // r2
        class NNS_VECTOR * pPosLst; // r29+0x180
        class NNS_VECTOR * pNrm; // r2
        class NNS_VECTOR * pNrmLst; // r29+0x170
        class NNS_RGBA * pCol; // r2
        class NNS_RGBA * pColLst; // r29+0x160
        class NNS_TEXCOORD * pTex0; // r2
        class NNS_TEXCOORD * pTex0Lst; // r22
        class NNS_TEXCOORD * pTex1; // r2
        class NNS_TEXCOORD * pTex1Lst; // r20
        class NNS_COMMON_WEIGHT2 * pWgt2; // r19
        class NNS_COMMON_WEIGHT2 * pWgt2Lst; // r29+0x150
        class NNS_COMMON_WEIGHT * pWgt; // r18
        class NNS_COMMON_WEIGHT * pWgtLst; // r29+0x140
        class NNS_COMMON_PN * pPN; // r2
        class NNS_COMMON_PW2 * pPW2; // r2
        class NNS_COMMON_PNW2 * pPNW2; // r2
        class NNS_COMMON_PW4 * pPW4; // r2
        class NNS_COMMON_PNW4 * pPNW4; // r2
        class NNS_COMMON_TEXCOORD2 * pTEX2; // r2
        unsigned char PosStride; // r29+0x13F
        unsigned char NrmStride; // r29+0x13E
        unsigned char ColStride; // r29+0x13D
        unsigned char Tex0Stride; // r29+0x13C
        unsigned char Tex1Stride; // r29+0x13B
        unsigned short * pPosIdx; // r17
        unsigned short * pNrmIdx; // r30
        unsigned short * pColIdx; // r29+0x120
        unsigned short * pTex0Idx; // r23
        unsigned short * pTex1Idx; // r16
        unsigned int * p; // r2
        class PXS_VERTEX_PCTT4I3W * v; // r2
        unsigned int stride; // r29+0x110
        unsigned int idxshift; // r4
        signed int count; // r29+0x100
        signed int nVert; // r29+0xF0
    }
}


// Range: 0x14FF60 -> 0x15023C
void nnPutBoneMatrixCommon(float (* pMtxPal)[4][4] /* r2 */, class NNS_VTXLIST_COMMON_DESC * pVDesc /* r2 */, class NNS_PRIMLIST_COMMON_TRIANGLE_STRIP_R * pPList /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14FF60 -> 0x15023C
        signed int i; // r8
        signed int j; // r18
        signed int listidx; // r17
        unsigned short * pLength; // r16
        unsigned short * pStrip; // r25
        class NNS_COMMON_WEIGHT2 * pWgt2; // r24
        class NNS_COMMON_WEIGHT * pWgt; // r15
        unsigned int idxshift; // r14
        signed int BoneMtxList[28]; // r29+0x50
        signed char nBoneMtx; // r9
    }
}


// Range: 0x150240 -> 0x15060C
void nnDrawPliableCommonVerticesExt(class NNS_VTXLISTPTR * pVtx /* r2 */, class NNS_PRIMLISTPTR * pPrim /* r18 */, float (* pMtxPal)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x150240 -> 0x15060C
        class NNS_VTXLIST_COMMON_DESC * pVDesc; // r17
        unsigned int fType; // r5
        class NNS_PRIMLIST_COMMON_TRIANGLE_STRIP_R * pPList; // r16
        unsigned int shader; // r16
        signed int nBone; // r2
        signed char i; // r5
    }
}


// Range: 0x150610 -> 0x15081C
void nnDrawRigidCommonVerticesExt(class NNS_VTXLISTPTR * pVtx /* r2 */, class NNS_PRIMLISTPTR * pPrim /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x150610 -> 0x15081C
        class NNS_VTXLIST_COMMON_DESC * pVDesc; // r17
        unsigned int fType; // r5
        unsigned int shader; // r16
    }
}


