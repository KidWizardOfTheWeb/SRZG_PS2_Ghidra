/*
    Compile unit: C:\usr\local\sega\nn\src\Camera\nncamera.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
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
class NNS_CAMERAPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pCamera; // offset 0x4, size 0x4
};
enum NNE_ROTATETYPE {
    NNE_ROTATETYPE_XYZ = 0,
    NNE_ROTATETYPE_XZY = 1,
    NNE_ROTATETYPE_YXZ = 2,
    NNE_ROTATETYPE_YZX = 3,
    NNE_ROTATETYPE_ZXY = 4,
    NNE_ROTATETYPE_ZYX = 5,
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

// Range: 0x13D000 -> 0x13D0AC
void nnMakeTargetUpVectorCameraViewMatrix(float (* mtx)[4][4] /* r17 */, class NNS_CAMERA_TARGET_UPVECTOR * cam /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13D000 -> 0x13D0AC
        class NNS_VECTOR ilook; // r29+0x50
        class NNS_VECTOR right; // r29+0x40
        class NNS_VECTOR up; // r29+0x30
    }
}


// Range: 0x13D0B0 -> 0x13D0EC
unsigned int nnEstimateCameraBufferSize(unsigned int type /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13D0B0 -> 0x13D0EC
    }
}


// Range: 0x13D0F0 -> 0x13D1D4
void nnMakeVectorCameraViewMatrix(float (* mtx)[4][4] /* r2 */, class NNS_VECTOR * pos /* r2 */, class NNS_VECTOR * right /* r2 */, class NNS_VECTOR * up /* r2 */, class NNS_VECTOR * ilook /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13D0F0 -> 0x13D1D4
    }
}


