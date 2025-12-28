/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\SaveLoad\SaveData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned short au16DemoName[11]; // size: 0x16, address: 0x0
static unsigned int au32TimeAtkDefTime[16][2]; // size: 0x80, address: 0x68A7F0
signed int tas32CrcTbl[256]; // size: 0x400, address: 0xB176C0
class clsPfSystem * m_tpcSingleton; // size: 0x4, address: 0x6E69B8
class clsPfPeripheral * m_tpcSingleton; // size: 0x4, address: 0x7039C0
class clsOOMainHeap * t_cInstance; // size: 0x4, address: 0xB17268
struct /* @anon0 */ {
    // total size: 0xC
} __vt__13clsBitset<Uc>; // size: 0xC, address: 0x6C8348
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
class clsSaveDataCtrl {
    // total size: 0x6C
public:
    class stcSaveGameData * m_psSaveData; // offset 0x0, size 0x4
    class stcGameData * m_psGameData; // offset 0x4, size 0x4
    signed int m_s32PlayTimeCnt; // offset 0x8, size 0x4
    class clsBitset m_sCharaUnlockCtrl; // offset 0xC, size 0xC
    class clsBitset m_sGearUnlockCtrl; // offset 0x18, size 0xC
    class clsBitset m_sStageUnlockCtrl; // offset 0x24, size 0xC
    class clsBitset m_sStoryUnlockCtrl; // offset 0x30, size 0xC
    class clsBitset m_sMissinClrFlagCtrl; // offset 0x3C, size 0xC
    class clsBitset m_sMissinSelFlagCtrl; // offset 0x48, size 0xC
    class clsBitset m_sTutorialSelFlagCtrl; // offset 0x54, size 0xC
    class clsBitset m_sGameFlagCtrl; // offset 0x60, size 0xC
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class stcOptionData {
    // total size: 0x8
public:
    unsigned char u8AudioMode; // offset 0x0, size 0x1
    unsigned char u8MessageMode; // offset 0x1, size 0x1
    unsigned char u8VoiceMode; // offset 0x2, size 0x1
    unsigned char u8VibMode; // offset 0x3, size 0x1
    unsigned char u8PadType; // offset 0x4, size 0x1
    unsigned char u8Padding[3]; // offset 0x5, size 0x3
};
class clsSingleton {
    // total size: 0x4
};
class stcDateTime {
    // total size: 0x8
public:
    unsigned short u16Year; // offset 0x0, size 0x2
    unsigned char u8Month; // offset 0x2, size 0x1
    unsigned char u8Day; // offset 0x3, size 0x1
    unsigned char u8Hour; // offset 0x4, size 0x1
    unsigned char u8Min; // offset 0x5, size 0x1
    unsigned char u8Sec; // offset 0x6, size 0x1
};
class clsOOSemaphore {
    // total size: 0x4
};
class clsBitset {
    // total size: 0xC
public:
    unsigned char * m_pBuffer; // offset 0x0, size 0x4
    unsigned int m_BufferSize; // offset 0x4, size 0x4
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
class clsPfSystem : public clsSingleton, public clsOOSystem {
    // total size: 0x84
};
class stcSaveDataHeader {
    // total size: 0x8
public:
    unsigned char u8Version; // offset 0x0, size 0x1
    unsigned char u8Padding[3]; // offset 0x1, size 0x3
    unsigned int u32Size; // offset 0x4, size 0x4
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
enum enmMissionClrRank {
    RANK_NON = 0,
    RANK_B = 1,
    RANK_A = 2,
    RANK_S = 3,
};
class clsSaveDataMgr : public clsSingleton {
    // total size: 0x30
public:
    enum enmSaveDataNo m_enCurrentNo; // offset 0x4, size 0x4
    class clsSaveDataCtrl * m_pcSaveDataCtrl; // offset 0x8, size 0x4
    class clsSaveDataCtrl * m_apcSaveDataCtrlTemp[4]; // offset 0xC, size 0x10
    enum enmTempState m_aenTempState[4]; // offset 0x1C, size 0x10
    unsigned char m_bPlayTimeCntFlag; // offset 0x2C, size 0x1
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
class stcSaveGameData {
    // total size: 0x4000
public:
    unsigned int u32CrcData; // offset 0x0, size 0x4
    class stcSaveDataHeader sHeader; // offset 0x4, size 0x8
    class stcGameData sGameData; // offset 0xC, size 0x51C
    unsigned char au8Reserve[15064]; // offset 0x528, size 0x3AD8
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
class clsOOMainHeap : public clsOOHeapFragment {
    // total size: 0x34
};
class stcGameData {
    // total size: 0x51C
public:
    unsigned int u32PlayTime; // offset 0x0, size 0x4
    unsigned int u32RingCount; // offset 0x4, size 0x4
    unsigned int au32NormalRaceBestTime[16]; // offset 0x8, size 0x40
    unsigned int au32FreeRaceBestTime[16]; // offset 0x48, size 0x40
    unsigned int au32TimeAttackBestTime[16]; // offset 0x88, size 0x40
    unsigned int au32StoryBestTime[16]; // offset 0xC8, size 0x40
    unsigned int au32NormalRaceBestLap[16]; // offset 0x108, size 0x40
    unsigned int au32FreeRaceBestLap[16]; // offset 0x148, size 0x40
    unsigned int au32TimeAttackBestLap[16]; // offset 0x188, size 0x40
    unsigned int au32StoryBestLap[16]; // offset 0x1C8, size 0x40
    unsigned int au32MissionBestData[128]; // offset 0x208, size 0x200
    unsigned int au32WorldGPTime[2]; // offset 0x408, size 0x8
    unsigned short au16UserName[11]; // offset 0x410, size 0x16
    unsigned short au16Padding[1]; // offset 0x426, size 0x2
    class stcOptionData sOption; // offset 0x428, size 0x8
    class stcRaceOption sRaceOption; // offset 0x430, size 0x10
    class stcDateTime sUpdateTime; // offset 0x440, size 0x8
    unsigned char au8MissionClrRank[128]; // offset 0x448, size 0x80
    unsigned char au8CharaUnlock[1]; // offset 0x4C8, size 0x1
    unsigned char au8GearUnlock[8]; // offset 0x4C9, size 0x8
    unsigned char au8StageUnlock[2]; // offset 0x4D1, size 0x2
    unsigned char au8StoryUnlock[2]; // offset 0x4D3, size 0x2
    unsigned char au8MissionClear[16]; // offset 0x4D5, size 0x10
    unsigned char au8MissionSelect[16]; // offset 0x4E5, size 0x10
    unsigned char au8TutorialSelect[2]; // offset 0x4F5, size 0x2
    unsigned char au8GameFlag[32]; // offset 0x4F7, size 0x20
    unsigned char au8WorldGPPoint[2]; // offset 0x517, size 0x2
};
enum enmTempState {
    TEMP_DATA_NO_DATA = 0,
    TEMP_DATA_BREAK = 1,
    TEMP_DATA_OK = 2,
};
class stcScissorRect {
    // total size: 0x10
public:
    unsigned int u32OffsetX; // offset 0x0, size 0x4
    unsigned int u32OffsetY; // offset 0x4, size 0x4
    unsigned int u32Right; // offset 0x8, size 0x4
    unsigned int u32Bottom; // offset 0xC, size 0x4
};
enum enmSaveDataNo {
    SAVEDATA_NO_01 = 0,
    SAVEDATA_NO_02 = 1,
    SAVEDATA_NO_03 = 2,
    SAVEDATA_MAX_NUM = 3,
    SAVEDATA_NO_NODATA = -1,
};
class stcRaceOption {
    // total size: 0x10
public:
    signed char m_s8Story_Hint; // offset 0x0, size 0x1
    signed char m_s8Free_Lap; // offset 0x1, size 0x1
    signed char m_s8Free_Gp; // offset 0x2, size 0x1
    signed char m_s8Free_Hint; // offset 0x3, size 0x1
    signed char m_s8TimeAttack_Ghost; // offset 0x4, size 0x1
    signed char m_s8WorldGP_Hint; // offset 0x5, size 0x1
    signed char m_s8Relay_Lap; // offset 0x6, size 0x1
    signed char m_s8Relay_Gp; // offset 0x7, size 0x1
    signed char m_s8Ball_Time; // offset 0x8, size 0x1
    signed char m_s8Ball_Point; // offset 0x9, size 0x1
    signed char m_s8Battle_Mode; // offset 0xA, size 0x1
    signed char m_s8Battle_Hp; // offset 0xB, size 0x1
    signed char m_s8Battle_Time; // offset 0xC, size 0x1
    signed char m_s8Padding[3]; // offset 0xD, size 0x3
};
class clsOOPeripheral {
    // total size: 0x1C
public:
    class stcActivePeripheral m_sActivePeripheral; // offset 0x4, size 0x10
    unsigned int m_u32ConnectNum; // offset 0x14, size 0x4
    unsigned int m_u32BasePadCnt; // offset 0x18, size 0x4
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

// Range: 0x4A2A40 -> 0x4A2B6C
void DeleteSaveDataTemp(class clsSaveDataMgr * this /* r16 */, unsigned char bSetMainData /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A2A40 -> 0x4A2B6C
        unsigned int u32i; // r19
    }
}


// Range: 0x4A2BC0 -> 0x4A2C0C
void SetAllGameFlag(class clsSaveDataCtrl * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A2BC0 -> 0x4A2C0C
        unsigned int u32i; // r16
    }
}


// Range: 0x4A2C10 -> 0x4A2C90
void SetAllTutorialSelFlag(class clsSaveDataCtrl * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A2C10 -> 0x4A2C90
        unsigned int u32i; // r16
        unsigned int u32j; // r20
    }
}


// Range: 0x4A2C90 -> 0x4A2D10
void SetAllMissinSelFlag(class clsSaveDataCtrl * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A2C90 -> 0x4A2D10
        unsigned int u32i; // r16
        unsigned int u32j; // r20
    }
}


// Range: 0x4A2D10 -> 0x4A2D88
void SetAllMissinClrFlag(class clsSaveDataCtrl * this /* r19 */, enum enmMissionClrRank enRank /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A2D10 -> 0x4A2D88
        unsigned int u32i; // r17
        unsigned int u32j; // r16
    }
}


// Range: 0x4A2D90 -> 0x4A2DDC
void SetAllStoryUnlockFlag(class clsSaveDataCtrl * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A2D90 -> 0x4A2DDC
        unsigned int u32i; // r16
    }
}


