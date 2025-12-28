/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\PS2\IO\PS2MemoryCard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char * tpoc8oDirTopName_Jp; // size: 0x4, address: 0x0
char * tpoc8oDirTopName_Kr; // size: 0x4, address: 0x0
char * tpoc8oDirTopName_Us; // size: 0x4, address: 0x0
char * tpoc8oDirTopName_Eu; // size: 0x4, address: 0x0
char * tpoc8oDirPathChara; // size: 0x4, address: 0x0
char * tpoc8oDirCurrent; // size: 0x4, address: 0x0
char * tpoc8oDirCurrentP; // size: 0x4, address: 0x0
char * tpoc8oRootPath; // size: 0x4, address: 0x697C68
char * tpoc8oIconSysName; // size: 0x4, address: 0x0
signed int m_tas32LocalMode[8]; // size: 0x20, address: 0xBFB2E0
signed int m_ts32LocalCallCnt; // size: 0x4, address: 0x653A78
struct /* @anon0 */ {
    // total size: 0x94
} __vt__15clsPfMemoryCard; // size: 0x94, address: 0x6D0360
struct /* @anon1 */ {
    // total size: 0xC
} __vt__Q215clsPfMemoryCard12clsLocalMode; // size: 0xC, address: 0x0
class clsOOMainHeap * t_cInstance; // size: 0x4, address: 0xB17268
struct /* @anon3 */ {
    // total size: 0x78
} __vt__15clsOOMemoryCard; // size: 0x78, address: 0x6D08F0
class clsPfMemoryCard * m_tpcSingleton; // size: 0x4, address: 0xB0D978
struct /* @anon2 */ {
    // total size: 0xC
} __vt__31clsSingleton<15clsPfMemoryCard>; // size: 0xC, address: 0x6D03F8
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
enum enmMktType {
    MKT_TYPE_JP = 0,
    MKT_TYPE_KR = 1,
    MKT_TYPE_US = 2,
    MKT_TYPE_EU = 3,
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class clsPfMemoryCard : public clsOOMemoryCard, public clsSingleton {
    // total size: 0x7C4
public:
    signed char m_s8PortNo; // offset 0x2C, size 0x1
    signed int m_s32McType; // offset 0x30, size 0x4
    signed int m_s32FreeCluster; // offset 0x34, size 0x4
    signed int m_s32Format; // offset 0x38, size 0x4
    enum enmMcState m_enMcState; // offset 0x3C, size 0x4
    enum enmMcState m_enOldMcState; // offset 0x40, size 0x4
    signed int m_s32MaxNeedSize; // offset 0x44, size 0x4
    signed int m_s32NeedSize; // offset 0x48, size 0x4
    signed int m_s32DefiSize; // offset 0x4C, size 0x4
    signed int m_s32Fd; // offset 0x50, size 0x4
    signed int m_s32ReWriteSize; // offset 0x54, size 0x4
    signed int m_s32GetReWriteSize; // offset 0x58, size 0x4
    unsigned int * m_pu32FileSize; // offset 0x5C, size 0x4
    unsigned int * m_pu32SeekEndPos; // offset 0x60, size 0x4
    unsigned char m_u8FileDataNum; // offset 0x64, size 0x1
    class stcFileData m_asFileData[18]; // offset 0x68, size 0x2D0
    class stcIconData m_sIconData; // offset 0x338, size 0xB8
    class sceMcIconSys m_sIconSys; // offset 0x3F0, size 0x3C4
    class sceMcTblGetDir * m_psDirFileList; // offset 0x7B4, size 0x4
    signed int m_s32FileListNum; // offset 0x7B8, size 0x4
    signed int m_s32SyncResult; // offset 0x7BC, size 0x4
    unsigned char m_bIconReWrite; // offset 0x7C0, size 0x1
    unsigned char m_bBreak; // offset 0x7C1, size 0x1
};
enum enmFileSeek {
    FILE_SEEK___SET = 0,
    FILE_SEEK___CURRENT = 1,
    FILE_SEEK___END = 2,
};
class clsLocalMode {
    // total size: 0x4
};
class stcFileData {
    // total size: 0x28
public:
    char c8Name[32]; // offset 0x0, size 0x20
    void * pvData; // offset 0x20, size 0x4
    unsigned int u32Size; // offset 0x24, size 0x4
};
class clsOOSemaphore {
    // total size: 0x4
};
struct /* @anon0 */ {
    // total size: 0x94
};
class stcAccessBuffer {
    // total size: 0x8
public:
    void * pvAddr; // offset 0x0, size 0x4
    signed int s32Length; // offset 0x4, size 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class sceMcIconSys {
    // total size: 0x3C4
public:
    unsigned char Head[4]; // offset 0x0, size 0x4
    unsigned short Reserv1; // offset 0x4, size 0x2
    unsigned short OffsLF; // offset 0x6, size 0x2
    unsigned int Reserv2; // offset 0x8, size 0x4
    unsigned int TransRate; // offset 0xC, size 0x4
    signed int BgColor[4][4]; // offset 0x10, size 0x40
    float LightDir[3][4]; // offset 0x50, size 0x30
    float LightColor[3][4]; // offset 0x80, size 0x30
    float Ambient[4]; // offset 0xB0, size 0x10
    unsigned char TitleName[68]; // offset 0xC0, size 0x44
    unsigned char FnameView[64]; // offset 0x104, size 0x40
    unsigned char FnameCopy[64]; // offset 0x144, size 0x40
    unsigned char FnameDel[64]; // offset 0x184, size 0x40
    unsigned char Reserve3[512]; // offset 0x1C4, size 0x200
};
class clsOOMemoryCard {
    // total size: 0x28
public:
    signed int m_s32Status_ReturnAsync; // offset 0x4, size 0x4
    signed int m_s32Status_Return; // offset 0x8, size 0x4
    enum enmCommand m_eCommand; // offset 0xC, size 0x4
    unsigned int m_u32FileSize; // offset 0x10, size 0x4
    unsigned int m_u32FilePos; // offset 0x14, size 0x4
    class stcAccessBuffer m_sAccessBuffer; // offset 0x18, size 0x8
    unsigned char m_u8UserNum; // offset 0x20, size 0x1
    unsigned char m_u8FileNum; // offset 0x21, size 0x1
    unsigned char m_bAutoSeve; // offset 0x22, size 0x1
    unsigned char m_bRunning; // offset 0x23, size 0x1
    signed char m_s8SlotNo; // offset 0x24, size 0x1
    unsigned char m_bOpened; // offset 0x25, size 0x1
};
class stcIconData {
    // total size: 0xB8
public:
    char ac8Dir[22]; // offset 0x0, size 0x16
    unsigned char u8FileNum; // offset 0x16, size 0x1
    unsigned char u8Padding; // offset 0x17, size 0x1
    class stcFileData asFileData[4]; // offset 0x18, size 0xA0
};
class clsSingleton {
    // total size: 0x4
};
struct /* @anon1 */ {
    // total size: 0xC
};
enum enmCommand {
    CMD___CHECK_FREE_AREA = 0,
    CMD___CHECK_STATUS = 1,
    CMD___FORMAT = 2,
    CMD___CREATE_DIR = 3,
    CMD___CHANGE_DIR = 4,
    CMD___DELETE_DIR = 5,
    CMD___FILELIST_DIR = 6,
    CMD___GET_CURRENT_DIR = 7,
    CMD___CHECK_EXIST_FILE = 8,
    CMD___CHECK_EXIST_FILE_LOADED = 9,
    CMD___CREATE_FILE = 10,
    CMD___OPEN_FILE = 11,
    CMD___LOAD_FILE = 12,
    CMD___SAVE_FILE = 13,
    CMD___SAVE_ALLFILE = 14,
    CMD___CLOSE_FILE = 15,
    CMD___GET_LENGTH_FILE = 16,
    CMD___SEEK_FILE = 17,
    CMD___TELL_FILE = 18,
    CMD___DELETE_FILE = 19,
    CMD___DELETE_ALLFILE = 20,
    CMD___UNFORMAT = 21,
    CMD___END = 22,
};
enum enmMcState {
    MC_STATE_OK = 0,
    MC_STATE_EXIST = 1,
    MC_STATE_NOEXIST = 2,
    MC_STATE_UNFORMAT = 3,
    MC_STATE_BREAK = 4,
    MC_STATE_EMPTY = 5,
    MC_STATE_CHANGE = 6,
    MC_STATE_NOT_CHANGE = 7,
    MC_STATE_PS1 = 8,
    MC_STATE_PDA = 9,
    MC_STATE_NOCARD = 10,
    MC_STATE_DIR_EXIST = 11,
    MC_STATE_NO_DIR_ENTRY = 12,
    MC_STATE_NO_FILE_ENTRY = 13,
    MC_STATE_NO_EMPTY_DIR = 14,
    MC_STATE_FILE_OPEN_LIMIT = 15,
    MC_STATE_NO_OPEN_FILE = 16,
    MC_STATE_OTHER = 17,
    MC_STATE_ENTRYBREAK = 18,
};
class clsOOMainHeap : public clsOOHeapFragment {
    // total size: 0x34
};
class sceMcTblGetDir {
    // total size: 0x40
public:
    class sceMcStDateTime _Create; // offset 0x0, size 0x8
    class sceMcStDateTime _Modify; // offset 0x8, size 0x8
    unsigned int FileSizeByte; // offset 0x10, size 0x4
    unsigned short AttrFile; // offset 0x14, size 0x2
    unsigned short Reserve1; // offset 0x16, size 0x2
    unsigned int Reserve2; // offset 0x18, size 0x4
    unsigned int PdaAplNo; // offset 0x1C, size 0x4
    unsigned char EntryName[32]; // offset 0x20, size 0x20
};
class sceMcStDateTime {
    // total size: 0x8
public:
    unsigned char Resv2; // offset 0x0, size 0x1
    unsigned char Sec; // offset 0x1, size 0x1
    unsigned char Min; // offset 0x2, size 0x1
    unsigned char Hour; // offset 0x3, size 0x1
    unsigned char Day; // offset 0x4, size 0x1
    unsigned char Month; // offset 0x5, size 0x1
    unsigned short Year; // offset 0x6, size 0x2
};
struct /* @anon2 */ {
    // total size: 0xC
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
enum enmIconData {
    ICONDATA_ICON_SYS = 0,
    ICONDATA_ICON_01 = 1,
    ICONDATA_ICON_02 = 2,
    ICONDATA_ICON_03 = 3,
    ICONDATA_MAX_NUM = 4,
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
enum enmFileOpenType {
    OPEN_FILE_TYPE___NONE = 0,
    OPEN_FILE_TYPE___R = 1,
    OPEN_FILE_TYPE___W = 2,
    OPEN_FILE_TYPE___RW = 3,
};
struct /* @anon3 */ {
    // total size: 0x78
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

// Range: 0x557650 -> 0x5576C0
void unformatMemoryCard(class clsPfMemoryCard * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x557650 -> 0x5576C0
    }
}


// Range: 0x5576C0 -> 0x557D38
unsigned char endchkDeleteAllFile(class clsPfMemoryCard * this /* r17 */, signed int s32Result /* r2 */, signed int * ps32Rtn /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5576C0 -> 0x557D38
        class clsLocalMode cLocalMode; // r29+0x3C
        signed int ts32LocalFileCnt; // @ 0x00BFB308
    }
}


// Range: 0x557D40 -> 0x557DF0
void deleteAllFile(class clsPfMemoryCard * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x557D40 -> 0x557DF0
        class clsLocalMode cLocalMode; // r29+0x2C
    }
}


// Range: 0x557DF0 -> 0x557E64
void deleteFile(class clsPfMemoryCard * this /* r16 */, char * opc8FileNameI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x557DF0 -> 0x557E64
    }
}


