/*
    Compile unit: C:\usr\local\sega\nn\src\Light\nnlight.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
float nngLightMatrix[4][4]; // size: 0x40, address: 0x5F6020
class NNS_PS2_LIGHT nngLight; // size: 0x510, address: 0x6DE6D0
float nngUnitMatrix[4][4]; // size: 0x40, address: 0x657F30
static class NNS_PS2_LIGHTSET nngLightSetTbl[2]; // size: 0x40, address: 0x5F6060
static signed int nngLightSetTblNum; // size: 0x4, address: 0x6D1A90
class NNS_PS2_LIGHTSET nngLightSet[2]; // size: 0x40, address: 0x6DEBE0
static signed int nnsnLightMax[4]; // size: 0x10, address: 0x5F60A0
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
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
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
};
enum NNE_LIGHTSET_PS2_TYPE {
    NNE_LIGHTSET_PS2_TYPE_PA3_PO0_SPO0_SPE0 = 0,
    NNE_LIGHTSET_PS2_TYPE_PA2_PO0_SPO0_SPE1 = 1,
    NNE_LIGHTSET_PS2_TYPE_PA3_PO4_SPO0_SPE0 = 2,
    NNE_LIGHTSET_PS2_TYPE_PA2_PO4_SPO0_SPE1 = 3,
    NNE_LIGHTSET_PS2_TYPE_PA3_PO2_SPO2_SPE0 = 4,
    NNE_LIGHTSET_PS2_TYPE_PA2_PO2_SPO2_SPE1 = 5,
    NNE_LIGHTSET_PS2_TYPE_MAX = 6,
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
enum NNE_LIGHTSET_PS2_SPECSWITCH {
    NNE_LIGHTSET_PS2_SPECSWITCH_OFF = 0,
    NNE_LIGHTSET_PS2_SPECSWITCH_ON = 1,
    NNE_LIGHTSET_PS2_SPECSWITCH_MAX = 2,
    NNE_LIGHTSET_PS2_SPECSWITCH_ALWAYS = 2,
};
class NNS_LIGHT_SPECULAR_PS2 {
    // total size: 0x20
public:
    unsigned int User; // offset 0x0, size 0x4
    class NNS_RGBA Color; // offset 0x4, size 0x10
    class NNS_VECTOR Direction; // offset 0x14, size 0xC
};
class NNS_PS2_LIGHTSET {
    // total size: 0x20
public:
    enum NNE_LIGHTSET_PS2_TYPE fType; // offset 0x0, size 0x4
    unsigned int nLight[4]; // offset 0x4, size 0x10
    unsigned int nTotal; // offset 0x14, size 0x4
    enum NNE_BOOL fOk; // offset 0x18, size 0x4
    enum NNE_BOOL fTmpOk; // offset 0x1C, size 0x4
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
enum PXE_LIGHT {
    PXE_LIGHT_0 = 0,
    PXE_LIGHT_1 = 1,
    PXE_LIGHT_2 = 2,
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
class NNS_LIGHT_PARALLEL {
    // total size: 0x24
public:
    unsigned int User; // offset 0x0, size 0x4
    class NNS_RGBA Color; // offset 0x4, size 0x10
    float Intensity; // offset 0x14, size 0x4
    class NNS_VECTOR Direction; // offset 0x18, size 0xC
};
enum NNE_BOOL {
    NNE_FALSE = 0,
    NNE_OFF = 0,
    NNE_TRUE = 1,
    NNE_ON = 1,
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
enum NNE_LIGHT {
    NNE_LIGHT_0 = 0,
    NNE_LIGHT_1 = 1,
    NNE_LIGHT_2 = 2,
    NNE_LIGHT_3 = 3,
    NNE_LIGHT_4 = 4,
    NNE_LIGHT_5 = 5,
    NNE_LIGHT_6 = 6,
    NNE_LIGHT_7 = 7,
    NNE_LIGHT_MAX = 8,
    NNE_LIGHT_ALL = 9,
};

// Range: 0x1394A0 -> 0x139618
void nnInitLight() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1394A0 -> 0x139618
        signed int i; // r17
    }
}


// Range: 0x139620 -> 0x139644
void nnSetAmbientColor(float r /* r29 */, float g /* r29 */, float b /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139620 -> 0x139644
    }
}


// Range: 0x139650 -> 0x139680
void nnSetLightSwitch(enum NNE_LIGHT no /* r2 */, enum NNE_BOOL on_off /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139650 -> 0x139680
    }
}


// Range: 0x139680 -> 0x1396DC
void nnSetLightColor(enum NNE_LIGHT no /* r2 */, float r /* r29 */, float g /* r29 */, float b /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139680 -> 0x1396DC
        class NNS_PS2_LIGHT_DATA * pLightData; // r2
    }
}


// Range: 0x1396E0 -> 0x139718
void nnSetLightPosition(enum NNE_LIGHT no /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1396E0 -> 0x139718
        class NNS_PS2_LIGHT_DATA * pLightData; // r2
    }
}


