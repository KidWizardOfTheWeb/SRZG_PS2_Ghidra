/*
    Compile unit: C:\usr\local\sega\nn\src\Material\nnmaterialmotion.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_MATERIAL_MULTI {
    // total size: 0xE0
public:
    class NNS_MATERIAL_SINGLE Mat[2]; // offset 0x0, size 0xE0
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
class NNS_SUBOBJ {
    // total size: 0x14
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nMeshset; // offset 0x4, size 0x4
    class NNS_MESHSET * pMeshsetList; // offset 0x8, size 0x4
    signed int nTex; // offset 0xC, size 0x4
    signed int * pTexNumList; // offset 0x10, size 0x4
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
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
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
class NNS_RGB {
    // total size: 0xC
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
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
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
};

// Range: 0x150820 -> 0x150980
unsigned int nnCalcMaterialMotionObjectBufferSize(class NNS_OBJECT * obj /* r2 */, class NNS_MOTION * mmot /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x150820 -> 0x150980
        unsigned int size; // r3
        class NNS_MATERIALPTR * pMatPtrList; // r2
        signed int i; // r14
    }
}


// Range: 0x150980 -> 0x1509F4
static void nnCopyMultiMaterial(class NNS_MATERIAL_MULTI * dst /* r2 */, class NNS_MATERIAL_MULTI * src /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x150980 -> 0x1509F4
    }
}


// Range: 0x150A00 -> 0x150A3C
static void nnCopyMaterial(class NNS_MATERIAL_SINGLE * dst /* r2 */, class NNS_MATERIAL_SINGLE * src /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x150A00 -> 0x150A3C
    }
}


// Range: 0x150A40 -> 0x150CF4
void nnInitMaterialMotionObject(class NNS_OBJECT * mmobj /* r2 */, class NNS_OBJECT * obj /* r24 */, class NNS_MOTION * mmot /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x150A40 -> 0x150CF4
        class NNS_MATERIALPTR * pDstMatPtrList; // r2
        class NNS_MATERIALPTR * pSrcMatPtrList; // r2
        unsigned char * pPtr; // r2
        signed int i; // r15
    }
}


// Range: 0x150D00 -> 0x150DB0
static void nnResetMaterialTextureOffset(class NNS_MATERIALPTR * pMatPtrList /* r2 */, class NNS_MATERIALPTR * pMatPtrListSrc /* r2 */, class NNS_SUBMOTION * pSubMot /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x150D00 -> 0x150DB0
        class NNS_MATERIAL_SINGLE * pTex1; // r2
        class NNS_MATERIAL_SINGLE * pTex1Src; // r2
        class NNS_MATERIAL_MULTI * pTex2; // r2
        class NNS_MATERIAL_MULTI * pTex2Src; // r2
    }
}


// Range: 0x150DB0 -> 0x1510C8
void nnCalcMaterialMotionDiffuseColor(class NNS_MATERIALPTR * pMatPtrList /* r18 */, class NNS_SUBMOTION * pSubMot /* r2 */, float frame /* r29+0x60 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x150DB0 -> 0x1510C8
        class NNS_MATERIAL_SINGLE * pMat; // r17
        void * pKeyList; // r2
        signed int nKeyFrame; // r3
        unsigned int fType; // r2
        float * fval; // r16
        class NNS_RGB rgb; // r29+0x50
        float cmag; // r20
    }
}


// Range: 0x1510D0 -> 0x1511F0
void nnCalcMaterialMotionAlpha(class NNS_MATERIALPTR * pMatPtrList /* r2 */, class NNS_SUBMOTION * pSubMot /* r2 */, float frame /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1510D0 -> 0x1511F0
        class NNS_MATERIAL_SINGLE * pMat; // r16
        void * pKeyList; // r2
        signed int nKeyFrame; // r2
    }
}


// Range: 0x1511F0 -> 0x1512D0
void nnCalcMaterialMotionSpecularLevel(class NNS_MATERIALPTR * pMatPtrList /* r2 */, class NNS_SUBMOTION * pSubMot /* r2 */, float frame /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1511F0 -> 0x1512D0
        class NNS_MATERIAL_SINGLE * pMat; // r16
        void * pKeyList; // r2
        signed int nKeyFrame; // r2
    }
}


