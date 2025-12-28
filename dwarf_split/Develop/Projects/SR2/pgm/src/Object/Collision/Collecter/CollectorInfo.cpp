/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Object\Collision\Collecter\CollectorInfo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
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
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class clsCollectorInfo {
    // total size: 0x5C
public:
    class hkArray m_apcCollidable[2]; // offset 0x0, size 0x18
    class hkArray m_cCollidableTrig; // offset 0x18, size 0xC
    class hkArray m_cContactTrig; // offset 0x24, size 0xC
    class hkArray m_cCollidableAlways; // offset 0x30, size 0xC
    class hkArray m_cContactAlways; // offset 0x3C, size 0xC
    class hkArray m_cCollidableRemove; // offset 0x48, size 0xC
    signed int m_s32CurrentNo; // offset 0x54, size 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class hkContactPoint {
    // total size: 0x20
public:
    class hkVector4 m_position; // offset 0x0, size 0x10
    class hkVector4 m_separatingNormal; // offset 0x10, size 0x10
};
class hkCdBody {
    // total size: 0x10
public:
    class hkShape * m_shape; // offset 0x0, size 0x4
    unsigned int m_shapeKey; // offset 0x4, size 0x4
    void * m_motion; // offset 0x8, size 0x4
    class hkCdBody * m_parent; // offset 0xC, size 0x4
};
class hkCollidable : public hkCdBody {
    // total size: 0x24
public:
    signed char m_ownerOffset; // offset 0x10, size 0x1
    unsigned char m_forceCollideOntoPpu; // offset 0x11, size 0x1
    unsigned short m_shapeSizeOnSpu; // offset 0x12, size 0x2
    class hkTypedBroadPhaseHandle m_broadPhaseHandle; // offset 0x14, size 0xC
    float m_allowedPenetrationDepth; // offset 0x20, size 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkCollidable * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkVector4 {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class hkBaseObject {
    // total size: 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkContactPoint * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkTypedBroadPhaseHandle : public hkBroadPhaseHandle {
    // total size: 0xC
public:
    signed char m_type; // offset 0x4, size 0x1
    signed char m_ownerOffset; // offset 0x5, size 0x1
    unsigned short m_objectQualityType; // offset 0x6, size 0x2
    unsigned int m_collisionFilterInfo; // offset 0x8, size 0x4
};
class hkShape : public hkReferencedObject {
    // total size: 0x10
public:
    unsigned int m_userData; // offset 0x8, size 0x4
    class hkEnum m_type; // offset 0xC, size 0x4
};
class hkBroadPhaseHandle {
    // total size: 0x4
public:
    unsigned int m_id; // offset 0x0, size 0x4
};
class hkReferencedObject : public hkBaseObject {
    // total size: 0x8
public:
    unsigned short m_memSizeAndFlags; // offset 0x4, size 0x2
    signed short m_referenceCount; // offset 0x6, size 0x2
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class hkEnum {
    // total size: 0x4
public:
    unsigned int m_storage; // offset 0x0, size 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

// Range: 0x4118D0 -> 0x4118E0
void clearTriggerData(class clsCollectorInfo * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4118D0 -> 0x4118E0
    }
}


// Range: 0x4118E0 -> 0x411A14
void updateEnd(class clsCollectorInfo * this /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4118E0 -> 0x411A14
        signed int i; // r20
        class hkArray & rcCollidables; // r2
        class hkArray & rcCollidablesOld; // r2
    }
}


// Range: 0x411A20 -> 0x411A58
void updateBegin(class clsCollectorInfo * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x411A20 -> 0x411A58
    }
}


// Range: 0x411A60 -> 0x411E04
void set(class clsCollectorInfo * this /* r20 */, class hkCollidable * pcCollidable /* r19 */, class hkContactPoint & rcContactPoint /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x411A60 -> 0x411E04
        class hkArray & rcCollidables; // r2
        class hkArray & rcCollidablesOld; // r2
    }
}


