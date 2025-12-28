/*
    Compile unit: C:\usr\local\sega\nn\src\Matrix\nnquaternion.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_QUATERNION {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

// Range: 0x131080 -> 0x1310A4
void nnCopyQuaternion(class NNS_QUATERNION * dst /* r2 */, class NNS_QUATERNION * src /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x131080 -> 0x1310A4
    }
}


// Range: 0x1310B0 -> 0x131124
void nnMultiplyQuaternion(class NNS_QUATERNION * dst /* r2 */, class NNS_QUATERNION * quat1 /* r2 */, class NNS_QUATERNION * quat2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1310B0 -> 0x131124
        float x1; // r29
        float y1; // r29
        float z1; // r29
        float w1; // r29
        float x2; // r29
        float y2; // r29
        float z2; // r29
        float w2; // r29
    }
}


// Range: 0x131130 -> 0x1311C4
enum NNE_BOOL nnNormalizeQuaternion(class NNS_QUATERNION * dst /* r2 */, class NNS_QUATERNION * src /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x131130 -> 0x1311C4
        float n; // r29
    }
}


// Range: 0x1311D0 -> 0x131264
enum NNE_BOOL nnInvertQuaternion(class NNS_QUATERNION * dst /* r2 */, class NNS_QUATERNION * src /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1311D0 -> 0x131264
        float n; // r29
        float rn; // r29
    }
}


// Range: 0x131270 -> 0x131364
void nnExpQuaternion(class NNS_QUATERNION * dst /* r17 */, class NNS_QUATERNION * src /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x131270 -> 0x131364
        float s; // r29+0x4C
        float c; // r29+0x48
        float rt; // r29+0x50
    }
}


// Range: 0x131370 -> 0x1316C4
void nnSplineQuaternion(class NNS_QUATERNION * dst /* r17 */, class NNS_QUATERNION * quatprev /* r2 */, class NNS_QUATERNION * quat /* r16 */, class NNS_QUATERNION * quatnext /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x131370 -> 0x1316C4
        class NNS_QUATERNION q; // r29+0x60
    }
}


// Range: 0x1316D0 -> 0x1317B8
void nnLerpQuaternion(class NNS_QUATERNION * dst /* r2 */, class NNS_QUATERNION * quat1 /* r2 */, class NNS_QUATERNION * quat2 /* r2 */, float t /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1316D0 -> 0x1317B8
        float rate0; // r29+0x20
        class NNS_QUATERNION q; // r29+0x10
    }
}


// Range: 0x1317C0 -> 0x131900
void nnSlerpQuaternion(class NNS_QUATERNION * dst /* r2 */, class NNS_QUATERNION * quat1 /* r2 */, class NNS_QUATERNION * quat2 /* r2 */, float t /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1317C0 -> 0x131900
        float cos_t; // r6
        float rev; // r10
        float pt; // r29
        float ct; // r1
        float a; // r29
        float b; // r3
    }
}


// Range: 0x131900 -> 0x131994
void nnSquadQuaternion(class NNS_QUATERNION * dst /* r18 */, class NNS_QUATERNION * quat1 /* r2 */, class NNS_QUATERNION * quata /* r17 */, class NNS_QUATERNION * quatb /* r16 */, class NNS_QUATERNION * quat2 /* r2 */, float t /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x131900 -> 0x131994
        class NNS_QUATERNION sq1; // r29+0x60
        class NNS_QUATERNION sq2; // r29+0x50
    }
}


// Range: 0x1319A0 -> 0x1319B8
void nnMakeUnitQuaternion(class NNS_QUATERNION * dst /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1319A0 -> 0x1319B8
    }
}


// Range: 0x1319C0 -> 0x131A4C
void nnMakeRotateAxisQuaternion(class NNS_QUATERNION * dst /* r17 */, float vx /* r29+0x50 */, float vy /* r29+0x50 */, float vz /* r29+0x50 */, signed int ang /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1319C0 -> 0x131A4C
        float s; // r29+0x4C
        float c; // r29+0x48
        class NNS_VECTOR v; // r29+0x38
    }
}


// Range: 0x131A50 -> 0x131C54
void nnMakeRotateMatrixQuaternion(class NNS_QUATERNION * dst /* r2 */, float (* mtx)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x131A50 -> 0x131C54
        signed int i; // r7
        signed int j; // r2
        signed int k; // r2
        signed int nxt[3]; // r29+0x10
        float tr; // r29+0x20
        float s; // r29+0x20
        float q[3]; // r29
    }
}


// Range: 0x131C60 -> 0x131D8C
void nnMakeRotateXYZQuaternion(class NNS_QUATERNION * dst /* r18 */, signed int rx /* r2 */, signed int ry /* r17 */, signed int rz /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x131C60 -> 0x131D8C
        float xx; // r21
        float xw; // r20
        float yy; // r23
        float yw; // r22
        float zz; // r1
        float zw; // r29+0x60
        float zwyw; // r29+0x60
        float zwyy; // r29+0x60
        float zzyy; // r29+0x60
        float zzyw; // r29+0x60
        signed int ang; // r2
        float s; // r29+0x5C
        float c; // r29+0x58
    }
}


// Range: 0x131D90 -> 0x131EBC
void nnMakeRotateXZYQuaternion(class NNS_QUATERNION * dst /* r18 */, signed int rx /* r2 */, signed int ry /* r17 */, signed int rz /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x131D90 -> 0x131EBC
        float xx; // r21
        float xw; // r20
        float yy; // r23
        float yw; // r22
        float zz; // r1
        float zw; // r29+0x60
        float ywzw; // r29+0x60
        float yyzw; // r29+0x60
        float yyzz; // r29+0x60
        float ywzz; // r29+0x60
        signed int ang; // r2
        float s; // r29+0x5C
        float c; // r29+0x58
    }
}


// Range: 0x131EC0 -> 0x131FF0
void nnMakeRotateZXYQuaternion(class NNS_QUATERNION * dst /* r18 */, signed int rx /* r2 */, signed int ry /* r17 */, signed int rz /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x131EC0 -> 0x131FF0
        float xx; // r23
        float xw; // r22
        float yy; // r21
        float yw; // r20
        float zz; // r5
        float zw; // r4
        signed int ang; // r2
        float s; // r29+0x5C
        float c; // r29+0x58
    }
}


