/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\PS2_CRI\PS2CriFileMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon0 */ {
    // total size: 0x7C
} __vt__12clsPfFileMgr; // size: 0x7C, address: 0x6B8810
class clsOOMainHeap * t_cInstance; // size: 0x4, address: 0xB17268
class clsPfFileMgr * m_tpcSingleton; // size: 0x4, address: 0x703C48
struct /* @anon1 */ {
    // total size: 0xC
} __vt__28clsSingleton<12clsPfFileMgr>; // size: 0xC, address: 0x6B8890
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
class clsOOFileQueue {
    // total size: 0x64
public:
    class _adx_fs * m_psADXF; // offset 0x4, size 0x4
    char m_ac8Name[64]; // offset 0x8, size 0x40
    unsigned char * m_pu8Buffer; // offset 0x48, size 0x4
    unsigned char * * m_ppu8FinishAddr; // offset 0x4C, size 0x4
    float m_f32Progress; // offset 0x50, size 0x4
    unsigned int m_eRequestFlag; // offset 0x54, size 0x4
    enum enmRet * m_peRet; // offset 0x58, size 0x4
    signed short m_s16Sector; // offset 0x5C, size 0x2
    signed short m_s16ReadedSector; // offset 0x5E, size 0x2
    unsigned char m_u8Mode; // offset 0x60, size 0x1
};
class __deque_deleter_common : private __deque_buf {
    // total size: 0x18
public:
    class compressed_pair buf_; // offset 0x0, size 0x10
    unsigned int start_; // offset 0x10, size 0x4
    unsigned int size_; // offset 0x14, size 0x4
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class SJCK {
    // total size: 0x8
public:
    signed char * data; // offset 0x0, size 0x4
    signed int len; // offset 0x4, size 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class clsOOSemaphore {
    // total size: 0x4
};
enum enmRet {
    RET___UN_USE = 0,
    RET___INIT = 1,
    RET___EXEC = 2,
    RET___ERROR_DEF = 3,
    RET___ERROR_DIFFERENT_DISC = 4,
    RET___ERROR_OPENED_COVER = 5,
    RET___FINISH = 6,
    RET___CANCEL_EXEC = 7,
    RET___CANCEL_FINISH = 8,
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class _UUID {
    // total size: 0x10
public:
    unsigned int Data1; // offset 0x0, size 0x4
    unsigned short Data2; // offset 0x4, size 0x2
    unsigned short Data3; // offset 0x6, size 0x2
    unsigned char Data4[8]; // offset 0x8, size 0x8
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
enum enmReadStat {
    READ_STOP = 0,
    READ_END = 1,
    READ_READING = 2,
    READ_ERROR = 3,
};
class clsOOFileMgr {
    // total size: 0xF8
public:
    class clsOOFileQueue m_cQueue_Debug; // offset 0x4, size 0x64
    class deque m_cExecDeque; // offset 0x68, size 0x18
    class deque m_cRequestDeque; // offset 0x80, size 0x18
    unsigned char m_bEnableRenderNowLoding; // offset 0x98, size 0x1
    class clsOOCompression m_cCompression; // offset 0x9C, size 0x4C
    class clsOOThread * m_pcReadThread; // offset 0xE8, size 0x4
    class clsOOFileQueue * m_pcCurrentReadQueue; // offset 0xEC, size 0x4
    unsigned char m_bReadThreadDone; // offset 0xF0, size 0x1
    unsigned char m_bReadCancel; // offset 0xF1, size 0x1
    unsigned char * m_pu8ReadWorkBuf; // offset 0xF4, size 0x4
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
class clsSingleton {
    // total size: 0x4
};
class allocator {
    // total size: 0x1
};
class _adx_fs {
    // total size: 0x34
public:
    signed char used; // offset 0x0, size 0x1
    signed char stat; // offset 0x1, size 0x1
    signed char sjflag; // offset 0x2, size 0x1
    signed char stopnw_flg; // offset 0x3, size 0x1
    void * stm; // offset 0x4, size 0x4
    class SJ_OBJ * sj; // offset 0x8, size 0x4
    signed int fnsct; // offset 0xC, size 0x4
    signed int skpos; // offset 0x10, size 0x4
    signed int rdstpos; // offset 0x14, size 0x4
    signed int rqsct; // offset 0x18, size 0x4
    signed int rdsct; // offset 0x1C, size 0x4
    signed char * buf; // offset 0x20, size 0x4
    signed int bsize; // offset 0x24, size 0x4
    signed int rqrdsct; // offset 0x28, size 0x4
    signed int ofst; // offset 0x2C, size 0x4
    void * dir; // offset 0x30, size 0x4
};
class __cdeque_imp : public __cdeque_deleter, private compile_assert {
    // total size: 0x10
};
class clsOOMainHeap : public clsOOHeapFragment {
    // total size: 0x34
};
class __cdeque_deleter : public __cdeque_deleter_common {
    // total size: 0x10
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
class __cdeque_deleter_common {
    // total size: 0x10
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    unsigned int start_; // offset 0x8, size 0x4
    unsigned int * data_; // offset 0xC, size 0x4
};
class SJ_OBJ {
    // total size: 0x4
public:
    class _sj_vtbl * vtbl; // offset 0x0, size 0x4
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
class _EntryArg {
    // total size: 0x8
public:
    class clsOOThread * pcExecThread; // offset 0x0, size 0x4
    void * pvArg; // offset 0x4, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x10
};
class compile_assert {
    // total size: 0x1
};
class _sj_vtbl {
    // total size: 0x30
public:
    void (* QueryInterface)(); // offset 0x0, size 0x4
    void (* AddRef)(); // offset 0x4, size 0x4
    void (* Release)(); // offset 0x8, size 0x4
    void (* Destroy)(class SJ_OBJ *); // offset 0xC, size 0x4
    class _UUID * (* GetUuid)(class SJ_OBJ *); // offset 0x10, size 0x4
    void (* Reset)(class SJ_OBJ *); // offset 0x14, size 0x4
    void (* GetChunk)(class SJ_OBJ *, signed int, signed int, class SJCK *); // offset 0x18, size 0x4
    void (* UngetChunk)(class SJ_OBJ *, signed int, class SJCK *); // offset 0x1C, size 0x4
    void (* PutChunk)(class SJ_OBJ *, signed int, class SJCK *); // offset 0x20, size 0x4
    signed int (* GetNumData)(class SJ_OBJ *, signed int); // offset 0x24, size 0x4
    signed int (* IsGetChunk)(class SJ_OBJ *, signed int, signed int, signed int *); // offset 0x28, size 0x4
    void (* EntryErrFunc)(class SJ_OBJ *, void (*)(void *, signed int), void *); // offset 0x2C, size 0x4
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
class compressed_pair_imp : private allocator {
    // total size: 0x10
public:
    class cdeque second_; // offset 0x0, size 0x10
};
class __deque_buf {
    // total size: 0x1
};
class clsOOVector : public vector {
    // total size: 0x10
};
struct /* @anon0 */ {
    // total size: 0x7C
};
struct /* @anon1 */ {
    // total size: 0xC
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class vector : private __vector_imp {
    // total size: 0x10
};
class cdeque : private __cdeque_imp {
    // total size: 0x10
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
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
class deque : private __deque_imp {
    // total size: 0x18
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class allocator {
    // total size: 0x1
};
class __deque_imp : public __deque_deleter {
    // total size: 0x18
};
class clsPfFileMgr : public clsSingleton, public clsOOFileMgr {
    // total size: 0xFC
};
class __vector_pod {
    // total size: 0x10
public:
    class compressed_pair capacity_; // offset 0x0, size 0x8
    unsigned int size_; // offset 0x8, size 0x4
    unsigned int * data_; // offset 0xC, size 0x4
};
class __deque_deleter : public __deque_deleter_common {
    // total size: 0x18
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

// Range: 0x2B51E0 -> 0x2B5260
void thread_DeAllocate(class clsOOFileQueue & rcQueueI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B51E0 -> 0x2B5260
    }
}


// Range: 0x2B5260 -> 0x2B52E8
unsigned char * allocateReadBuffer(class clsOOFileQueue * pcQueueI /* r16 */, signed int s32Size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B5260 -> 0x2B52E8
    }
}


// Range: 0x2B52F0 -> 0x2B52F8
void stop(void * hFile /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B52F0 -> 0x2B52F8
    }
}


// Range: 0x2B5300 -> 0x2B5324
signed int getReadedSector(void * hFile /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B5300 -> 0x2B5324
        signed int s32Ret; // r2
    }
}


// Range: 0x2B5330 -> 0x2B5380
enum enmReadStat getReadStat(void * hFile /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B5330 -> 0x2B5380
    }
}


// Range: 0x2B5380 -> 0x2B53A8
unsigned char read_async(void * hFile /* r2 */, signed int s32SectorNum /* r2 */, unsigned char * pu8Buf /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B5380 -> 0x2B53A8
    }
}


// Range: 0x2B53B0 -> 0x2B53B8
signed int getFileSize_Sector(void * hFile /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B53B0 -> 0x2B53B8
    }
}


// Range: 0x2B53C0 -> 0x2B53C8
void thread_Close(class clsOOFileQueue & rcQueueI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B53C0 -> 0x2B53C8
    }
}


// Range: 0x2B53D0 -> 0x2B541C
signed int thread_OpenWait(class clsOOFileQueue & rcQueueI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B53D0 -> 0x2B541C
    }
}


// Range: 0x2B5420 -> 0x2B5454
unsigned char thread_Open(class clsOOFileQueue & rcQueueI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B5420 -> 0x2B5454
    }
}


// Range: 0x2B5460 -> 0x2B54F0
unsigned char requestWrite(char * opc8NameI /* r2 */, void * opvBufferI /* r18 */, signed int s32SizeI /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B5460 -> 0x2B54F0
        signed int s32Fd; // r16
    }
}


