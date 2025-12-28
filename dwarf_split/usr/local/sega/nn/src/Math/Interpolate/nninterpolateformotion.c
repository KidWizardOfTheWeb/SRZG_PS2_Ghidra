/*
    Compile unit: C:\usr\local\sega\nn\src\Math\Interpolate\nninterpolateformotion.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
float nngNodeUserMotionTriggerTime; // size: 0x4, address: 0x6D1AE8
class NNS_MOTION_KEY_ANGLE16_SI_SPLINE {
    // total size: 0xC
public:
    signed short Frame; // offset 0x0, size 0x2
    signed short Value; // offset 0x2, size 0x2
    class NNS_MOTION_SI_SPLINE_HANDLE Shandle; // offset 0x4, size 0x8
};
class NNS_MOTION_KEY_FLOAT_SI_SPLINE {
    // total size: 0x10
public:
    float Frame; // offset 0x0, size 0x4
    float Value; // offset 0x4, size 0x4
    class NNS_MOTION_SI_SPLINE_HANDLE Shandle; // offset 0x8, size 0x8
};
class NNS_MOTION_KEY_ANGLE32 {
    // total size: 0x8
public:
    float Frame; // offset 0x0, size 0x4
    signed int Value; // offset 0x4, size 0x4
};
class NNS_MOTION_KEY_FLOAT3 {
    // total size: 0x10
public:
    float Frame; // offset 0x0, size 0x4
    class NNS_VECTOR Value; // offset 0x4, size 0xC
};
class NNS_MOTION_KEY_ROTATION_A32 {
    // total size: 0x10
public:
    float Frame; // offset 0x0, size 0x4
    class NNS_ROTATE_A32 Value; // offset 0x4, size 0xC
};
class NNS_MOTION_KEY_ROTATION_A16 {
    // total size: 0x8
public:
    signed short Frame; // offset 0x0, size 0x2
    class NNS_ROTATE_A16 Value; // offset 0x2, size 0x6
};
class NNS_QUATERNION {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class NNS_MOTION_KEY_UINT32 {
    // total size: 0x8
public:
    float Frame; // offset 0x0, size 0x4
    unsigned int Value; // offset 0x4, size 0x4
};
class NNS_MOTION_KEY_QUATERNION {
    // total size: 0x14
public:
    float Frame; // offset 0x0, size 0x4
    class NNS_QUATERNION Value; // offset 0x4, size 0x10
};
class NNS_MOTION_KEY_FLOAT_BEZIER {
    // total size: 0x18
public:
    float Frame; // offset 0x0, size 0x4
    float Value; // offset 0x4, size 0x4
    class NNS_MOTION_BEZIER_HANDLE Bhandle; // offset 0x8, size 0x10
};
class NNS_MOTION_KEY_ANGLE16 {
    // total size: 0x4
public:
    signed short Frame; // offset 0x0, size 0x2
    signed short Value; // offset 0x2, size 0x2
};
class NNS_MOTION_KEY_SINT32 {
    // total size: 0x8
public:
    float Frame; // offset 0x0, size 0x4
    signed int Value; // offset 0x4, size 0x4
};
class NNS_VECTOR2D {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class NNS_MOTION_KEY_FLOAT {
    // total size: 0x8
public:
    float Frame; // offset 0x0, size 0x4
    float Value; // offset 0x4, size 0x4
};
class NNS_MOTION_KEY_TEXCOORD {
    // total size: 0xC
public:
    float Frame; // offset 0x0, size 0x4
    class NNS_TEXCOORD Value; // offset 0x4, size 0x8
};
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
};
class NNS_ROTATE_A16 {
    // total size: 0x6
public:
    signed short x; // offset 0x0, size 0x2
    signed short y; // offset 0x2, size 0x2
    signed short z; // offset 0x4, size 0x2
};
class NNS_MOTION_KEY_ANGLE32_SI_SPLINE {
    // total size: 0x10
public:
    float Frame; // offset 0x0, size 0x4
    signed int Value; // offset 0x4, size 0x4
    class NNS_MOTION_SI_SPLINE_HANDLE Shandle; // offset 0x8, size 0x8
};
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};
class NNS_MOTION_KEY_ANGLE32_BEZIER {
    // total size: 0x18
public:
    float Frame; // offset 0x0, size 0x4
    signed int Value; // offset 0x4, size 0x4
    class NNS_MOTION_BEZIER_HANDLE Bhandle; // offset 0x8, size 0x10
};
class NNS_MOTION_BEZIER_HANDLE {
    // total size: 0x10
public:
    class NNS_VECTOR2D In; // offset 0x0, size 0x8
    class NNS_VECTOR2D Out; // offset 0x8, size 0x8
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class NNS_MOTION_SI_SPLINE_HANDLE {
    // total size: 0x8
public:
    float In; // offset 0x0, size 0x4
    float Out; // offset 0x4, size 0x4
};

// Range: 0x1352B0 -> 0x135314
void nnInterpolateConstantF1(class NNS_MOTION_KEY_FLOAT * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, float * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1352B0 -> 0x135314
        unsigned int nba; // r8
        unsigned int nbb; // r2
        unsigned int nbm; // r2
    }
}


// Range: 0x135320 -> 0x135394
void nnInterpolateConstantF3(class NNS_MOTION_KEY_FLOAT3 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, class NNS_VECTOR * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x135320 -> 0x135394
        unsigned int nba; // r8
        class NNS_MOTION_KEY_FLOAT3 * k; // r2
        unsigned int nbb; // r2
        unsigned int nbm; // r2
    }
}


// Range: 0x1353A0 -> 0x135404
void nnInterpolateConstantA32_1(class NNS_MOTION_KEY_ANGLE32 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, signed int * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1353A0 -> 0x135404
        unsigned int nba; // r8
        unsigned int nbb; // r2
        unsigned int nbm; // r2
    }
}


// Range: 0x135410 -> 0x135484
void nnInterpolateConstantA32_3(class NNS_MOTION_KEY_ROTATION_A32 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, class NNS_ROTATE_A32 * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x135410 -> 0x135484
        unsigned int nba; // r8
        class NNS_MOTION_KEY_ROTATION_A32 * k; // r2
        unsigned int nbb; // r2
        unsigned int nbm; // r2
    }
}


// Range: 0x135490 -> 0x13550C
void nnInterpolateConstantA16_1(class NNS_MOTION_KEY_ANGLE16 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, signed short * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x135490 -> 0x13550C
        unsigned int nba; // r9
        unsigned int nbb; // r2
        unsigned int nbm; // r2
        signed short iframe; // r2
    }
}


// Range: 0x135510 -> 0x13559C
void nnInterpolateConstantA16_3(class NNS_MOTION_KEY_ROTATION_A16 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, class NNS_ROTATE_A16 * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x135510 -> 0x13559C
        unsigned int nba; // r9
        class NNS_MOTION_KEY_ROTATION_A16 * k; // r2
        unsigned int nbb; // r2
        unsigned int nbm; // r2
        signed short iframe; // r2
    }
}


// Range: 0x1355A0 -> 0x13564C
void nnInterpolateLinearF1(class NNS_MOTION_KEY_FLOAT * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, float * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1355A0 -> 0x13564C
        unsigned int nba; // r9
        float t; // r29
        class NNS_MOTION_KEY_FLOAT * k1; // r2
        class NNS_MOTION_KEY_FLOAT * k2; // r2
        unsigned int nbb; // r8
        unsigned int nbm; // r2
    }
}


// Range: 0x135650 -> 0x135734
void nnInterpolateLinearF3(class NNS_MOTION_KEY_FLOAT3 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, class NNS_VECTOR * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x135650 -> 0x135734
        unsigned int nba; // r9
        float t; // r29
        float it; // r29
        class NNS_MOTION_KEY_FLOAT3 * k1; // r2
        class NNS_MOTION_KEY_FLOAT3 * k2; // r2
        unsigned int nbb; // r8
        unsigned int nbm; // r2
    }
}


// Range: 0x135740 -> 0x135800
void nnInterpolateLinearA32_1(class NNS_MOTION_KEY_ANGLE32 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, signed int * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x135740 -> 0x135800
        unsigned int nba; // r9
        float t; // r29
        class NNS_MOTION_KEY_ANGLE32 * k1; // r2
        class NNS_MOTION_KEY_ANGLE32 * k2; // r2
        unsigned int nbb; // r8
        unsigned int nbm; // r2
    }
}


// Range: 0x135800 -> 0x135950
void nnInterpolateLinearA32_3(class NNS_MOTION_KEY_ROTATION_A32 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, class NNS_ROTATE_A32 * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x135800 -> 0x135950
        unsigned int nba; // r9
        float t; // r29
        class NNS_MOTION_KEY_ROTATION_A32 * k1; // r2
        class NNS_MOTION_KEY_ROTATION_A32 * k2; // r2
        unsigned int nbb; // r8
        unsigned int nbm; // r2
    }
}


// Range: 0x135950 -> 0x135A4C
void nnInterpolateLinearA16_1(class NNS_MOTION_KEY_ANGLE16 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, signed short * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x135950 -> 0x135A4C
        unsigned int nba; // r10
        class NNS_MOTION_KEY_ANGLE16 * k1; // r2
        class NNS_MOTION_KEY_ANGLE16 * k2; // r2
        unsigned int nbb; // r9
        unsigned int nbm; // r2
        signed short iframe; // r2
    }
}


// Range: 0x135A50 -> 0x135BA4
void nnInterpolateLinearA16_3(class NNS_MOTION_KEY_ROTATION_A16 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, class NNS_ROTATE_A16 * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x135A50 -> 0x135BA4
        unsigned int nba; // r10
        signed int ta; // r2
        class NNS_MOTION_KEY_ROTATION_A16 * k1; // r2
        class NNS_MOTION_KEY_ROTATION_A16 * k2; // r2
        unsigned int nbb; // r9
        unsigned int nbm; // r2
        signed short iframe; // r2
    }
}


// Range: 0x135BB0 -> 0x135DC4
float nnSolveBezier(float f0 /* r29 */, float h0 /* r29 */, float f1 /* r29 */, float h1 /* r29 */, float frame /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x135BB0 -> 0x135DC4
        float A; // r7
        float B; // r6
        float C; // r5
        float D; // r4
        float tmp0; // r29
        float tmp1; // r29
        float t; // r29
        float f; // r29
        signed int i; // r3
        float Df; // r29
        float dt; // r29
        float A3; // r3
        float B2; // r2
        float feps; // r1
        float left; // r9
        float half; // r8
    }
}