// Range: 0x557E70 -> 0x557EEC
void tellFile(class clsPfMemoryCard * this /* r16 */, unsigned int * pu32PosO /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x557E70 -> 0x557EEC
    }
}


// Range: 0x557EF0 -> 0x557F34
signed int endchkSeekFile(class clsPfMemoryCard * this /* r2 */, signed int s32Result /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x557EF0 -> 0x557F34
        signed int s32Rtn; // r2
    }
}


// Range: 0x557F40 -> 0x557FB0
void seekFile(class clsPfMemoryCard * this /* r16 */, signed int s32OffsetI /* r2 */, enum enmFileSeek eFileSeekI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x557F40 -> 0x557FB0
    }
}


// Range: 0x557FB0 -> 0x557FF8
signed int endchkGetLengthFile(class clsPfMemoryCard * this /* r2 */, signed int s32Result /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x557FB0 -> 0x557FF8
        signed int s32Rtn; // r2
    }
}


// Range: 0x558000 -> 0x55807C
void getLengthFile(class clsPfMemoryCard * this /* r16 */, unsigned int * pu32LengthO /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x558000 -> 0x55807C
    }
}


// Range: 0x558080 -> 0x5580CC
signed int endchkCloseFile(class clsPfMemoryCard * this /* r2 */, signed int s32Result /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x558080 -> 0x5580CC
        signed int s32Rtn; // r2
    }
}


