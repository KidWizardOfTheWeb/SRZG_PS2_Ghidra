/*
    Compile unit: C:\usr\local\sega\nn\src\Light\nnlightmotion.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_LIGHT_TARGET_SPOT {
    // total size: 0x40
public:
    unsigned int User; // offset 0x0, size 0x4
    class NNS_RGBA Color; // offset 0x4, size 0x10
    float Intensity; // offset 0x14, size 0x4
    class NNS_VECTOR Position; // offset 0x18, size 0xC
    class NNS_VECTOR Target; // offset 0x24, size 0xC
    signed int InnerAngle; // offset 0x30, size 0x4
    signed int OuterAngle; // offset 0x34, size 0x4
    float FallOffStart; // offset 0x38, size 0x4
    float FallOffEnd; // offset 0x3C, size 0x4
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
class NNS_LIGHT_ROTATION_SPOT {
    // total size: 0x44
public:
    unsigned int User; // offset 0x0, size 0x4
    class NNS_RGBA Color; // offset 0x4, size 0x10
    float Intensity; // offset 0x14, size 0x4
    class NNS_VECTOR Position; // offset 0x18, size 0xC
    enum NNE_ROTATETYPE RotType; // offset 0x24, size 0x4
    class NNS_ROTATE_A32 Rotation; // offset 0x28, size 0xC
    signed int InnerAngle; // offset 0x34, size 0x4
    signed int OuterAngle; // offset 0x38, size 0x4
    float FallOffStart; // offset 0x3C, size 0x4
    float FallOffEnd; // offset 0x40, size 0x4
};
class NNS_QUATERNION {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class NNS_LIGHTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pLight; // offset 0x4, size 0x4
};
class NNS_LIGHT_POINT {
    // total size: 0x2C
public:
    unsigned int User; // offset 0x0, size 0x4
    class NNS_RGBA Color; // offset 0x4, size 0x10
    float Intensity; // offset 0x14, size 0x4
    class NNS_VECTOR Position; // offset 0x18, size 0xC
    float FallOffStart; // offset 0x24, size 0x4
    float FallOffEnd; // offset 0x28, size 0x4
};
class NNS_LIGHT_TARGET_DIRECTIONAL {
    // total size: 0x40
public:
    unsigned int User; // offset 0x0, size 0x4
    class NNS_RGBA Color; // offset 0x4, size 0x10
    float Intensity; // offset 0x14, size 0x4
    class NNS_VECTOR Position; // offset 0x18, size 0xC
    class NNS_VECTOR Target; // offset 0x24, size 0xC
    float InnerRange; // offset 0x30, size 0x4
    float OuterRange; // offset 0x34, size 0x4
    float FallOffStart; // offset 0x38, size 0x4
    float FallOffEnd; // offset 0x3C, size 0x4
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
class NNS_LIGHT_ROTATION_DIRECTIONAL {
    // total size: 0x44
public:
    unsigned int User; // offset 0x0, size 0x4
    class NNS_RGBA Color; // offset 0x4, size 0x10
    float Intensity; // offset 0x14, size 0x4
    class NNS_VECTOR Position; // offset 0x18, size 0xC
    enum NNE_ROTATETYPE RotType; // offset 0x24, size 0x4
    class NNS_ROTATE_A32 Rotation; // offset 0x28, size 0xC
    float InnerRange; // offset 0x34, size 0x4
    float OuterRange; // offset 0x38, size 0x4
    float FallOffStart; // offset 0x3C, size 0x4
    float FallOffEnd; // offset 0x40, size 0x4
};
enum NNE_ROTATETYPE {
    NNE_ROTATETYPE_XYZ = 0,
    NNE_ROTATETYPE_XZY = 1,
    NNE_ROTATETYPE_YXZ = 2,
    NNE_ROTATETYPE_YZX = 3,
    NNE_ROTATETYPE_ZXY = 4,
    NNE_ROTATETYPE_ZYX = 5,
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
};

// Range: 0x1579E0 -> 0x157B70
void nnCalcMotionLightAngle(class NNS_SUBMOTION * submot /* r2 */, float frame /* r29+0x30 */, signed int * ang /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1579E0 -> 0x157B70
        void * pKeyList; // r2
        signed int nKeyFrame; // r2
        signed short ang16; // r29+0x2E
    }
}


// Range: 0x157B70 -> 0x157CCC
void nnCalcMotionLightXYZ(class NNS_SUBMOTION * submot /* r2 */, float frame /* r29+0x10 */, class NNS_VECTOR * xyz /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x157B70 -> 0x157CCC
        void * pKeyList; // r3
        signed int nKeyFrame; // r2
        unsigned int fType; // r2
        float * ftv; // r8
    }
}


// Range: 0x157CD0 -> 0x157E2C
void nnCalcMotionLightRGB(class NNS_SUBMOTION * submot /* r2 */, float frame /* r29+0x10 */, class NNS_RGB * col /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x157CD0 -> 0x157E2C
        void * pKeyList; // r3
        signed int nKeyFrame; // r2
        unsigned int fType; // r2
        float * ftv; // r8
    }
}


// Range: 0x157E30 -> 0x158610
void nnCalcLightMotionCore(class NNS_LIGHTPTR * dstptr /* r2 */, class NNS_LIGHTPTR * litptr /* r21 */, class NNS_MOTION * mot /* r20 */, float frame /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x157E30 -> 0x158610
        class NNS_RGB col; // r29+0xD0
        float inten; // r29+0xFC
        class NNS_VECTOR pos; // r29+0xC0
        float foffst; // r29+0xF8
        float foffed; // r29+0xF4
        class NNS_VECTOR tgt; // r29+0xB0
        signed int inang; // r29+0xF0
        signed int outang; // r29+0xEC
        class NNS_ROTATE_A32 rot; // r29+0xA0
        class NNS_QUATERNION rotq; // r29+0x90
        unsigned int rtype; // r22
        float inrng; // r29+0xE8
        float outrng; // r29+0xE4
        class NNS_LIGHT_POINT * dstlight; // r19
        class NNS_LIGHT_POINT * srclight; // r16
        float nframe; // r29+0xE0
        class NNS_SUBMOTION * submot; // r18
        signed int i; // r17
        class NNS_LIGHT_TARGET_SPOT * lit; // r2
        class NNS_LIGHT_ROTATION_SPOT * lit; // r2
        class NNS_LIGHT_TARGET_DIRECTIONAL * lit; // r2
        class NNS_LIGHT_ROTATION_DIRECTIONAL * lit; // r2
        class NNS_LIGHT_TARGET_SPOT * lit; // r2
        class NNS_LIGHT_ROTATION_SPOT * lit; // r2
        class NNS_LIGHT_TARGET_DIRECTIONAL * lit; // r2
        class NNS_LIGHT_ROTATION_DIRECTIONAL * lit; // r2
    }
}


// Range: 0x158610 -> 0x1586C4
void nnCalcLightMotion(class NNS_LIGHTPTR * dstptr /* r18 */, class NNS_LIGHTPTR * litptr /* r17 */, class NNS_MOTION * mot /* r16 */, float frame /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x158610 -> 0x1586C4
        float nframe; // r29+0x5C
        signed int truefalse; // r2
        unsigned int size; // r2
    }
}


