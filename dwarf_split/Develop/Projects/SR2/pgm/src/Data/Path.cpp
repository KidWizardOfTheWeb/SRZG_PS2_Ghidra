/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Data\Path.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class clsOOProfile * m_tpcSingleton; // size: 0x4, address: 0x703C28
class clsPathData * m_tpcSingleton; // size: 0x4, address: 0x703C10
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
class clsPath {
    // total size: 0x60
public:
    class NNS_VECTORFAST m_sUpVecFast; // offset 0x0, size 0x10
    class NNS_VECTORFAST m_sDirVecFast; // offset 0x10, size 0x10
    class NNS_VECTORFAST m_sCrossVecFast; // offset 0x20, size 0x10
    class NNS_VECTORFAST m_sMoveVecFast; // offset 0x30, size 0x10
    class stcLine * m_psLine; // offset 0x40, size 0x4
    float m_f32LengthRate; // offset 0x44, size 0x4
    float m_f32Length; // offset 0x48, size 0x4
    float m_f32DistanceLR; // offset 0x4C, size 0x4
    unsigned short m_u16HitBit; // offset 0x50, size 0x2
    unsigned short m_u16PointNo; // offset 0x52, size 0x2
    signed short m_s16PathNo; // offset 0x54, size 0x2
    unsigned short m_u16SearchHitBit; // offset 0x56, size 0x2
};
class clsOOProfile : public clsSingleton {
    // total size: 0x1414
public:
    class stcFactor m_asFactor[128]; // offset 0x4, size 0xE00
    class stcHistory m_asHistory[128]; // offset 0xE04, size 0x600
    char * m_opc8BadEndName; // offset 0x1404, size 0x4
    unsigned int m_u32DownLimitTime; // offset 0x1408, size 0x4
    signed short m_s16ScrollNo; // offset 0x140C, size 0x2
    unsigned char m_u8RegistNum; // offset 0x140E, size 0x1
    unsigned char m_bRunning; // offset 0x140F, size 0x1
    unsigned char m_u8SortType; // offset 0x1410, size 0x1
};
class stcLine {
    // total size: 0x30
public:
    class NNS_CAPSULE * psCapsule; // offset 0x0, size 0x4
    class NNS_VECTORFAST * psPointVec; // offset 0x4, size 0x4
    class NNS_VECTORFAST * psNormalVec; // offset 0x8, size 0x4
    class NNS_SPHERE sLimitSph; // offset 0xC, size 0x10
    unsigned short u16Num; // offset 0x1C, size 0x2
    unsigned short u16Attr; // offset 0x1E, size 0x2
    class /* @class */ {
        // total size: 0x10
    public:
        union { // inferred
            signed char s8Data[16]; // offset 0x0, size 0x10
            class stcSpeedPath sSpeed; // offset 0x0, size 0x10
            class stcGravityPath sGravity; // offset 0x0, size 0x10
            class stcGDivePath sGDive; // offset 0x0, size 0x10
        };
    } uniData; // offset 0x20, size 0x10
};
class NNS_CAPSULE {
    // total size: 0x1C
public:
    class NNS_VECTOR c1; // offset 0x0, size 0xC
    class NNS_VECTOR c2; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
class stcData {
    // total size: 0xC
public:
    unsigned char u8BigEndian; // offset 0x0, size 0x1
    unsigned char u8Ver; // offset 0x1, size 0x1
    unsigned char u8Id[6]; // offset 0x2, size 0x6
    unsigned int u32Num; // offset 0x8, size 0x4
    class stcLine * apLine[]; // offset 0xC, size 0x0
};
class stcSpeedPath {
    // total size: 0x10
public:
    signed short s16MaxSpeed; // offset 0x0, size 0x2
    signed short s16MinSpeed; // offset 0x2, size 0x2
    signed short s16Type; // offset 0x4, size 0x2
    signed short as16Reserve[5]; // offset 0x6, size 0xA
};
class stcFactor {
    // total size: 0x1C
public:
    char * m_opc8Name; // offset 0x0, size 0x4
    float m_f32Average; // offset 0x4, size 0x4
    unsigned int m_u32ParentsNum; // offset 0x8, size 0x4
    signed short m_s16OpenNum; // offset 0xC, size 0x2
    unsigned short m_u16MineNum; // offset 0xE, size 0x2
    unsigned int m_u32BeginTick; // offset 0x10, size 0x4
    unsigned int m_u32Tick; // offset 0x14, size 0x4
    unsigned int m_u32ChildrenTick; // offset 0x18, size 0x4
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class clsPathData : public clsSingleton {
    // total size: 0x20
public:
    class stcData * m_apsData[7]; // offset 0x4, size 0x1C
};
class clsSingleton {
    // total size: 0x4
};
class stcHistory {
    // total size: 0xC
public:
    unsigned int m_u32Average; // offset 0x0, size 0x4
    char * m_opc8Name; // offset 0x4, size 0x4
    unsigned int m_u32Count; // offset 0x8, size 0x4
};
class /* @class */ {
    // total size: 0x10
public:
    union { // inferred
        signed char s8Data[16]; // offset 0x0, size 0x10
        class stcSpeedPath sSpeed; // offset 0x0, size 0x10
        class stcGravityPath sGravity; // offset 0x0, size 0x10
        class stcGDivePath sGDive; // offset 0x0, size 0x10
    };
};
class clsSingleton {
    // total size: 0x4
};
class NNS_SPHERE {
    // total size: 0x10
public:
    class NNS_VECTOR c; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
class stcGDivePath {
    // total size: 0x10
public:
    signed short s16MaxSpeed; // offset 0x0, size 0x2
    signed short s16MinSpeed; // offset 0x2, size 0x2
    signed short s16Flag; // offset 0x4, size 0x2
    signed short as16Reserve[5]; // offset 0x6, size 0xA
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
class stcGravityPath {
    // total size: 0x10
public:
    signed short s16MaxSpeed; // offset 0x0, size 0x2
    signed short s16MinSpeed; // offset 0x2, size 0x2
    signed short s16Flag; // offset 0x4, size 0x2
    signed short as16Reserve[5]; // offset 0x6, size 0xA
};

// Range: 0x2EEEC0 -> 0x2EEFE0
void calcPathTrsMatrix(class clsPath * this /* r18 */, float (* psDstMtx)[4][4] /* r17 */, class NNS_VECTORFAST * opsPosVecFast /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2EEEC0 -> 0x2EEFE0
        class NNS_VECTORFAST sAxisX; // r29+0x50
        class NNS_VECTORFAST sAxisZ; // r29+0x40
    }
}


// Range: 0x2EEFE0 -> 0x2EF0F8
void getPathPointToRate(class clsPath * this /* r19 */, float of32LengthRate /* r29+0x80 */, class NNS_VECTORFAST * psVecFast /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2EEFE0 -> 0x2EF0F8
        class NNS_VECTORFAST sPosVecFast; // r29+0x70
        class NNS_VECTORFAST sDirVecFast; // r29+0x60
        float f32TargetLength; // r20
        signed int s32Num; // r17
    }
}


// Range: 0x2EF100 -> 0x2EF128
float getDistanceLR(class clsPath * this /* r16 */, class NNS_VECTORFAST * opsPosVecFast /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2EF100 -> 0x2EF128
    }
}


// Range: 0x2EF130 -> 0x2EF338
unsigned char searchPoint(class clsPath * this /* r22 */, class stcLine * opcLine /* r21 */, class NNS_VECTORFAST * opsPosVecFast /* r20 */, unsigned int u32DirFlag /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2EF130 -> 0x2EF338
        class NNS_VECTORFAST * psPoint; // r19
        class NNS_VECTORFAST sCrossPoint; // r29+0xA0
        unsigned char bSearchOnLineFlag; // r18
        signed int i; // r17
        signed int s32PointNo; // r16
        float f32Dist; // r29+0xB0
        float f32MinDist; // r20
        float f32OnlineFlag; // r29+0xB0
    }
}


