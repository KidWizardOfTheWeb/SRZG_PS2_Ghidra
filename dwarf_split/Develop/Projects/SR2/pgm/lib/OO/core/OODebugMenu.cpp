/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\core\OODebugMenu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class clsOOSubMenu tcOOSubMenu; // size: 0x8, address: 0x703B70
static class clsOOMainMenu tcOOMainMenu; // size: 0x14, address: 0x703B90
unsigned short tu16Cnt; // size: 0x2, address: 0x703BA8
unsigned int tou32DetailDrawOffX; // size: 0x4, address: 0x6634F8
class clsPfPeripheral * m_tpcSingleton; // size: 0x4, address: 0x7039C0
class clsPfDraw2d * m_tpcSingleton; // size: 0x4, address: 0x6E6990
class clsPfSystem * m_tpcSingleton; // size: 0x4, address: 0x6E69B8
class clsPfMainHeap * m_tpcSingleton; // size: 0x4, address: 0x6D20D0
class clsPfTimer * m_tpcSingleton; // size: 0x4, address: 0x6E69A8
signed int oNullFunc(signed int, signed int, signed int, signed int); // size: 0x0, address: 0x0
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
class clsOOTimer {
    // total size: 0x2C
public:
    signed int m_s32CpuMicroSec; // offset 0x4, size 0x4
    signed int m_s32GpuMicroSec; // offset 0x8, size 0x4
    signed int m_s32BeginCpuTick; // offset 0xC, size 0x4
    signed int m_s32EndCpuDiffTick; // offset 0x10, size 0x4
    signed int m_s32BeginGpuTick; // offset 0x14, size 0x4
    signed int m_s32EndGpuDiffTick; // offset 0x18, size 0x4
    unsigned int m_u32CpuAverage; // offset 0x1C, size 0x4
    unsigned int m_u32GpuAverage; // offset 0x20, size 0x4
    unsigned int m_u32AverageCnt; // offset 0x24, size 0x4
    unsigned int m_u32AverageClearFrame; // offset 0x28, size 0x4
};
class clsOOMainMenu {
    // total size: 0x14
public:
    char * m_opc8Name; // offset 0x0, size 0x4
    signed char m_s8SubMenuNum; // offset 0x4, size 0x1
    class vector m_cSubMenu; // offset 0x8, size 0xC
};
class clsSingleton {
    // total size: 0x4
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
class clsOODebugMenu {
    // total size: 0x38
public:
    signed char m_s8DrawDefX; // offset 0x0, size 0x1
    signed char m_s8DrawDefY; // offset 0x1, size 0x1
    unsigned int m_u32ChangeTrig; // offset 0x4, size 0x4
    unsigned int m_u32ChangeBeta; // offset 0x8, size 0x4
    unsigned int m_u32ChangeOneTimeTrig; // offset 0xC, size 0x4
    unsigned int m_u32SpeedUpBeta; // offset 0x10, size 0x4
    signed char m_s8SystemMenuNo; // offset 0x14, size 0x1
    unsigned char m_bDisableExecDetail; // offset 0x15, size 0x1
    signed char m_s8SystemMenuMoveX; // offset 0x16, size 0x1
    signed char m_s8MainMenuMoveX; // offset 0x17, size 0x1
    signed char m_s8SubMenuMoveX; // offset 0x18, size 0x1
    signed char m_s8DetailMoveX; // offset 0x19, size 0x1
    signed char m_s8DetailMoveY; // offset 0x1A, size 0x1
    class vector m_cMainMenu; // offset 0x1C, size 0xC
    class __wrap_iterator m_iUrawaza; // offset 0x28, size 0x4
    enum enmDraw m_eDraw; // offset 0x2C, size 0x4
    unsigned char m_bUrawaza; // offset 0x30, size 0x1
    signed char m_s8MainMenuCursorNo; // offset 0x31, size 0x1
    signed char m_s8SubMenuCursorNo; // offset 0x32, size 0x1
    signed char m_s8DetailCursorNo; // offset 0x33, size 0x1
    signed char m_s8DetailNum; // offset 0x34, size 0x1
    signed char m_s8MainMenuNum; // offset 0x35, size 0x1
};
class vector : private __vector_imp {
    // total size: 0xC
};
class vector : private __vector_imp {
    // total size: 0xC
};
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class clsPfTimer : public clsSingleton, public clsOOTimer {
    // total size: 0x30
};
class clsSingleton {
    // total size: 0x4
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class clsOOSubMenu * data_; // offset 0x8, size 0x4
};
class clsPfDraw2d : public clsSingleton, public clsOODraw2d {
    // total size: 0x10
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class clsOOMainMenu * data_; // offset 0x8, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class clsPfSystem : public clsSingleton, public clsOOSystem {
    // total size: 0x84
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class stcViewRect {
    // total size: 0x18
public:
    float f32wd; // offset 0x0, size 0x4
    float f32hw; // offset 0x4, size 0x4
    float f32OffsetX; // offset 0x8, size 0x4
    float f32OffsetY; // offset 0xC, size 0x4
    float f32Width; // offset 0x10, size 0x4
    float f32Height; // offset 0x14, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class clsOOSystem {
    // total size: 0x80
public:
    enum enmSoundMode m_eSoundMode; // offset 0x4, size 0x4
    enum enmLanguage m_eMessageLanguage; // offset 0x8, size 0x4
    enum enmLanguage m_eVoiceLanguage; // offset 0xC, size 0x4
    float m_f32FrameRate; // offset 0x10, size 0x4
    float m_f32FrameRateAdd; // offset 0x14, size 0x4
    float m_f32FrameRateAdd2; // offset 0x18, size 0x4
    float m_f32FrameRateAddCount; // offset 0x1C, size 0x4
    float m_f32FrameRateAddCount2; // offset 0x20, size 0x4
    signed int m_s32FrameRateMaxMicroSec; // offset 0x24, size 0x4
    unsigned int m_u32VblankCnt; // offset 0x28, size 0x4
    unsigned int m_u32VblankCntOld; // offset 0x2C, size 0x4
    unsigned int m_u32GameCnt; // offset 0x30, size 0x4
    unsigned int m_eState; // offset 0x34, size 0x4
    class stcViewRect * m_apsViewRect[5]; // offset 0x38, size 0x14
    class stcScissorRect * m_apsScissorRect[5]; // offset 0x4C, size 0x14
    class stcScissorRect * m_apsScissorRect_NTSC[5]; // offset 0x60, size 0x14
    unsigned char m_u8FrameRateDef; // offset 0x74, size 0x1
    unsigned char m_u8VblankNum; // offset 0x75, size 0x1
    signed char m_s8ViewportNum; // offset 0x76, size 0x1
    signed char m_s8BackUpViewportNum; // offset 0x77, size 0x1
    signed char m_s8MaxViewportNum; // offset 0x78, size 0x1
    unsigned char m_bPause; // offset 0x79, size 0x1
    unsigned char m_bUnPause; // offset 0x7A, size 0x1
    unsigned char m_bEnablePauseWorks; // offset 0x7B, size 0x1
    unsigned char m_bDisablePauseCancel; // offset 0x7C, size 0x1
    unsigned char m_bDisablePauseDraw; // offset 0x7D, size 0x1
    unsigned char m_bNextPause; // offset 0x7E, size 0x1
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class clsPfPeripheral : public clsSingleton, public clsOOPeripheral {
    // total size: 0x24
public:
    unsigned int m_u32MultiTapStatus; // offset 0x20, size 0x4
};
enum enmSoundMode {
    SOUND_MODE___MONAURAL = 0,
    SOUND_MODE___STEREO = 1,
    SOUND_MODE___DOLBY_PROLOGIC2 = 2,
    SOUND_MODE___DOLBY_DIGITAL = 3,
    SOUND___MAX = 4,
};
class allocator {
    // total size: 0x1
};
enum enmLanguage {
    LANGUAGE___JAPANESE = 0,
    LANGUAGE___ENGLISH = 1,
    LANGUAGE___GERMAN = 2,
    LANGUAGE___FRENCH = 3,
    LANGUAGE___SPANISH = 4,
    LANGUAGE___ITALIAN = 5,
    LANGUAGE___DUTCH = 6,
    LANGUAGE___PORTUGUESE = 7,
    LANGUAGE___SIMP_CHINESE = 8,
    LANGUAGE___TRAD_CHINESE = 9,
    LANGUAGE___KOREAN = 10,
    LANGUAGE___MAX = 11,
};
class clsOOSubMenu {
    // total size: 0x8
public:
    char * m_opc8Name; // offset 0x0, size 0x4
    signed int (* m_oFunc)(signed int, signed int, signed int, signed int); // offset 0x4, size 0x4
};
class clsOOMainHeap : public clsOOHeapFragment {
    // total size: 0x34
};
class clsOODraw2d {
    // total size: 0xC
public:
    unsigned char m_bWide2dConv; // offset 0x0, size 0x1
    unsigned int m_eTexFlag; // offset 0x8, size 0x4
};
class allocator {
    // total size: 0x1
};
class stcScissorRect {
    // total size: 0x10
public:
    unsigned int u32OffsetX; // offset 0x0, size 0x4
    unsigned int u32OffsetY; // offset 0x4, size 0x4
    unsigned int u32Right; // offset 0x8, size 0x4
    unsigned int u32Bottom; // offset 0xC, size 0x4
};
class __wrap_iterator {
    // total size: 0x4
public:
    class clsOOMainMenu * it_; // offset 0x0, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class clsPfMainHeap : public clsSingleton, public clsOOMainHeap {
    // total size: 0x38
};
class __wrap_iterator {
    // total size: 0x4
public:
    class clsOOSubMenu * it_; // offset 0x0, size 0x4
};
class clsOOPeripheral {
    // total size: 0x1C
public:
    class stcActivePeripheral m_sActivePeripheral; // offset 0x4, size 0x10
    unsigned int m_u32ConnectNum; // offset 0x14, size 0x4
    unsigned int m_u32BasePadCnt; // offset 0x18, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class stcActivePeripheral {
    // total size: 0x10
public:
    unsigned int m_u32Beta; // offset 0x0, size 0x4
    unsigned int m_u32Trig; // offset 0x4, size 0x4
    unsigned int m_u32Rel; // offset 0x8, size 0x4
    unsigned int m_u32Rep; // offset 0xC, size 0x4
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
class clsSingleton {
    // total size: 0x4
};
enum enmDraw {
    DRAW___NON = 0,
    DRAW___ING = 1,
    DRAW___ONE_TIME_CHANGE = 2,
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

// Range: 0x1D35F0 -> 0x1D4348
void exec(class clsOODebugMenu * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D35F0 -> 0x1D4348
    }
}


// Range: 0x1D4570 -> 0x1D4630
signed int execUrawaza(class clsOODebugMenu * this /* r19 */, class __wrap_iterator iSubI /* r29+0x6C */, signed int s32xI /* r18 */, signed int s32yI /* r17 */, signed int s32CursorI /* r2 */, signed int s32SpeedI /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D4570 -> 0x1D4630
        class __wrap_iterator iSubI'53; // r20
        signed int s32Cursor; // r2
    }
}


// Range: 0x1D47C0 -> 0x1D4828
unsigned char isDrawSubMenuName(class clsOODebugMenu * this /* r2 */, char * opc8NameI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D47C0 -> 0x1D4828
        class __wrap_iterator iMain; // r29+0x1C
        class __wrap_iterator iSub; // r29+0x18
    }
}


// Range: 0x1D4830 -> 0x1D4C60
void drawSystemMenu(class clsOODebugMenu * this /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D4830 -> 0x1D4C60
        signed int s32x; // r20
        signed int s32y; // r19
        unsigned int u32Cpu; // r18
        unsigned int u32Gpu; // r17
        float f32FrameMSec; // r20
        unsigned int u32BgCol; // r22
        unsigned int u32CpuPer; // r16
        unsigned int u32GpuPer; // r16
    }
}


// Range: 0x1D4C60 -> 0x1D4CCC
void * __ct(class clsOODebugMenu * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D4C60 -> 0x1D4CCC
    }
}


// Range: 0x1D4CD0 -> 0x1D4DFC
void addSubMenu(class clsOODebugMenu * this /* r19 */, char * opc8MainMenuNameI /* r2 */, char * opc8SubMenuNameI /* r18 */, signed int (* oFuncI)(signed int, signed int, signed int, signed int) /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D4CD0 -> 0x1D4DFC
        class __wrap_iterator iMain; // r29+0x6C
    }
}


// Range: 0x1D4E00 -> 0x1D4EC8
void removeAll(class clsOODebugMenu * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D4E00 -> 0x1D4EC8
        class __wrap_iterator iMain'63; // r2
        class __wrap_iterator iMain; // r29+0x3C
    }
}


// Range: 0x1D4ED0 -> 0x1D4F30
void addMainMenu(class clsOODebugMenu * this /* r16 */, char * opc8NameI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D4ED0 -> 0x1D4F30
    }
}