// Range: 0x5580D0 -> 0x55815C
void closeFile(class clsPfMemoryCard * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5580D0 -> 0x55815C
    }
}


// Range: 0x558160 -> 0x558C4C
unsigned char endchkSaveAllFile(class clsPfMemoryCard * this /* r17 */, signed int s32Result /* r2 */, signed int * ps32Rtn /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x558160 -> 0x558C4C
        class clsLocalMode cLocalMode; // r29+0x3C
        signed int ts32LocalFileCnt; // @ 0x00BFB300
    }
}


// Range: 0x558C50 -> 0x558D00
void saveAllFile(class clsPfMemoryCard * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x558C50 -> 0x558D00
        class clsLocalMode cLocalMode; // r29+0x2C
    }
}


// Range: 0x558D00 -> 0x558F14
unsigned char endchkSaveFile(class clsPfMemoryCard * this /* r17 */, signed int s32Result /* r2 */, signed int * ps32Rtn /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x558D00 -> 0x558F14
        class clsLocalMode cLocalMode; // r29+0x3C
    }
}


// Range: 0x558F20 -> 0x558FD0
void saveFile(class clsPfMemoryCard * this /* r16 */, void * pvBufferI /* r2 */, signed int s32LengthI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x558F20 -> 0x558FD0
        class clsLocalMode cLocalMode; // r29+0x2C
    }
}