// Range: 0x135DD0 -> 0x135F04
void nnInterpolateBezierF1(class NNS_MOTION_KEY_FLOAT_BEZIER * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29+0x40 */, float * val /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x135DD0 -> 0x135F04
        class NNS_MOTION_KEY_FLOAT_BEZIER * k1; // r2
        class NNS_MOTION_KEY_FLOAT_BEZIER * k2; // r2
        unsigned int nba; // r8
        float f0; // r29+0x40
        float h0; // r29+0x40
        float tmp0; // r29+0x40
        float tmp1; // r29+0x40
        float t; // r29+0x40
        unsigned int nbb; // r7
        unsigned int nbm; // r2
    }
}


// Range: 0x135F10 -> 0x136058
void nnInterpolateBezierA32_1(class NNS_MOTION_KEY_ANGLE32_BEZIER * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29+0x40 */, signed int * val /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x135F10 -> 0x136058
        class NNS_MOTION_KEY_ANGLE32_BEZIER * k1; // r2
        class NNS_MOTION_KEY_ANGLE32_BEZIER * k2; // r2
        unsigned int nba; // r8
        float f0; // r29+0x40
        float h0; // r29+0x40
        float tmp0; // r29+0x40
        float tmp1; // r29+0x40
        float t; // r29+0x40
        unsigned int nbb; // r7
        unsigned int nbm; // r2
    }
}


