/*
    Compile unit: C:\Develop\Projects\SR2\pgm\lib\OO\PS2\PS2Peripheral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class stcPeripheral m_asPeripheral[4]; // size: 0xC0, address: 0x702FE0
float MAX_PAD_ANALOG; // size: 0x4, address: 0x0
static signed char toas8MultiPadConnectTbl[4][8]; // size: 0x20, address: 0x663160
static unsigned char toau8RumblePattern[2][2]; // size: 0x4, address: 0x663180
static unsigned char tau8ScePadBuf[2][4][32]; // size: 0x100, address: 0x7030A0
static unsigned char (* tpu8ScePadBuf)[32]; // size: 0x4, address: 0x7031A0
static unsigned char (* tpu8ScePadBufLast)[32]; // size: 0x4, address: 0x7031A8
static __int128 tau128ScePadDmaBuf[8][16]; // size: 0x800, address: 0x7031C0
struct /* @anon1 */ {
    // total size: 0x28
} __vt__15clsPfPeripheral; // size: 0x28, address: 0x6B5920
class clsPfPeripheral * m_tpcSingleton; // size: 0x4, address: 0x7039C0
struct /* @anon0 */ {
    // total size: 0xC
} __vt__31clsSingleton<15clsPfPeripheral>; // size: 0xC, address: 0x6B5948
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
class stcPeripheral {
    // total size: 0x30
public:
    class stcPeripheral sOO; // offset 0x0, size 0x20
    signed char m_s8X1; // offset 0x20, size 0x1
    signed char m_s8Y1; // offset 0x21, size 0x1
    signed char m_s8X2; // offset 0x22, size 0x1
    signed char m_s8Y2; // offset 0x23, size 0x1
    unsigned short m_u16RumbleFrame; // offset 0x24, size 0x2
    unsigned short m_u16RumbleFrameOld; // offset 0x26, size 0x2
    unsigned char m_u8L1; // offset 0x28, size 0x1
    unsigned char m_u8R1; // offset 0x29, size 0x1
    unsigned char m_u8L2; // offset 0x2A, size 0x1
    unsigned char m_u8R2; // offset 0x2B, size 0x1
    unsigned char m_su8PadInitFlag; // offset 0x2C, size 0x1
    unsigned char m_u8RetryCnt; // offset 0x2D, size 0x1
    unsigned char m_bDisableRumble; // offset 0x2E, size 0x1
    unsigned char m_bConfigueDisableRumble; // offset 0x2F, size 0x1
};
class clsPfPeripheral : public clsSingleton, public clsOOPeripheral {
    // total size: 0x24
public:
    unsigned int m_u32MultiTapStatus; // offset 0x20, size 0x4
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
struct /* @anon1 */ {
    // total size: 0x28
};
class stcPeripheral {
    // total size: 0x20
public:
    unsigned int m_u32Beta; // offset 0x0, size 0x4
    unsigned int m_u32Trig; // offset 0x4, size 0x4
    unsigned int m_u32Rel; // offset 0x8, size 0x4
    unsigned int m_u32Rep; // offset 0xC, size 0x4
    unsigned int m_u32RepCnt; // offset 0x10, size 0x4
    unsigned int m_u32LoopRepCnt; // offset 0x14, size 0x4
    unsigned int m_u32UnInputFrame; // offset 0x18, size 0x4
    unsigned char m_u8PeripheralNo; // offset 0x1C, size 0x1
    unsigned char m_u8ConnectNo; // offset 0x1D, size 0x1
    unsigned char m_u8State; // offset 0x1E, size 0x1
    unsigned char m_u8Paddin[1]; // offset 0x1F, size 0x1
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

// Range: 0x1D10F0 -> 0x1D1134
signed int getActiveTrigNo(unsigned int u32PI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D10F0 -> 0x1D1134
        unsigned int u32i; // r2
    }
}


// Range: 0x1D1140 -> 0x1D117C
unsigned char isCheckingAll() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D1140 -> 0x1D117C
        class stcPeripheral * psPeripheral; // r5
        unsigned char bRet; // r2
        signed int s32i; // r4
    }
}


// Range: 0x1D1180 -> 0x1D11B4
unsigned char getConfigueDisableAllRumble() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D1180 -> 0x1D11B4
        class stcPeripheral * psPeripheral; // r5
        unsigned char bRet; // r2
        signed int s32i; // r4
    }
}


// Range: 0x1D11C0 -> 0x1D11F0
void setConfigueDisableAllRumble(unsigned char bI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D11C0 -> 0x1D11F0
        class stcPeripheral * psPeripheral; // r4
        signed int s32i; // r3
    }
}


// Range: 0x1D11F0 -> 0x1D1268
void setAllRumble(unsigned int u32FrameI /* r2 */, signed int s32PadNumI /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D11F0 -> 0x1D1268
        class stcPeripheral * psPeripheral; // r11
        signed int s32i; // r10
    }
}


// Range: 0x1D1270 -> 0x1D12BC
void setRumble(unsigned int u32NoI /* r2 */, unsigned int u32FrameIn /* r29+0x8 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D1270 -> 0x1D12BC
        class stcPeripheral & rsPeripheral; // r2
    }
}


// Range: 0x1D12C0 -> 0x1D23C0
void read(class clsPfPeripheral * this /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D12C0 -> 0x1D23C0
        unsigned char * pu8TempPadStutas; // r2
        signed int s32MtapConnect; // r29+0xAC
        signed int s32Slot_Num; // r29+0xA8
        class stcPeripheral * psPeripheral; // r19
        unsigned int u32SetPadCnt; // r23
        unsigned int u32PadNo; // r21
        signed int s32PlayerNo; // r2
        unsigned int u32Port; // r18
        unsigned int u32Slot; // r17
        unsigned int u32OldBeta; // r2
        unsigned char * pu8Status; // r2
        unsigned int u32Beta; // r2
        unsigned char toau8ActMask[6]; // @ 0x00663188
    }
}


// Range: 0x1D23C0 -> 0x1D24A8
void destroy() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D23C0 -> 0x1D24A8
    }
}


// Range: 0x1D24B0 -> 0x1D25A0
void reinit(class clsPfPeripheral * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D24B0 -> 0x1D25A0
        class stcPeripheral * psPeripheral; // r7
        unsigned int u32i; // r6
    }
}


// Range: 0x1D25A0 -> 0x1D2634
void * __ct(class clsPfPeripheral * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D25A0 -> 0x1D2634
    }
}


// Range: 0x1D26A0 -> 0x1D26A8
void @4@destroy__15clsPfPeripheralFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D26A0 -> 0x1D26A8
    }
}


// Range: 0x1D26B0 -> 0x1D26B8
void @4@read__15clsPfPeripheralFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D26B0 -> 0x1D26B8
    }
}


// Range: 0x1D26C0 -> 0x1D26C8
void @4@__dt__15clsPfPeripheralFv() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D26C0 -> 0x1D26C8
    }
}


