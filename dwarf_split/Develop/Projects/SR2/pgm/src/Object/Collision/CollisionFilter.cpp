/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Object\Collision\CollisionFilter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int m_s32AllNum; // size: 0x4, address: 0xB0DA00
signed int m_s32TrueNum; // size: 0x4, address: 0xB0DA08
struct /* @anon2 */ {
    // total size: 0x60
} __vt__18clsCollisionFilter; // size: 0x60, address: 0x6BE510
struct /* @anon1 */ {
    // total size: 0x10
} __vt__21hkRayCollidableFilter; // size: 0x10, address: 0x6B6000
struct /* @anon5 */ {
    // total size: 0x10
} __vt__26hkRayShapeCollectionFilter; // size: 0x10, address: 0x6B6010
struct /* @anon0 */ {
    // total size: 0x10
} __vt__23hkShapeCollectionFilter; // size: 0x10, address: 0x6B6020
struct /* @anon7 */ {
    // total size: 0x10
} __vt__28hkCollidableCollidableFilter; // size: 0x10, address: 0x6B6030
struct /* @anon6 */ {
    // total size: 0xC
} __vt__12hkBaseObject; // size: 0xC, address: 0x6B6040
struct /* @anon3 */ {
    // total size: 0x10
} __vt__18hkReferencedObject; // size: 0x10, address: 0x6B6050
struct /* @anon4 */ {
    // total size: 0x60
} __vt__17hkCollisionFilter; // size: 0x60, address: 0x6B5FA0
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
struct /* @anon0 */ {
    // total size: 0x10
};
class hkCdBody {
    // total size: 0x10
public:
    class hkShape * m_shape; // offset 0x0, size 0x4
    unsigned int m_shapeKey; // offset 0x4, size 0x4
    void * m_motion; // offset 0x8, size 0x4
    class hkCdBody * m_parent; // offset 0xC, size 0x4
};
struct /* @anon1 */ {
    // total size: 0x10
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class hkWorldRayCastInput {
    // total size: 0x30
public:
    class hkVector4 m_from; // offset 0x0, size 0x10
    class hkVector4 m_to; // offset 0x10, size 0x10
    class hkBool m_enableShapeCollectionFilter; // offset 0x20, size 0x1
    unsigned int m_filterInfo; // offset 0x24, size 0x4
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
struct /* @anon2 */ {
    // total size: 0x60
};
class hkShapeRayCastInput {
    // total size: 0x30
public:
    class hkVector4 m_from; // offset 0x0, size 0x10
    class hkVector4 m_to; // offset 0x10, size 0x10
    unsigned int m_filterInfo; // offset 0x20, size 0x4
    class hkRayShapeCollectionFilter * m_rayShapeCollectionFilter; // offset 0x24, size 0x4
};
class hkVector4 {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class hkShapeContainer {
    // total size: 0x4
};
class hkRayShapeCollectionFilter {
    // total size: 0x4
};
struct /* @anon3 */ {
    // total size: 0x10
};
class hkBaseObject {
    // total size: 0x4
};
struct /* @anon4 */ {
    // total size: 0x60
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
struct /* @anon5 */ {
    // total size: 0x10
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
class hkBool {
    // total size: 0x1
public:
    char m_bool; // offset 0x0, size 0x1
};
class hkEnum {
    // total size: 0x4
public:
    unsigned int m_storage; // offset 0x0, size 0x4
};
struct /* @anon6 */ {
    // total size: 0xC
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
struct /* @anon7 */ {
    // total size: 0x10
};

// Range: 0x35BF10 -> 0x35BF70
class hkBool isCollisionEnabled(class hkWorldRayCastInput & aInput /* r2 */, class hkCollidable & collidableB /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35BF10 -> 0x35BF70
    }
}


// Range: 0x35BF70 -> 0x35C004
class hkBool isCollisionEnabled(class hkShapeRayCastInput & aInput /* r17 */, class hkShapeContainer & bContainer /* r2 */, unsigned int bKey /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35BF70 -> 0x35C004
        unsigned int infoB; // r2
    }
}


// Range: 0x35C010 -> 0x35C0BC
class hkBool isCollisionEnabled(class hkCdBody & a /* r2 */, class hkCdBody & b /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35C010 -> 0x35C0BC
    }
}


// Range: 0x35C0C0 -> 0x35C120
class hkBool isCollisionEnabled(class hkCollidable & a /* r2 */, class hkCollidable & b /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35C0C0 -> 0x35C120
    }
}


// Range: 0x35C120 -> 0x35C128
void @8@isCollisionEnabled__18clsCollisionFilterCFRC12hkCollidableRC12hkCollidable() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35C120 -> 0x35C128
    }
}


// Range: 0x35C130 -> 0x35C138
void @8@__dt__18clsCollisionFilterFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35C130 -> 0x35C138
    }
}


// Range: 0x35C140 -> 0x35C148
void @12@__dt__18clsCollisionFilterFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35C140 -> 0x35C148
    }
}


// Range: 0x35C150 -> 0x35C158
void @12@isCollisionEnabled__18clsCollisionFilterCFRC16hkCollisionInputRC8hkCdBodyRC8hkCdBodyRC16hkShapeContainerUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35C150 -> 0x35C158
    }
}


// Range: 0x35C160 -> 0x35C168
void @16@__dt__18clsCollisionFilterFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35C160 -> 0x35C168
    }
}


// Range: 0x35C170 -> 0x35C178
void @16@isCollisionEnabled__18clsCollisionFilterCFRC19hkShapeRayCastInputRC7hkShapeRC16hkShapeContainerUi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35C170 -> 0x35C178
    }
}


// Range: 0x35C180 -> 0x35C188
void @20@isCollisionEnabled__18clsCollisionFilterCFRC19hkWorldRayCastInputRC12hkCollidable() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35C180 -> 0x35C188
    }
}


// Range: 0x35C190 -> 0x35C198
void @20@__dt__18clsCollisionFilterFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35C190 -> 0x35C198
    }
}