// Range: 0x558FD0 -> 0x559034
signed int endchkLoadFile(class clsPfMemoryCard * this /* r2 */, signed int s32Result /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x558FD0 -> 0x559034
        signed int s32Rtn; // r2
    }
}


// Range: 0x559040 -> 0x5590AC
void loadFile(class clsPfMemoryCard * this /* r16 */, void * pvBufferI /* r2 */, signed int s32LengthI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559040 -> 0x5590AC
    }
}


// Range: 0x5590B0 -> 0x559130
void openFile(class clsPfMemoryCard * this /* r16 */, char * opc8FileNameI /* r5 */, enum enmFileOpenType eFileOpenTypeI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5590B0 -> 0x559130
    }
}


// Range: 0x559130 -> 0x55918C
signed int endchkCreateFile(class clsPfMemoryCard * this /* r2 */, signed int s32Result /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559130 -> 0x55918C
        signed int s32Rtn; // r2
    }
}


// Range: 0x559190 -> 0x559208
void createFile(class clsPfMemoryCard * this /* r16 */, char * opc8FileNameI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559190 -> 0x559208
    }
}


// Range: 0x559210 -> 0x559218
void checkExistFileLoaded() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559210 -> 0x559218
    }
}


// Range: 0x559220 -> 0x559360
unsigned char endchkCheckExistFile(class clsPfMemoryCard * this /* r17 */, signed int s32Result /* r2 */, signed int * ps32Rtn /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559220 -> 0x559360
        class clsLocalMode cLocalMode; // r29+0x3C
    }
}


// Range: 0x559360 -> 0x55941C
void checkExistFile(class clsPfMemoryCard * this /* r16 */, char * opc8FileNameI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559360 -> 0x55941C
        class clsLocalMode cLocalMode; // r29+0x2C
    }
}


// Range: 0x559420 -> 0x559474
signed int endchkGetFileListDir(class clsPfMemoryCard * this /* r2 */, signed int s32Result /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559420 -> 0x559474
        signed int s32Rtn; // r2
    }
}


// Range: 0x559480 -> 0x559550
void getFileListDir(class clsPfMemoryCard * this /* r16 */, char * opc8DirNameI /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559480 -> 0x559550
    }
}


// Range: 0x559550 -> 0x55959C
signed int endchkDeleteDir(signed int s32Result /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559550 -> 0x55959C
        signed int s32Rtn; // r2
    }
}


// Range: 0x5595A0 -> 0x559614
void deleteDir(class clsPfMemoryCard * this /* r16 */, char * opc8DirNameI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5595A0 -> 0x559614
    }
}


// Range: 0x559620 -> 0x559698
void changeDir(class clsPfMemoryCard * this /* r16 */, char * opc8DirNameI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559620 -> 0x559698
    }
}


// Range: 0x5596A0 -> 0x5596EC
signed int endchkCreateDir(signed int s32Result /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5596A0 -> 0x5596EC
        signed int s32Rtn; // r2
    }
}


// Range: 0x5596F0 -> 0x559764
void createDir(class clsPfMemoryCard * this /* r16 */, char * opc8DirNameI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5596F0 -> 0x559764
    }
}


// Range: 0x559770 -> 0x5597EC
void getCurrentDir(class clsPfMemoryCard * this /* r16 */, char * pc8DirNameO /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559770 -> 0x5597EC
    }
}