// Range: 0x2EF340 -> 0x2EF6CC
void calcRankPath(class clsPath * this /* r18 */, class stcData * opsPath /* r2 */, signed int os32PathNo /* r30 */, class NNS_VECTORFAST * opsPosVecFast /* r23 */, class NNS_VECTORFAST * opsDirVecFast /* r29+0xB0 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2EF340 -> 0x2EF6CC
        class stcLine * psPathLine; // r2
        class NNS_VECTORFAST * psPoint; // r17
        class NNS_VECTORFAST sCrossPoint; // r29+0xE0
        class NNS_VECTORFAST sDirVecFast; // r29+0xD0
        class NNS_VECTORFAST sPathLineVec; // r29+0xC0
        float f32ChkDistance; // r22
        unsigned int u32Flag; // r2
        signed int s32PathLineNo; // r16
        float f32OnlineFlag; // r29+0xF0
        float f32OnlineFlagSQ; // r20
        float f32OldOnlineFlagSQ; // r21
        unsigned int u32i; // r21
        float f32PathLength; // r20
        float f32Distance; // r29+0xF0
    }
}


// Range: 0x2EF6D0 -> 0x2EF850
void calcDistanceLR(class clsPath * this /* r17 */, class NNS_VECTORFAST * opsPosVecFast /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2EF6D0 -> 0x2EF850
        float sMtx[4][4]; // r29+0xA0
        float sInvMtx[4][4]; // r29+0x60
        class NNS_VECTORFAST sXVexFast; // r29+0x50
        class NNS_VECTORFAST sZVexFast; // r29+0x40
        class NNS_VECTORFAST sOffsetVecFast; // r29+0x30
    }
}