// Range: 0x139720 -> 0x1397EC
void nnSetLightType(enum NNE_LIGHT no /* r2 */, unsigned int type /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139720 -> 0x1397EC
    }
}


// Range: 0x1397F0 -> 0x139828
void nnSetLightDirection(enum NNE_LIGHT no /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1397F0 -> 0x139828
        class NNS_PS2_LIGHT_DATA * pLightData; // r2
    }
}


// Range: 0x139830 -> 0x1398A0
void nnSetLightIntensity(enum NNE_LIGHT no /* r2 */, float intensity /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139830 -> 0x1398A0
        class NNS_PS2_LIGHT_DATA * pLightData; // r2
    }
}


// Range: 0x1398A0 -> 0x1398E0
void nnSetUpParallelLight(class NNS_LIGHT_PARALLEL * light /* r2 */, class NNS_RGBA * color /* r2 */, float inten /* r29 */, class NNS_VECTOR * dir /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1398A0 -> 0x1398E0
    }
}


// Range: 0x1398E0 -> 0x139928
void nnSetUpPointLight(class NNS_LIGHT_POINT * light /* r2 */, class NNS_RGBA * color /* r2 */, float inten /* r29 */, class NNS_VECTOR * pos /* r2 */, float falloffstart /* r29 */, float falloffend /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1398E0 -> 0x139928
    }
}


// Range: 0x139930 -> 0x13996C
void nnSetUpSpecularLightPS2(class NNS_LIGHT_SPECULAR_PS2 * light /* r2 */, class NNS_RGBA * color /* r2 */, class NNS_VECTOR * dir /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139930 -> 0x13996C
    }
}


// Range: 0x139970 -> 0x1399D8
void nnSetUpTargetDirectionalLight(class NNS_LIGHT_TARGET_DIRECTIONAL * light /* r2 */, class NNS_RGBA * color /* r2 */, float inten /* r29 */, class NNS_VECTOR * pos /* r2 */, class NNS_VECTOR * target /* r2 */, float innerrange /* r29 */, float outerrange /* r29 */, float falloffstart /* r29 */, float falloffend /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139970 -> 0x1399D8
    }
}


// Range: 0x1399E0 -> 0x139A94
unsigned int nnEstimateLightBufferSize(unsigned int type /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1399E0 -> 0x139A94
    }
}


// Range: 0x139AA0 -> 0x13A6F8
void nnSetLight(enum NNE_LIGHT no /* r17 */, void * light /* r16 */, unsigned int type /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x139AA0 -> 0x13A6F8
        class NNS_LIGHT_PARALLEL * parallel; // r2
        class NNS_LIGHT_POINT * point; // r2
        class NNS_LIGHT_SPECULAR_PS2 * spec; // r2
        class NNS_LIGHT_TARGET_SPOT * tspot; // r2
        class NNS_LIGHT_ROTATION_SPOT * rspot; // r2
        class NNS_LIGHT_TARGET_DIRECTIONAL * tdir; // r2
        class NNS_LIGHT_ROTATION_DIRECTIONAL * rdir; // r2
    }
}


// Range: 0x13A700 -> 0x13B45C
void nnSetLightSpecularLightPS2(enum NNE_LIGHT no /* r19 */, void * light /* r18 */, unsigned int type /* r17 */, unsigned int flag /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13A700 -> 0x13B45C
        class NNS_LIGHT_PARALLEL * parallel; // r2
        class NNS_LIGHT_POINT * point; // r2
        class NNS_LIGHT_SPECULAR_PS2 * spec; // r2
        class NNS_LIGHT_TARGET_SPOT * tspot; // r2
        class NNS_LIGHT_ROTATION_SPOT * rspot; // r2
        class NNS_LIGHT_TARGET_DIRECTIONAL * tdir; // r2
        class NNS_LIGHT_ROTATION_DIRECTIONAL * rdir; // r2
    }
}


// Range: 0x13B460 -> 0x13B470
void nnSetLightMatrix(float (* mtx)[4][4] /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13B460 -> 0x13B470
    }
}


// Range: 0x13B470 -> 0x13BC0C
void nnPutLightSettings() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13B470 -> 0x13BC0C
        class NNS_PS2_LIGHT_DATA * pLightData; // r18
        class NNS_PS2_LIGHT_DATA * pOnLightDataAll[8]; // r29+0xA0
        signed int nOnLightTotal; // r17
        signed int i; // r19
        signed int j; // r9
        signed int k; // r3
        enum NNE_BOOL fOn; // r8
        enum NNE_BOOL fFix; // r24
        enum NNE_LIGHTSET_PS2_SPECSWITCH fSpecularSwitch; // r16
        class NNS_VECTOR dir; // r29+0xC0
        float mtx[4][4]; // r29+0x60
        enum NNE_BOOL fOk; // r18
        enum NNE_LIGHTTYPE_PS2 fTypePs2; // r2
        enum PXE_LIGHT no; // r2
    }
}


