/*
    Compile unit: C:\usr\local\sega\nn\src\Math\Collision\nncheckcollisionss.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_SPHERE {
    // total size: 0x10
public:
    class NNS_VECTOR c; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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

// Range: 0x149300 -> 0x149358
enum NNE_BOOL nnCheckCollisionSS(class NNS_SPHERE * sphere1 /* r2 */, class NNS_SPHERE * sphere2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x149300 -> 0x149358
        float x; // r29
        float y; // r29
        float z; // r29
        float rsum; // r29
    }
}


