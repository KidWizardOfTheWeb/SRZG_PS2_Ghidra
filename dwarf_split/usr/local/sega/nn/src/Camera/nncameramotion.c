/*
    Compile unit: C:\usr\local\sega\nn\src\Camera\nncameramotion.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_CAMERA_ROTATION {
    // total size: 0x30
public:
    unsigned int User; // offset 0x0, size 0x4
    signed int Fovy; // offset 0x4, size 0x4
    float Aspect; // offset 0x8, size 0x4
    float ZNear; // offset 0xC, size 0x4
    float ZFar; // offset 0x10, size 0x4
    class NNS_VECTOR Position; // offset 0x14, size 0xC
    enum NNE_ROTATETYPE RotType; // offset 0x20, size 0x4
    class NNS_ROTATE_A32 Rotation; // offset 0x24, size 0xC
};
class NNS_CAMERA_TARGET_UPVECTOR {
    // total size: 0x38
public:
    unsigned int User; // offset 0x0, size 0x4
    signed int Fovy; // offset 0x4, size 0x4
    float Aspect; // offset 0x8, size 0x4
    float ZNear; // offset 0xC, size 0x4
    float ZFar; // offset 0x10, size 0x4
    class NNS_VECTOR Position; // offset 0x14, size 0xC
    class NNS_VECTOR Target; // offset 0x20, size 0xC
    class NNS_VECTOR UpVector; // offset 0x2C, size 0xC
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
class NNS_CAMERA_TARGET_ROLL {
    // total size: 0x30
public:
    unsigned int User; // offset 0x0, size 0x4
    signed int Fovy; // offset 0x4, size 0x4
    float Aspect; // offset 0x8, size 0x4
    float ZNear; // offset 0xC, size 0x4
    float ZFar; // offset 0x10, size 0x4
    class NNS_VECTOR Position; // offset 0x14, size 0xC
    class NNS_VECTOR Target; // offset 0x20, size 0xC
    signed int Roll; // offset 0x2C, size 0x4
};
class NNS_QUATERNION {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class NNS_CAMERA_TARGET_UPTARGET {
    // total size: 0x38
public:
    unsigned int User; // offset 0x0, size 0x4
    signed int Fovy; // offset 0x4, size 0x4
    float Aspect; // offset 0x8, size 0x4
    float ZNear; // offset 0xC, size 0x4
    float ZFar; // offset 0x10, size 0x4
    class NNS_VECTOR Position; // offset 0x14, size 0xC
    class NNS_VECTOR Target; // offset 0x20, size 0xC
    class NNS_VECTOR UpTarget; // offset 0x2C, size 0xC
};
enum NNE_ROTATETYPE {
    NNE_ROTATETYPE_XYZ = 0,
    NNE_ROTATETYPE_XZY = 1,
    NNE_ROTATETYPE_YXZ = 2,
    NNE_ROTATETYPE_YZX = 3,
    NNE_ROTATETYPE_ZXY = 4,
    NNE_ROTATETYPE_ZYX = 5,
};
class NNS_CAMERAPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pCamera; // offset 0x4, size 0x4
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

// Range: 0x13D1E0 -> 0x13D370
void nnCalcMotionCameraAngle(class NNS_SUBMOTION * submot /* r2 */, float frame /* r29+0x30 */, signed int * ang /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13D1E0 -> 0x13D370
        void * pKeyList; // r2
        signed int nKeyFrame; // r2
        signed short ang16; // r29+0x2E
    }
}


// Range: 0x13D370 -> 0x13D54C
void nnCalcMotionCameraXYZ(class NNS_SUBMOTION * submot /* r2 */, float frame /* r29+0x10 */, class NNS_VECTOR * xyz /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13D370 -> 0x13D54C
        void * pKeyList; // r8
        signed int nKeyFrame; // r2
        unsigned int fType; // r2
        float * ftv; // r7
    }
}


// Range: 0x13D550 -> 0x13DB2C
void nnCalcCameraMotionCore(class NNS_CAMERAPTR * dstptr /* r2 */, class NNS_CAMERAPTR * camptr /* r21 */, class NNS_MOTION * mot /* r20 */, float frame /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13D550 -> 0x13DB2C
        class NNS_VECTOR pos; // r29+0xE8
        class NNS_VECTOR tgt; // r29+0xD8
        signed int fvy; // r29+0x10C
        class NNS_ROTATE_A32 rot; // r29+0xC8
        class NNS_QUATERNION rotq; // r29+0x90
        unsigned int rtype; // r22
        float zn; // r29+0x108
        float zf; // r29+0x104
        float asp; // r29+0x100
        signed int rol; // r29+0xFC
        class NNS_VECTOR upv; // r29+0xB8
        class NNS_VECTOR upt; // r29+0xA8
        class NNS_CAMERA_ROTATION * dstcamera; // r19
        class NNS_CAMERA_ROTATION * srccamera; // r2
        float nframe; // r29+0xF8
        class NNS_SUBMOTION * submot; // r18
        signed int i; // r17
        class NNS_CAMERA_TARGET_ROLL * cam; // r2
        class NNS_CAMERA_TARGET_UPVECTOR * cam; // r2
        class NNS_CAMERA_TARGET_UPTARGET * cam; // r2
        class NNS_CAMERA_TARGET_ROLL * cam; // r2
        class NNS_CAMERA_TARGET_UPVECTOR * cam; // r2
        class NNS_CAMERA_TARGET_UPTARGET * cam; // r2
    }
}


// Range: 0x13DB30 -> 0x13DBE4
void nnCalcCameraMotion(class NNS_CAMERAPTR * dstptr /* r18 */, class NNS_CAMERAPTR * camptr /* r17 */, class NNS_MOTION * mot /* r16 */, float frame /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13DB30 -> 0x13DBE4
        float nframe; // r29+0x5C
        signed int truefalse; // r2
        unsigned int size; // r2
    }
}


