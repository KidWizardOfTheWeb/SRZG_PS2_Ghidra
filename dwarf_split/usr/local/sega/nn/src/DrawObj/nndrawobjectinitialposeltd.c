/*
    Compile unit: C:\usr\local\sega\nn\src\DrawObj\nndrawobjectinitialposeltd.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static float nnsMtxLit[4][4]; // size: 0x40, address: 0x6E12D0
class NNS_DRAWCALLBACK_VAL nngDrawCallBackVal; // size: 0x40, address: 0x6DEDB0
void (* nngPutEnvTextureMatrixFunc)(float (*)[4][4], enum PXE_TRANSFORM); // size: 0x4, address: 0x6D1A88
class NNS_DRAW_PARAM_PS2 nngDrawParam; // size: 0x14, address: 0x6DEE70
class NNS_PS2_LIGHT nngLight; // size: 0x510, address: 0x6DE6D0
float nngProjectionMatrix[4][4]; // size: 0x40, address: 0x6DEC20
float nngLightMatrix[4][4]; // size: 0x40, address: 0x5F6020
class NNS_PREV_PARAM_PS2 nngPrevParam; // size: 0x38, address: 0x6DEE90
enum NNE_BOOL nngfDrew; // size: 0x4, address: 0x6D1C20
class NNS_OBJECT_FLAG_PS2 nngObjectFlag; // size: 0x38, address: 0x6DEDF0
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
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
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
};
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
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
class NNS_SUBOBJ {
    // total size: 0x14
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nMeshset; // offset 0x4, size 0x4
    class NNS_MESHSET * pMeshsetList; // offset 0x8, size 0x4
    signed int nTex; // offset 0xC, size 0x4
    signed int * pTexNumList; // offset 0x10, size 0x4
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
enum NNE_LIGHTTYPE_PS2 {
    NNE_LIGHTTYPE_PS2_PARALLEL = 0,
    NNE_LIGHTTYPE_PS2_POINT = 1,
    NNE_LIGHTTYPE_PS2_SPOT = 2,
    NNE_LIGHTTYPE_PS2_SPECULAR = 3,
    NNE_LIGHTTYPE_PS2_MAX = 4,
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
enum NNE_ROTATETYPE {
    NNE_ROTATETYPE_XYZ = 0,
    NNE_ROTATETYPE_XZY = 1,
    NNE_ROTATETYPE_YXZ = 2,
    NNE_ROTATETYPE_YZX = 3,
    NNE_ROTATETYPE_ZXY = 4,
    NNE_ROTATETYPE_ZYX = 5,
};
enum NNE_LIGHTSET_PS2_SPECSWITCH {
    NNE_LIGHTSET_PS2_SPECSWITCH_OFF = 0,
    NNE_LIGHTSET_PS2_SPECSWITCH_ON = 1,
    NNE_LIGHTSET_PS2_SPECSWITCH_MAX = 2,
    NNE_LIGHTSET_PS2_SPECSWITCH_ALWAYS = 2,
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};
class NNS_PS2_LIGHT_DATA {
    // total size: 0x84
public:
    enum NNE_BOOL fSw; // offset 0x0, size 0x4
    unsigned int fType; // offset 0x4, size 0x4
    enum NNE_LIGHTTYPE_PS2 fTypePs2; // offset 0x8, size 0x4
    class NNS_RGBA sCol; // offset 0xC, size 0x10
    class NNS_RGBA Col; // offset 0x1C, size 0x10
    float Inten; // offset 0x2C, size 0x4
    class NNS_VECTOR Dir; // offset 0x30, size 0xC
    class NNS_VECTOR Pos; // offset 0x3C, size 0xC
    class NNS_VECTOR SrcTgt; // offset 0x48, size 0xC
    class NNS_VECTOR Tgt; // offset 0x54, size 0xC
    class NNS_ROTATE_A32 Rot; // offset 0x60, size 0xC
    enum NNE_ROTATETYPE fRotType; // offset 0x6C, size 0x4
    signed short InnerAng; // offset 0x70, size 0x2
    signed short OuterAng; // offset 0x72, size 0x2
    float InnerRange; // offset 0x74, size 0x4
    float OuterRange; // offset 0x78, size 0x4
    float FallOffStart; // offset 0x7C, size 0x4
    float FallOffEnd; // offset 0x80, size 0x4
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
class NNS_PS2_LIGHT {
    // total size: 0x510
public:
    class NNS_PS2_LIGHT_DATA LightData[9]; // offset 0x0, size 0x4A4
    class NNS_PS2_LIGHT_DATA * pOnLightData[4][4]; // offset 0x4A4, size 0x40
    signed int nOnLight[4]; // offset 0x4E4, size 0x10
    enum NNE_LIGHTSET_PS2_SPECSWITCH fSpeclarSw; // offset 0x4F4, size 0x4
    class NNS_RGBA AmbiCol; // offset 0x4F8, size 0x10
    enum NNE_BOOL fReqPutVector; // offset 0x508, size 0x4
    enum NNE_BOOL fReqPutColor; // offset 0x50C, size 0x4
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
enum PXE_TRANSFORM {
    PXE_TRANSFORM_LIGHT = 0,
    PXE_TRANSFORM_VIEWPROJ = 1,
    PXE_TRANSFORM_TEXTURE1 = 2,
    PXE_TRANSFORM_TEXTURE2 = 3,
};
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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

// Range: 0x153560 -> 0x1537DC
static void nnDrawRigidSubObjectInitialPoseLtd(class NNS_OBJECT * obj /* r20 */, class NNS_SUBOBJ * subobj /* r19 */, float (* basemtx)[4][4] /* r18 */, unsigned int * nodestatlist /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x153560 -> 0x1537DC
        class NNS_MESHSET * meshset; // r16
        class NNS_VTXLISTPTR * pVtxListPtr; // r2
        unsigned int fnodestat; // r21
    }
}


// Range: 0x1537E0 -> 0x1539E0
void nnDrawObjectInitialPoseLtd(class NNS_OBJECT * obj /* r19 */, float (* basemtx)[4][4] /* r18 */, unsigned int * nodestatlist /* r17 */, unsigned int subobjtype /* r16 */, unsigned int flag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1537E0 -> 0x1539E0
        class NNS_SUBOBJ * subobj; // r22
        signed int nSubObj; // r21
        float mtx_vp[4][4]; // r29+0x90
    }
}