// Range: 0x2EF850 -> 0x2EFC48
void update_PathData(class clsPath * this /* r21 */, class NNS_VECTORFAST * opsPosVecFast /* r29+0x100 */, class NNS_VECTORFAST * opsDirVecFast /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2EF850 -> 0x2EFC48
        class stcLine * psPathLine; // r2
        class NNS_SPHERE sPosSph; // r29+0x140
        float f32ChkDistance; // r22
        signed int s32NextPointDir; // r29+0xF0
        signed int s32PointNo; // r20
        signed int s32LastPointNo; // r29+0xE0
        unsigned short u16DirFlag; // r19
        class NNS_CAPSULE * psCapsule; // r22
        class NNS_VECTORFAST * psPoint; // r2
        class NNS_VECTORFAST * psNomal; // r18
        class NNS_VECTORFAST sPathLineVec; // r29+0x130
        class NNS_VECTORFAST sCrossPoint; // r29+0x120
        class NNS_VECTORFAST sDirVecFast; // r29+0x110
        float f32OnLineFlag; // r21
        float f32Distance; // r20
        float f32PathLength; // r20
        unsigned int u32i; // r18
    }
}


// Range: 0x2EFC50 -> 0x2EFE5C
void getPosition_BSpline(class clsPath * this /* r16 */, float of32Speed /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2EFC50 -> 0x2EFE5C
        class NNS_VECTORFAST sPosVecFast; // r29+0x30
        signed int s32NextPointNo; // r2
    }
}


// Range: 0x2EFE60 -> 0x2F0204
void GetPosition_Trick(class clsPath * this /* r21 */, class NNS_VECTORFAST * opsPosVecFast /* r23 */, class NNS_VECTORFAST * opsUpVec /* r22 */, float f32Length /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2EFE60 -> 0x2F0204
        class stcLine * psPathLine; // r2
        class NNS_VECTORFAST sCrossDist; // r29+0xA0
        float f32Distance; // r29+0xB0
        signed int s32NextPointNo; // r20
        signed int s32PathLineNo; // r19
    }
}


// Range: 0x2F0210 -> 0x2F04D4
void _GetPosition_Object(class clsPath * this /* r17 */, float f32Speed /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F0210 -> 0x2F04D4
        float f32Distance; // r29+0x80
        float f32Length; // r29+0x80
        signed int s32NextPointNo; // r16
        signed int s32PathLineNo; // r21
    }
}


// Range: 0x2F04E0 -> 0x2F07DC
void _GetPosition_Player(class clsPath * this /* r21 */, class NNS_VECTORFAST * opsPosVecFast /* r17 */, float f32Speed /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F04E0 -> 0x2F07DC
        class stcLine * psPathLine; // r2
        float f32Distance; // r29+0x90
        float f32Length; // r29+0x90
        signed int s32NextPointNo; // r20
        signed int s32PathLineNo; // r19
    }
}


// Range: 0x2F07E0 -> 0x2F0AF8
void searchPosOnLine(class clsPath * this /* r21 */, class NNS_VECTORFAST * opsPosVecFast /* r20 */, class NNS_VECTORFAST * opsDirVecFast /* r23 */, float f32Radius /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F07E0 -> 0x2F0AF8
        class NNS_CAPSULE * psCapsule; // r19
        class NNS_SPHERE sPosSph; // r29+0xE0
        class NNS_VECTORFAST * psPoint; // r18
        class NNS_VECTORFAST * psNomal; // r22
        signed short s16PointNo; // r17
        signed short s16PointNum; // r2
        unsigned int u32HitFlag; // r29+0xB0
        float f32ChkDist; // r22
        float f32OldOnLineFlag; // r21
        class NNS_VECTORFAST sPathLineVec; // r29+0xD0
        class NNS_VECTORFAST sCrossPoint; // r29+0xC0
        unsigned int u32Flag; // r2
        float f32OnLineFlag; // r20
        float f32Dist; // r29+0xF0
        unsigned int u32i; // r17
        float f32PathLength; // r20
    }
}