// Range: 0x136060 -> 0x136264
void nnInterpolateLerpA16_3(class NNS_MOTION_KEY_ROTATION_A16 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29+0x70 */, class NNS_QUATERNION * val /* r18 */, unsigned int rtype /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x136060 -> 0x136264
        unsigned int nba; // r8
        float t; // r20
        class NNS_QUATERNION q1; // r29+0x60
        class NNS_QUATERNION q2; // r29+0x50
        class NNS_MOTION_KEY_ROTATION_A16 * k1; // r2
        class NNS_MOTION_KEY_ROTATION_A16 * k2; // r2
        unsigned int nbb; // r7
        unsigned int nbm; // r2
        signed short iframe; // r2
    }
}


// Range: 0x136270 -> 0x136440
void nnInterpolateLerpA32_3(class NNS_MOTION_KEY_ROTATION_A32 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29+0x70 */, class NNS_QUATERNION * val /* r17 */, unsigned int rtype /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x136270 -> 0x136440
        unsigned int nba; // r7
        float t; // r20
        class NNS_QUATERNION q1; // r29+0x60
        class NNS_QUATERNION q2; // r29+0x50
        class NNS_MOTION_KEY_ROTATION_A32 * k1; // r2
        class NNS_MOTION_KEY_ROTATION_A32 * k2; // r2
        unsigned int nbb; // r6
        unsigned int nbm; // r2
    }
}