// Range: 0x4A2DE0 -> 0x4A2E2C
void SetAllStageUnlockFlag(class clsSaveDataCtrl * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A2DE0 -> 0x4A2E2C
        unsigned int u32i; // r16
    }
}


// Range: 0x4A2E30 -> 0x4A2E7C
void SetAllGearUnlockFlag(class clsSaveDataCtrl * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A2E30 -> 0x4A2E7C
        unsigned int u32i; // r16
    }
}


// Range: 0x4A2E80 -> 0x4A2ECC
void SetAllCharaUnlockFlag(class clsSaveDataCtrl * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A2E80 -> 0x4A2ECC
        unsigned int u32i; // r16
    }
}


// Range: 0x4A2ED0 -> 0x4A2EE4
unsigned char IsTutorialSel(class clsSaveDataCtrl * this /* r2 */, unsigned int u32CourseNo /* r2 */, unsigned int u32TutorialNo /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A2ED0 -> 0x4A2EE4
    }
}


// Range: 0x4A2EF0 -> 0x4A2F08
void SetTutorialSelFlag(class clsSaveDataCtrl * this /* r2 */, unsigned int u32CourseNo /* r2 */, unsigned int u32TutorialNo /* r2 */, unsigned char bSelect /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A2EF0 -> 0x4A2F08
    }
}