// Range: 0x2F0B00 -> 0x2F0F24
void searchOtherLine(class clsPath * this /* r20 */, class stcData * opsPath /* r16 */, class NNS_VECTORFAST * opsPosVecFast /* r22 */, class NNS_VECTORFAST * opsDirVecFast /* r29+0x100 */, float f32Radius /* r21 */, unsigned int u32DirFlag /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F0B00 -> 0x2F0F24
        class stcLine * psPathLine; // r2
        class NNS_CAPSULE * psCapsule; // r29+0xF0
        class NNS_VECTORFAST * psPoint; // r18
        class NNS_VECTORFAST * psNomal; // r30
        class NNS_VECTORFAST sPathLineVec; // r29+0x140
        class NNS_VECTORFAST sDirVecFast; // r29+0x130
        class NNS_SPHERE sPosSph; // r29+0x120
        signed int s32PathNo; // r17
        signed int s32PathLineNo; // r16
        signed int s32NowPathNo; // r2
        float f32ChkDist; // r20
        unsigned int u32HitFlag; // r29+0xE0
        float f32Dist; // r29+0x150
        unsigned int u32Flag; // r21
        signed int s32CrossFlag; // r2
        class NNS_VECTORFAST sCrossPoint; // r29+0x110
        unsigned int u32i; // r17
        float f32PathLength; // r20
    }
}


// Range: 0x2F0F30 -> 0x2F12F8
void searchTrick(class clsPath * this /* r19 */, class stcData * opsPath /* r2 */, signed int os32PathNo /* r29+0xCC */, class NNS_VECTORFAST * opsPosVecFast /* r18 */, class NNS_VECTORFAST * opsDirVecFast /* r29+0xC0 */, float f32Radius /* r20 */, unsigned int u32DirFlag /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F0F30 -> 0x2F12F8
        class stcLine * psPathLine; // r2
        class NNS_VECTORFAST * psPoint; // r16
        class NNS_VECTORFAST * psNomal; // r30
        class NNS_VECTORFAST sPathLineVec; // r29+0x120
        class NNS_VECTORFAST sDirVecFast; // r29+0x110
        class NNS_SPHERE sPosSph; // r29+0x100
        signed int s32PathLineNo; // r22
        float f32ChkDist; // r21
        float f32Dist; // r29+0x130
        unsigned int u32Flag; // r20
        unsigned int u32i; // r21
        float f32PathLength; // r20
        class NNS_VECTORFAST sCrossPoint; // r29+0xF0
        float f32OnLineFlag; // r29+0x130
        class NNS_VECTORFAST sVecFast1; // r29+0xE0
        class NNS_VECTORFAST sVecFast2; // r29+0xD0
    }
}


// Range: 0x2F1300 -> 0x2F144C
void searchAutoWallRun(class clsPath * this /* r19 */, class NNS_VECTORFAST * opsPosVecFast /* r18 */, signed int s32LineNo /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1300 -> 0x2F144C
        class stcLine * pcLine; // r2
        signed int s32PointNo; // r2
        class NNS_VECTORFAST sDirVecFast; // r29+0x60
    }
}


// Range: 0x2F1450 -> 0x2F1900
void searchLine(class clsPath * this /* r19 */, class stcData * opsPath /* r16 */, class NNS_VECTORFAST * opsPosVecFast /* r18 */, class NNS_VECTORFAST * opsDirVecFast /* r29+0xD0 */, unsigned int u32DirFlag /* r17 */, signed int s32LineNo /* r29+0xCC */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1450 -> 0x2F1900
        class stcLine * psPathLine; // r2
        class NNS_VECTORFAST * psPoint; // r16
        class NNS_VECTORFAST * psNomal; // r29+0xB0
        class NNS_VECTORFAST sPathLineVec; // r29+0x110
        signed int s32PathLineNo; // r22
        float f32ChkDist; // r21
        float f32OldOnLineFlag; // r20
        float f32Dist; // r29+0x120
        unsigned int u32Flag; // r20
        unsigned int u32i; // r21
        float f32PathLength; // r22
        class NNS_VECTORFAST sCrossPoint; // r29+0x100
        class NNS_VECTORFAST sDirVecFast; // r29+0xF0
        float f32OnLineFlag; // r22
        class NNS_VECTORFAST sPosVecFast; // r29+0xE0
    }
}


