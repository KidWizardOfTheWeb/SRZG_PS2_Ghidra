/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Object\Gimmick\Control\DebrisControl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class clsOORandom * m_tpcSingleton; // size: 0x4, address: 0x703C58
static float FLYACTION_DESCENT_PITCH_GRAVITY; // size: 0x4, address: 0x0
static float FLYACTION_FALL_PITCH_GRAVITY; // size: 0x4, address: 0x0
static float FLYACTION_DEFAULT_PITCH_GRAVITY; // size: 0x4, address: 0x0
static float FLYACTION_MIN_PITCH; // size: 0x4, address: 0x0
static float FLYACTION_MAX_PITCH; // size: 0x4, address: 0x0
static float FLYACTION_LEFT_RIGHT_ROT; // size: 0x4, address: 0x0
static float FLYACTION_UP_DOWN_ROT; // size: 0x4, address: 0x0
static float toaf32GpUsedRate[5]; // size: 0x14, address: 0x0
static float toaf32ItemBox[3]; // size: 0xC, address: 0x0
static float toaf32BonusGLink[3]; // size: 0xC, address: 0x0
static float toaf32BonusPower[6]; // size: 0x18, address: 0x0
static float toaf32BonusFly[3]; // size: 0xC, address: 0x0
static float toaf32BonusSpeed[3]; // size: 0xC, address: 0x0
static float toaf32BonusTrick[7]; // size: 0x1C, address: 0x0
enum enmRet aoeRet[3]; // size: 0xC, address: 0x655000
static unsigned char ChkComUseData[1]; // size: 0x1, address: 0x0
static unsigned char ChkCourseUseData[1]; // size: 0x1, address: 0x0
static unsigned char chk__enum__enmMotion_nakawatari_SizeOver[1]; // size: 0x1, address: 0x0
static unsigned char chk__enum__notSkateModelType_nakawatari_NotEqual[1]; // size: 0x1, address: 0x0
static unsigned char chk__enum__enmMotionType_nakawatari_SizeOver[1]; // size: 0x1, address: 0x0
static unsigned char chk__enum__enmLevel_nakawatari_SizeOver[1]; // size: 0x1, address: 0x0
static float tosUnitMatrix[4][4]; // size: 0x40, address: 0x0
static class NNS_VECTOR tosUnitScaleVec; // size: 0xC, address: 0x0
static class NNS_VECTOR tosZVec; // size: 0xC, address: 0x0
static class NNS_VECTOR tosYVec; // size: 0xC, address: 0x0
static class NNS_VECTOR tosXVec; // size: 0xC, address: 0x0
static class NNS_VECTOR tosZeroVec; // size: 0xC, address: 0x0
static class NNS_VECTORFAST tosUnitScaleVecFast; // size: 0x10, address: 0x0
static class NNS_VECTORFAST tosZVecFast; // size: 0x10, address: 0x0
static class NNS_VECTORFAST tosYVecFast; // size: 0x10, address: 0x0
static class NNS_VECTORFAST tosXVecFast; // size: 0x10, address: 0x0
static class NNS_VECTORFAST tosZeroVecFast; // size: 0x10, address: 0x0
unsigned int oau32DebugColor[16]; // size: 0x40, address: 0x655010
char * oapc8Str[2]; // size: 0x8, address: 0x5F2198
char * oapc8Str[2]; // size: 0x8, address: 0x0
char * oapc8Str[2]; // size: 0x8, address: 0x0
char * oapc8Str[2]; // size: 0x8, address: 0x5F21B0
unsigned char oau8Mask[2]; // size: 0x2, address: 0x0
unsigned short oau16Mask[2]; // size: 0x4, address: 0x0
unsigned int oau32Mask[2]; // size: 0x8, address: 0x655050
unsigned int oau32Col[2]; // size: 0x8, address: 0x655058
class Fuid fuid; // size: 0x10, address: 0x0
class clsDebrisControl {
    // total size: 0x20
public:
    class clsDebriPartsBase * * m_apcDebris; // offset 0x0, size 0x4
    class clsDebriPartsBase * m_pcDebris; // offset 0x4, size 0x4
    class NNS_NODE * m_psNodeList; // offset 0x8, size 0x4
    signed int m_s32Num; // offset 0xC, size 0x4
    class NNS_VECTOR m_sVelocity; // offset 0x10, size 0xC
    unsigned char m_bBreak; // offset 0x1C, size 0x1
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
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
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
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class clsDebriPartsBase {
    // total size: 0x30
public:
    class NNS_VECTORFAST m_sPosVecFast; // offset 0x0, size 0x10
    class clsFrameControl m_cBreakFrame; // offset 0x10, size 0x8
    signed int m_s32NodeNo; // offset 0x18, size 0x4
    void (* m_pFuncBreakEffect)(class NNS_VECTORFAST &); // offset 0x1C, size 0x4
    unsigned char m_bHide; // offset 0x20, size 0x1
};
class clsSingleton {
    // total size: 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
};
class clsOORandom : public clsSingleton {
    // total size: 0x1C
public:
    signed int m_s32Seed_DependGame; // offset 0x4, size 0x4
    unsigned int m_u32Seed_CompTime_DependGame; // offset 0x8, size 0x4
    signed int m_s32Gen1_DependGame; // offset 0xC, size 0x4
    signed int m_s32Gen2_DependGame; // offset 0x10, size 0x4
    unsigned int m_u32GameRandCount; // offset 0x14, size 0x4
    unsigned char m_bIsPossibleGameRand; // offset 0x18, size 0x1
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
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
};
class clsFrameControl {
    // total size: 0x8
public:
    float m_f32Frame; // offset 0x0, size 0x4
    float m_f32CountFrame; // offset 0x4, size 0x4
};
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
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};