// Range: 0x4A2F10 -> 0x4A2F48
void AddPlayTime(class clsSaveDataCtrl * this /* r2 */, signed int s32Msec /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A2F10 -> 0x4A2F48
    }
}


// Range: 0x4A2F50 -> 0x4A303C
void SetMissinClrRank(class clsSaveDataCtrl * this /* r16 */, unsigned int u32StageNo /* r2 */, unsigned int u32MissionNo /* r2 */, enum enmMissionClrRank enClrRank /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A2F50 -> 0x4A303C
        unsigned char * pu8Rank; // r2
        unsigned int u32Cnt; // r9
        unsigned int u32i; // r8
        unsigned int u32j; // r7
    }
}


// Range: 0x4A3040 -> 0x4A3060
unsigned char SetMissionBestData(class clsSaveDataCtrl * this /* r2 */, unsigned int u32StageNo /* r2 */, unsigned int u32MissionNo /* r2 */, unsigned int u32Time /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A3040 -> 0x4A3060
    }
}


// Range: 0x4A3060 -> 0x4A3094
unsigned char SetWorldGPBestPoint(class clsSaveDataCtrl * this /* r2 */, unsigned char u8WorldGPType /* r2 */, unsigned char u8Point /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A3060 -> 0x4A3094
        unsigned char bRtn; // r2
    }
}


// Range: 0x4A30A0 -> 0x4A30DC
unsigned char SetWorldGPBestTime(class clsSaveDataCtrl * this /* r2 */, unsigned char u8WorldGPType /* r2 */, unsigned int u32Time /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A30A0 -> 0x4A30DC
        unsigned char bRtn; // r2
    }
}


