/*
    Compile unit: C:\usr\local\sega\nn\src\System\nnclipsetup.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_CLIP_PLANE nngClipPlaneGs; // size: 0x20, address: 0x6DE5F0
class NNS_CLIP_PLANE nngClipPlane; // size: 0x20, address: 0x6DE5D0
class NNS_CLIP nngClip3d; // size: 0x18, address: 0x6DECD0
class NNS_SCREEN nngScreen; // size: 0x30, address: 0x6DEC80
float nngProjectionMatrix[4][4]; // size: 0x40, address: 0x6DEC20
enum NNE_PROJECTION_TYPE nngProjectionType; // size: 0x4, address: 0x6D1BD0
class NNS_CLIP nngClip2d; // size: 0x18, address: 0x6DECB0
class NNS_CLIP_PLANE {
    // total size: 0x20
public:
    class NNS_CLIP_PLANE_YZ Top; // offset 0x0, size 0x8
    class NNS_CLIP_PLANE_YZ Bottom; // offset 0x8, size 0x8
    class NNS_CLIP_PLANE_XZ Right; // offset 0x10, size 0x8
    class NNS_CLIP_PLANE_XZ Left; // offset 0x18, size 0x8
};
enum NNE_PROJECTION_TYPE {
    NNE_PROJECTION_TYPE_PERSPECTIVE = 0,
    NNE_PROJECTION_TYPE_ORTHO = 1,
};
class NNS_VECTOR2D {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class NNS_CLIP_PLANE_XZ {
    // total size: 0x8
public:
    union { // inferred
        float nx; // offset 0x0, size 0x4
        float mul; // offset 0x0, size 0x4
    };
    union { // inferred
        float nz; // offset 0x4, size 0x4
        float ofs; // offset 0x4, size 0x4
    };
};
class NNS_SCREEN {
    // total size: 0x30
public:
    float xad; // offset 0x0, size 0x4
    float yad; // offset 0x4, size 0x4
    float cx; // offset 0x8, size 0x4
    float cy; // offset 0xC, size 0x4
    float ooxad; // offset 0x10, size 0x4
    float ooyad; // offset 0x14, size 0x4
    float dist; // offset 0x18, size 0x4
    float ax; // offset 0x1C, size 0x4
    float ay; // offset 0x20, size 0x4
    float aspect; // offset 0x24, size 0x4
    float w; // offset 0x28, size 0x4
    float h; // offset 0x2C, size 0x4
};
class NNS_CLIP {
    // total size: 0x18
public:
    float f_clip; // offset 0x0, size 0x4
    float n_clip; // offset 0x4, size 0x4
    float x1; // offset 0x8, size 0x4
    float x0; // offset 0xC, size 0x4
    float y1; // offset 0x10, size 0x4
    float y0; // offset 0x14, size 0x4
};
class NNS_CLIP_PLANE_YZ {
    // total size: 0x8
public:
    union { // inferred
        float ny; // offset 0x0, size 0x4
        float mul; // offset 0x0, size 0x4
    };
    union { // inferred
        float nz; // offset 0x4, size 0x4
        float ofs; // offset 0x4, size 0x4
    };
};

// Range: 0x148D20 -> 0x149150
void nnSetClipPlane() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x148D20 -> 0x149150
        float sin_val; // r29+0xA0
        float cos_val; // r29+0xA0
        float tan_val; // r22
        float d; // r29+0xA0
        float invprojmtx00; // r21
        float invprojmtx11; // r20
        float mul; // r29+0xA0
        float ofs; // r29+0xA0
    }
}


// Range: 0x149150 -> 0x1491C4
void nnSetClipScreenCoordinates(class NNS_VECTOR2D * pos /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x149150 -> 0x1491C4
    }
}


// Range: 0x1491D0 -> 0x1491E4
void nnSetClipZ(float znear /* r29 */, float zfar /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1491D0 -> 0x1491E4
    }
}