// Range: 0x5597F0 -> 0x559A28
signed int checkFileExist(class clsPfMemoryCard * this /* r21 */, class stcIconData * posIcon /* r29+0xBC */, class stcFileData * posFileData /* r2 */, signed int s32FileNum /* r29+0xB8 */, signed int * ps32Cluster /* r20 */, signed int * ps32CreateFileNum /* r29+0xB4 */, unsigned char * pbIconReWrite /* r29+0xB0 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x5597F0 -> 0x559A28
        signed int s32i; // r22
        signed int s32j; // r19
        signed int s32FileCnt; // r23
        unsigned int u32Size; // r2
        class stcFileData * posFile; // r18
        class sceMcTblGetDir * psTbl; // r17
        unsigned char bBreakFlg; // r30
        unsigned char bIconReWrite; // r29+0xA0
    }
}


// Range: 0x559A30 -> 0x559CC0
unsigned char endchkCheckFreeArea(class clsPfMemoryCard * this /* r16 */, signed int s32Result /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559A30 -> 0x559CC0
        class clsLocalMode cLocalMode; // r29+0x4C
        char ac8FName[24]; // r29+0x20
        signed int s32ClusterNum; // r29+0x48
        signed int s32CreateFileNum; // r29+0x44
        signed int s32Rtn; // r2
    }
}


// Range: 0x559CC0 -> 0x559D80
void checkFreeArea(class clsPfMemoryCard * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559CC0 -> 0x559D80
        class clsLocalMode cLocalMode; // r29+0x2C
    }
}


// Range: 0x559D80 -> 0x559DF0
void formatMemoryCard(class clsPfMemoryCard * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559D80 -> 0x559DF0
    }
}


// Range: 0x559DF0 -> 0x559E18
void checkFormatMemoryCard(class clsPfMemoryCard * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559DF0 -> 0x559E18
    }
}


// Range: 0x559E20 -> 0x559EA4
void checkExistMemoryCard(class clsPfMemoryCard * this /* r16 */, signed int s32SlotNoI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559E20 -> 0x559EA4
    }
}


// Range: 0x559EB0 -> 0x55A0B4
unsigned int calcNeedArea(unsigned int u32FileNum /* r2 */, class stcFileData * posFileData /* r2 */, class stcIconData * posIconData /* r2 */, unsigned char bNewDirectory /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x559EB0 -> 0x55A0B4
        unsigned int u32Cluster; // r9
        unsigned int u32i; // r4
        unsigned int u32i; // r6
    }
}


// Range: 0x55A0C0 -> 0x55A144
enum enmMcState endchkMcInfo(class clsPfMemoryCard * this /* r2 */, signed int s32Result /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x55A0C0 -> 0x55A144
    }
}


// Range: 0x55A150 -> 0x55A188
unsigned char isChange(class clsPfMemoryCard * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x55A150 -> 0x55A188
    }
}


// Range: 0x55A190 -> 0x55A20C
unsigned char getStatus(class clsPfMemoryCard * this /* r17 */, signed int & rs32ResultO /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x55A190 -> 0x55A20C
    }
}


// Range: 0x55A210 -> 0x55A5C4
void chkEndAsync(class clsPfMemoryCard * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x55A210 -> 0x55A5C4
        signed int s32Cmd; // r29+0x3C
        signed int s32Result; // r29+0x38
        signed int s32Rtn; // r29+0x34
        unsigned char bEnd; // r16
    }
}


// Range: 0x55A5D0 -> 0x55A634
void setFileData(class clsPfMemoryCard * this /* r17 */, class stcFileData * posFileData /* r2 */, unsigned char u8FileNum /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x55A5D0 -> 0x55A634
    }
}


// Range: 0x55A640 -> 0x55A6FC
void * __dt(class clsPfMemoryCard * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x55A640 -> 0x55A6FC
    }
}


// Range: 0x55A700 -> 0x55A828
void * __ct(class clsPfMemoryCard * this /* r16 */, unsigned int u32UserNumI /* r2 */, unsigned int u32FileNumI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x55A700 -> 0x55A828
    }
}


// Range: 0x55A890 -> 0x55A89C
void setIconDir(class clsPfMemoryCard * this /* r2 */, char * opc8Dir /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x55A890 -> 0x55A89C
    }
}


// Range: 0x55A8A0 -> 0x55A8EC
void setIconDataSize(class clsPfMemoryCard * this /* r16 */, enum enmIconData enIconDataNo /* r2 */, unsigned int u32Size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x55A8A0 -> 0x55A8EC
    }
}


// Range: 0x55A8F0 -> 0x55A8F8
void @40@__dt__15clsPfMemoryCardFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x55A8F0 -> 0x55A8F8
    }
}