// Range: 0x4A30E0 -> 0x4A3118
unsigned char SetStoryBestLap(class clsSaveDataCtrl * this /* r2 */, unsigned int u32StageNo /* r2 */, unsigned int u32Time /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A30E0 -> 0x4A3118
        unsigned char bRtn; // r2
    }
}


// Range: 0x4A3120 -> 0x4A3158
unsigned char SetTimeAttackBestLap(class clsSaveDataCtrl * this /* r2 */, unsigned int u32StageNo /* r2 */, unsigned int u32Time /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A3120 -> 0x4A3158
        unsigned char bRtn; // r2
    }
}


// Range: 0x4A3160 -> 0x4A3198
unsigned char SetFreeRaceBestLap(class clsSaveDataCtrl * this /* r2 */, unsigned int u32StageNo /* r2 */, unsigned int u32Time /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A3160 -> 0x4A3198
        unsigned char bRtn; // r2
    }
}


// Range: 0x4A31A0 -> 0x4A31D8
unsigned char SetNormalRaceBestLap(class clsSaveDataCtrl * this /* r2 */, unsigned int u32StageNo /* r2 */, unsigned int u32Time /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A31A0 -> 0x4A31D8
        unsigned char bRtn; // r2
    }
}


// Range: 0x4A31E0 -> 0x4A3218
unsigned char SetStoryBestTime(class clsSaveDataCtrl * this /* r2 */, unsigned int u32StageNo /* r2 */, unsigned int u32Time /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A31E0 -> 0x4A3218
        unsigned char bRtn; // r2
    }
}


// Range: 0x4A3220 -> 0x4A3258
unsigned char SetTimeAttackBestTime(class clsSaveDataCtrl * this /* r2 */, unsigned int u32StageNo /* r2 */, unsigned int u32Time /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A3220 -> 0x4A3258
        unsigned char bRtn; // r2
    }
}


// Range: 0x4A3260 -> 0x4A3298
unsigned char SetFreeRaceBestTime(class clsSaveDataCtrl * this /* r2 */, unsigned int u32StageNo /* r2 */, unsigned int u32Time /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A3260 -> 0x4A3298
        unsigned char bRtn; // r2
    }
}


// Range: 0x4A32A0 -> 0x4A32D8
unsigned char SetNormalRaceBestTime(class clsSaveDataCtrl * this /* r2 */, unsigned int u32StageNo /* r2 */, unsigned int u32Time /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A32A0 -> 0x4A32D8
        unsigned char bRtn; // r2
    }
}


// Range: 0x4A32E0 -> 0x4A3310
void SetRingCnt(class clsSaveDataCtrl * this /* r2 */, unsigned int u32RingCnt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A32E0 -> 0x4A3310
    }
}


// Range: 0x4A3310 -> 0x4A33FC
void InitBestTime(class clsSaveDataCtrl * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A3310 -> 0x4A33FC
        unsigned int u32i; // r9
        unsigned int u32j; // r8
    }
}


// Range: 0x4A3400 -> 0x4A345C
unsigned char CheckSaveDataCrc(void * pvSaveData /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A3400 -> 0x4A345C
        class stcSaveGameData * psSaveData; // r2
        unsigned int u32CrcData; // r29+0x2C
    }
}


// Range: 0x4A3460 -> 0x4A3508
void * GetSaveDataBuff_Crc(class clsSaveDataCtrl * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A3460 -> 0x4A3508
    }
}


// Range: 0x4A3510 -> 0x4A3570
void LoadAllOptionData(class clsSaveDataCtrl * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A3510 -> 0x4A3570
        class stcOptionData * psOption; // r2
    }
}


// Range: 0x4A3570 -> 0x4A35D4
void SaveAllOptionData(class clsSaveDataCtrl * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A3570 -> 0x4A35D4
        class stcOptionData * psOption; // r2
    }
}


// Range: 0x4A35E0 -> 0x4A37AC
void InitSaveData(class clsSaveDataCtrl * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A35E0 -> 0x4A37AC
    }
}


// Range: 0x4A37B0 -> 0x4A3938
void * __ct(class clsSaveDataCtrl * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A37B0 -> 0x4A3938
    }
}


// Range: 0x4A3940 -> 0x4A3964
void * __ct(class clsBitset * this /* r2 */, unsigned char * pBuffer /* r2 */, unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A3940 -> 0x4A3964
    }
}


// Range: 0x4A3970 -> 0x4A3A00
unsigned int getOnBitCnt(class clsBitset * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x4A3970 -> 0x4A3A00
        unsigned int u32i; // r6
        unsigned int u32Cnt; // r2
    }
}