// Range: 0x2F1900 -> 0x2F1E74
void searchN(class clsPath * this /* r19 */, class stcData * opsPath /* r29+0x11C */, class NNS_VECTORFAST * opsPosVecFast /* r18 */, class NNS_VECTORFAST * opsDirVecFast /* r29+0x110 */, float f32Radius /* r21 */, unsigned int u32DirFlag /* r17 */, unsigned char * pu8LineNumArray /* r29+0x10C */, unsigned int u32ArrayNum /* r20 */, unsigned char bBSCheck /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1900 -> 0x2F1E74
        class stcLine * psPathLine; // r2
        class NNS_CAPSULE * psCapsule; // r29+0xF0
        class NNS_VECTORFAST * psPoint; // r16
        class NNS_VECTORFAST * psNomal; // r29+0xE0
        class NNS_VECTORFAST sPathLineVec; // r29+0x160
        class NNS_SPHERE sPosSph; // r29+0x150
        signed int s32PathIdx; // r29+0xD0
        signed int s32PathLineNo; // r22
        float f32ChkDist; // r20
        float f32Dist; // r22
        unsigned int u32Flag; // r20
        unsigned int u32i; // r21
        float f32PathLength; // r21
        class NNS_VECTORFAST sCrossPoint; // r29+0x140
        class NNS_VECTORFAST sDirVecFast; // r29+0x130
        float f32OnLineFlag; // r21
        class NNS_VECTORFAST sPosVecFast; // r29+0x120
    }
}


// Range: 0x2F1E80 -> 0x2F23A0
void search2(class clsPath * this /* r19 */, class stcData * opsPath /* r16 */, class NNS_VECTORFAST * opsPosVecFast /* r18 */, class NNS_VECTORFAST * opsDirVecFast /* r29+0xF0 */, float f32Radius /* r22 */, unsigned int u32DirFlag /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1E80 -> 0x2F23A0
        class stcLine * psPathLine; // r2
        class NNS_CAPSULE * psCapsule; // r29+0xE0
        class NNS_VECTORFAST * psPoint; // r16
        class NNS_VECTORFAST * psNomal; // r29+0xD0
        class NNS_VECTORFAST sPathLineVec; // r29+0x140
        class NNS_SPHERE sPosSph; // r29+0x130
        signed int s32PathNo; // r30
        signed int s32PathLineNo; // r22
        float f32ChkDist; // r21
        float f32ChkOnline; // r20
        float f32Dist; // r29+0x150
        unsigned int u32Flag; // r20
        unsigned int u32i; // r21
        float f32PathLength; // r22
        class NNS_VECTORFAST sCrossPoint; // r29+0x120
        class NNS_VECTORFAST sDirVecFast; // r29+0x110
        float f32OnLineFlag; // r22
        class NNS_VECTORFAST sPosVecFast; // r29+0x100
    }
}


// Range: 0x2F23A0 -> 0x2F28B0
void search(class clsPath * this /* r19 */, class stcData * opsPath /* r16 */, class NNS_VECTORFAST * opsPosVecFast /* r18 */, class NNS_VECTORFAST * opsDirVecFast /* r29+0xF0 */, float f32Radius /* r22 */, unsigned int u32DirFlag /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F23A0 -> 0x2F28B0
        class stcLine * psPathLine; // r2
        class NNS_CAPSULE * psCapsule; // r29+0xE0
        class NNS_VECTORFAST * psPoint; // r16
        class NNS_VECTORFAST * psNomal; // r29+0xD0
        class NNS_VECTORFAST sPathLineVec; // r29+0x140
        class NNS_SPHERE sPosSph; // r29+0x130
        signed int s32PathNo; // r30
        signed int s32PathLineNo; // r22
        float f32ChkDist; // r21
        float f32ChkOnline; // r20
        float f32Dist; // r29+0x150
        unsigned int u32Flag; // r20
        unsigned int u32i; // r21
        float f32PathLength; // r22
        class NNS_VECTORFAST sCrossPoint; // r29+0x120
        class NNS_VECTORFAST sDirVecFast; // r29+0x110
        float f32OnLineFlag; // r22
        class NNS_VECTORFAST sPosVecFast; // r29+0x100
    }
}


// Range: 0x2F28B0 -> 0x2F2A30
void setPath(class clsPath * this /* r18 */, class stcData * opsPath /* r2 */, signed int s32PathNo /* r2 */, signed int s32PointNo /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F28B0 -> 0x2F2A30
        unsigned int u32i; // r16
        float f32PathLength; // r20
    }
}


// Range: 0x2F2A30 -> 0x2F2B50
void initPath_Object(class clsPath * this /* r17 */, class stcData * opsPath /* r2 */, unsigned int u32PathNo /* r2 */, unsigned int u32DirFlag /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F2A30 -> 0x2F2B50
        unsigned int u32i; // r16
    }
}


