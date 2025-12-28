/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\core\Compression\OOLZSS.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon2 */ {
    // total size: 0x1C
} __vt__9clsOOLZSS; // size: 0x1C, address: 0x6C2DF0
struct /* @anon0 */ {
    // total size: 0x1C
} __vt__12clsOOCompObj; // size: 0x1C, address: 0x6B88E0
struct /* @anon1 */ {
    // total size: 0x1C
} __vt__17clsOOCompModelObj; // size: 0x1C, address: 0x6C2C10
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
class clsOOLZSS : public clsOOCompModelObj {
    // total size: 0x58
public:
    unsigned char m_u8DictionaryWidthBit; // offset 0x4, size 0x1
    unsigned char m_u8SearchLengthBit; // offset 0x5, size 0x1
    unsigned char m_u8DictionaryWidth; // offset 0x6, size 0x1
    unsigned char m_u8SearchLength; // offset 0x7, size 0x1
    unsigned char m_u8MinEncodeSize; // offset 0x8, size 0x1
    unsigned char m_u8EncodeBitLength; // offset 0x9, size 0x1
    unsigned char m_u8EncodeBuf[64]; // offset 0xA, size 0x40
    unsigned int m_u32EncodeDataBitNum; // offset 0x4C, size 0x4
    unsigned char * m_pu8EncodePos; // offset 0x50, size 0x4
    unsigned char m_bEncodeFraction; // offset 0x54, size 0x1
};
class clsOOCompModelObj : public clsOOCompObj {
    // total size: 0x4
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
class clsOOCompObj {
    // total size: 0x4
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
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
struct /* @anon2 */ {
    // total size: 0x1C
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

// Range: 0x407DC0 -> 0x407E28
signed int done(class clsOOLZSS * this /* r2 */, class clsOORingBuffer & rcDstBuf /* r2 */, class clsOORingBuffer & rcSrcBuf /* r2 */, unsigned char bIsComp /* r2 */, unsigned int & rvu32IsAbort /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x407DC0 -> 0x407E28
    }
}


// Range: 0x407E30 -> 0x407E6C
signed int done(class clsOOLZSS * this /* r2 */, class clsOORingBuffer & rcDstBuf /* r2 */, class clsOOBuffer & rcSrcBuf /* r2 */, unsigned char bIsComp /* r2 */, unsigned int & rvu32IsAbort /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x407E30 -> 0x407E6C
    }
}


// Range: 0x407E70 -> 0x407ECC
signed int done(class clsOOLZSS * this /* r2 */, class clsOOBuffer & rcDstBuf /* r2 */, class clsOORingBuffer & rcSrcBuf /* r2 */, unsigned char bIsComp /* r2 */, unsigned int & rvu32IsAbort /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x407E70 -> 0x407ECC
    }
}


// Range: 0x407ED0 -> 0x407F00
signed int done(class clsOOLZSS * this /* r2 */, class clsOOBuffer & rcDstBuf /* r2 */, class clsOOBuffer & rcSrcBuf /* r2 */, unsigned char bIsComp /* r2 */, unsigned int & rvu32IsAbort /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x407ED0 -> 0x407F00
    }
}


// Range: 0x4088B0 -> 0x4088D8
void calcFalseEncodeData(class clsOOLZSS * this /* r2 */, unsigned char u8Data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4088B0 -> 0x4088D8
    }
}


// Range: 0x4088E0 -> 0x408A78
void calcEncodeData(class clsOOLZSS * this /* r2 */, unsigned int u32Idx /* r2 */, unsigned int u32Length /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4088E0 -> 0x408A78
        unsigned char * pu8Buf; // r7
        unsigned char u8ShiftDataTmp; // r2
        unsigned char u8ShiftBitTmp; // r2
        unsigned char u8WidthRestBit; // r11
        unsigned char u8LengthRestBit; // r11
    }
}


// Range: 0x40ADF0 -> 0x40AF98
signed int readDecodeValue(unsigned char * & rpu8SrcBuf /* r2 */, signed int & rs32SrcBufSize /* r2 */, signed int & rs32SrcBitPos /* r2 */, signed int s32ReadBitNum /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x40ADF0 -> 0x40AF98
        unsigned int u32DstVal; // r2
        signed int s32FirstSeekPos; // r2
        signed int s32SecondPos; // r2
    }
}


