/*
    Compile unit: C:\usr\local\sega\nn\src\Material\nnmaterialcontrol.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_MATCTRL_RGB nngMatCtrlDiffuse; // size: 0x10, address: 0x6E1240
class NNS_MATCTRL_RGB nngMatCtrlAmbient; // size: 0x10, address: 0x6E1250
class NNS_MATCTRL_RGB nngMatCtrlZero; // size: 0x10, address: 0x0
class NNS_MATCTRL_ALPHA nngMatCtrlSpecular; // size: 0x8, address: 0x6D1DE0
class NNS_MATCTRL_ALPHA nngMatCtrlAlpha; // size: 0x8, address: 0x6D1DE8
class NNS_MATCTRL_ALPHA nngMatCtrlAlphaRef; // size: 0x8, address: 0x6D1DF0
enum NNE_BOOL nngMatCtrlAlphaWithAlphaRef; // size: 0x4, address: 0x6D1DF8
class NNS_MATCTRL_TEXOFFSET nngMatCtrlTexOffset[2]; // size: 0x18, address: 0x6E1260
class NNS_MATCTRL_ENVTEXMATRIX nngMatCtrlEnvTexMatrix; // size: 0x50, address: 0x6E1280
enum NNE_MATCTRL_BLEND nngMatCtrlBlendMode; // size: 0x4, address: 0x6D1DFC
unsigned int nngMatCtrlGsPrmodeAnd; // size: 0x4, address: 0x6D1E00
unsigned int nngMatCtrlGsPrmodeOr; // size: 0x4, address: 0x6D1E04
unsigned int nngMatCtrlGsAlphaAnd; // size: 0x4, address: 0x6D1E08
unsigned int nngMatCtrlGsAlphaOr; // size: 0x4, address: 0x6D1E0C
unsigned int nngGsPrmodeOr; // size: 0x4, address: 0x6D1C18
unsigned int nngGsPrmodeAnd; // size: 0x4, address: 0x6D1C14
float (* nngpMatTextureMatrix)[4][4]; // size: 0x4, address: 0x6D1C10
class NNS_MATERIALPTR nngMatCtrlMatptrlist[]; // size: 0x0, address: 0x6D1AD0
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
};
class NNS_MATCTRL_RGB {
    // total size: 0x10
public:
    enum NNE_MATCTRLMODE mode; // offset 0x0, size 0x4
    class NNS_RGB col; // offset 0x4, size 0xC
};
class NNS_MATERIAL_TEXMAP_DESC {
    // total size: 0x20
public:
    unsigned int fTexMapType; // offset 0x0, size 0x4
    unsigned short fTexWrapMode; // offset 0x4, size 0x2
    unsigned short iTexIdx; // offset 0x6, size 0x2
    class NNS_TEXCOORD Offset; // offset 0x8, size 0x8
    unsigned int GsTexA; // offset 0x10, size 0x4
    unsigned short GsTexLODL; // offset 0x14, size 0x2
    signed short GsTexLODK; // offset 0x16, size 0x2
    unsigned short GsClampMINU; // offset 0x18, size 0x2
    unsigned short GsClampMAXU; // offset 0x1A, size 0x2
    unsigned short GsClampMINV; // offset 0x1C, size 0x2
    unsigned short GsClampMAXV; // offset 0x1E, size 0x2
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
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
class NNS_MATCTRL_ALPHA {
    // total size: 0x8
public:
    enum NNE_MATCTRLMODE mode; // offset 0x0, size 0x4
    float alpha; // offset 0x4, size 0x4
};
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class NNS_MATERIAL_SINGLE {
    // total size: 0x70
public:
    class NNS_RGB Diffuse; // offset 0x0, size 0xC
    float Specular; // offset 0xC, size 0x4
    class NNS_RGB Ambient; // offset 0x10, size 0xC
    float Alpha; // offset 0x1C, size 0x4
    class NNS_RGBA Emissive; // offset 0x20, size 0x10
    float Power; // offset 0x30, size 0x4
    float ColorClamp; // offset 0x34, size 0x4
    float AlphaClamp; // offset 0x38, size 0x4
    unsigned int GsTest; // offset 0x3C, size 0x4
    unsigned int fMatFlag; // offset 0x40, size 0x4
    unsigned int fGsPrimMode; // offset 0x44, size 0x4
    unsigned int GsAlpha; // offset 0x48, size 0x4
    unsigned int User; // offset 0x4C, size 0x4
    class NNS_MATERIAL_TEXMAP_DESC TexDesc[1]; // offset 0x50, size 0x20
};
class NNS_MATCTRL_TEXOFFSET {
    // total size: 0xC
public:
    enum NNE_MATCTRLMODE mode; // offset 0x0, size 0x4
    class NNS_TEXCOORD offset; // offset 0x4, size 0x8
};
class NNS_RGB {
    // total size: 0xC
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
};
enum NNE_MATCTRLMODE {
    NNE_MATCTRLMODE_NONE = 0,
    NNE_MATCTRLMODE_REPLACE = 1,
    NNE_MATCTRLMODE_ADD = 2,
    NNE_MATCTRLMODE_MODULATE = 3,
};
class NNS_MATCTRL_ENVTEXMATRIX {
    // total size: 0x50
public:
    enum NNE_MATCTRL_TEXCOORDSRC texcoordsrc; // offset 0x0, size 0x4
    float texmtx[4][4]; // offset 0x10, size 0x40
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
enum NNE_MATCTRL_TEXCOORDSRC {
    NNE_MATCTRL_TEXCOORDSRC_POSITION = 0,
    NNE_MATCTRL_TEXCOORDSRC_NORMAL = 1,
};
enum NNE_MATCTRL_BLEND {
    NNE_MATCTRL_BLEND_ALPHA = 0,
    NNE_MATCTRL_BLEND_ADD = 1,
    NNE_MATCTRL_BLEND_SUBTRACT = 2,
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
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum NNE_TEXSLOT {
    NNE_TEXSLOT_0 = 0,
    NNE_TEXSLOT_1 = 1,
    NNE_TEXSLOT_MAX = 2,
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

// Range: 0x1524F0 -> 0x1524FC
void nnSetMaterialControlAlpha(enum NNE_MATCTRLMODE mode /* r2 */, float alpha /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1524F0 -> 0x1524FC
    }
}


// Range: 0x152500 -> 0x152508
void nnSetMaterialControlBlendMode(enum NNE_MATCTRL_BLEND blendmode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x152500 -> 0x152508
    }
}


// Range: 0x152510 -> 0x15334C
void nnSetUpMaterialControlMaterial(class NNS_DRAWCALLBACK_VAL * val /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x152510 -> 0x15334C
        class NNS_MATERIAL_SINGLE * pMat; // r17
        class NNS_MATERIAL_SINGLE * pMat2; // r16
        float cmag; // r20
        signed int i; // r3
        signed int nMat; // r4
        class NNS_MATCTRL_RGB * pMatCtrlAmbi; // r19
        enum NNE_BOOL bMatCtrlAmbi; // r6
        unsigned int * pfTexMapType; // r2
        unsigned int * pfTexMapType; // r2
        unsigned int aref; // r3
        unsigned int aref2; // r2
        class NNS_MATERIAL_TEXMAP_DESC * pTexDesc; // r14
        class NNS_TEXCOORD * pOffset; // r2
        unsigned int * pfTexMapType; // r2
    }
}


