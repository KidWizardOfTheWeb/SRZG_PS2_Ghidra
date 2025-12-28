/*
    Compile unit: C:\usr\local\sega\nn\src\DrawObj\nndrawobjectext.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_RGBA_U8 nngWireColor; // size: 0x4, address: 0x6D1DC4
unsigned int nngWireType; // size: 0x4, address: 0x6D1DC8
class NNS_RGBA_U8 nngNormalColor; // size: 0x4, address: 0x6D1DCC
float nngNormalLength; // size: 0x4, address: 0x6D1DD0
float nngDivColorAlpha; // size: 0x4, address: 0x6D1DD4
static unsigned char cb_buf[80]; // size: 0x50, address: 0x0
static class PXS_CONTEXTBUFFER * cb; // size: 0x4, address: 0x0
static signed int nnsCbCurr; // size: 0x4, address: 0x0
class NNS_PS2_LIGHT nngLight; // size: 0x510, address: 0x6DE6D0
class tagPXS_PUSHBUFFER * pxgCurrentPB; // size: 0x4, address: 0x6D1F08
class PXS_FXYZW pxgLightMatrix[8]; // size: 0x80, address: 0x6E64D0
void (* nngPutLightVectorExtFunc)(class PXS_MATRIX *, class PXS_FXYZW *, class PXS_MATRIX *); // size: 0x4, address: 0x6D1A9C
class PXS_FXYZW pxgLight[4]; // size: 0x40, address: 0x6E6550
class NNS_PREV_PARAM_PS2 nngPrevParam; // size: 0x38, address: 0x6DEE90
class NNS_DRAW_PARAM_PS2 nngDrawParam; // size: 0x14, address: 0x6DEE70
class NNS_OBJECT_FLAG_PS2 nngObjectFlag; // size: 0x38, address: 0x6DEDF0
class NNS_OBJECT_FLAG_PS2 nngSubObjectFlag; // size: 0x38, address: 0x6DEE30
float nngProjectionMatrix[4][4]; // size: 0x40, address: 0x6DEC20
class NNS_DRAWCALLBACK_VAL nngDrawCallBackVal; // size: 0x40, address: 0x6DEDB0
enum NNE_BOOL nngfDrew; // size: 0x4, address: 0x6D1C20
float (* nngpTextureMatrix)[4][4]; // size: 0x4, address: 0x6D1B80
float nngLightMatrix[4][4]; // size: 0x40, address: 0x5F6020
void (* nngPutEnvTextureMatrixFunc)(float (*)[4][4], enum PXE_TRANSFORM); // size: 0x4, address: 0x6D1A88
unsigned int nngFastShaderSwitch; // size: 0x4, address: 0x6D1C1C
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
};
class tagPXS_PUSHBUFFER {
    // total size: 0xA0
public:
    unsigned int flag; // offset 0x0, size 0x4
    unsigned short dbIndex; // offset 0x4, size 0x2
    unsigned short renderIndex; // offset 0x6, size 0x2
    unsigned int peakTags; // offset 0x8, size 0x4
    unsigned int peakBytes; // offset 0xC, size 0x4
    unsigned int beginFlag; // offset 0x10, size 0x4
    void * recentAddr; // offset 0x14, size 0x4
    class tagPXS_PUSHBUFFER * prev; // offset 0x18, size 0x4
    class tagPXS_PUSHBUFFER * next; // offset 0x1C, size 0x4
    class PXS_PUSHBUFFER1 db[2]; // offset 0x20, size 0x80
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
class PXS_CONTEXTBUFFER {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class PXS_GSREG_AD reg[1]; // offset 0x10, size 0x10
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
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
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
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
class PXS_FXYZW {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class PXS_PUSHBUFFER1 {
    // total size: 0x40
public:
    __int128 * tagTop; // offset 0x0, size 0x4
    __int128 * tagPtr; // offset 0x4, size 0x4
    __int128 * bufTop; // offset 0x8, size 0x4
    __int128 * bufPtr; // offset 0xC, size 0x4
    __int128 * beginPtr; // offset 0x10, size 0x4
    unsigned int bufSize; // offset 0x14, size 0x4
    unsigned int maxTags; // offset 0x18, size 0x4
    unsigned int numTags; // offset 0x1C, size 0x4
    unsigned int numBytes; // offset 0x20, size 0x4
    unsigned int pushVuOffset; // offset 0x24, size 0x4
    unsigned int nextVifCmd; // offset 0x28, size 0x4
    unsigned int ready; // offset 0x2C, size 0x4
    unsigned int reserved2[4]; // offset 0x30, size 0x10
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
class PXS_MATRIX {
    // total size: 0x40
public:
    union { // inferred
        float m[4][4]; // offset 0x0, size 0x40
        struct { // inferred
            float _11; // offset 0x0, size 0x4
            float _12; // offset 0x4, size 0x4
            float _13; // offset 0x8, size 0x4
            float _14; // offset 0xC, size 0x4
            float _21; // offset 0x10, size 0x4
            float _22; // offset 0x14, size 0x4
            float _23; // offset 0x18, size 0x4
            float _24; // offset 0x1C, size 0x4
            float _31; // offset 0x20, size 0x4
            float _32; // offset 0x24, size 0x4
            float _33; // offset 0x28, size 0x4
            float _34; // offset 0x2C, size 0x4
            float _41; // offset 0x30, size 0x4
            float _42; // offset 0x34, size 0x4
            float _43; // offset 0x38, size 0x4
            float _44; // offset 0x3C, size 0x4
        };
    };
};
class NNS_RGBA_U8 {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
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
enum NNE_LIGHTTYPE_PS2 {
    NNE_LIGHTTYPE_PS2_PARALLEL = 0,
    NNE_LIGHTTYPE_PS2_POINT = 1,
    NNE_LIGHTTYPE_PS2_SPOT = 2,
    NNE_LIGHTTYPE_PS2_SPECULAR = 3,
    NNE_LIGHTTYPE_PS2_MAX = 4,
};
enum PXE_TRANSFORM {
    PXE_TRANSFORM_LIGHT = 0,
    PXE_TRANSFORM_VIEWPROJ = 1,
    PXE_TRANSFORM_TEXTURE1 = 2,
    PXE_TRANSFORM_TEXTURE2 = 3,
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
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
enum NNE_LIGHTSET_PS2_SPECSWITCH {
    NNE_LIGHTSET_PS2_SPECSWITCH_OFF = 0,
    NNE_LIGHTSET_PS2_SPECSWITCH_ON = 1,
    NNE_LIGHTSET_PS2_SPECSWITCH_MAX = 2,
    NNE_LIGHTSET_PS2_SPECSWITCH_ALWAYS = 2,
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
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
};

// Range: 0x14C5D0 -> 0x14C764
void nnCalcLightMatrix2Ext(class PXS_MATRIX * p /* r2 */, class PXS_FXYZW * l /* r2 */, class PXS_MATRIX * v /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14C5D0 -> 0x14C764
    }
}


