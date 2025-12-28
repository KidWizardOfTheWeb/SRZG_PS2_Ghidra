/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\System\NewDelete.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class clsOOMainHeap * t_cInstance; // size: 0x4, address: 0xB17268
signed int m_tos32DefAlign; // size: 0x4, address: 0x6865E0
static float FLYACTION_DESCENT_PITCH_GRAVITY; // size: 0x4, address: 0x0
static float FLYACTION_FALL_PITCH_GRAVITY; // size: 0x4, address: 0x0
static float FLYACTION_DEFAULT_PITCH_GRAVITY; // size: 0x4, address: 0x0
static float FLYACTION_MIN_PITCH; // size: 0x4, address: 0x0
static float FLYACTION_MAX_PITCH; // size: 0x4, address: 0x0
static float FLYACTION_LEFT_RIGHT_ROT; // size: 0x4, address: 0x0
static float FLYACTION_UP_DOWN_ROT; // size: 0x4, address: 0x0
static float toaf32GpUsedRate[5]; // size: 0x14, address: 0x0
static float toaf32ItemBox[3]; // size: 0xC, address: 0x0
static float toaf32BonusGLink[3]; // size: 0xC, address: 0x0
static float toaf32BonusPower[6]; // size: 0x18, address: 0x0
static float toaf32BonusFly[3]; // size: 0xC, address: 0x0
static float toaf32BonusSpeed[3]; // size: 0xC, address: 0x0
static float toaf32BonusTrick[7]; // size: 0x1C, address: 0x0
enum enmRet aoeRet[3]; // size: 0xC, address: 0x655000
static unsigned char ChkComUseData[1]; // size: 0x1, address: 0x0
static unsigned char ChkCourseUseData[1]; // size: 0x1, address: 0x0
static unsigned char chk__enum__enmMotion_nakawatari_SizeOver[1]; // size: 0x1, address: 0x0
static unsigned char chk__enum__notSkateModelType_nakawatari_NotEqual[1]; // size: 0x1, address: 0x0
static unsigned char chk__enum__enmMotionType_nakawatari_SizeOver[1]; // size: 0x1, address: 0x0
static unsigned char chk__enum__enmLevel_nakawatari_SizeOver[1]; // size: 0x1, address: 0x0
static float tosUnitMatrix[4][4]; // size: 0x40, address: 0x0
static class NNS_VECTOR tosUnitScaleVec; // size: 0xC, address: 0x0
static class NNS_VECTOR tosZVec; // size: 0xC, address: 0x0
static class NNS_VECTOR tosYVec; // size: 0xC, address: 0x0
static class NNS_VECTOR tosXVec; // size: 0xC, address: 0x0
static class NNS_VECTOR tosZeroVec; // size: 0xC, address: 0x0
static class NNS_VECTORFAST tosUnitScaleVecFast; // size: 0x10, address: 0x0
static class NNS_VECTORFAST tosZVecFast; // size: 0x10, address: 0x0
static class NNS_VECTORFAST tosYVecFast; // size: 0x10, address: 0x0
static class NNS_VECTORFAST tosXVecFast; // size: 0x10, address: 0x0
static class NNS_VECTORFAST tosZeroVecFast; // size: 0x10, address: 0x0
unsigned int oau32DebugColor[16]; // size: 0x40, address: 0x655010
char * oapc8Str[2]; // size: 0x8, address: 0x5F2198
char * oapc8Str[2]; // size: 0x8, address: 0x0
char * oapc8Str[2]; // size: 0x8, address: 0x0
char * oapc8Str[2]; // size: 0x8, address: 0x5F21B0
unsigned char oau8Mask[2]; // size: 0x2, address: 0x0
unsigned short oau16Mask[2]; // size: 0x4, address: 0x0
unsigned int oau32Mask[2]; // size: 0x8, address: 0x655050
unsigned int oau32Col[2]; // size: 0x8, address: 0x655058
class Fuid fuid; // size: 0x10, address: 0x0
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class clsOOSemaphore {
    // total size: 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class clsOOMainHeap : public clsOOHeapFragment {
    // total size: 0x34
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class clsOOHeapFragment {
    // total size: 0x34
public:
    class stcFree * m_psAddrLo; // offset 0x4, size 0x4
    class stcFree * m_psDefaultAddrLo; // offset 0x8, size 0x4
    class stcFree * m_psAddrHi; // offset 0xC, size 0x4
    class stcFree * m_psDefaultAddrHi; // offset 0x10, size 0x4
    signed int m_s32AllRestSize; // offset 0x14, size 0x4
    signed int m_s32AllocSizeLo; // offset 0x18, size 0x4
    signed int m_s32AllocSizeHi; // offset 0x1C, size 0x4
    class clsPfSemaphore m_cOOSemaphore; // offset 0x20, size 0x8
    class clsPfSemaphore m_cOOSemaphoreUpperNest; // offset 0x28, size 0x8
    unsigned short m_u16LoCnt_Debug; // offset 0x30, size 0x2
    unsigned short m_u16HiCnt_Debug; // offset 0x32, size 0x2
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class clsPfSemaphore : public clsOOSemaphore {
    // total size: 0x8
public:
    signed int m_s32Id; // offset 0x4, size 0x4
};
class stcFree {
    // total size: 0x10
public:
    class stcFree * m_psBackAddr; // offset 0x0, size 0x4
    class stcFree * m_psNextAddr; // offset 0x4, size 0x4
    unsigned int m_u32FreeSize; // offset 0x8, size 0x4
    unsigned int m_u32PreGap; // offset 0xC, size 0x4
};

// Range: 0x100230 -> 0x100298
void __dla(void * pvAddrI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x100230 -> 0x100298
    }
}


// Range: 0x1002A0 -> 0x100308
void __dl(void * pvAddrI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1002A0 -> 0x100308
    }
}


// Range: 0x100310 -> 0x1003AC
void * __nwa(unsigned int u32SizeI /* r18 */, signed int s32AlignI /* r17 */, unsigned int u32NewFlagI /* r2 */, unsigned int u32AddMutableSizeI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x100310 -> 0x1003AC
    }
}


// Range: 0x1003B0 -> 0x100424
static void * tNew(unsigned int u32SizeI /* r5 */, signed int s32AlignI /* r3 */, unsigned int u32NewFlagI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1003B0 -> 0x100424
        void * pvRet; // r2
        void * pvRet; // r2
        void * pvRet; // r2
    }
}


// Range: 0x100440 -> 0x1004D8
void * __nwa(unsigned int u32SizeI /* r17 */, unsigned int u32NewFlagI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x100440 -> 0x1004D8
    }
}


// Range: 0x1004E0 -> 0x1004F8
void * __nwa(unsigned int u32SizeI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1004E0 -> 0x1004F8
    }
}


// Range: 0x100500 -> 0x100574
void * __nw(unsigned int u32SizeI /* r2 */, signed int s32AlignI /* r3 */, unsigned int u32NewFlagI /* r2 */, unsigned int u32AddMutableSizeI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x100500 -> 0x100574
    }
}


// Range: 0x100580 -> 0x100600
void * __nw(unsigned int u32SizeI /* r6 */, unsigned int u32NewFlagI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x100580 -> 0x100600
    }
}


// Range: 0x100600 -> 0x100618
void * __nw(unsigned int u32SizeI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x100600 -> 0x100618
    }
}


