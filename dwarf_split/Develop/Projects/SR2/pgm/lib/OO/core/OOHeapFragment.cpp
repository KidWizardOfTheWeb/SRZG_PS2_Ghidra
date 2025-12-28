/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\core\OOHeapFragment.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int m_tos32DefAlign; // size: 0x4, address: 0x6865E0
struct /* @anon0 */ {
    // total size: 0xC
} __vt__17clsOOHeapFragment; // size: 0xC, address: 0x6C3488
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
class stcFree {
    // total size: 0x10
public:
    class stcFree * m_psBackAddr; // offset 0x0, size 0x4
    class stcFree * m_psNextAddr; // offset 0x4, size 0x4
    unsigned int m_u32FreeSize; // offset 0x8, size 0x4
    unsigned int m_u32PreGap; // offset 0xC, size 0x4
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
class clsOOSemaphore {
    // total size: 0x4
};
class clsPfSemaphoreObject {
    // total size: 0x4
public:
    class clsPfSemaphore & m_semaphore; // offset 0x0, size 0x4
};
class clsPfSemaphore : public clsOOSemaphore {
    // total size: 0x8
public:
    signed int m_s32Id; // offset 0x4, size 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
struct /* @anon0 */ {
    // total size: 0xC
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

// Range: 0x4197B0 -> 0x4197B8
void DumpHi_Debug() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4197B0 -> 0x4197B8
    }
}


// Range: 0x4197C0 -> 0x419888
void AllFree(class clsOOHeapFragment * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4197C0 -> 0x419888
        class clsPfSemaphoreObject semaphore_object; // r29+0x2C
        class stcFree * addr_free; // r2
    }
}


// Range: 0x419890 -> 0x4198F0
void ___FreeLoFrame(class clsOOHeapFragment * this /* r2 */, void * pvFrameAddrLoI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x419890 -> 0x4198F0
        class stcFree * new_addr; // r2
        class stcFree * back_addr; // r2
        class stcFree * next_addr; // r2
        unsigned int freesize1; // r2
        unsigned int freesize2; // r2
    }
}


// Range: 0x4198F0 -> 0x419A60
void * _WorstFitMallocHi(class clsOOHeapFragment * this /* r17 */, unsigned int u32SizeI /* r18 */, signed int s32AlignI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4198F0 -> 0x419A60
        class clsPfSemaphoreObject semaphore_object; // r29+0x4C
        class stcFree * curr_heap; // r2
        unsigned int tmp; // r2
        unsigned int tmp2; // r2
        class stcFree * free_heap; // r2
        class stcFree * back_heap; // r2
        class stcFree * next_heap; // r2
    }
}


// Range: 0x419A60 -> 0x419AA4
void * _CallocHi(class clsOOHeapFragment * this /* r2 */, unsigned int u32SizeI /* r17 */, signed int s32AlignI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x419A60 -> 0x419AA4
        void * pvNeoAddr; // r16
    }
}


// Range: 0x419AB0 -> 0x419C28
void ___FreeHi(class clsOOHeapFragment * this /* r16 */, void * pvAddrI /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x419AB0 -> 0x419C28
        class clsPfSemaphoreObject semaphore_object; // r29+0x3C
        class stcFree * free_heap; // r2
        unsigned int heap_lo; // r2
        unsigned int heap_hi; // r2
        unsigned int free_size; // r2
        class stcFree * back_heap; // r9
        unsigned int curr_heap_lo; // r2
        class stcFree * kill_heap; // r2
    }
}


// Range: 0x419C30 -> 0x419DC8
void ___FreeLo(class clsOOHeapFragment * this /* r16 */, void * pvAddrI /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x419C30 -> 0x419DC8
        class clsPfSemaphoreObject semaphore_object; // r29+0x3C
        class stcFree * free_heap; // r2
        unsigned int heap_lo; // r2
        unsigned int heap_hi; // r2
        unsigned int free_size; // r2
        class stcFree * back_heap; // r10
        unsigned int curr_heap_lo; // r2
        class stcFree * kill_heap; // r2
        unsigned char connected; // r9
    }
}


// Range: 0x419DD0 -> 0x419F50
void * _MallocHi(class clsOOHeapFragment * this /* r17 */, unsigned int u32SizeI /* r18 */, signed int s32AlignI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x419DD0 -> 0x419F50
        class clsPfSemaphoreObject semaphore_object; // r29+0x4C
        class stcFree * end_heap; // r2
        class stcFree * curr_heap; // r2
        unsigned int tmp; // r2
        unsigned int tmp2; // r2
        class stcFree * free_heap; // r2
        class stcFree * back_heap; // r2
        class stcFree * next_heap; // r2
    }
}


// Range: 0x419F50 -> 0x419F94
void * _CallocLo(class clsOOHeapFragment * this /* r2 */, unsigned int u32SizeI /* r17 */, signed int s32AlignI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x419F50 -> 0x419F94
        void * pvNeoAddrLoOut; // r16
    }
}


// Range: 0x419FA0 -> 0x41A11C
void * _MallocLo(class clsOOHeapFragment * this /* r17 */, unsigned int u32SizeI /* r18 */, signed int s32AlignI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x419FA0 -> 0x41A11C
        class clsPfSemaphoreObject semaphore_object; // r29+0x4C
        class stcFree * curr_heap; // r2
        unsigned int tmp; // r2
        unsigned int gap; // r2
        class stcFree * free_heap; // r2
        class stcFree * back_heap; // r2
        class stcFree * next_heap; // r2
        class stcFree * heap; // r2
    }
}


// Range: 0x41A120 -> 0x41A198
void Initialize(class clsOOHeapFragment * this /* r16 */, void * pvAddrLoI /* r2 */, void * pvAddrHiI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x41A120 -> 0x41A198
    }
}


// Range: 0x41A1A0 -> 0x41A210
void * __dt(class clsOOHeapFragment * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x41A1A0 -> 0x41A210
    }
}


// Range: 0x41A210 -> 0x41A27C
void * __ct(class clsOOHeapFragment * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x41A210 -> 0x41A27C
    }
}