// Range: 0x136440 -> 0x136550
void nnInterpolateLerpQuat_4(class NNS_MOTION_KEY_QUATERNION * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29+0x30 */, class NNS_QUATERNION * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x136440 -> 0x136550
        unsigned int nba; // r9
        float t; // r29+0x30
        class NNS_QUATERNION q1; // r29+0x20
        class NNS_QUATERNION q2; // r29+0x10
        class NNS_MOTION_KEY_QUATERNION * k1; // r2
        class NNS_MOTION_KEY_QUATERNION * k2; // r2
        unsigned int nbb; // r8
        unsigned int nbm; // r2
    }
}


// Range: 0x136550 -> 0x136754
void nnInterpolateSlerpA16_3(class NNS_MOTION_KEY_ROTATION_A16 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29+0x70 */, class NNS_QUATERNION * val /* r18 */, unsigned int rtype /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x136550 -> 0x136754
        unsigned int nba; // r8
        float t; // r20
        class NNS_QUATERNION q1; // r29+0x60
        class NNS_QUATERNION q2; // r29+0x50
        class NNS_MOTION_KEY_ROTATION_A16 * k1; // r2
        class NNS_MOTION_KEY_ROTATION_A16 * k2; // r2
        unsigned int nbb; // r7
        unsigned int nbm; // r2
        signed short iframe; // r2
    }
}


// Range: 0x136760 -> 0x136930
void nnInterpolateSlerpA32_3(class NNS_MOTION_KEY_ROTATION_A32 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29+0x70 */, class NNS_QUATERNION * val /* r17 */, unsigned int rtype /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x136760 -> 0x136930
        unsigned int nba; // r7
        float t; // r20
        class NNS_QUATERNION q1; // r29+0x60
        class NNS_QUATERNION q2; // r29+0x50
        class NNS_MOTION_KEY_ROTATION_A32 * k1; // r2
        class NNS_MOTION_KEY_ROTATION_A32 * k2; // r2
        unsigned int nbb; // r6
        unsigned int nbm; // r2
    }
}


// Range: 0x136930 -> 0x136A40
void nnInterpolateSlerpQuat_4(class NNS_MOTION_KEY_QUATERNION * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29+0x30 */, class NNS_QUATERNION * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x136930 -> 0x136A40
        unsigned int nba; // r9
        float t; // r29+0x30
        class NNS_QUATERNION q1; // r29+0x20
        class NNS_QUATERNION q2; // r29+0x10
        class NNS_MOTION_KEY_QUATERNION * k1; // r2
        class NNS_MOTION_KEY_QUATERNION * k2; // r2
        unsigned int nbb; // r8
        unsigned int nbm; // r2
    }
}


