/*
    Compile unit: C:\usr\local\sega\nn\src\Light\nnlightps2.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_PS2_LIGHT nngLight; // size: 0x510, address: 0x6DE6D0
class NNS_PS2_LIGHT_DATA {
    // total size: 0x84
public:
    enum NNE_BOOL fSw; // offset 0x0, size 0x4
    unsigned int fType; // offset 0x4, size 0x4
    enum NNE_LIGHTTYPE_PS2 fTypePs2; // offset 0x8, size 0x4
    class NNS_RGBA sCol; // offset 0xC, size 0x10
    class NNS_RGBA Col; // offset 0x1C, size 0x10
    float Inten; // offset 0x2C, size 0x4
    class NNS_VECTOR Dir; // offset 0x30, size 0xC
    class NNS_VECTOR Pos; // offset 0x3C, size 0xC
    class NNS_VECTOR SrcTgt; // offset 0x48, size 0xC
    class NNS_VECTOR Tgt; // offset 0x54, size 0xC
    class NNS_ROTATE_A32 Rot; // offset 0x60, size 0xC
    enum NNE_ROTATETYPE fRotType; // offset 0x6C, size 0x4
    signed short InnerAng; // offset 0x70, size 0x2
    signed short OuterAng; // offset 0x72, size 0x2
    float InnerRange; // offset 0x74, size 0x4
    float OuterRange; // offset 0x78, size 0x4
    float FallOffStart; // offset 0x7C, size 0x4
    float FallOffEnd; // offset 0x80, size 0x4
};
enum NNE_ROTATETYPE {
    NNE_ROTATETYPE_XYZ = 0,
    NNE_ROTATETYPE_XZY = 1,
    NNE_ROTATETYPE_YXZ = 2,
    NNE_ROTATETYPE_YZX = 3,
    NNE_ROTATETYPE_ZXY = 4,
    NNE_ROTATETYPE_ZYX = 5,
};
class NNS_PS2_LIGHT {
    // total size: 0x510
public:
    class NNS_PS2_LIGHT_DATA LightData[9]; // offset 0x0, size 0x4A4
    class NNS_PS2_LIGHT_DATA * pOnLightData[4][4]; // offset 0x4A4, size 0x40
    signed int nOnLight[4]; // offset 0x4E4, size 0x10
    enum NNE_LIGHTSET_PS2_SPECSWITCH fSpeclarSw; // offset 0x4F4, size 0x4
    class NNS_RGBA AmbiCol; // offset 0x4F8, size 0x10
    enum NNE_BOOL fReqPutVector; // offset 0x508, size 0x4
    enum NNE_BOOL fReqPutColor; // offset 0x50C, size 0x4
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
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
enum NNE_LIGHTTYPE_PS2 {
    NNE_LIGHTTYPE_PS2_PARALLEL = 0,
    NNE_LIGHTTYPE_PS2_POINT = 1,
    NNE_LIGHTTYPE_PS2_SPOT = 2,
    NNE_LIGHTTYPE_PS2_SPECULAR = 3,
    NNE_LIGHTTYPE_PS2_MAX = 4,
};
enum NNE_LIGHTSET_PS2_SPECSWITCH {
    NNE_LIGHTSET_PS2_SPECSWITCH_OFF = 0,
    NNE_LIGHTSET_PS2_SPECSWITCH_ON = 1,
    NNE_LIGHTSET_PS2_SPECSWITCH_MAX = 2,
    NNE_LIGHTSET_PS2_SPECSWITCH_ALWAYS = 2,
};

// Range: 0x13BC10 -> 0x13BC7C
void nnSetDisableLightingSwitchPS2(enum NNE_BOOL on_off /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13BC10 -> 0x13BC7C
    }
}


// Range: 0x13BC80 -> 0x13BDA8
void nnSetSpecularLightSwitchPS2(enum NNE_BOOL on_off /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13BC80 -> 0x13BDA8
        class NNS_PS2_LIGHT_DATA * pLightData; // r2
    }
}


