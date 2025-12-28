/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\System\IO\SR2_MemoryCardFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static void * m_tpvBannerImage; // size: 0x4, address: 0x0
static void * m_tpvIconImage[3]; // size: 0xC, address: 0xBFB3C0
static char topoc8GameDirName[20]; // size: 0x14, address: 0x698B10
static char topoc8GhostDirName[20]; // size: 0x14, address: 0x698B30
static char * topoc8GameFileName; // size: 0x4, address: 0x698B48
static char * topoc8GhostFileName; // size: 0x4, address: 0x698B50
static char * topoc8BannerFileName; // size: 0x4, address: 0x698B68
char * otac8DataTypeName_Debug[3]; // size: 0xC, address: 0x6544A0
struct /* @anon0 */ {
    // total size: 0x40
} __vt__23clsMemoryCardFile_Ghost; // size: 0x40, address: 0x6D0EE0
class clsOOMainHeap * t_cInstance; // size: 0x4, address: 0xB17268
struct /* @anon3 */ {
    // total size: 0x40
} __vt__21clsBaseMemoryCardFile; // size: 0x40, address: 0x6D0FA0
struct /* @anon2 */ {
    // total size: 0x40
} __vt__24clsMemoryCardFile_Banner; // size: 0x40, address: 0x6D0F20
struct /* @anon1 */ {
    // total size: 0x40
} __vt__23clsMemoryCardFile_Games; // size: 0x40, address: 0x6D0F60
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
class clsMemoryCardFile_Banner : public clsBaseMemoryCardFile {
    // total size: 0x38
};
class clsOOSemaphore {
    // total size: 0x4
};
class clsBaseMemoryCardFile {
    // total size: 0x38
public:
    char m_ac8FileName[32]; // offset 0x4, size 0x20
    void * m_pvDataBuff; // offset 0x24, size 0x4
    void * m_apvLoadDataBuff[3]; // offset 0x28, size 0xC
    signed char m_s8StageNo; // offset 0x34, size 0x1
};
enum enmDataType {
    DATA_TYPE___GAMES = 0,
    DATA_TYPE___GHOST = 1,
    DATA_TYPE___BANNER = 2,
    DATA_TYPE___MAX = 3,
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
    // total size: 0x40
};
class clsMemoryCardFile_Games : public clsBaseMemoryCardFile {
    // total size: 0x38
};
struct /* @anon1 */ {
    // total size: 0x40
};
class clsMemoryCardFile_Ghost : public clsBaseMemoryCardFile {
    // total size: 0x38
};
class clsOOMainHeap : public clsOOHeapFragment {
    // total size: 0x34
};
struct /* @anon2 */ {
    // total size: 0x40
};
struct /* @anon3 */ {
    // total size: 0x40
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

// Range: 0x56B4E0 -> 0x56B548
void * __ct(class clsMemoryCardFile_Banner * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x56B4E0 -> 0x56B548
    }
}


// Range: 0x56B550 -> 0x56B574
void setFileName(class clsMemoryCardFile_Ghost * this /* r2 */, signed int s32FileNoI /* r2 */, signed int s32StageNoMmI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x56B550 -> 0x56B574
        signed int s32Prefix; // r5
    }
}


// Range: 0x56B580 -> 0x56B5E8
void * __ct(class clsMemoryCardFile_Ghost * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x56B580 -> 0x56B5E8
    }
}


// Range: 0x56B5F0 -> 0x56B5FC
void setFileName(class clsMemoryCardFile_Games * this /* r2 */, signed int s32FileNoI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x56B5F0 -> 0x56B5FC
    }
}


// Range: 0x56B600 -> 0x56B668
void * __ct(class clsMemoryCardFile_Games * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x56B600 -> 0x56B668
    }
}


// Range: 0x56B670 -> 0x56B708
void setSaveData(class clsBaseMemoryCardFile * this /* r18 */, void * pvSaveData /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x56B670 -> 0x56B708
    }
}


// Range: 0x56B710 -> 0x56B720
signed int getFileUserBlock(class clsBaseMemoryCardFile * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x56B710 -> 0x56B720
    }
}


// Range: 0x56B720 -> 0x56B730
signed int getFileSdkBlock(class clsBaseMemoryCardFile * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x56B720 -> 0x56B730
    }
}


// Range: 0x56B730 -> 0x56B748
void * GetIconImage(unsigned int u32No /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x56B730 -> 0x56B748
    }
}


// Range: 0x56B750 -> 0x56B768
void SetIconImage(unsigned int u32No /* r2 */, void * pvIconImage /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x56B750 -> 0x56B768
    }
}