// Range: 0x2B54F0 -> 0x2B5520
signed int tThread_Exec() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B54F0 -> 0x2B5520
    }
}


// Range: 0x2B5580 -> 0x2B5588
void @4@vwait__12clsPfFileMgrCFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B5580 -> 0x2B5588
    }
}


// Range: 0x2B5590 -> 0x2B5598
void @4@stop__12clsPfFileMgrFPv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B5590 -> 0x2B5598
    }
}


// Range: 0x2B55A0 -> 0x2B55A8
void @4@getReadedSector__12clsPfFileMgrFPv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B55A0 -> 0x2B55A8
    }
}


// Range: 0x2B55B0 -> 0x2B55B8
void @4@getReadStat__12clsPfFileMgrFPv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B55B0 -> 0x2B55B8
    }
}


// Range: 0x2B55C0 -> 0x2B55C8
void @4@read_async__12clsPfFileMgrFPviPUc() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B55C0 -> 0x2B55C8
    }
}


// Range: 0x2B55D0 -> 0x2B55D8
void @4@thread_DeAllocate__12clsPfFileMgrFR14clsOOFileQueue() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B55D0 -> 0x2B55D8
    }
}


// Range: 0x2B55E0 -> 0x2B55E8
void @4@allocateReadBuffer__12clsPfFileMgrFPV14clsOOFileQueuei() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B55E0 -> 0x2B55E8
    }
}


// Range: 0x2B55F0 -> 0x2B55F8
void @4@thread_Close__12clsPfFileMgrFR14clsOOFileQueue() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B55F0 -> 0x2B55F8
    }
}


// Range: 0x2B5600 -> 0x2B5608
void @4@thread_OpenWait__12clsPfFileMgrFR14clsOOFileQueue() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B5600 -> 0x2B5608
    }
}


// Range: 0x2B5610 -> 0x2B5618
void @4@thread_Open__12clsPfFileMgrFR14clsOOFileQueue() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B5610 -> 0x2B5618
    }
}


// Range: 0x2B5620 -> 0x2B5628
void @4@getFileSize_Sector__12clsPfFileMgrFPv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B5620 -> 0x2B5628
    }
}


// Range: 0x2B5630 -> 0x2B5638
void @4@requestWrite__12clsPfFileMgrFPCcPCvi() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B5630 -> 0x2B5638
    }
}


// Range: 0x2B5640 -> 0x2B5648
void @4@__dt__12clsPfFileMgrFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2B5640 -> 0x2B5648
    }
}