// Range: 0x136A40 -> 0x136D5C
void nnInterpolateSquadA16_3(class NNS_MOTION_KEY_ROTATION_A16 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29+0xD0 */, class NNS_QUATERNION * val /* r20 */, unsigned int rtype /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x136A40 -> 0x136D5C
        unsigned int nba; // r8
        float t; // r20
        class NNS_QUATERNION q0; // r29+0xC0
        class NNS_QUATERNION q1; // r29+0xB0
        class NNS_QUATERNION q2; // r29+0xA0
        class NNS_QUATERNION q3; // r29+0x90
        class NNS_QUATERNION qa; // r29+0x80
        class NNS_QUATERNION qb; // r29+0x70
        class NNS_MOTION_KEY_ROTATION_A16 * k0; // r2
        class NNS_MOTION_KEY_ROTATION_A16 * k1; // r2
        class NNS_MOTION_KEY_ROTATION_A16 * k2; // r2
        class NNS_MOTION_KEY_ROTATION_A16 * k3; // r2
        unsigned int nbb; // r7
        unsigned int nbm; // r2
        signed short iframe; // r2
    }
}


// Range: 0x136D60 -> 0x137048
void nnInterpolateSquadA32_3(class NNS_MOTION_KEY_ROTATION_A32 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29+0xD0 */, class NNS_QUATERNION * val /* r20 */, unsigned int rtype /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x136D60 -> 0x137048
        unsigned int nba; // r7
        float t; // r20
        class NNS_QUATERNION q0; // r29+0xC0
        class NNS_QUATERNION q1; // r29+0xB0
        class NNS_QUATERNION q2; // r29+0xA0
        class NNS_QUATERNION q3; // r29+0x90
        class NNS_QUATERNION qa; // r29+0x80
        class NNS_QUATERNION qb; // r29+0x70
        class NNS_MOTION_KEY_ROTATION_A32 * k0; // r2
        class NNS_MOTION_KEY_ROTATION_A32 * k1; // r2
        class NNS_MOTION_KEY_ROTATION_A32 * k2; // r2
        class NNS_MOTION_KEY_ROTATION_A32 * k3; // r2
        unsigned int nbb; // r6
        unsigned int nbm; // r2
    }
}


// Range: 0x137050 -> 0x137224
void nnInterpolateSquadQuat_4(class NNS_MOTION_KEY_QUATERNION * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29+0x90 */, class NNS_QUATERNION * val /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x137050 -> 0x137224
        unsigned int nba; // r10
        float t; // r20
        class NNS_QUATERNION q0; // r29+0x80
        class NNS_QUATERNION q1; // r29+0x70
        class NNS_QUATERNION q2; // r29+0x60
        class NNS_QUATERNION q3; // r29+0x50
        class NNS_QUATERNION qa; // r29+0x40
        class NNS_QUATERNION qb; // r29+0x30
        class NNS_MOTION_KEY_QUATERNION * k0; // r2
        class NNS_MOTION_KEY_QUATERNION * k1; // r2
        class NNS_MOTION_KEY_QUATERNION * k2; // r2
        class NNS_MOTION_KEY_QUATERNION * k3; // r2
        unsigned int nbb; // r7
        unsigned int nbm; // r2
    }
}


// Range: 0x137230 -> 0x1372BC
void nnInterpolateConstantQuat_4(class NNS_MOTION_KEY_QUATERNION * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, class NNS_QUATERNION * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x137230 -> 0x1372BC
        unsigned int nba; // r8
        class NNS_MOTION_KEY_QUATERNION * k; // r2
        unsigned int nbb; // r2
        unsigned int nbm; // r2
    }
}


