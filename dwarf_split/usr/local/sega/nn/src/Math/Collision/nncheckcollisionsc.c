/*
    Compile unit: C:\usr\local\sega\nn\src\Math\Collision\nncheckcollisionsc.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_SPHERE {
    // total size: 0x10
public:
    class NNS_VECTOR c; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
class NNS_CAPSULE {
    // total size: 0x1C
public:
    class NNS_VECTOR c1; // offset 0x0, size 0xC
    class NNS_VECTOR c2; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
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

// Range: 0x1491F0 -> 0x149300
enum NNE_BOOL nnCheckCollisionSC(class NNS_SPHERE * sphere /* r2 */, class NNS_CAPSULE * capsule /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1491F0 -> 0x149300
        float c1cx; // r29
        float c1cy; // r29
        float c1cz; // r29
        float c1c2x; // r29
        float c1c2y; // r29
        float c1c2z; // r29
        float t; // r29
        float dd; // r2
        float rsum; // r29
        float x; // r29
        float y; // r29
        float z; // r29
        float x; // r29
        float y; // r29
        float z; // r29
    }
}