// Range: 0x14C770 -> 0x14C810
void nnPutLightVectorExt(class PXS_MATRIX * v /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14C770 -> 0x14C810
        unsigned int * p; // r2
        __int128 * d128; // r2
        __int128 * s128; // r2
    }
}


// Range: 0x14C810 -> 0x14C8C4
void nnInitObject() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14C810 -> 0x14C8C4
    }
}


// Range: 0x14C8D0 -> 0x14CB78
enum NNE_BOOL nnCheckObjectFlagExt(unsigned int flag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14C8D0 -> 0x14CB78
    }
}


// Range: 0x14CB80 -> 0x14CD58
enum NNE_BOOL nnCheckSubObjectFlagExt(unsigned int nodestat /* r2 */, unsigned int fSubObjType /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14CB80 -> 0x14CD58
    }
}


// Range: 0x14CD60 -> 0x14CE0C
void nnSetCullSubObjectExt() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14CD60 -> 0x14CE0C
    }
}


// Range: 0x14CE10 -> 0x14CF40
void nnDrawMeshsetExt(class NNS_VTXLISTPTR * pVtxListPtr /* r18 */, class NNS_PRIMLISTPTR * pPrimListPtr /* r17 */, float (* mtxpal)[4][4] /* r16 */, signed int mtxidx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14CE10 -> 0x14CF40
        float mtx_vp[4][4]; // r29+0x40
    }
}


// Range: 0x14CF40 -> 0x14CFB0
signed int nnCalcMeshSetClip(class NNS_MESHSET * meshset /* r2 */, float (* mtx)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14CF40 -> 0x14CFB0
        unsigned int meshsetclip; // r2
    }
}


// Range: 0x14CFB0 -> 0x14D32C
static void nnDrawPliableSubObjectExt(class NNS_OBJECT * obj /* r20 */, class NNS_SUBOBJ * subobj /* r21 */, float (* mtxpal)[4][4] /* r19 */, unsigned int * nodestatlist /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14CFB0 -> 0x14D32C
        class NNS_MESHSET * meshset; // r18
        class NNS_VTXLISTPTR * pVtxListPtr; // r17
        class NNS_PRIMLISTPTR * pPrimListPtr; // r16
        unsigned int fnodestat; // r23
    }
}


// Range: 0x14D330 -> 0x14D760
static void nnDrawRigidSubObjectExt(class NNS_OBJECT * obj /* r20 */, class NNS_SUBOBJ * subobj /* r19 */, float (* mtxpal)[4][4] /* r18 */, unsigned int * nodestatlist /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14D330 -> 0x14D760
        class NNS_MESHSET * meshset; // r17
        class NNS_VTXLISTPTR * pVtxListPtr; // r2
        class NNS_PRIMLISTPTR * pPrimListPtr; // r2
        float (* pMtx)[4][4]; // r16
        unsigned int fnodestat; // r22
        float mtx_vp[4][4]; // r29+0xC0
        float mtx_lit[4][4]; // r29+0x80
    }
}


// Range: 0x14D760 -> 0x14D96C
void nnDrawObjectExt(class NNS_OBJECT * obj /* r19 */, float (* mtxpal)[4][4] /* r18 */, unsigned int * nodestatlist /* r17 */, unsigned int subobjtype /* r16 */, unsigned int flag /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14D760 -> 0x14D96C
        class NNS_SUBOBJ * subobj; // r21
        signed int nSubObj; // r20
    }
}


// Range: 0x14D970 -> 0x14D978
void nnSetFastShaderSwitchPS2(enum NNE_BOOL on_off /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14D970 -> 0x14D978
    }
}


