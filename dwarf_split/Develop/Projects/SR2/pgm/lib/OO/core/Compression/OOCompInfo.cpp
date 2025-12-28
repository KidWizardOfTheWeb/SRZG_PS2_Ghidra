/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\core\Compression\OOCompInfo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon0 */ {
    // total size: 0x1C
} __vt__12clsOOCompObj; // size: 0x1C, address: 0x6B88E0
struct /* @anon1 */ {
    // total size: 0x1C
} __vt__17clsOOCompModelObj; // size: 0x1C, address: 0x6C2C10
struct /* @anon2 */ {
    // total size: 0x1C
} __vt__9clsOOLZSS; // size: 0x1C, address: 0x6C2DF0
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
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class _CompHeader {
    // total size: 0x18
public:
    unsigned char au8Id[4]; // offset 0x0, size 0x4
    unsigned short u16Version; // offset 0x4, size 0x2
    unsigned short u16HeaderSize; // offset 0x6, size 0x2
    unsigned int u32CompDataSize; // offset 0x8, size 0x4
    unsigned int u32TrueDataSize; // offset 0xC, size 0x4
    unsigned short u16ObjTypeOffset; // offset 0x10, size 0x2
    unsigned short u16ObjHeaderOffset; // offset 0x12, size 0x2
    unsigned char u8CompObjNum; // offset 0x14, size 0x1
    unsigned char u8Padding[3]; // offset 0x15, size 0x3
};
class clsOOSemaphore {
    // total size: 0x4
};
struct /* @anon0 */ {
    // total size: 0x1C
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
enum execAttr {
    ATTR_DBL_BUF = 1,
    ATTR_MULTI_BUF = 2,
    ATTR_MULTI_RING_BUF = 3,
};
class clsOORingBuffer : public clsOOBufferBase {
    // total size: 0x3C
public:
    signed int m_s32WriteAlign; // offset 0x2C, size 0x4
    unsigned char * m_pu8CopyBuf; // offset 0x30, size 0x4
    signed int m_s32CopyBufSize; // offset 0x34, size 0x4
    signed int m_s32LockOffset; // offset 0x38, size 0x4
};
class clsOOBuffer : public clsOOBufferBase {
    // total size: 0x2C
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
class clsOOThread {
    // total size: 0x28
public:
    void * (* m_pfEntry)(class _EntryArg *); // offset 0x4, size 0x4
    void * m_pvArg; // offset 0x8, size 0x4
    void * m_pvRet; // offset 0xC, size 0x4
    unsigned char * m_pu8StackAddr; // offset 0x10, size 0x4
    signed int m_s32StackSize; // offset 0x14, size 0x4
    signed int m_s32Priority; // offset 0x18, size 0x4
    unsigned char m_bIsCreate; // offset 0x1C, size 0x1
    class clsOOSemaphore * m_pcSema; // offset 0x20, size 0x4
    unsigned char m_bIsRun; // offset 0x24, size 0x1
};
class clsOOBufferBase {
    // total size: 0x2C
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x4, size 0x4
    unsigned char * m_pu8Buf; // offset 0x8, size 0x4
    unsigned char * m_pu8BufEndPos; // offset 0xC, size 0x4
    unsigned char * m_pu8RP; // offset 0x10, size 0x4
    unsigned char * m_pu8WP; // offset 0x14, size 0x4
    signed int m_s32BufSize; // offset 0x18, size 0x4
    signed int m_s32Align; // offset 0x1C, size 0x4
    signed int m_s32ReadDataSize; // offset 0x20, size 0x4
    signed int m_s32WriteDataSize; // offset 0x24, size 0x4
    unsigned int m_u32IsWriteClosed; // offset 0x28, size 0x4
};
struct /* @anon1 */ {
    // total size: 0x1C
};
class _EntryArg {
    // total size: 0x8
public:
    class clsOOThread * pcExecThread; // offset 0x0, size 0x4
    void * pvArg; // offset 0x4, size 0x4
};
class compile_assert {
    // total size: 0x1
};
class clsOOCompression {
    // total size: 0x4C
public:
    class clsOOHeapFragment & m_rcHeap; // offset 0x4, size 0x4
    class clsOOVector m_vecCompObj; // offset 0x8, size 0x10
    class clsOOSemaphore * m_pcSema; // offset 0x18, size 0x4
    class clsOOThread * m_pcThread; // offset 0x1C, size 0x4
    signed int m_vs32ExecRes; // offset 0x20, size 0x4
    unsigned int m_vu32IsAbort; // offset 0x24, size 0x4
    unsigned char m_vbIsRegistering; // offset 0x28, size 0x1
    unsigned char m_vbIsDone; // offset 0x29, size 0x1
    enum execAttr m_eExecAttribute; // offset 0x2C, size 0x4
    unsigned char * m_u8StackAddr; // offset 0x30, size 0x4
    unsigned int m_u32WorkBufSize; // offset 0x34, size 0x4
    unsigned char m_bIsCompression; // offset 0x38, size 0x1
    class clsOOBuffer * m_pcSrcNormalBuf; // offset 0x3C, size 0x4
    class clsOORingBuffer * m_pcSrcRingBuf; // offset 0x40, size 0x4
    class clsOOBuffer * m_pcDstNormalBuf; // offset 0x44, size 0x4
    class clsOORingBuffer * m_pcDstRingBuf; // offset 0x48, size 0x4
};
class clsOOVector : public vector {
    // total size: 0x10
};
class vector : private __vector_imp {
    // total size: 0x10
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0x10
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
struct /* @anon2 */ {
    // total size: 0x1C
};
class __vector_pod {
    // total size: 0x10
public:
    class compressed_pair capacity_; // offset 0x0, size 0x8
    unsigned int size_; // offset 0x8, size 0x4
    unsigned int * data_; // offset 0xC, size 0x4
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
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

// Range: 0x58E420 -> 0x58E670
void setupDecodeObject(class _CompHeader & rcHeader /* r20 */, class clsOOCompression & rcComp /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x58E420 -> 0x58E670
        signed int s32i; // r18
        unsigned char * pu8HeaderTop; // r2
        unsigned int * pu32Types; // r2
        unsigned int * pu32ArgOffset; // r2
        unsigned int * pu32Args; // r2
    }
}


// Range: 0x58E670 -> 0x58E688
unsigned char isCompData(class _CompHeader & rcHeader /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x58E670 -> 0x58E688
    }
}