// Range: 0x1372C0 -> 0x1373B4
void nnInterpolateSISplineF1(class NNS_MOTION_KEY_FLOAT_SI_SPLINE * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, float * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1372C0 -> 0x1373B4
        float t; // r29
        class NNS_MOTION_KEY_FLOAT_SI_SPLINE * k1; // r2
        class NNS_MOTION_KEY_FLOAT_SI_SPLINE * k2; // r2
        unsigned int nba; // r9
        float kd; // r29
        float vd; // r29
        unsigned int nbb; // r8
        unsigned int nbm; // r2
    }
}


// Range: 0x1373C0 -> 0x1374E0
void nnInterpolateSISplineA32_1(class NNS_MOTION_KEY_ANGLE32_SI_SPLINE * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, signed int * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1373C0 -> 0x1374E0
        float t; // r29
        class NNS_MOTION_KEY_ANGLE32_SI_SPLINE * k1; // r2
        class NNS_MOTION_KEY_ANGLE32_SI_SPLINE * k2; // r2
        unsigned int nba; // r9
        float kd; // r29
        signed int vd; // r2
        unsigned int nbb; // r8
        unsigned int nbm; // r2
    }
}


// Range: 0x1374E0 -> 0x137648
void nnInterpolateSISplineA16_1(class NNS_MOTION_KEY_ANGLE16_SI_SPLINE * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, signed short * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1374E0 -> 0x137648
        float t; // r29
        class NNS_MOTION_KEY_ANGLE16_SI_SPLINE * k1; // r2
        class NNS_MOTION_KEY_ANGLE16_SI_SPLINE * k2; // r2
        unsigned int nba; // r10
        float kd; // r29
        unsigned int nbb; // r9
        unsigned int nbm; // r2
        signed short iframe; // r2
    }
}


// Range: 0x137650 -> 0x1376B4
void nnInterpolateConstantU1(class NNS_MOTION_KEY_UINT32 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, unsigned int * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x137650 -> 0x1376B4
        unsigned int nba; // r8
        unsigned int nbb; // r2
        unsigned int nbm; // r2
    }
}


// Range: 0x1376C0 -> 0x137814
void nnInterpolateLinearU1(class NNS_MOTION_KEY_UINT32 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, unsigned int * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1376C0 -> 0x137814
        unsigned int nba; // r9
        float t; // r3
        class NNS_MOTION_KEY_UINT32 * k1; // r2
        class NNS_MOTION_KEY_UINT32 * k2; // r2
        unsigned int nbb; // r8
        unsigned int nbm; // r2
    }
}


// Range: 0x137820 -> 0x1378AC
enum NNE_BOOL nnInterpolateTriggerU1(class NNS_MOTION_KEY_UINT32 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, unsigned int * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x137820 -> 0x1378AC
        unsigned int nba; // r7
        class NNS_MOTION_KEY_UINT32 * k1; // r2
        unsigned int nbb; // r2
        unsigned int nbm; // r2
    }
}


// Range: 0x1378B0 -> 0x137934
void nnInterpolateConstantS32_1(class NNS_MOTION_KEY_SINT32 * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, signed int * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1378B0 -> 0x137934
        unsigned int nba; // r8
        unsigned int nbb; // r2
        unsigned int nbm; // r2
        signed short iframe; // r2
    }
}


// Range: 0x137940 -> 0x1379BC
void nnInterpolateConstantF2(class NNS_MOTION_KEY_TEXCOORD * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, class NNS_TEXCOORD * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x137940 -> 0x1379BC
        unsigned int nba; // r8
        class NNS_MOTION_KEY_TEXCOORD * k; // r2
        unsigned int nbb; // r2
        unsigned int nbm; // r2
    }
}


// Range: 0x1379C0 -> 0x137A98
void nnInterpolateLinearF2(class NNS_MOTION_KEY_TEXCOORD * vk /* r2 */, signed int nKey /* r2 */, float frame /* r29 */, class NNS_TEXCOORD * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1379C0 -> 0x137A98
        unsigned int nba; // r9
        float t; // r29
        float it; // r29
        class NNS_MOTION_KEY_TEXCOORD * k1; // r2
        class NNS_MOTION_KEY_TEXCOORD * k2; // r2
        unsigned int nbb; // r8
        unsigned int nbm; // r2
    }
}


