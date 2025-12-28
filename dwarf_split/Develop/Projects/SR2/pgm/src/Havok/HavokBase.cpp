/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Havok\HavokBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char HK_KEYCODE[21]; // size: 0x15, address: 0x697810
unsigned int HK_KEYVALUE; // size: 0x4, address: 0x697828
class hkMallocMemory t_cMemoryManager; // size: 0xA30, address: 0xBFA840
class hkThreadMemory * t_pcThreadMemory; // size: 0x4, address: 0xBFB270
void tErrorReport(char *, void *); // size: 0x0, address: 0x54C1C0
class clsPfHavokHeap * m_tpcSingleton; // size: 0x4, address: 0x703C20
void * __dt(class clsPfHavokHeap *, signed short); // size: 0x0, address: 0x1F29C0
struct /* @anon0 */ {
    // total size: 0xC
} __vt__30clsSingleton<14clsPfHavokHeap>; // size: 0xC, address: 0x6B61F8
struct /* @anon2 */ {
    // total size: 0x18
} __vt__14clsPfHavokHeap; // size: 0x18, address: 0x6B61E0
struct /* @anon1 */ {
    // total size: 0x58
} __vt__14hkMallocMemory; // size: 0x58, address: 0x6CFA40
struct /* @anon3 */ {
    // total size: 0x10
} __vt__11hkErrStream; // size: 0x10, address: 0x6B6390
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
enum MemoryState {
    MEMORY_STATE_OK = 0,
    MEMORY_STATE_OUT_OF_MEMORY = 1,
};
struct /* @anon0 */ {
    // total size: 0xC
};
class clsPfHavokHeap : public clsSingleton, public clsOOHeapFragment {
    // total size: 0x38
};
class hkThreadMemory {
    // total size: 0x314
public:
    class hkMemory * m_memory; // offset 0x4, size 0x4
    signed int m_referenceCount; // offset 0x8, size 0x4
    class Stack m_stack; // offset 0xC, size 0x10
    signed int m_stackSize; // offset 0x1C, size 0x4
    signed int m_maxNumElemsOnFreeList; // offset 0x20, size 0x4
    class FreeList m_free_list[17]; // offset 0x24, size 0x88
    signed int m_row_to_size_lut[17]; // offset 0xAC, size 0x44
    char m_small_size_to_row_lut[513]; // offset 0xF0, size 0x201
    signed int m_large_size_to_row_lut[8]; // offset 0x2F4, size 0x20
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
class FreeList {
    // total size: 0x8
public:
    class FreeElem * m_head; // offset 0x0, size 0x4
    signed int m_numElem; // offset 0x4, size 0x4
};
class Stack {
    // total size: 0x10
public:
    char * m_current; // offset 0x0, size 0x4
    class Stack * m_prev; // offset 0x4, size 0x4
    char * m_base; // offset 0x8, size 0x4
    char * m_end; // offset 0xC, size 0x4
};
class FreeElem {
    // total size: 0x4
public:
    class FreeElem * m_next; // offset 0x0, size 0x4
};
struct /* @anon1 */ {
    // total size: 0x58
};
class hkMemory {
    // total size: 0xA30
public:
    enum MemoryState m_memoryState; // offset 0x4, size 0x4
    signed int m_criticalMemoryLimit; // offset 0x8, size 0x4
    signed int m_referenceCount; // offset 0xC, size 0x4
    class hkMemoryStatistics m_memoryStatistics; // offset 0x10, size 0x1C
    signed int m_numValidBigBlocks; // offset 0x2C, size 0x4
    class BigBlockData m_bigBlockDataArray[128]; // offset 0x30, size 0xA00
};
class clsSingleton {
    // total size: 0x4
};
class BigBlockData {
    // total size: 0x14
public:
    class hkBool m_available; // offset 0x0, size 0x1
    signed int m_size; // offset 0x4, size 0x4
    void * m_memory; // offset 0x8, size 0x4
    enum HK_MEMORY_CLASS m_class; // offset 0xC, size 0x4
    class hkBool m_providedByOutside; // offset 0x10, size 0x1
};
enum HK_MEMORY_CLASS {
    HK_MEMORY_CLASS_ROOT = 0,
    HK_MEMORY_CLASS_BASE = 1,
    HK_MEMORY_CLASS_COLLIDE = 2,
    HK_MEMORY_CLASS_CONSTRAINT_SOLVER = 3,
    HK_MEMORY_CLASS_DYNAMICS = 4,
    HK_MEMORY_CLASS_EXPORT = 5,
    HK_MEMORY_CLASS_SERIALIZE = 6,
    HK_MEMORY_CLASS_GEOMETRY = 7,
    HK_MEMORY_CLASS_DISPLAY = 8,
    HK_MEMORY_CLASS_MATH = 9,
    HK_MEMORY_CLASS_SCENE_DATA = 10,
    HK_MEMORY_CLASS_VEHICLE = 11,
    HK_MEMORY_CLASS_UTILITIES = 12,
    HK_MEMORY_CLASS_ANIMATION = 13,
    HK_MEMORY_CLASS_BEHAVIOR = 14,
    HK_MEMORY_CLASS_TOOLS = 15,
    HK_MEMORY_CLASS_DEMO_FRAMEWORK = 16,
    HK_MEMORY_CLASS_DEMO = 17,
    HK_MEMORY_CLASS_USER = 18,
    HK_MEMORY_CLASS_BASE_CLASS = 19,
    HK_MEMORY_CLASS_STRING = 20,
    HK_MEMORY_CLASS_ARRAY = 21,
    HK_MEMORY_CLASS_SINGLETON = 22,
    HK_MEMORY_CLASS_SCRATCHPAD = 23,
    HK_MEMORY_CLASS_STREAM = 24,
    HK_MEMORY_CLASS_MONITOR = 25,
    HK_MEMORY_CLASS_MAP = 26,
    HK_MEMORY_CLASS_TREE = 27,
    HK_MEMORY_CLASS_HKCLASS = 28,
    HK_MEMORY_CLASS_AGENT = 29,
    HK_MEMORY_CLASS_ALGORITHM = 30,
    HK_MEMORY_CLASS_BROAD_PHASE = 31,
    HK_MEMORY_CLASS_CONTACT = 32,
    HK_MEMORY_CLASS_DISPATCH = 33,
    HK_MEMORY_CLASS_MANIFOLD = 34,
    HK_MEMORY_CLASS_SHAPE = 35,
    HK_MEMORY_CLASS_COLLIDABLE = 36,
    HK_MEMORY_CLASS_CDINFO = 37,
    HK_MEMORY_CLASS_MOPP = 38,
    HK_MEMORY_CLASS_ACTION = 39,
    HK_MEMORY_CLASS_DYNCOLLIDE = 40,
    HK_MEMORY_CLASS_DEACTIVATOR = 41,
    HK_MEMORY_CLASS_CONSTRAINT = 42,
    HK_MEMORY_CLASS_ENTITY = 43,
    HK_MEMORY_CLASS_MOTION = 44,
    HK_MEMORY_CLASS_WORLD = 45,
    HK_MEMORY_CLASS_RIGID_BODY = 46,
    HK_MEMORY_CLASS_PHANTOM = 47,
    HK_MEMORY_CLASS_SIMISLAND = 48,
    HK_MEMORY_CLASS_CAMERA = 49,
    HK_MEMORY_CLASS_CHARACTER = 50,
    HK_MEMORY_CLASS_VDB = 51,
    HK_MEMORY_CLASS_INERTIA = 52,
    HK_MEMORY_CLASS_ANIM_UNCOMPRESSED = 53,
    HK_MEMORY_CLASS_ANIM_COMPRESSED = 54,
    HK_MEMORY_CLASS_ANIM_DATA = 55,
    HK_MEMORY_CLASS_ANIM_MOTION = 56,
    HK_MEMORY_CLASS_ANIM_RIG = 57,
    HK_MEMORY_CLASS_ANIM_CONTROL = 58,
    HK_MEMORY_CLASS_ANIM_RUNTIME = 59,
    HK_MEMORY_CLASS_ANIM_CACHE = 60,
    HK_MEMORY_CLASS_BEHAVIOR_RUNTIME = 61,
    HK_MEMORY_CLASS_BEHAVIOR_DEMOS = 62,
    HK_MEMORY_CLASS_USER_1 = 63,
    HK_MEMORY_CLASS_USER_2 = 64,
    HK_MEMORY_CLASS_USER_3 = 65,
    HK_MEMORY_CLASS_USER_4 = 66,
    HK_MEMORY_CLASS_PRE_ALLOCATED = 67,
    HK_MEMORY_CLASS_MAX = 68,
};
struct /* @anon2 */ {
    // total size: 0x18
};
struct /* @anon3 */ {
    // total size: 0x10
};
class hkMemoryStatistics {
    // total size: 0x1C
public:
    signed int m_numSysAllocs; // offset 0x0, size 0x4
    signed int m_sysAllocsSize; // offset 0x4, size 0x4
    signed int m_sysAllocsHighMark; // offset 0x8, size 0x4
    signed int m_numPages; // offset 0xC, size 0x4
    signed int m_sizeOfPage; // offset 0x10, size 0x4
    signed int m_pageOverhead; // offset 0x14, size 0x4
    signed int m_pageMemoryUsed; // offset 0x18, size 0x4
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
class hkBool {
    // total size: 0x1
public:
    char m_bool; // offset 0x0, size 0x1
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
class hkMallocMemory : public hkMemory {
    // total size: 0xA30
};

// Range: 0x54C0F0 -> 0x54C0F8
void exitMemory() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x54C0F0 -> 0x54C0F8
    }
}


// Range: 0x54C100 -> 0x54C120
void resetMemory() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x54C100 -> 0x54C120
    }
}


// Range: 0x54C120 -> 0x54C1B8
void initMemory(unsigned int u32AllocateHeapSizeI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x54C120 -> 0x54C1B8
        void * pvBuff; // r2
        signed char @32441; // @ 0x00BFB278
        class clsPfHavokHeap cOOHavokHeap; // @ 0x00BFB290
    }
}


// Range: 0x54C1C0 -> 0x54C1D0
void tErrorReport(char * msg /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x54C1C0 -> 0x54C1D0
    }
}


