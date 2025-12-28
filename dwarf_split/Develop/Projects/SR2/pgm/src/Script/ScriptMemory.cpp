/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Script\ScriptMemory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char HeapType; // size: 0x1, address: 0xB17468
unsigned char HeapUsed; // size: 0x1, address: 0xB17470
void * MainFile; // size: 0x4, address: 0xB17478
void * FontFile; // size: 0x4, address: 0xB17480
void * MainHeapLoStart; // size: 0x4, address: 0xB17488
void * MainHeapFileEnd; // size: 0x4, address: 0x0
void * MainHeapInitEnd; // size: 0x4, address: 0xB17490
void * SubFile[2]; // size: 0x8, address: 0xB17498
void * SubHeapLoStart; // size: 0x4, address: 0xB174A0
void * SubHeapFileEnd; // size: 0x4, address: 0x0
void * SubHeapInitEnd; // size: 0x4, address: 0xB174A8
class clsOOMainHeap * t_cInstance; // size: 0x4, address: 0xB17268
class clsPfScriptHeap * m_tpcSingleton; // size: 0x4, address: 0xB13CA0
class clsPfMainHeap * m_tpcSingleton; // size: 0x4, address: 0x6D20D0
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
class clsScriptMemory {
    // total size: 0x1
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
class clsSingleton {
    // total size: 0x4
};
class clsPfScriptHeap : public clsSingleton, public clsOOHeapFragment {
    // total size: 0x3C
public:
    unsigned char * m_pu8HeapTop_Hi; // offset 0x38, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class clsOOMainHeap : public clsOOHeapFragment {
    // total size: 0x34
};
class clsPfMainHeap : public clsSingleton, public clsOOMainHeap {
    // total size: 0x38
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

// Range: 0x46D080 -> 0x46D138
void HeapFreeFlag(void * pvBuf /* r4 */, unsigned char bNormal /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x46D080 -> 0x46D138
    }
}


// Range: 0x46D140 -> 0x46D1B8
void * HeapMallocFlag(unsigned int u32Size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x46D140 -> 0x46D1B8
        void * pvBuf; // r2
    }
}


// Range: 0x46D1C0 -> 0x46D1E8
void setHeapType(unsigned int u32CutNo /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x46D1C0 -> 0x46D1E8
    }
}


// Range: 0x46D1F0 -> 0x46D21C
void setInitEndHeap() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x46D1F0 -> 0x46D21C
    }
}


// Range: 0x46D220 -> 0x46D24C
void initHeap() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x46D220 -> 0x46D24C
    }
}


// Range: 0x46D250 -> 0x46D32C
void * __dt(class clsScriptMemory * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x46D250 -> 0x46D32C
    }
}


// Range: 0x46D330 -> 0x46D3C8
void init() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x46D330 -> 0x46D3C8
    }
}