// Range: 0x3A7AA0 -> 0x3A7D54
void startBreak(class clsDebrisControl * this /* r18 */, float (* psTrsMtx)[4][4] /* r17 */, class NNS_VECTORFAST * psBoundVecFst /* r16 */, class NNS_VECTORFAST * opsContactPosVecFast /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3A7AA0 -> 0x3A7D54
        class clsOORandom * pcOORandom; // r21
        class NNS_VECTORFAST sPosVecFast; // r29+0xE0
        class NNS_VECTORFAST sLocalContactVecFast; // r29+0xD0
        class NNS_VECTORFAST sVelocityFast; // r29+0xC0
        class NNS_NODE * psNode; // r2
        float sInvMtx[4][4]; // r29+0x80
        float f32Length; // r29+0xF0
        float f32Rate; // r21
        float f32Radius; // r20
        class clsDebriPartsBase * * apcDebri; // r20
        signed int i; // r19
    }
}


// Range: 0x3A7D60 -> 0x3A7FA0
void startBreak(class clsDebrisControl * this /* r21 */, float (* psTrsMtx)[4][4] /* r20 */, class NNS_VECTORFAST * psBoundVecFst /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3A7D60 -> 0x3A7FA0
        class clsOORandom * pcOORandom; // r18
        class NNS_VECTORFAST sPosVecFast; // r29+0x80
        class NNS_VECTORFAST sVelocityFast; // r29+0x70
        class NNS_NODE * psNode; // r2
        class clsDebriPartsBase * * apcDebri; // r17
        signed int i; // r16
    }
}


// Range: 0x3A7FA0 -> 0x3A8088
void drawAlpha(class clsDebrisControl * this /* r16 */, class NNS_OBJECT * psObject /* r19 */, float f32ClipSqDist /* r20 */, class NNS_VECTOR * psScaleVec /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3A7FA0 -> 0x3A8088
        class clsDebriPartsBase * * apcDebri; // r17
        signed int i; // r16
        signed int i; // r16
    }
}


// Range: 0x3A80B0 -> 0x3A8120
void drawLocalRotate(class clsDebrisControl * this /* r2 */, class NNS_OBJECT * psObject /* r18 */, float f32ClipSqDist /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3A80B0 -> 0x3A8120
        class clsDebriPartsBase * * apcDebri; // r17
        signed int i; // r16
    }
}


// Range: 0x3A8130 -> 0x3A81E0
void draw(class clsDebrisControl * this /* r2 */, class NNS_OBJECT * psObject /* r19 */, float f32ClipSqDist /* r20 */, class NNS_VECTOR * psScaleVec /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3A8130 -> 0x3A81E0
        class clsDebriPartsBase * * apcDebri; // r17
        signed int i; // r16
    }
}


// Range: 0x3A81F0 -> 0x3A8248
void update(class clsDebrisControl * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3A81F0 -> 0x3A8248
        class clsDebriPartsBase * * apcDebri; // r17
        signed int i; // r16
    }
}