// Range: 0x1512D0 -> 0x151568
void nnCalcMaterialMotionAmbientColor(class NNS_MATERIALPTR * pMatPtrList /* r18 */, class NNS_SUBMOTION * pSubMot /* r2 */, float frame /* r29+0x60 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1512D0 -> 0x151568
        class NNS_MATERIAL_SINGLE * pMat; // r2
        void * pKeyList; // r2
        signed int nKeyFrame; // r3
        class NNS_RGB rgb; // r29+0x50
        unsigned int fType; // r2
        float * fval; // r17
    }
}


// Range: 0x151570 -> 0x151630
void nnCalcMaterialMotionTextureIndex(class NNS_MATERIALPTR * pMatPtrList /* r17 */, class NNS_SUBMOTION * pSubMot /* r16 */, float frame /* r29+0x40 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x151570 -> 0x151630
        class NNS_MATERIAL_SINGLE * pTex1; // r2
        class NNS_MATERIAL_MULTI * pTex2; // r2
        void * pKeyList; // r2
        signed int nKeyFrame; // r2
        signed int TexIdx; // r29+0x3C
    }
}


// Range: 0x151630 -> 0x151778
void nnCalcMaterialMotionTextureBlend(class NNS_MATERIALPTR * pMatPtrList /* r2 */, class NNS_SUBMOTION * pSubMot /* r2 */, float frame /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x151630 -> 0x151778
        class NNS_MATERIAL_MULTI * pTex2; // r2
        void * pKeyList; // r2
        signed int nKeyFrame; // r2
        float * fval; // r16
    }
}


// Range: 0x151780 -> 0x151A10
void nnCalcMaterialMotionTextureOffset(class NNS_MATERIALPTR * pMatPtrList /* r2 */, class NNS_SUBMOTION * pSubMot /* r2 */, float frame /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x151780 -> 0x151A10
        class NNS_MATERIAL_SINGLE * pTex1; // r2
        class NNS_MATERIAL_MULTI * pTex2; // r2
        void * pKeyList; // r9
        signed int nKeyFrame; // r8
        unsigned int fType; // r2
        class NNS_TEXCOORD * Tex; // r2
        float * fval; // r2
    }
}


// Range: 0x151A10 -> 0x151B4C
void nnCalcMaterialMotionUserData(class NNS_MATERIALPTR * pMatPtrList /* r2 */, class NNS_SUBMOTION * pSubMot /* r2 */, float frame /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x151A10 -> 0x151B4C
        class NNS_MATERIAL_SINGLE * pMat; // r2
        void * pKeyList; // r2
        signed int nKeyFrame; // r2
        unsigned int fType; // r2
        float * fv; // r2
        unsigned int * iv; // r2
    }
}


// Range: 0x151B50 -> 0x1522E4
void nnCalcMaterialMotionCore(class NNS_OBJECT * pMObj /* r29+0xD4 */, class NNS_OBJECT * pObj /* r2 */, class NNS_MOTION * pMot /* r23 */, float frame /* r20 */, unsigned int * pMatStatList /* r29+0xD0 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x151B50 -> 0x1522E4
        signed int i; // r21
        signed int j; // r20
        float nframe; // r29+0xDC
        class NNS_SUBMOTION * pSubMot; // r19
        unsigned int smotiptype; // r2
        signed int SubMotId; // r29+0xCC
        signed int SubMotIdNow; // r4
        class NNS_MATERIALPTR * pMatPtrList; // r2
        class NNS_MATERIALPTR * pMatPtrListSrc; // r2
    }
}


// Range: 0x1522F0 -> 0x152368
void nnCalcMaterialMotion(class NNS_OBJECT * mmobj /* r18 */, class NNS_OBJECT * obj /* r17 */, class NNS_MOTION * mmot /* r16 */, float frame /* r29+0x50 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1522F0 -> 0x152368
        float nframe; // r29+0x4C
        signed int truefalse; // r2
    }
}


// Range: 0x152370 -> 0x1523F4
void nnCalcMaterialMotionMaterialStatusList(class NNS_OBJECT * mmobj /* r19 */, class NNS_OBJECT * obj /* r18 */, class NNS_MOTION * mmot /* r17 */, float frame /* r29+0x60 */, unsigned int * pMatStatList /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x152370 -> 0x1523F4
        float nframe; // r29+0x5C
        signed int truefalse; // r2
    }
}


// Range: 0x152400 -> 0x1524A8
void nnCalcMaterialStatusListNodeStatusList(unsigned int * pMatStatList /* r2 */, class NNS_OBJECT * pObj /* r2 */, unsigned int * pNodeStatList /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x152400 -> 0x1524A8
        unsigned int i; // r11
        unsigned int j; // r11
        unsigned int nSubobj; // r2
        class NNS_SUBOBJ * pSubobj; // r3
        unsigned int nMeshset; // r2
        class NNS_MESHSET * pMeshset; // r10
    }
}


// Range: 0x1524B0 -> 0x1524E8
void nnDrawMaterialMotionObject(class NNS_OBJECT * mmobj /* r2 */, float (* mtxpal)[4][4] /* r2 */, unsigned int * nodestatlist /* r2 */, unsigned int subobjtype /* r2 */, unsigned int flag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1524B0 -> 0x1524E8
    }
}


