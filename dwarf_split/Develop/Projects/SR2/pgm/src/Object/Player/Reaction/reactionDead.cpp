/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Object\Player\Reaction\reactionDead.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
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
enum enmColCheckType {
    COL_CHECK_NULL = 0,
    COL_CHECK_NORMAL = 1,
    COL_CHECK_CHARA_UP = 2,
    COL_CHECK_UNDER = 3,
    COL_CHECK_VELOCITY = 4,
};
class __list_imp : private __list_deleter {
    // total size: 0x14
};
class hkCdPointCollector {
    // total size: 0x8
public:
    float m_earlyOutDistance; // offset 0x4, size 0x4
};
class NNS_NODE {
    // total size: 0x90
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed short iMatrix; // offset 0x4, size 0x2
    signed short iParent; // offset 0x6, size 0x2
    signed short iChild; // offset 0x8, size 0x2
    signed short iSibling; // offset 0xA, size 0x2
    class NNS_VECTOR Translation; // offset 0xC, size 0xC
    class NNS_ROTATE_A32 Rotation; // offset 0x18, size 0xC
    class NNS_VECTOR Scaling; // offset 0x24, size 0xC
    float InvInitMtx[4][4]; // offset 0x30, size 0x40
    class NNS_VECTOR Center; // offset 0x70, size 0xC
    float Radius; // offset 0x7C, size 0x4
    unsigned int User; // offset 0x80, size 0x4
    union { // inferred
        float SIIKBoneLength; // offset 0x84, size 0x4
        float BoundingBoxX; // offset 0x84, size 0x4
    };
    float BoundingBoxY; // offset 0x88, size 0x4
    float BoundingBoxZ; // offset 0x8C, size 0x4
};
class hkConstraintAtom {
    // total size: 0x2
public:
    class hkEnum m_type; // offset 0x0, size 0x2
};
class NNS_VECTORFAST {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class hkPadSpu {
    // total size: 0x4
public:
    class PotentialInfo * m_storage; // offset 0x0, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
class hkPhantomListener {
    // total size: 0x4
};
class stcSeed {
    // total size: 0x30
public:
    class NNS_VECTOR sPosVec; // offset 0x0, size 0xC
    class NNS_VECTOR sScale; // offset 0xC, size 0xC
    class NNS_VECTOR sSpeedVec; // offset 0x18, size 0xC
    float f32Gravity; // offset 0x24, size 0x4
    signed int s32Frame; // offset 0x28, size 0x4
    signed int s32Rot; // offset 0x2C, size 0x4
};
class sceGsTex0 {
    // total size: 0x8
public:
    unsigned long TBP0 : 14; // offset 0x0, size 0x4
    unsigned long TBW : 6; // offset 0x0, size 0x4
    unsigned long PSM : 6; // offset 0x0, size 0x4
    unsigned long TW : 4; // offset 0x0, size 0x4
    unsigned long TH : 4; // offset 0x0, size 0x4
    unsigned long TCC : 1; // offset 0x0, size 0x4
    unsigned long TFX : 2; // offset 0x0, size 0x4
    unsigned long CBP : 14; // offset 0x0, size 0x4
    unsigned long CPSM : 4; // offset 0x0, size 0x4
    unsigned long CSM : 1; // offset 0x0, size 0x4
    unsigned long CSA : 5; // offset 0x0, size 0x4
    unsigned long CLD : 3; // offset 0x0, size 0x4
};
class hkPadSpu {
    // total size: 0x4
public:
    class hkConvexListFilter * m_storage; // offset 0x0, size 0x4
};
class hkSimulationIsland : public hkConstraintOwner {
    // total size: 0x70
public:
    class hkWorld * m_world; // offset 0x18, size 0x4
    signed int m_numConstraints; // offset 0x1C, size 0x4
    unsigned short m_storageIndex; // offset 0x20, size 0x2
    unsigned short m_dirtyListIndex; // offset 0x22, size 0x2
    unsigned char m_splitCheckFrameCounter; // offset 0x24, size 0x1
    unsigned char m_highFrequencyDeactivationCounter; // offset 0x25, size 0x1
    unsigned char m_lowFrequencyDeactivationCounter; // offset 0x26, size 0x1
    unsigned char m_splitCheckRequested : 2; // offset 0x27, size 0x1
    unsigned char m_sparseEnabled : 2; // offset 0x27, size 0x1
    unsigned char m_actionListCleanupNeeded : 2; // offset 0x27, size 0x1
    unsigned char m_allowIslandLocking : 2; // offset 0x27, size 0x1
    unsigned char m_isInActiveIslandsArray : 2; // offset 0x28, size 0x1
    unsigned char m_active : 2; // offset 0x28, size 0x1
    unsigned char m_inIntegrateJob : 2; // offset 0x28, size 0x1
    class hkMultiThreadCheck m_multiThreadCheck; // offset 0x2C, size 0x8
    float m_timeSinceLastHighFrequencyCheck; // offset 0x34, size 0x4
    float m_timeSinceLastLowFrequencyCheck; // offset 0x38, size 0x4
    class hkArray m_actions; // offset 0x3C, size 0xC
    float m_timeOfDeactivation; // offset 0x48, size 0x4
    class hkInplaceArray m_entities; // offset 0x4C, size 0x10
    class hkAgentNnTrack m_agentTrack; // offset 0x5C, size 0x14
};
class hkWorldMemoryWatchDog {
    // total size: 0x0
};
class clsSpinTrickAction : public clsBaseTrickAction {
    // total size: 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkProperty * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
enum enmFlag {
    FLAG_CLEAR = 0,
    FLAG_VIBRATION = 1,
    FLAG_AUTORETURN = 2,
    FLAG_SCALING = 4,
    FLAG_INIT = 7,
};
class AgentFuncs {
    // total size: 0x14
public:
    class hkCollisionAgent * (* m_createFunc)(class hkCdBody &, class hkCdBody &, class hkCollisionInput &, class hkContactMgr *); // offset 0x0, size 0x4
    void (* m_getPenetrationsFunc)(class hkCdBody &, class hkCdBody &, class hkCollisionInput &, class hkCdBodyPairCollector &); // offset 0x4, size 0x4
    void (* m_getClosestPointFunc)(class hkCdBody &, class hkCdBody &, class hkCollisionInput &, class hkCdPointCollector &); // offset 0x8, size 0x4
    void (* m_linearCastFunc)(class hkCdBody &, class hkCdBody &, class hkLinearCastCollisionInput &, class hkCdPointCollector &, class hkCdPointCollector *); // offset 0xC, size 0x4
    class hkBool m_isFlipped; // offset 0x10, size 0x1
    class hkBool m_isPredictive; // offset 0x11, size 0x1
};
enum enmGearPrfm {
    PRFM_EMPTY = 0,
    PRFM_D_SONIC = 1,
    PRFM_D_TAILS = 2,
    PRFM_D_KNUCKLES = 3,
    PRFM_D_AMY = 4,
    PRFM_D_JET = 5,
    PRFM_D_STORM = 6,
    PRFM_D_WAVE = 7,
    PRFM_D_EGGMAN = 8,
    PRFM_D_CREAM = 9,
    PRFM_D_ROUGE = 10,
    PRFM_D_SHADOW = 11,
    PRFM_D_BRAZE = 12,
    PRFM_D_SILVER = 13,
    PRFM_D_NIGHTS = 14,
    PRFM_D_AMIGO = 15,
    PRFM_D_BILLY = 16,
    PRFM_D_ZAKOROBO = 17,
    PRFM_D_LEADERROBO = 18,
    PRFM_D_SHOOTINGSTAR = 19,
    PRFM_D_FASTER = 20,
    PRFM_D_FASTEST = 21,
    PRFM_D_TURBOSTAR = 22,
    PRFM_D_LIGHTBOARD = 23,
    PRFM_D_COVERS = 24,
    PRFM_D_COVERF = 25,
    PRFM_D_COVERP = 26,
    PRFM_D_ADV_S = 27,
    PRFM_D_ADV_F = 28,
    PRFM_D_ADV_P = 29,
    PRFM_D_WINDSTAR = 30,
    PRFM_D_ROADSTAR = 31,
    PRFM_D_AIRSHIP = 32,
    PRFM_D_WHEELCUSTOM = 33,
    PRFM_D_OMNITENPOS = 34,
    PRFM_D_HIPERDIVE = 35,
    PRFM_D_GCBOOSTER = 36,
    PRFM_D_GCMASTER = 37,
    PRFM_D_REGEND = 38,
    PRFM_D_SHINOBI = 39,
    PRFM_D_KUNOICHI = 40,
    PRFM_D_RAILLINKER = 41,
    PRFM_D_GPGETTER = 42,
    PRFM_D_SKILUPPER = 43,
    PRFM_D_GSHOT = 44,
    PRFM_D_MASTEROFFROAD = 45,
    PRFM_D_RISERVETANK = 46,
    PRFM_D_GPTANK = 47,
    PRFM_D_CHAOSEMELARD = 48,
    PRFM_D_THECRAZY = 49,
    PRFM_D_ANGELDEVIL = 50,
    PRFM_D_SLOTTOL = 51,
    PRFM_D_MONEYCRISIS = 52,
    PRFM_D_BEGINNER = 53,
    PRFM_D_BIGBAN = 54,
    PRFM_D_GAMBLER = 55,
    PRFM_D_BINGOSTAR = 56,
    PRFM_D_WANTED = 57,
    PRFM_D_HANGON = 58,
    PRFM_D_MAGICBLOOM = 59,
    PRFM_D_MAG = 60,
    PRFM_D_UNTACHABLE = 61,
    PRFM_D_RAINBOW = 62,
    PRFM_D_WINDCATHER = 63,
    PRFM_P_ZEROPARAM = 64,
    PRFM_P_GRIND = 65,
    PRFM_P_AIRRIDE = 66,
    PRFM_P_BIKE = 67,
    PRFM_P_WHEEL = 68,
    PRFM_P_YOTCH = 69,
    PRFM_P_MAXSPEED_PLUS1 = 70,
    PRFM_P_MAXSPEED_PLUS2 = 71,
    PRFM_P_MAXSPEED_PLUS3 = 72,
    PRFM_P_MAXSPEED_PLUS4 = 73,
    PRFM_P_MAXSPEED_PLUS5 = 74,
    PRFM_1ST_SPEED_01 = 75,
    PRFM_1ST_SPEED_02 = 76,
    PRFM_1ST_SPEED_03 = 77,
    PRFM_P_ENDU_PLUS30 = 78,
    PRFM_P_ENDU_PLUS50 = 79,
    PRFM_P_ENDU_PLUS100 = 80,
    PRFM_AGP_01 = 81,
    PRFM_AGP_02 = 82,
    PRFM_GC_SPEED_01 = 83,
    PRFM_GC_SPEED_02 = 84,
    PRFM_GC_SPEED_03 = 85,
    PRFM_P_TRICK_PLUS1 = 86,
    PRFM_P_AGPRATE_PLUS05 = 87,
    PRFM_P_RINGCAP_PLUS25 = 88,
    PRFM_P_RINGCAP_PLUS50 = 89,
    PRFM_P_RINGCAP_PLUS100 = 90,
    PRFM_P_RINGCAP_PLUS150 = 91,
    PRFM_P_ITEMRANK_PLUS1 = 92,
    PRFM_P_ATTIME_PLUS120 = 93,
    PRFM_P_ALL_PARAMUP = 94,
    PRFM_P_GP_INFINIT = 95,
    PRFM_MAX = 96,
};
class PotentialInfo {
    // total size: 0x1008
public:
    class ContactRef * m_firstFreePotentialContact; // offset 0x0, size 0x4
    class hkProcessCdPoint * * m_firstFreeRepresentativeContact; // offset 0x4, size 0x4
    class hkProcessCdPoint * m_representativeContacts[256]; // offset 0x8, size 0x400
    class ContactRef m_potentialContacts[256]; // offset 0x408, size 0xC00
};
enum enmSelectType {
    SELECT_NORMAL = 0,
    SELECT_NO_PRFM_MERGE = 1,
    SELECT_INFINITY = 2,
};
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class stcData {
    // total size: 0x24
public:
    char ac8Name_Debug[16]; // offset 0x0, size 0x10
    float f32Height; // offset 0x10, size 0x4
    float f32Weight; // offset 0x14, size 0x4
    unsigned char u8Style; // offset 0x18, size 0x1
    unsigned char u8SkillType; // offset 0x19, size 0x1
    unsigned char u8BaseType; // offset 0x1A, size 0x1
    unsigned char u8Reserve[1]; // offset 0x1B, size 0x1
    float f32AttackLFrame; // offset 0x1C, size 0x4
    float f32AttackRFrame; // offset 0x20, size 0x4
};
class stcPlayData {
    // total size: 0x48
public:
    enum enmPriority ePriority; // offset 0x0, size 0x4
    signed int s32TableNo; // offset 0x4, size 0x4
    class stcPlayTable asTable[4]; // offset 0x8, size 0x40
};
class hkConstraintOwner : public hkReferencedObject {
    // total size: 0x18
public:
    class hkConstraintInfo m_constraintInfo; // offset 0x8, size 0x10
};
class hkCriticalSection {
    // total size: 0x1
};
class NNS_TRS {
    // total size: 0x30
public:
    class NNS_VECTORFAST Translation; // offset 0x0, size 0x10
    class NNS_QUATERNION Rotation; // offset 0x10, size 0x10
    class NNS_VECTORFAST Scaling; // offset 0x20, size 0x10
};
class hkMotion : public hkReferencedObject {
    // total size: 0x120
public:
    class hkEnum m_type; // offset 0x8, size 0x1
    unsigned char m_deactivationIntegrateCounter; // offset 0x9, size 0x1
    unsigned short m_deactivationNumInactiveFrames[2]; // offset 0xA, size 0x4
    class hkMotionState m_motionState; // offset 0x10, size 0xC0
    class hkVector4 m_inertiaAndMassInv; // offset 0xD0, size 0x10
    class hkVector4 m_linearVelocity; // offset 0xE0, size 0x10
    class hkVector4 m_angularVelocity; // offset 0xF0, size 0x10
    class hkVector4 m_deactivationRefPosition[2]; // offset 0x100, size 0x20
};
class clsModelType_OB_TX {
    // total size: 0x8
public:
    class NNS_OBJECT * m_psObject; // offset 0x0, size 0x4
    class _NNS_TEXLIST * m_psTexList; // offset 0x4, size 0x4
};
enum hkStepResult {
    HK_STEP_RESULT_SUCCESS = 0,
    HK_STEP_RESULT_MEMORY_FAILURE_BEFORE_INTEGRATION = 1,
    HK_STEP_RESULT_MEMORY_FAILURE_DURING_COLLIDE = 2,
    HK_STEP_RESULT_MEMORY_FAILURE_DURING_TOI_SOLVE = 3,
};
class clsMotion {
    // total size: 0x5C
public:
    class NNS_OBJECT * m_psObject; // offset 0x0, size 0x4
    float (* m_psMtxPal)[4][4]; // offset 0x4, size 0x4
    class NNS_TRS * m_apsTrs[2]; // offset 0x8, size 0x8
    unsigned int * m_psNodeStatus; // offset 0x10, size 0x4
    class NNS_MOTION * m_psMotion; // offset 0x14, size 0x4
    class NNS_MOTION * m_psLinkMotion; // offset 0x18, size 0x4
    class NNS_MOTION * m_psBlendMotion; // offset 0x1C, size 0x4
    enum enmStatus m_eStatus; // offset 0x20, size 0x4
    signed int m_s32CurrentTrsNo; // offset 0x24, size 0x4
    signed int m_s32CurrentChangeFlag; // offset 0x28, size 0x4
    float m_f32AllFrameRate; // offset 0x2C, size 0x4
    float m_f32FrameRate; // offset 0x30, size 0x4
    float m_f32BlendFrameRate; // offset 0x34, size 0x4
    float m_f32LinkFrameRate; // offset 0x38, size 0x4
    float m_f32Frame; // offset 0x3C, size 0x4
    float m_f32LinkFrame; // offset 0x40, size 0x4
    float m_f32BlendFrame; // offset 0x44, size 0x4
    float m_f32LinkRatio; // offset 0x48, size 0x4
    float m_f32LinkAddRatio; // offset 0x4C, size 0x4
    float m_f32BlendRatio; // offset 0x50, size 0x4
    float m_f32BlendAddRatio; // offset 0x54, size 0x4
};
class hkPadSpu {
    // total size: 0x4
public:
    class hkContactMgr * m_storage; // offset 0x0, size 0x4
};
class hkConvexListFilter {
    // total size: 0x0
};
enum enmKickerRankZone {
    FAILURE__ZONE = 0,
    RANK_B__ZONE = 1,
    RANK_A__ZONE = 2,
    RANK_S__ZONE = 3,
    ZONE_MAX = 4,
};
class clsRigidBodyCollectorInfo : public clsCollectorInfo {
    // total size: 0x5C
};
class hkEnum {
    // total size: 0x1
public:
    signed char m_storage; // offset 0x0, size 0x1
};
class hkCollisionQualityInfo {
    // total size: 0x3C
public:
    float m_keepContact; // offset 0x0, size 0x4
    float m_create4dContact; // offset 0x4, size 0x4
    float m_createContact; // offset 0x8, size 0x4
    float m_manifoldTimDistance; // offset 0xC, size 0x4
    class hkBool m_useContinuousPhysics; // offset 0x10, size 0x1
    float m_minSeparation; // offset 0x14, size 0x4
    float m_minExtraSeparation; // offset 0x18, size 0x4
    float m_minSafeDeltaTime; // offset 0x1C, size 0x4
    float m_minAbsoluteSafeDeltaTime; // offset 0x20, size 0x4
    float m_toiSeparation; // offset 0x24, size 0x4
    float m_toiExtraSeparation; // offset 0x28, size 0x4
    float m_toiAccuracy; // offset 0x2C, size 0x4
    float m_maxContraintViolation; // offset 0x30, size 0x4
    float m_minToiDeltaTime; // offset 0x34, size 0x4
    unsigned short m_constraintPriority; // offset 0x38, size 0x2
    class hkBool m_enableToiWeldRejection; // offset 0x3A, size 0x1
};
class clsAdjustGravityAction_Object {
    // total size: 0x0
};
class hkActionListener {
    // total size: 0x0
};
class hkProcessCollisionOutput : public hkProcessCollisionData {
    // total size: 0x3060
public:
    class hkPadSpu m_potentialContacts; // offset 0x3050, size 0x4
};
class hkEnum {
    // total size: 0x1
public:
    unsigned char m_storage; // offset 0x0, size 0x1
};
class clsDashPanel_Obj {
    // total size: 0x0
};
class stcBaseStatus {
    // total size: 0xC
public:
    unsigned char u8TexNo; // offset 0x0, size 0x1
    unsigned char u8Rand; // offset 0x1, size 0x1
    unsigned char u8RotZ; // offset 0x2, size 0x1
    float f32MinSpeed; // offset 0x4, size 0x4
    float f32MaxSpeed; // offset 0x8, size 0x4
};
class hkMaxSizeMotion : public hkKeyframedRigidMotion {
    // total size: 0x130
};
class hkEnum {
    // total size: 0x2
public:
    unsigned short m_storage; // offset 0x0, size 0x2
};
class hkCdBodyPairCollector {
    // total size: 0x8
public:
    class hkBool m_earlyOut; // offset 0x4, size 0x1
};
class hkConstraintInstance : public hkReferencedObject {
    // total size: 0x2C
public:
    class hkConstraintOwner * m_owner; // offset 0x8, size 0x4
    class hkConstraintData * m_data; // offset 0xC, size 0x4
    class hkModifierConstraintAtom * m_constraintModifiers; // offset 0x10, size 0x4
    class hkEntity * m_entities[2]; // offset 0x14, size 0x8
    class hkEnum m_priority; // offset 0x1C, size 0x1
    class hkBool m_wantRuntime; // offset 0x1D, size 0x1
    char * m_name; // offset 0x20, size 0x4
    unsigned int m_userData; // offset 0x24, size 0x4
    class hkConstraintInternal * m_internal; // offset 0x28, size 0x4
};
class clsCharacter {
    // total size: 0x60
public:
    class clsModelType_OB_TX * m_pcModel; // offset 0x0, size 0x4
    class stcData * m_posData; // offset 0x4, size 0x4
    class clsPlayerTask * m_pcPlayer; // offset 0x8, size 0x4
    float m_f32OffsetPosition; // offset 0xC, size 0x4
    unsigned char m_u8Type; // offset 0x10, size 0x1
    enum enmBaseType m_eBaseType; // offset 0x14, size 0x4
    enum enmWalkType m_eWalkType; // offset 0x18, size 0x4
    unsigned char m_u8ModelType; // offset 0x1C, size 0x1
    float m_f32DrawAlpha; // offset 0x20, size 0x4
    float m_f32behaviorCnt; // offset 0x24, size 0x4
    class clsDrawAttackEffect_Task * m_pcDrawEffTsk; // offset 0x28, size 0x4
    class NNS_VECTORFAST m_sFollowOffsetVF; // offset 0x30, size 0x10
    class NNS_VECTORFAST m_sFollowVF; // offset 0x40, size 0x10
    unsigned int m_u32FollowCalcNodeIdx; // offset 0x50, size 0x4
};
class hkProcessCollisionData {
    // total size: 0x3050
public:
    class hkPadSpu m_firstFreeContactPoint; // offset 0x0, size 0x4
    class hkPadSpu m_constraintOwner; // offset 0x4, size 0x4
    class hkProcessCdPoint m_contactPoints[256]; // offset 0x10, size 0x3000
    class ToiInfo m_toi; // offset 0x3010, size 0x40
};
class clsVerticalTrickAction : public clsBaseTrickAction {
    // total size: 0x30
public:
    class NNS_VECTORFAST m_sUpVecFast; // offset 0x10, size 0x10
    float m_f32UpAccele; // offset 0x20, size 0x4
};
class clsFlyAction {
    // total size: 0x1C
public:
    class NNS_QUATERNION m_sFlyQuat; // offset 0x0, size 0x10
    signed int m_A32FlyPitchAngle; // offset 0x10, size 0x4
    signed int m_A32FlyRollAngle; // offset 0x14, size 0x4
    signed short m_s16OldRingNo; // offset 0x18, size 0x2
    signed short m_s16InitType; // offset 0x1A, size 0x2
};
class clsOOSemaphore {
    // total size: 0x4
};
class stcSpeedPath {
    // total size: 0x10
public:
    signed short s16MaxSpeed; // offset 0x0, size 0x2
    signed short s16MinSpeed; // offset 0x2, size 0x2
    signed short s16Type; // offset 0x4, size 0x2
    signed short as16Reserve[5]; // offset 0x6, size 0xA
};
class hkArray {
    // total size: 0xC
public:
    class hkRootCdPoint * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkAgent3ProcessInput : public hkAgent3Input {
    // total size: 0x70
public:
    class hkPadSpu m_distAtT1; // offset 0x50, size 0x4
    class hkPadSpu m_offsetPpuSectorMinusSpuSector; // offset 0x54, size 0x4
    class hkVector4 m_linearTimInfo; // offset 0x60, size 0x10
};
class hkMaterial {
    // total size: 0xC
public:
    class hkEnum m_responseType; // offset 0x0, size 0x1
    float m_friction; // offset 0x4, size 0x4
    float m_restitution; // offset 0x8, size 0x4
};
enum enmAction {
    ACTION_NULL = 0,
    ACTION_DIVE = 1,
    ACTION_CTRL = 2,
    MAX_ACTION_NUM = 3,
};
class node {
    // total size: 0x0
};
class __tree : private __red_black_tree {
    // total size: 0x18
public:
    class compressed_pair alloc_; // offset 0x0, size 0x8
    class compressed_pair node_alloc_; // offset 0x8, size 0x8
    class compressed_pair comp_; // offset 0x10, size 0x8
};
class clsCollectorInfo {
    // total size: 0x5C
public:
    class hkArray m_apcCollidable[2]; // offset 0x0, size 0x18
    class hkArray m_cCollidableTrig; // offset 0x18, size 0xC
    class hkArray m_cContactTrig; // offset 0x24, size 0xC
    class hkArray m_cCollidableAlways; // offset 0x30, size 0xC
    class hkArray m_cContactAlways; // offset 0x3C, size 0xC
    class hkArray m_cCollidableRemove; // offset 0x48, size 0xC
    signed int m_s32CurrentNo; // offset 0x54, size 0x4
};
class hkAgentNnTrack {
    // total size: 0x14
public:
    unsigned int m_bytesUsedInLastSector; // offset 0x0, size 0x4
    class hkInplaceArray m_sectors; // offset 0x4, size 0x10
};
class hkPadSpu {
    // total size: 0x4
public:
    class hkCollisionDispatcher * m_storage; // offset 0x0, size 0x4
};
class clsPlayerTask : public clsObject, public clsTask {
    // total size: 0x12F0
public:
    signed int m_s32EnableMovePathDebug; // offset 0x58, size 0x4
    class stcLine m_sDebugLine; // offset 0x5C, size 0x30
    unsigned char m_bEnableFlyDebug; // offset 0x8C, size 0x1
    float m_f32Debug_StiffFrame; // offset 0x90, size 0x4
    float m_f32Debug_StallSpeed; // offset 0x94, size 0x4
    float m_f32Debug_AirResist; // offset 0x98, size 0x4
    float m_f32Debug_UpDownAccele; // offset 0x9C, size 0x4
    float m_f32Debug_FallAccele; // offset 0xA0, size 0x4
    float m_f32Debug_DescentAccele; // offset 0xA4, size 0x4
    float m_f32Debug_RollSpeed; // offset 0xA8, size 0x4
    float m_f32Debug_PitchSpeed; // offset 0xAC, size 0x4
    float m_f32Debug_UpPitch_Limit; // offset 0xB0, size 0x4
    float m_f32Debug_DownPitch_Limit; // offset 0xB4, size 0x4
    float m_af32Debug_PitchGravityTable[3]; // offset 0xB8, size 0xC
    unsigned char m_bDispReturnPoint; // offset 0xC4, size 0x1
    unsigned char m_bDispCoursePoint; // offset 0xC5, size 0x1
    class clsPlayerDebug * m_pcDebug; // offset 0xC8, size 0x4
    signed int m_s32SfId[23]; // offset 0xCC, size 0x5C
    float m_sDrawMtx[2][4][4]; // offset 0x130, size 0x80
    float m_sEffMtx[4][4]; // offset 0x1B0, size 0x40
    float m_asBoardMtx[4][4][4]; // offset 0x1F0, size 0x100
    float m_sGearDrawMtx[4][4]; // offset 0x2F0, size 0x40
    class NNS_VECTORFAST m_sPosVecFast[2]; // offset 0x330, size 0x20
    class NNS_VECTORFAST m_sUpVecFast; // offset 0x350, size 0x10
    class NNS_VECTORFAST m_sPreUpVecFast; // offset 0x360, size 0x10
    class NNS_VECTORFAST m_sVelocityVecFast; // offset 0x370, size 0x10
    class NNS_VECTORFAST m_sSpeedVecFast; // offset 0x380, size 0x10
    class NNS_VECTORFAST m_sAirVecFast; // offset 0x390, size 0x10
    class NNS_VECTORFAST m_sVectorMoveVecFast; // offset 0x3A0, size 0x10
    class NNS_VECTORFAST m_sPathMoveVecFast; // offset 0x3B0, size 0x10
    class NNS_VECTORFAST m_sContactCharaDirVecFast; // offset 0x3C0, size 0x10
    class NNS_VECTORFAST m_sInertiaVecFast; // offset 0x3D0, size 0x10
    class NNS_VECTORFAST m_sInertiaDecayVecFast; // offset 0x3E0, size 0x10
    class NNS_VECTORFAST m_sFaceDirVecFast; // offset 0x3F0, size 0x10
    class NNS_VECTORFAST m_sContactVecFast; // offset 0x400, size 0x10
    class NNS_VECTORFAST m_sRelativeVecFast; // offset 0x410, size 0x10
    class NNS_VECTORFAST m_sExCamTargetPosVecFast; // offset 0x420, size 0x10
    class NNS_VECTORFAST m_sOffsetDrawVecFast; // offset 0x430, size 0x10
    class NNS_VECTORFAST m_sMoveNrmVecFast; // offset 0x440, size 0x10
    class stcInitData m_sInitData; // offset 0x450, size 0x30
    class stcInitData m_sBackUpData; // offset 0x480, size 0x30
    class clsPrfm m_cPrfm; // offset 0x4B0, size 0x110
    class clsPlayerMotion * m_pcMotion; // offset 0x5C0, size 0x4
    class clsSurface m_cSurface; // offset 0x5D0, size 0x20
    class clsGravity m_cGravity; // offset 0x5F0, size 0x130
    class clsGravity m_cBackUpGravity; // offset 0x720, size 0x130
    class clsPosturalCtrl m_cVelocity; // offset 0x850, size 0xB0
    class clsPosturalCtrl m_cPostural; // offset 0x900, size 0xB0
    class clsTrickManager m_cTrick; // offset 0x9B0, size 0x160
    class clsGravityActionManager m_cGravityActionManager; // offset 0xB10, size 0x50
    class clsControlMatrix m_cControlMatrix; // offset 0xB60, size 0x110
    class clsReaction m_cReaction; // offset 0xC70, size 0x40
    class clsPath m_cPath; // offset 0xCB0, size 0x60
    class clsFlyAction m_cFlyAction; // offset 0xD10, size 0x1C
    class clsRetPath m_cRetCoursePath; // offset 0xD2C, size 0x20
    class clsSlipStream m_cSlipStream; // offset 0xD50, size 0xD0
    class clsPlayerKey * m_pcKey; // offset 0xE20, size 0x4
    class clsComKey * m_pcAutoRunKey; // offset 0xE24, size 0x4
    class clsUserKey * m_pcUserKeyTmp; // offset 0xE28, size 0x4
    class clsCharacter * m_pcCharacter; // offset 0xE2C, size 0x4
    class clsGearCtrl * m_pcGearCtrl; // offset 0xE30, size 0x4
    class clsPlayerPhysic * m_pcPhysic; // offset 0xE34, size 0x4
    class clsLap * m_pcLap; // offset 0xE38, size 0x4
    class clsObject * m_pcGroundObject; // offset 0xE3C, size 0x4
    class clsOOList m_lstLightCollision; // offset 0xE40, size 0x14
    class clsFlag m_cSystemFlag; // offset 0xE54, size 0x4
    enum enmNo m_ePlayerNo; // offset 0xE58, size 0x4
    enum enmFlag m_eFlag; // offset 0xE5C, size 0x4
    enum enmStatus m_eStatus; // offset 0xE60, size 0x4
    enum enmStatus m_eStatusOld; // offset 0xE64, size 0x4
    enum enmStatus m_eStatusTrigger; // offset 0xE68, size 0x4
    enum enmStatus m_eStatusRemove; // offset 0xE6C, size 0x4
    enum enmActionType m_eActionType; // offset 0xE70, size 0x4
    enum enmActionType m_eOldActionType; // offset 0xE74, size 0x4
    enum enmMoveFlag m_eMoveFlag; // offset 0xE78, size 0x4
    float m_f32FrameRate; // offset 0xE7C, size 0x4
    float m_f32CurveRotateRate; // offset 0xE80, size 0x4
    float m_f32CurveMotionRate; // offset 0xE84, size 0x4
    float m_f32CurveRad; // offset 0xE88, size 0x4
    float m_f32CurveWaitFrame; // offset 0xE8C, size 0x4
    float m_f32vibrationCurveRate; // offset 0xE90, size 0x4
    float m_f32CurveFrame; // offset 0xE94, size 0x4
    float m_f32CentrifugalForce; // offset 0xE98, size 0x4
    float m_f32MinSpeed; // offset 0xE9C, size 0x4
    float m_f32MaxSpeed; // offset 0xEA0, size 0x4
    float m_f32Speed; // offset 0xEA4, size 0x4
    float m_f32Accele; // offset 0xEA8, size 0x4
    float m_f32SpeedRate; // offset 0xEAC, size 0x4
    float m_f32AdjustAcceleRate; // offset 0xEB0, size 0x4
    float m_f32AdjustMaxSpeed; // offset 0xEB4, size 0x4
    signed int m_s32NodeVibCycle; // offset 0xEB8, size 0x4
    float m_f32FaceRotateRate; // offset 0xEBC, size 0x4
    signed int m_s32RingNum; // offset 0xEC0, size 0x4
    signed int m_s32GoalRingNum; // offset 0xEC4, size 0x4
    float m_f32GoalRingRate; // offset 0xEC8, size 0x4
    signed int m_s32LinkCount; // offset 0xECC, size 0x4
    enum enmLinkType m_eLinkType; // offset 0xED0, size 0x4
    float m_f32Val; // offset 0xED4, size 0x4
    float m_f32ApproachVal; // offset 0xED8, size 0x4
    float m_af32ActionVal[3]; // offset 0xEDC, size 0xC
    float m_f32ObstacleFrame; // offset 0xEE8, size 0x4
    float m_f32InertiaDecayFrame; // offset 0xEEC, size 0x4
    signed int m_s32ActionMode; // offset 0xEF0, size 0x4
    enum enPlayerCtrlType m_eCtrlType; // offset 0xEF4, size 0x4
    enum enPlayerCtrlType m_eDefaultCtrlType; // offset 0xEF8, size 0x4
    signed char m_s8BaseMotionNo; // offset 0xEFC, size 0x1
    unsigned char m_u8CurrentDrawMtxNo; // offset 0xEFD, size 0x1
    unsigned char m_u8BadTrackCnt; // offset 0xEFE, size 0x1
    signed char m_s8Ranking; // offset 0xEFF, size 0x1
    signed int m_s32FalseStartShockFrame; // offset 0xF00, size 0x4
    signed int m_s32FalseStartDamageFrame; // offset 0xF04, size 0x4
    float m_f32DamageFrame; // offset 0xF08, size 0x4
    float m_f32InvincibilityFrame; // offset 0xF0C, size 0x4
    float m_f32TrapColorBallFrame; // offset 0xF10, size 0x4
    float m_f32TrapColorBallDropFrame; // offset 0xF14, size 0x4
    unsigned int m_u32TrapColorBallDropCnt; // offset 0xF18, size 0x4
    unsigned int m_u32TrapColorBallDropMaxCnt; // offset 0xF1C, size 0x4
    float m_f32TrapPartsLockFrame; // offset 0xF20, size 0x4
    float m_f32EggConfettiFrame; // offset 0xF24, size 0x4
    float m_f32EggConfettiDropFrame; // offset 0xF28, size 0x4
    float m_f32NightsAtkEffectFrame; // offset 0xF2C, size 0x4
    float m_f32NightsAtkEffectDropFrame; // offset 0xF30, size 0x4
    unsigned int m_u32NightsAtkEffectDropCnt; // offset 0xF34, size 0x4
    float m_f32DriftSideSign; // offset 0xF38, size 0x4
    float m_f32DriftOffsetPosturalRotate; // offset 0xF3C, size 0x4
    float m_f32DriftStartSpeed; // offset 0xF40, size 0x4
    float m_f32DriftLimitSpeed; // offset 0xF44, size 0x4
    float m_f32DriftDashSpeed; // offset 0xF48, size 0x4
    float m_f32DriftHandlingRate; // offset 0xF4C, size 0x4
    float m_f32DriftFrame; // offset 0xF50, size 0x4
    unsigned int m_u32DriftDashType; // offset 0xF54, size 0x4
    float m_f32ReverseRestartCountFrame; // offset 0xF58, size 0x4
    float m_f32ReverseStartCountFrame; // offset 0xF5C, size 0x4
    class clsTask * m_apcLoopParticle[4]; // offset 0xF60, size 0x10
    class clsTask * m_apcLoopEffect[4]; // offset 0xF70, size 0x10
    class NNS_VECTORFAST m_asNodePos[8]; // offset 0xF80, size 0x80
    float m_asNodeMatrix[8][4][4]; // offset 0x1000, size 0x200
    class clsBackLineEffectTask * m_pcBackLineTask; // offset 0x1200, size 0x4
    class clsVaporTrail_Task * m_pcVaporTrailTask; // offset 0x1204, size 0x4
    class clsVaporTrail_Task * m_pcSlipStreamTask; // offset 0x1208, size 0x4
    class clsWeather_Task * m_pcWeatherTask; // offset 0x120C, size 0x4
    class clsCharaVoice m_cCharaVoice; // offset 0x1210, size 0x10
    enum enmRet m_aeClipperRet[4]; // offset 0x1220, size 0x10
    float m_of32DrawClipDistx2; // offset 0x1230, size 0x4
    float m_of32MotionClipDistx1; // offset 0x1234, size 0x4
    float m_f32CamMostDistRet; // offset 0x1238, size 0x4
    float m_f32RandMotionFrame; // offset 0x123C, size 0x4
    float m_f32RankChangeMotionFrame; // offset 0x1240, size 0x4
    unsigned int m_u32CamDelayRqType; // offset 0x1244, size 0x4
    float m_f32CamDelayRqTime; // offset 0x1248, size 0x4
    float m_f32AttackFrame; // offset 0x124C, size 0x4
    float m_f32FlightFrame; // offset 0x1250, size 0x4
    float m_f32SystemScale; // offset 0x1254, size 0x4
    class clsModelType_OB_TX * m_opcResidenceTexModel_PS2; // offset 0x1258, size 0x4
    unsigned short m_u16ReturnLineNo; // offset 0x125C, size 0x2
    unsigned char m_bForcedUpdateFlag; // offset 0x125E, size 0x1
    unsigned char m_bDrawVisible; // offset 0x125F, size 0x1
    unsigned char m_bMotionVisible; // offset 0x1260, size 0x1
    unsigned char m_bDrawFlag; // offset 0x1261, size 0x1
    signed char m_s8Channel_ICS; // offset 0x1262, size 0x1
    signed char m_s8FollowNum; // offset 0x1263, size 0x1
    unsigned char m_u8BaseLightNo; // offset 0x1264, size 0x1
    unsigned char m_u8LightNo; // offset 0x1265, size 0x1
    unsigned char m_u8BackUpLightNo; // offset 0x1266, size 0x1
    unsigned char m_u8BackUpFogNo; // offset 0x1267, size 0x1
    signed char m_s8OldPathNo; // offset 0x1268, size 0x1
    unsigned char m_bDisableFog; // offset 0x1269, size 0x1
    signed char m_s8CameraNo; // offset 0x126A, size 0x1
    signed char m_s8ViewNo; // offset 0x126B, size 0x1
    unsigned char m_u8JumpCount; // offset 0x126C, size 0x1
    signed char m_s8CurAttackTarget; // offset 0x126D, size 0x1
    float m_f32Attack_Speed; // offset 0x1270, size 0x4
    float m_f32Attack_Accele; // offset 0x1274, size 0x4
    float m_f32Attack_SpeedRate; // offset 0x1278, size 0x4
    enum enmAttackLR m_eTargetSide; // offset 0x127C, size 0x4
    unsigned char m_bDamageFlag; // offset 0x1280, size 0x1
    class clsBaseEffect_Task * m_pcDmgEffectTask; // offset 0x1284, size 0x4
    class clsBaseEffect_Task * m_pcDmgEffectTask2; // offset 0x1288, size 0x4
    unsigned char m_bIsAttackDmgScale; // offset 0x128C, size 0x1
    float m_f32AttackDmgScale; // offset 0x1290, size 0x4
    signed int m_s32SuperSonic; // offset 0x1294, size 0x4
    enum enmComType m_eComType; // offset 0x1298, size 0x4
    float m_f32BoostAttackFrame; // offset 0x129C, size 0x4
    float m_f32GpRateEffectCnt; // offset 0x12A0, size 0x4
    float m_f32TrickXNegaWaitFrame; // offset 0x12A4, size 0x4
    unsigned char m_bTrickXNegaFlg; // offset 0x12A8, size 0x1
    signed int m_s32GoalMotionRequest; // offset 0x12AC, size 0x4
    class clsLimitTime m_cRingLimitTime; // offset 0x12B0, size 0x14
    class clsLimitTime m_cRingGravityLimitTime; // offset 0x12C4, size 0x14
    float m_f32ItemFrame; // offset 0x12D8, size 0x4
    signed int m_s32ReplayCamIdx; // offset 0x12DC, size 0x4
    signed int m_s32AutoWallRunPathNo; // offset 0x12E0, size 0x4
    class clsDashPanel_Obj * m_pcDashPanel; // offset 0x12E4, size 0x4
    class clsEggConfetti * m_pcEggConfetti; // offset 0x12E8, size 0x4
    class clsNightsAtkEffect * m_pcNightsAtkEffect; // offset 0x12EC, size 0x4
};
class stcCtrlData {
    // total size: 0x50
public:
    char ac8Name[16]; // offset 0x0, size 0x10
    char ac8BinName[8]; // offset 0x10, size 0x8
    unsigned int u32UsableBit; // offset 0x18, size 0x4
    float f32Weight; // offset 0x1C, size 0x4
    enum enmSelectType eSelectType; // offset 0x20, size 0x4
    enum enmRingTableType eRingTableType; // offset 0x24, size 0x4
    unsigned short u16GearPrice; // offset 0x28, size 0x2
    enum enmGear aeGear[4]; // offset 0x2C, size 0x10
    enum enmGearPrfm aePrfmNo[4]; // offset 0x3C, size 0x10
    unsigned char aIsLockedBit[4]; // offset 0x4C, size 0x4
};
class clsBaseTrickAction {
    // total size: 0x4
};
class hkSmallArray {
    // total size: 0x8
public:
    class hkCollisionListener * * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
class hkRootCdPoint {
    // total size: 0x30
public:
    class hkContactPoint m_contact; // offset 0x0, size 0x20
    class hkCollidable * m_rootCollidableA; // offset 0x20, size 0x4
    unsigned int m_shapeKeyA; // offset 0x24, size 0x4
    class hkCollidable * m_rootCollidableB; // offset 0x28, size 0x4
    unsigned int m_shapeKeyB; // offset 0x2C, size 0x4
};
class stcTimePack {
    // total size: 0x4
public:
    unsigned char u8Minutes; // offset 0x0, size 0x1
    unsigned char u8Sec; // offset 0x1, size 0x1
    unsigned short u16MSec; // offset 0x2, size 0x2
};
enum enmStartType {
    START_TYPE__JUMP = 0,
    START_TYPE__FLIGHT = 1,
};
class stcPlayTable {
    // total size: 0x10
public:
    float f32StartFrame; // offset 0x0, size 0x4
    float f32LinkFrame; // offset 0x4, size 0x4
    enum enmStatus eStatus; // offset 0x8, size 0x4
    signed char s8MotionNo; // offset 0xC, size 0x1
    signed char s8MotionType; // offset 0xD, size 0x1
    unsigned char au8Reserve[2]; // offset 0xE, size 0x2
};
class hkArray {
    // total size: 0xC
public:
    class CollisionEntry * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class clsGearBaseParts : public clsGear {
    // total size: 0x50
};
enum enmType {
    TYPE_NULL = 0,
    TYPE_NORMAL = 1,
    TYPE_GCTRL = 2,
    TYPE_STEEP = 3,
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class clsFlag {
    // total size: 0x4
public:
    enum enmSystemFlag m_tData; // offset 0x0, size 0x4
};
enum enmType {
    TYPE_NULL = 0,
    TYPE_DIVE = 1,
    TYPE_CTRL_SLIDE = 2,
    TYPE_CTRL_TRICK = 3,
    TYPE_CTRL_FLIGHT = 4,
    MAX_TYPE_NUM = 5,
};
class generic_iterator {
    // total size: 0x4
public:
    class node * node_; // offset 0x0, size 0x4
};
class clsLap {
    // total size: 0x40
public:
    unsigned int m_u32GoalNum; // offset 0x4, size 0x4
    class clsPlayerTask * m_pcPlayer; // offset 0x8, size 0x4
    class stcRecord * m_pasLapTime; // offset 0xC, size 0x4
    class stcRecord m_sRecord; // offset 0x10, size 0x4
    class stcRecord m_sTimeAttackRecord; // offset 0x14, size 0x4
    class stcRecord m_sTimeAttackTime; // offset 0x18, size 0x4
    unsigned int m_u32LastLapTimeMSec; // offset 0x1C, size 0x4
    signed int m_s32Lap; // offset 0x20, size 0x4
    signed int m_s32OldLap; // offset 0x24, size 0x4
    signed int m_s32LapNum; // offset 0x28, size 0x4
    signed int m_s32LapOld; // offset 0x2C, size 0x4
    signed int m_s32DefLap; // offset 0x30, size 0x4
    float * m_paf32OldGoalLineDotProduct; // offset 0x34, size 0x4
    float m_f32RankingPoint; // offset 0x38, size 0x4
    signed int m_s32MaxLap; // offset 0x3C, size 0x4
};
class hkCollisionDispatcher : public hkReferencedObject {
    // total size: 0x1C60
public:
    class hkCollisionAgent * (* m_defaultCollisionAgent)(class hkCdBody &, class hkCdBody &, class hkCollisionInput &, class hkContactMgr *); // offset 0x8, size 0x4
    class hkContactMgrFactory * m_contactMgrFactory[8][8]; // offset 0xC, size 0x100
    unsigned int m_hasAlternateType[32]; // offset 0x110, size 0x80
    signed int m_numAgent2Types; // offset 0x190, size 0x4
    unsigned char m_agent2Types[32][32]; // offset 0x1A0, size 0x400
    unsigned char m_agent2TypesPred[32][32]; // offset 0x5A0, size 0x400
    class AgentFuncs m_agent2Func[64]; // offset 0x9A0, size 0x500
    signed int m_numAgent3Types; // offset 0xEA0, size 0x4
    unsigned char m_agent3Types[32][32]; // offset 0xEB0, size 0x400
    unsigned char m_agent3TypesPred[32][32]; // offset 0x12B0, size 0x400
    class Agent3FuncsIntern m_agent3Func[16]; // offset 0x16B0, size 0x340
    signed char m_collisionQualityTable[9][9]; // offset 0x19F0, size 0x51
    class hkCollisionQualityInfo m_collisionQualityInfo[8]; // offset 0x1A50, size 0x1E0
    class hkBool m_collisionAgentRegistered; // offset 0x1C30, size 0x1
    class hkBool m_agent3Registered; // offset 0x1C31, size 0x1
    class hkBool m_checkEnabled; // offset 0x1C32, size 0x1
    class hkArray m_shapeInheritance; // offset 0x1C34, size 0xC
    class DebugEntry (* m_debugAgent2Table)[32][32]; // offset 0x1C40, size 0x4
    class DebugEntry (* m_debugAgent2TablePred)[32][32]; // offset 0x1C44, size 0x4
    class DebugEntry (* m_debugAgent3Table)[32][32]; // offset 0x1C48, size 0x4
    class DebugEntry (* m_debugAgent3TablePred)[32][32]; // offset 0x1C4C, size 0x4
    float m_expectedMaxLinearVelocity; // offset 0x1C50, size 0x4
    float m_expectedMinPsiDeltaTime; // offset 0x1C54, size 0x4
};
class CollisionEntry {
    // total size: 0x8
public:
    class hkAgentNnEntry * m_agentEntry; // offset 0x0, size 0x4
    class hkLinkedCollidable * m_partner; // offset 0x4, size 0x4
};
enum hkShapeType {
    HK_SHAPE_INVALID = 0,
    HK_SHAPE_CONVEX = 1,
    HK_FIRST_SHAPE_TYPE = 1,
    HK_SHAPE_COLLECTION = 2,
    HK_SHAPE_SPHERE = 3,
    HK_SHAPE_CYLINDER = 4,
    HK_SHAPE_TRIANGLE = 5,
    HK_SHAPE_BOX = 6,
    HK_SHAPE_CAPSULE = 7,
    HK_SHAPE_CONVEX_VERTICES = 8,
    HK_SHAPE_PACKED_CONVEX_VERTICES = 9,
    HK_SHAPE_LIST = 10,
    HK_SHAPE_MOPP = 11,
    HK_SHAPE_MOPP_EMBEDDED = 12,
    HK_SHAPE_CONVEX_TRANSLATE = 13,
    HK_SHAPE_CONVEX_TRANSFORM = 14,
    HK_SHAPE_EXTENDED_MESH = 15,
    HK_SHAPE_MAX_ID_SPU = 16,
    HK_SHAPE_CONVEX_PIECE = 17,
    HK_SHAPE_MULTI_SPHERE = 18,
    HK_SHAPE_CONVEX_LIST = 19,
    HK_SHAPE_TRIANGLE_COLLECTION = 20,
    HK_SHAPE_BV_TREE = 21,
    HK_SHAPE_MULTI_RAY = 22,
    HK_SHAPE_HEIGHT_FIELD = 23,
    HK_SHAPE_SAMPLED_HEIGHT_FIELD = 24,
    HK_SHAPE_TRI_PATCH = 25,
    HK_SHAPE_SPHERE_REP = 26,
    HK_SHAPE_BV = 27,
    HK_SHAPE_PLANE = 28,
    HK_SHAPE_TRANSFORM = 29,
    HK_SHAPE_PHANTOM_CALLBACK = 30,
    HK_SHAPE_USER0 = 31,
    HK_SHAPE_USER1 = 32,
    HK_SHAPE_USER2 = 33,
    HK_SHAPE_MAX_ID = 34,
    HK_SHAPE_ALL = -1,
};
enum LastProcessingStep {
    INTEGRATE = 0,
    COLLIDE = 1,
};
class hkPadSpu {
    // total size: 0x4
public:
    class hkProcessCdPoint * m_storage; // offset 0x0, size 0x4
};
class GskFlags {
    // total size: 0x4
public:
    unsigned char m_cylinderAgentFlags; // offset 0x0, size 0x1
    unsigned char m_enableContactTims; // offset 0x1, size 0x1
    unsigned char m_convexListInGskMode; // offset 0x2, size 0x1
    unsigned char m_processFunctionCalled; // offset 0x3, size 0x1
};
class clsNightsAtkEffect {
    // total size: 0x90
public:
    class clsPlayerTask * m_pcPlayer; // offset 0x4, size 0x4
    signed short m_s16Alpha; // offset 0x8, size 0x2
    float m_f32ScrollSpeed; // offset 0xC, size 0x4
    float m_f32LifeFrame; // offset 0x10, size 0x4
    unsigned int m_u32ViewNo; // offset 0x14, size 0x4
    class NNS_PRIM2D_PCT m_sPrimitive[6]; // offset 0x18, size 0x78
};
class NNS_OBJECT {
    // total size: 0x58
public:
    class NNS_VECTOR Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
    signed int nMaterial; // offset 0x10, size 0x4
    class NNS_MATERIALPTR * pMatPtrList; // offset 0x14, size 0x4
    signed int nVtxList; // offset 0x18, size 0x4
    class NNS_VTXLISTPTR * pVtxListPtrList; // offset 0x1C, size 0x4
    signed int nPrimList; // offset 0x20, size 0x4
    class NNS_PRIMLISTPTR * pPrimListPtrList; // offset 0x24, size 0x4
    signed int nNode; // offset 0x28, size 0x4
    signed int MaxNodeDepth; // offset 0x2C, size 0x4
    union { // inferred
        class NNS_NODE * pNodeList; // offset 0x30, size 0x4
        class NNS_NODEEXPTR * pNodeExPtrList; // offset 0x30, size 0x4
    };
    signed int nMtxPal; // offset 0x34, size 0x4
    signed int nSubobj; // offset 0x38, size 0x4
    class NNS_SUBOBJ * pSubobjList; // offset 0x3C, size 0x4
    signed int nTex; // offset 0x40, size 0x4
    unsigned int fType; // offset 0x44, size 0x4
    signed int Version; // offset 0x48, size 0x4
    float BoundingBoxX; // offset 0x4C, size 0x4
    float BoundingBoxY; // offset 0x50, size 0x4
    float BoundingBoxZ; // offset 0x54, size 0x4
};
class hkEnum {
    // total size: 0x1
public:
    unsigned char m_storage; // offset 0x0, size 0x1
};
class clsOOList : public list {
    // total size: 0x14
};
class hkConstraintInternal {
    // total size: 0x24
public:
    class hkConstraintInstance * m_constraint; // offset 0x0, size 0x4
    class hkEntity * m_entities[2]; // offset 0x4, size 0x8
    class hkConstraintAtom * m_atoms; // offset 0xC, size 0x4
    unsigned short m_atomsSize; // offset 0x10, size 0x2
    unsigned char m_callbackRequest; // offset 0x12, size 0x1
    class hkEnum m_priority; // offset 0x13, size 0x1
    unsigned short m_sizeOfSchemas; // offset 0x14, size 0x2
    unsigned short m_numSolverResults; // offset 0x16, size 0x2
    unsigned short m_numSolverElemTemps; // offset 0x18, size 0x2
    unsigned char m_whoIsMaster; // offset 0x1A, size 0x1
    class hkBool m_isNormalType; // offset 0x1B, size 0x1
    void * m_runtime; // offset 0x1C, size 0x4
    unsigned short m_runtimeSize; // offset 0x20, size 0x2
    unsigned short m_slaveIndex; // offset 0x22, size 0x2
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkAgentNnSector * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class _NNS_TEXLIST {
    // total size: 0x8
public:
    signed int nTex; // offset 0x0, size 0x4
    class _NNS_TEXINFO * pTexInfoList; // offset 0x4, size 0x4
};
enum enmSystemFlag {
    SYSTEM_FLAG__CLEAR = 0,
    SYSTEM_FLAG__OBJ_PORTAL_FORWARD = 1,
};
class hkLinkedCollidable : public hkCollidable {
    // total size: 0x30
public:
    class hkArray m_collisionEntries; // offset 0x24, size 0xC
};
class Fuid {
    // total size: 0x10
public:
    unsigned int m_0; // offset 0x0, size 0x4
    unsigned int m_1; // offset 0x4, size 0x4
    unsigned int m_2; // offset 0x8, size 0x4
    unsigned int m_3; // offset 0xC, size 0x4
};
class hkMotionState {
    // total size: 0xC0
public:
    class hkTransform m_transform; // offset 0x0, size 0x40
    class hkSweptTransform m_sweptTransform; // offset 0x40, size 0x50
    class hkVector4 m_deltaAngle; // offset 0x90, size 0x10
    float m_objectRadius; // offset 0xA0, size 0x4
    float m_maxLinearVelocity; // offset 0xA4, size 0x4
    float m_maxAngularVelocity; // offset 0xA8, size 0x4
    float m_linearDamping; // offset 0xAC, size 0x4
    float m_angularDamping; // offset 0xB0, size 0x4
    unsigned short m_deactivationClass; // offset 0xB4, size 0x2
    unsigned short m_deactivationCounter; // offset 0xB6, size 0x2
    unsigned int m_deactivationRefOrientation[2]; // offset 0xB8, size 0x8
};
class hkAgentNnSector {
    // total size: 0x200
public:
    unsigned char m_data[512]; // offset 0x0, size 0x200
};
class hkEntityDeactivator : public hkReferencedObject {
    // total size: 0x8
};
enum enmGear {
    GEAR_NON = -1,
    GEAR_USE_MODEL_START = 0,
    GEAR_BOARD_START = 0,
    GEAR_DUMMY_BOARD = 0,
    GEAR_BOARD = 1,
    GEAR_SUPER_BOARD = 2,
    GEAR_MAG = 3,
    GEAR_THROTTLE = 4,
    GEAR_GSHOT = 5,
    GEAR_GAMBLER = 6,
    GEAR_GC_BOOSTER = 7,
    GEAR_LEGEND = 8,
    GEAR_OMNITEMPOS_BOARD = 9,
    GEAR_BIKE_START = 10,
    GEAR_BIKE = 10,
    GEAR_SUPER_HANGON = 11,
    GEAR_RESERVE_TANK = 12,
    GEAR_MASTER_OFF_ROAD = 13,
    GEAR_OMNITEMPOS_BIKE = 14,
    GEAR_AIRRIDE_START = 15,
    GEAR_AIRRIDE = 15,
    GEAR_ANGELDEVIL = 16,
    GEAR_OMNITEMPOS_AIRRIDE = 17,
    GEAR_ANGELDEVIL_CHANGE = 18,
    GEAR_SURFING_START = 19,
    GEAR_SURFING = 19,
    GEAR_BINGO_STAR = 20,
    GEAR_WINDCATCHER = 21,
    GEAR_WHEEL_START = 22,
    GEAR_WHEEL = 22,
    GEAR_MONEY_CRISIS = 23,
    GEAR_BIG_BANG = 24,
    GEAR_MASTER_OFF_ROAD_WHELL = 25,
    GEAR_SPECIAL_START = 26,
    GEAR_SP_DURABILITY = 26,
    GEAR_SP_ALL_PARAM_UP = 27,
    GEAR_SP_ATTACK_TIME_UP = 28,
    GEAR_SP_GP_INFINITY = 29,
    GEAR_EFFECT_PARTS_START = 30,
    GEAR_SP_AGP = 30,
    GEAR_SP_MAX_SPEED = 31,
    GEAR_SP_1ST_SPEED = 32,
    GEAR_SP_GC_SPEED = 33,
    GEAR_SP_ADD_TRICK = 34,
    GEAR_SP_GHOST = 35,
    GEAR_SP_AUTO_WALL_RUN = 36,
    GEAR_SP_RING_CAPACITY = 37,
    GEAR_SP_MAG_BARRIER = 38,
    GEAR_SP_ITEM_RANK_UP = 39,
    GEAR_SP_SOUND_CHANGE = 40,
    GEAR_SP_TRAP_VIEW = 41,
    GEAR_SP_TRAP_CTRL = 42,
    GEAR_SP_TRAP_SPEED = 43,
    GEAR_SP_GP_GET_RATE = 44,
    GEAR_SP_THROTTLE = 45,
    GEAR_SP_TANK = 46,
    GEAR_SKATE_START = 47,
    GEAR_SKATE = 47,
    GEAR_RAILLINKER = 48,
    GEAR_WANTED = 49,
    GEAR_GRIND_START = 50,
    GEAR_GRIND = 50,
    GEAR_OMNITEMPOS_GRIND = 51,
    GEAR_EMPTY_START = 52,
    GEAR_EMPTY_GP = 52,
    GEAR_EMPTY_HD = 53,
    GEAR_MAX = 54,
    GEAR_BOARD_END = 9,
    GEAR_BIKE_END = 14,
    GEAR_AIRRIDE_END = 18,
    GEAR_SURFING_END = 21,
    GEAR_WHEEL_END = 25,
    GEAR_SPECIAL_END = 46,
    GEAR_EFFECT_PARTS_END = 46,
    GEAR_SKATE_END = 49,
    GEAR_GRIND_END = 51,
    GEAR_EMPTY_END = 53,
    GEAR_USE_MODEL_END = 29,
};
enum enmSoundStatus {
    SOUND_STATUS_NULL = 0,
    SOUND_STATUS_START = 1,
    SOUND_STATUS_CANCEL = 2,
    SOUND_STATUS_MOVE = 3,
    SOUND_STATUS_END = 4,
};
class clsFlag {
    // total size: 0x4
public:
    enum enmFlag m_tData; // offset 0x0, size 0x4
};
class hkSmallArray {
    // total size: 0x8
public:
    class hkAction * * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
class allocator {
    // total size: 0x1
};
enum enmLinkType {
    LINK_TYPE_NULL = 0,
    LINK_TYPE_SPEED = 1,
    LINK_TYPE_FLY = 2,
    LINK_TYPE_POWER = 3,
};
class hkInplaceArray : public hkArray {
    // total size: 0x10
public:
    class hkAgentNnSector * m_storage[1]; // offset 0xC, size 0x4
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
class hkContactPoint {
    // total size: 0x20
public:
    class hkVector4 m_position; // offset 0x0, size 0x10
    class hkVector4 m_separatingNormal; // offset 0x10, size 0x10
};
enum enmComType {
    COM_AI_TYPE_LEADER = 0,
    COM_AI_TYPE_NORMAL = 1,
    MAX_COM_AI_TYPE = 2,
};
class hkArray {
    // total size: 0xC
public:
    class hkIslandPostCollideListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class clsBaseEffect_Task : public clsTask {
    // total size: 0xD0
public:
    float m_sTrsMtx[4][4]; // offset 0x60, size 0x40
    float m_f32MotionFrame; // offset 0xA0, size 0x4
    float m_f32MatMotionFrame; // offset 0xA4, size 0x4
    float m_f32WaitFrame; // offset 0xA8, size 0x4
    float m_f32DrawScale; // offset 0xAC, size 0x4
    class clsModelType_OB_TX_MO_MA * m_pcModel; // offset 0xB0, size 0x4
    unsigned int m_eFlag; // offset 0xB4, size 0x4
    enum enmNo m_ePlayerNo; // offset 0xB8, size 0x4
    enum enmCalcNodePos m_eBornNo; // offset 0xBC, size 0x4
    unsigned int m_u32ViewNo; // offset 0xC0, size 0x4
    signed int m_s32RotZ; // offset 0xC4, size 0x4
};
class stcData {
    // total size: 0x54
public:
    float f32Speed[3]; // offset 0x0, size 0xC
    float f32Accele[3]; // offset 0xC, size 0xC
    float f32RotateSpeed; // offset 0x18, size 0x4
    float f32RotateAccele; // offset 0x1C, size 0x4
    float f32Grip; // offset 0x20, size 0x4
    float f32JumpSpeed; // offset 0x24, size 0x4
    float f32JumpAccele; // offset 0x28, size 0x4
    float f32Durability; // offset 0x2C, size 0x4
    unsigned int u32Ability; // offset 0x30, size 0x4
    float f32MaxAgp; // offset 0x34, size 0x4
    float f32GCtrlDischargeSpeed; // offset 0x38, size 0x4
    float f32GDiveSpeedRate; // offset 0x3C, size 0x4
    float f32GPTakeRate; // offset 0x40, size 0x4
    float f32GCtrlGpUseRate; // offset 0x44, size 0x4
    float f32GDiveGpUseRate; // offset 0x48, size 0x4
    signed int s32AttackEnableFrame; // offset 0x4C, size 0x4
    signed short s16RingCapacity; // offset 0x50, size 0x2
    signed char s8TrickRank; // offset 0x52, size 0x1
    signed char s8ItemRank; // offset 0x53, size 0x1
};
class hkStepInfo {
    // total size: 0x10
public:
    class hkPadSpu m_startTime; // offset 0x0, size 0x4
    class hkPadSpu m_endTime; // offset 0x4, size 0x4
    class hkPadSpu m_deltaTime; // offset 0x8, size 0x4
    class hkPadSpu m_invDeltaTime; // offset 0xC, size 0x4
};
class clsRetPath {
    // total size: 0x20
public:
    unsigned short m_u16LineNo[8]; // offset 0x0, size 0x10
    unsigned short m_u16LineNum; // offset 0x10, size 0x2
    unsigned short m_u16ActiveLineNo; // offset 0x12, size 0x2
    unsigned short m_u16OldLineNo; // offset 0x14, size 0x2
    float m_f32DotPro; // offset 0x18, size 0x4
    float m_f32DotPro_Deg; // offset 0x1C, size 0x4
};
class clsFlipTrickAction : public clsBaseTrickAction {
    // total size: 0x4
};
enum enmFlag {
    FLAG_INFINI_CTRL = 1,
    FLAG_INFINI_DIVE = 2,
    FLAG_CLEAR = 0,
    FLAG_FULL = -1,
};
class hkProperty {
    // total size: 0x10
public:
    unsigned int m_key; // offset 0x0, size 0x4
    unsigned int m_alignmentPadding; // offset 0x4, size 0x4
    class hkPropertyValue m_value; // offset 0x8, size 0x8
};
class NNS_PRIM2D_PCT {
    // total size: 0x14
public:
    class NNS_VECTOR2D Pos; // offset 0x0, size 0x8
    unsigned int Col; // offset 0x8, size 0x4
    class NNS_TEXCOORD Tex; // offset 0xC, size 0x8
};
class hkCdBody {
    // total size: 0x10
public:
    class hkShape * m_shape; // offset 0x0, size 0x4
    unsigned int m_shapeKey; // offset 0x4, size 0x4
    void * m_motion; // offset 0x8, size 0x4
    class hkCdBody * m_parent; // offset 0xC, size 0x4
};
class hkShapePhantom : public hkPhantom {
    // total size: 0x130
public:
    class hkMotionState m_motionState; // offset 0x70, size 0xC0
};
class hkConstraintInfo {
    // total size: 0x10
public:
    signed int m_maxSizeOfSchema; // offset 0x0, size 0x4
    signed int m_sizeOfSchemas; // offset 0x4, size 0x4
    signed int m_numSolverResults; // offset 0x8, size 0x4
    signed int m_numSolverElemTemps; // offset 0xC, size 0x4
};
enum enmActionStatus {
    ACTION_STATUS_NULL = 0,
    ACTION_STATUS_INIT = 1,
    ACTION_STATUS_READY = 2,
    ACTION_STATUS_START = 3,
    ACTION_STATUS_MOVE = 4,
    ACTION_STATUS_FALL = 5,
};
class stcBingoControl {
    // total size: 0x4
public:
    signed char as8Rank[3]; // offset 0x0, size 0x3
    signed char s8RankNo; // offset 0x3, size 0x1
};
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
};
class ContactRef {
    // total size: 0xC
public:
    class hkProcessCdPoint * m_contactPoint; // offset 0x0, size 0x4
    class hkAgentEntry * m_agentEntry; // offset 0x4, size 0x4
    void * m_agentData; // offset 0x8, size 0x4
};
enum enmColUpdateType {
    COL_UPDATE_ALLFRAME = 0,
    COL_UPDATE_ONEFRAME = 1,
    COL_UPDATE_NOT_ONEFRAME = 2,
};
class clsGravityActionManager {
    // total size: 0x50
public:
    class clsPlayerTask * m_pcPlayer; // offset 0x0, size 0x4
    class hkSimpleShapePhantom * m_pcPhantom; // offset 0x4, size 0x4
    class clsBaseGravityAction * m_pcActions[3]; // offset 0x8, size 0xC
    class clsAdjustGravityAction_Object * m_pcAdjustGravityAction; // offset 0x14, size 0x4
    enum enmAction m_eAction; // offset 0x18, size 0x4
    enum enmType m_eType; // offset 0x1C, size 0x4
    enum enmSoundStatus m_eSoundStatus; // offset 0x20, size 0x4
    enum enmActionStatus m_eActionStatus; // offset 0x24, size 0x4
    class clsFlag m_cFlag; // offset 0x28, size 0x4
    float m_f32Point; // offset 0x2C, size 0x4
    float m_f32LinkBonusPoint; // offset 0x30, size 0x4
    float m_f32DrawPoint; // offset 0x34, size 0x4
    signed int m_s32LinkNum; // offset 0x38, size 0x4
    signed int m_s32BreakNum; // offset 0x3C, size 0x4
    float m_f32Radius; // offset 0x40, size 0x4
    float m_f32CtrlFrame; // offset 0x44, size 0x4
    float m_f32InvalidGCtrlFrame; // offset 0x48, size 0x4
    float m_f32DefaultInvalidGCtrlFrame; // offset 0x4C, size 0x4
};
class clsDrawAttackEffect_Task : public clsTask {
    // total size: 0x58
public:
    class clsCharacter * m_pcChara; // offset 0x54, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class clsFlag {
    // total size: 0x4
public:
    enum enmInfo m_tData; // offset 0x0, size 0x4
};
class _NNS_TEXINFO {
    // total size: 0x50
public:
    class NVS_SVROBJ SvrObj; // offset 0x0, size 0x30
    void * pMainMemory; // offset 0x30, size 0x4
    void * pLocalMemory; // offset 0x34, size 0x4
    unsigned int nLocalBytes; // offset 0x38, size 0x4
    unsigned int nDmaTagBytes; // offset 0x3C, size 0x4
    unsigned int GlobalIndex; // offset 0x40, size 0x4
    unsigned int Bank; // offset 0x44, size 0x4
    unsigned short MinFilter; // offset 0x48, size 0x2
    unsigned short MagFilter; // offset 0x4A, size 0x2
    unsigned int Flag; // offset 0x4C, size 0x4
};
class sceGsTex1 {
    // total size: 0x8
public:
    unsigned long LCM : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 1; // offset 0x0, size 0x4
    unsigned long MXL : 3; // offset 0x0, size 0x4
    unsigned long MMAG : 1; // offset 0x0, size 0x4
    unsigned long MMIN : 3; // offset 0x0, size 0x4
    unsigned long MTBA : 1; // offset 0x0, size 0x4
    unsigned long pad10 : 9; // offset 0x0, size 0x4
    unsigned long L : 2; // offset 0x0, size 0x4
    unsigned long pad21 : 11; // offset 0x0, size 0x4
    unsigned long K : 12; // offset 0x0, size 0x4
    unsigned long pad44 : 20; // offset 0x0, size 0x4
};
class clsPrfm {
    // total size: 0x110
public:
    class stcData m_sBase; // offset 0x0, size 0x54
    class stcData m_sWalk; // offset 0x54, size 0x54
    class stcData m_sData; // offset 0xA8, size 0x54
    class clsGearCtrl * m_pcGearCtrl; // offset 0xFC, size 0x4
    float m_f32WeightRate; // offset 0x100, size 0x4
    float m_f32InfiniGpFrame; // offset 0x104, size 0x4
    float m_f32AdjustSpeedRate; // offset 0x108, size 0x4
    float m_f32AdjustAcceleRate; // offset 0x10C, size 0x4
};
class clsReaction {
    // total size: 0x40
public:
    class NNS_VECTORFAST m_sWallVecFast; // offset 0x0, size 0x10
    class clsPlayerTask * m_pcPlayer; // offset 0x10, size 0x4
    class clsPlaySe_2D * m_pcPlaySe2D; // offset 0x14, size 0x4
    float m_f32EffectFrame; // offset 0x18, size 0x4
    float m_f32EffectSubFrame; // offset 0x1C, size 0x4
    enum enmWallType m_eWallType; // offset 0x20, size 0x4
    enum enmGDiveType m_eGDiveType; // offset 0x24, size 0x4
    signed char m_s8WallHitCount; // offset 0x28, size 0x1
    class vector m_vecColInfo; // offset 0x2C, size 0xC
};
class hkPadSpu {
    // total size: 0x4
public:
    signed int m_storage; // offset 0x0, size 0x4
};
class DebugEntry {
    // total size: 0x3
public:
    char m_typeA; // offset 0x0, size 0x1
    char m_typeB; // offset 0x1, size 0x1
    char m_priority; // offset 0x2, size 0x1
};
class hkSimpleShapePhantom : public hkShapePhantom {
    // total size: 0x140
public:
    class hkArray m_collisionDetails; // offset 0x130, size 0xC
};
class hkWorldMaintenanceMgr {
    // total size: 0x0
};
class hkEntity : public hkWorldObject {
    // total size: 0x200
public:
    class hkMaterial m_material; // offset 0x58, size 0xC
    void * m_breakOffPartsUtil; // offset 0x64, size 0x4
    unsigned int m_solverData; // offset 0x68, size 0x4
    unsigned short m_storageIndex; // offset 0x6C, size 0x2
    unsigned short m_processContactCallbackDelay; // offset 0x6E, size 0x2
    class hkSmallArray m_constraintsMaster; // offset 0x70, size 0x8
    class hkArray m_constraintsSlave; // offset 0x78, size 0xC
    class hkArray m_constraintRuntime; // offset 0x84, size 0xC
    class hkEntityDeactivator * m_deactivator; // offset 0x90, size 0x4
    class hkSimulationIsland * m_simulationIsland; // offset 0x94, size 0x4
    signed char m_autoRemoveLevel; // offset 0x98, size 0x1
    unsigned int m_uid; // offset 0x9C, size 0x4
    class hkMaxSizeMotion m_motion; // offset 0xA0, size 0x130
    class hkSmallArray m_collisionListeners; // offset 0x1D0, size 0x8
    class hkSmallArray m_activationListeners; // offset 0x1D8, size 0x8
    class hkSmallArray m_entityListeners; // offset 0x1E0, size 0x8
    class hkSmallArray m_actions; // offset 0x1E8, size 0x8
    class SpuCollisionCallback m_spuCollisionCallback; // offset 0x1F0, size 0x8
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0xC
};
enum enmStatus {
    STATUS_NULL = 0,
    STATUS_END = 1,
    STATUS_STOP = 2,
    STATUS_BLEND = 4,
    STATUS_UNLOOP = 8,
    STATUS_LINK_ONE = 16,
    STATUS_LINK_SYNC = 32,
    STATUS_NEXT_UNLOOP = 64,
    STATUS_NEXT_STOP = 128,
};
class clsVaporTrail_Task : public clsTask {
    // total size: 0xE40
public:
    class stcBaseStatus * m_psBaseStatus; // offset 0x54, size 0x4
    class stcPlayStatus * m_psPlayStatus; // offset 0x58, size 0x4
    unsigned char m_u8Play; // offset 0x5C, size 0x1
    unsigned int m_u32Flg; // offset 0x60, size 0x4
    signed int m_s32PlayNum; // offset 0x64, size 0x4
    signed int m_s32MaxPlayNum; // offset 0x68, size 0x4
    unsigned int m_u32View; // offset 0x6C, size 0x4
    unsigned int m_u32PlayUser; // offset 0x70, size 0x4
    float m_f32AddSpeed; // offset 0x74, size 0x4
    class clsPlayerTask * m_pcPlayer; // offset 0x78, size 0x4
    class clsTask * m_pcEffectTask; // offset 0x7C, size 0x4
    class stcParam m_asTrails[10]; // offset 0x80, size 0xDC0
};
class __vector_imp : private __vector_deleter {
    // total size: 0xC
};
class clsGearCtrl {
    // total size: 0x110
public:
    class clsGear * m_apcGear[4]; // offset 0x4, size 0x10
    class clsInitialBoard * m_pcInitBoardGear; // offset 0x14, size 0x4
    unsigned char m_abIsAlreadyUsed[4]; // offset 0x18, size 0x4
    unsigned char m_abIsLocked[4]; // offset 0x1C, size 0x4
    float m_af32CloseWaitFrame[4]; // offset 0x20, size 0x10
    class clsGear * m_apcEquipsGears[5]; // offset 0x30, size 0x14
    class clsGear * m_pcOldChangeGear; // offset 0x44, size 0x4
    class clsGearBaseParts * m_pcOldParts; // offset 0x48, size 0x4
    class clsGearBaseParts * m_pcNewParsGear; // offset 0x4C, size 0x4
    class stcCtrlData * m_posData; // offset 0x50, size 0x4
    enum enmGearCtrl m_eCtrlNo; // offset 0x54, size 0x4
    unsigned int m_u32InitEquipsGears; // offset 0x58, size 0x4
    class stcAddPrfm m_sAddPrfmData; // offset 0x5C, size 0x6C
    class clsPlayerTask * m_pcPlayer; // offset 0xC8, size 0x4
    enum enmCtrlMode m_eCtrlMode; // offset 0xCC, size 0x4
    enum enmActionMode m_eActionMode; // offset 0xD0, size 0x4
    float m_f32DrawAlpha; // offset 0xD4, size 0x4
    unsigned char m_u8MaxGearNum; // offset 0xD8, size 0x1
    signed char m_s8RunChannel_ICS; // offset 0xD9, size 0x1
    signed char m_s8MonumentFlyChannel_ICS; // offset 0xDA, size 0x1
    unsigned char m_bIsPlayMonumentFly; // offset 0xDB, size 0x1
    unsigned char m_bSeWalkFlag; // offset 0xDC, size 0x1
    unsigned char m_bIsDrawActiveGear; // offset 0xDD, size 0x1
    unsigned char m_bIsDrawBurnLight; // offset 0xDE, size 0x1
    unsigned int m_u32EffectType; // offset 0xE0, size 0x4
    float m_f32EffectFrameEx; // offset 0xE4, size 0x4
    class _Draw2DData m_sDraw2DData; // offset 0xE8, size 0x24
    class clsModelType_OB_TX * m_pcInitBoardGearModel; // offset 0x10C, size 0x4
};
enum enmInfo {
    TYPE_NULL = 0,
    TYPE_GROUND = 1,
    TYPE_THROUGH = 2,
    TYPE_PLAYER = 4,
    TYPE_ITEM = 8,
    TYPE_RING = 16,
    TYPE_GIMMICK = 32,
    TYPE_GIMMICK_WALL = 64,
    TYPE_GIMMICK_CLOG = 128,
    TYPE_GRAVITY = 256,
    TYPE_GLINK = 512,
    TYPE_WALL_WALK = 1024,
    TYPE_WALL_GRAVITY = 2048,
    TYPE_DEAD = 4096,
    FILTER_NULL = 0,
    FILTER_GROUND = 65536,
    FILTER_THROUGH = 131072,
    FILTER_PLAYER = 262144,
    FILTER_ITEM = 524288,
    FILTER_RING = 1048576,
    FILTER_GIMMICK = 2097152,
    FILTER_GIMMICK_WALL = 4194304,
    FILTER_GIMMICK_CLOG = 8388608,
    FILTER_GRAVITY = 16777216,
    FILTER_GLINK = 33554432,
    FILTER_WALL_GRAVITY = 134217728,
    FILTER_WALL_WALK = 67108864,
    FILTER_DEAD = 268435456,
    TYPE_MASK = 65535,
    FILTER_MASK = -65536,
    FULL_MASK = -1,
    CLEAR_MASK = 0,
    TYPE_GIMMICK_MASK = 33554728,
    DEFAULT_PLAYER = 352256004,
    DEFAULT_COM = 352256004,
    CLIP_COM = 342294532,
    DEFAULT_GROUND = 1,
    DEFAULT_THROUGH = 262146,
    SAME_NONHIT_GIMMICK = 16842784,
    DEFAULT_GIMMICK = 14745632,
    DEFAULT_GIMMICK_WALL = 14745664,
    DEFAULT_GIMMICK_CLOG = 14745728,
    DEFAULT_GRAVITY_GIMMICK = 18939936,
    DEFAULT_GLINK_GIMMICK = 35717632,
};
class hkGskCache {
    // total size: 0xC
public:
    unsigned short m_vertices[4]; // offset 0x0, size 0x8
    unsigned char m_dimA; // offset 0x8, size 0x1
    unsigned char m_dimB; // offset 0x9, size 0x1
    unsigned char m_maxDimA; // offset 0xA, size 0x1
    unsigned char m_maxDimB; // offset 0xB, size 0x1
};
class clsPartsTrickAction : public clsFreeTrickAction {
    // total size: 0x4
};
class NNS_SUBOBJ {
    // total size: 0x14
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nMeshset; // offset 0x4, size 0x4
    class NNS_MESHSET * pMeshsetList; // offset 0x8, size 0x4
    signed int nTex; // offset 0xC, size 0x4
    signed int * pTexNumList; // offset 0x10, size 0x4
};
class clsTrickManager {
    // total size: 0x160
public:
    class clsBaseTrickAction * m_apcActionTable[9]; // offset 0x0, size 0x24
    class clsTrickParam m_cParam; // offset 0x30, size 0xD0
    class clsFlipTrickAction m_cFlipTrickAction; // offset 0x100, size 0x4
    class clsSpinTrickAction m_cSpinTrickAction; // offset 0x104, size 0x4
    class clsPipeTrickAction m_cPipeTrickAction; // offset 0x108, size 0x4
    class clsFreeTrickAction m_cFreeTrickAction; // offset 0x10C, size 0x4
    class clsWallTrickAction m_cWallTrickAction; // offset 0x110, size 0x4
    class clsVerticalTrickAction m_cVerticalTrickAction; // offset 0x120, size 0x30
    class clsTurbTrickAction m_cTurbTrickAction; // offset 0x150, size 0x4
    class clsPartsTrickAction m_cPartsTrickAction; // offset 0x154, size 0x4
};
class map {
    // total size: 0x18
public:
    class __tree tree_; // offset 0x0, size 0x18
};
class hkSmallArray {
    // total size: 0x8
public:
    class hkEntityListener * * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
class compressed_pair_imp {
    // total size: 0xC
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class node_base second_; // offset 0x4, size 0x8
};
class stcGimickSubParam {
    // total size: 0x20
public:
    class NNS_VECTORFAST sStartFast; // offset 0x0, size 0x10
    class NNS_VECTORFAST sPowerFast; // offset 0x10, size 0x10
};
class hkCollisionFilter : public hkReferencedObject, public hkCollidableCollidableFilter, public hkShapeCollectionFilter, public hkRayShapeCollectionFilter, public hkRayCollidableFilter {
    // total size: 0x30
public:
    class hkEnum m_type; // offset 0x20, size 0x4
    unsigned int m_pad[3]; // offset 0x24, size 0xC
};
class hkModifierConstraintAtom : public hkConstraintAtom {
    // total size: 0x20
public:
    unsigned short m_modifierAtomSize; // offset 0x10, size 0x2
    unsigned short m_childSize; // offset 0x12, size 0x2
    class hkConstraintAtom * m_child; // offset 0x14, size 0x4
    unsigned int m_pad[2]; // offset 0x18, size 0x8
};
class hkCollidable : public hkCdBody {
    // total size: 0x24
public:
    signed char m_ownerOffset; // offset 0x10, size 0x1
    unsigned char m_forceCollideOntoPpu; // offset 0x11, size 0x1
    unsigned short m_shapeSizeOnSpu; // offset 0x12, size 0x2
    class hkTypedBroadPhaseHandle m_broadPhaseHandle; // offset 0x14, size 0xC
    float m_allowedPenetrationDepth; // offset 0x20, size 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkIslandPostIntegrateListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkEnum {
    // total size: 0x4
public:
    unsigned int m_storage; // offset 0x0, size 0x4
};
class hkEntityListener {
    // total size: 0x4
};
class NNS_VECTOR2D {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
enum enmNo {
    PLAYER_00 = 0,
    PLAYER_01 = 1,
    PLAYER_02 = 2,
    PLAYER_03 = 3,
    PLAYER_04 = 4,
    PLAYER_05 = 5,
    PLAYER_06 = 6,
    PLAYER_07 = 7,
    MAX_PLAYER = 8,
    MAX_COM = 7,
};
class hkProcessCdPoint {
    // total size: 0x30
public:
    class hkContactPoint m_contact; // offset 0x0, size 0x20
    class hkPadSpu m_contactPointId; // offset 0x20, size 0x4
};
class clsPlayerStartPointCollector : public hkAllCdPointCollector {
    // total size: 0x260
public:
    class clsRigidBodyCollectorInfo m_cRigidBodyInfo; // offset 0x1A0, size 0x5C
    class clsPhantomCollectorInfo m_cPhantomInfo; // offset 0x1FC, size 0x5C
    class clsPlayerTask * m_pcPlayer; // offset 0x258, size 0x4
};
enum Type {
    TYPE_SIMPLE_CONSTRAINT_CONTACT_MGR = 0,
    TYPE_REPORT_CONTACT_MGR = 1,
    TYPE_CONVEX_LIST_CONTACT_MGR = 2,
    TYPE_NULL_CONTACT_MGR = 3,
    TYPE_USER_CONTACT_MGR = 4,
    TYPE_MAX = 5,
};
class hkSmallArray {
    // total size: 0x8
public:
    class hkEntityActivationListener * * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
class hkIslandPostIntegrateListener {
    // total size: 0x0
};
class clsSimpleShapePhantom : public hkSimpleShapePhantom {
    // total size: 0x150
public:
    void * m_pvUserData01; // offset 0x140, size 0x4
};
class __vector_deleter {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    class _KeyBuf * data_; // offset 0x8, size 0x4
};
enum enmActionType {
    ACTION_TYPE_NULL = 0,
    ACTION_TYPE_DAMAGE00 = 1,
    ACTION_TYPE_DAMAGE01 = 2,
    ACTION_TYPE_DEMO = 3,
    ACTION_TYPE_WALK_WAIT = 4,
    ACTION_TYPE_WALK_RUN = 5,
    ACTION_TYPE_WALK_BACK = 6,
    ACTION_TYPE_WALK_BRAKE = 7,
    ACTION_TYPE_WALK_FLIGHT = 8,
    ACTION_TYPE_WALK_SPRING = 9,
    ACTION_TYPE_INERTIA = 10,
    ACTION_TYPE_RUN = 11,
    ACTION_TYPE_BRAKE = 12,
    ACTION_TYPE_FLIGHT = 13,
    ACTION_TYPE_JUMP = 14,
    ACTION_TYPE_TRICK = 15,
    ACTION_TYPE_PATH = 16,
    ACTION_TYPE_ATTACK = 17,
    ACTION_TYPE_RAIL = 18,
    ACTION_TYPE_FLY = 19,
    ACTION_TYPE_POWER = 20,
    ACTION_TYPE_GDIVE = 21,
    ACTION_TYPE_GDIVE_AUTO = 22,
    ACTION_TYPE_GCTRL_SLIDE = 23,
    ACTION_TYPE_GCTRL_TRICK = 24,
    ACTION_TYPE_GCTRL_FLIGHT = 25,
    ACTION_TYPE_DIR_REGULATE_RUN = 26,
    ACTION_TYPE_TRANSLATION_MOVE_PATH = 27,
    ACTION_TYPE_WHEELDRIFT = 28,
    ACTION_TYPE_AUTOWALLRUN = 29,
    ACTION_TYPE_FALSE_START = 30,
    ACTION_TYPE_RESTART = 31,
    ACTION_TYPE_ATTACKDAMAGE = 32,
    ACTION_TYPE_BOOST = 33,
    ACTION_TYPE_MAX = 34,
    ACTION_TYPE_ = 35,
};
class hkSweptTransform {
    // total size: 0x50
public:
    class hkVector4 m_centerOfMass0; // offset 0x0, size 0x10
    class hkVector4 m_centerOfMass1; // offset 0x10, size 0x10
    class hkQuaternion m_rotation0; // offset 0x20, size 0x10
    class hkQuaternion m_rotation1; // offset 0x30, size 0x10
    class hkVector4 m_centerOfMassLocal; // offset 0x40, size 0x10
};
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class hkPropertyValue {
    // total size: 0x8
public:
    unsigned long m_data; // offset 0x0, size 0x4
};
class hkEntityActivationListener {
    // total size: 0x0
};
class clsPlayerDebug {
    // total size: 0x98C0
public:
    float m_sDrawSphereMtx[4][4]; // offset 0x0, size 0x40
    class NNS_VECTORFAST m_sFixPosVecFast; // offset 0x40, size 0x10
    class NNS_VECTORFAST m_sDistVecFast[2]; // offset 0x50, size 0x20
    class NNS_VECTOR m_asNrmLineBuff[512][2]; // offset 0x70, size 0x3000
    class NNS_VECTOR m_asPstLineBuff[512][2]; // offset 0x3070, size 0x3000
    class NNS_VECTOR m_asVlcLineBuff[512][2]; // offset 0x6070, size 0x3000
    class NNS_VECTOR m_asDrawLine[2]; // offset 0x9070, size 0x18
    class clsPlayerTask * m_pcPlayer; // offset 0x9088, size 0x4
    enum enmMode m_eMode; // offset 0x908C, size 0x4
    enum enmFlag m_eFlag; // offset 0x9090, size 0x4
    float m_f32Speed; // offset 0x9094, size 0x4
    float m_f32Distance; // offset 0x9098, size 0x4
    float m_f32TimerMin; // offset 0x909C, size 0x4
    float m_f32TimerSec; // offset 0x90A0, size 0x4
    float m_f32TimerMSec; // offset 0x90A4, size 0x4
    float m_f32JumpHeight; // offset 0x90A8, size 0x4
    signed int m_s32ActiveLineBuffNo; // offset 0x90AC, size 0x4
    unsigned int m_u32DrawLineColor; // offset 0x90B0, size 0x4
    signed int m_s32MaxSpeed; // offset 0x90B4, size 0x4
    signed int m_s32Accele; // offset 0x90B8, size 0x4
    float m_f32GripRate; // offset 0x90BC, size 0x4
    float m_f32CountFrame; // offset 0x90C0, size 0x4
    unsigned int m_u32SphereColor; // offset 0x90C4, size 0x4
    float m_f32DrawSphereFrame; // offset 0x90C8, size 0x4
    signed char m_s8JumpFlag; // offset 0x90CC, size 0x1
    unsigned char m_bIsSelectRestart; // offset 0x90CD, size 0x1
    signed char m_s8GearAlpha; // offset 0x90CE, size 0x1
    class vector m_vecDrawSphere; // offset 0x90D0, size 0xC
    class vector m_vecDrawSphereOld; // offset 0x90DC, size 0xC
    class _DebugDrawSphere m_sDrawSphere[100]; // offset 0x90E8, size 0x7D0
};
enum enmRank {
    RANK_FAILED = -1,
    RANK_AUTO = 0,
    RANK_C = 0,
    RANK_B = 1,
    RANK_A = 2,
    RANK_AA = 3,
    RANK_S = 4,
    RANK_SS = 5,
    RANK_X = 6,
    RANK_MAX = 7,
};
class clsSlipStream {
    // total size: 0xD0
public:
    class stcData m_sData[4]; // offset 0x0, size 0xC0
    enum enmStatus m_eStatus; // offset 0xC0, size 0x4
    float m_f32UpdateCount; // offset 0xC4, size 0x4
    unsigned int m_u32PointNo; // offset 0xC8, size 0x4
};
class _Draw2DData {
    // total size: 0x24
public:
    enum enmDraw2DGearMode aeGearMode[3]; // offset 0x0, size 0xC
    enum enmDraw2DType aeDrawType[3]; // offset 0xC, size 0xC
    enum enmLevel eNextChangeGearLv; // offset 0x18, size 0x4
    enum enmLevel ePrevChangeGearLv; // offset 0x1C, size 0x4
    unsigned char u8DataNum; // offset 0x20, size 0x1
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
class hkPadSpu {
    // total size: 0x1
public:
    class hkBool m_storage; // offset 0x0, size 0x1
};
class stcInfo {
    // total size: 0x10
public:
    unsigned char u8Effect; // offset 0x0, size 0x1
    unsigned char u8Attr; // offset 0x1, size 0x1
    unsigned char u8Filter; // offset 0x2, size 0x1
    signed char s8Grip; // offset 0x3, size 0x1
    unsigned char u8Union[4]; // offset 0x4, size 0x4
    float f32Param; // offset 0x8, size 0x4
    unsigned int u32Reserved; // offset 0xC, size 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkCollisionDetail * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class hkKeyframedRigidMotion : public hkMotion {
    // total size: 0x130
public:
    class hkMaxSizeMotion * m_savedMotion; // offset 0x120, size 0x4
    signed int m_savedQualityTypeIndex; // offset 0x124, size 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkWorldPostCollideListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class list : private __list_imp {
    // total size: 0x14
};
class clsTrickParam {
    // total size: 0xD0
public:
    class NNS_VECTORFAST m_sDirVecFast; // offset 0x10, size 0x10
    class stcBingoControl m_sBingoControl; // offset 0x20, size 0x4
    class clsPlayerTask * m_pcPlayer; // offset 0x24, size 0x4
    void * m_pvTrickMotionData; // offset 0x28, size 0x4
    class stcInfo * m_psColInfo; // offset 0x2C, size 0x4
    class clsRetPath m_cRetCoursePath; // offset 0x30, size 0x20
    float m_f32UpAccele; // offset 0x50, size 0x4
    float m_f32Frame; // offset 0x54, size 0x4
    float m_f32RotRadRate; // offset 0x58, size 0x4
    float m_f32StepFrame; // offset 0x5C, size 0x4
    float m_f32QuickSlowRate; // offset 0x60, size 0x4
    enum enmKicker m_eKickerType; // offset 0x64, size 0x4
    enum enmStartType m_eStartType; // offset 0x68, size 0x4
    enum enmRank m_eBaseRank; // offset 0x6C, size 0x4
    enum enmRank m_eRank; // offset 0x70, size 0x4
    signed char m_s8MotionStep; // offset 0x74, size 0x1
    signed char m_s8RotDir; // offset 0x75, size 0x1
    signed char m_as8KeyDir[4]; // offset 0x76, size 0x4
    signed char m_s8KeySaveCount; // offset 0x7A, size 0x1
    float m_f32BonusSpeed; // offset 0x7C, size 0x4
    unsigned char m_bEnableKickerDebug; // offset 0x80, size 0x1
    float m_f32DebugSpeed; // offset 0x84, size 0x4
    float m_f32DebugGravity; // offset 0x88, size 0x4
    float m_f32DebugJump; // offset 0x8C, size 0x4
    signed int m_s32EnableAcceleKickerDebug; // offset 0x90, size 0x4
    float m_f32DebugUpSpeed; // offset 0x94, size 0x4
    float m_f32DebugUpAccele; // offset 0x98, size 0x4
    float m_f32DebugDownSpeed; // offset 0x9C, size 0x4
    float m_f32DebugDownAccele; // offset 0xA0, size 0x4
    float m_f32DebugVelocityY; // offset 0xA4, size 0x4
    float m_f32DebugUpGravityAccele; // offset 0xA8, size 0x4
    float m_f32DebugDownGravityAccele; // offset 0xAC, size 0x4
    float m_f32DebugFrame; // offset 0xB0, size 0x4
    unsigned char m_bEnableTrickDebug; // offset 0xB4, size 0x1
    unsigned char m_bTrickRecordDispDebug; // offset 0xB5, size 0x1
    enum enmKicker m_eDebugKickerType; // offset 0xB8, size 0x4
    enum enmRank m_eDebugTrickRank; // offset 0xBC, size 0x4
    signed char m_s8DebugKeyDir; // offset 0xC0, size 0x1
};
class hkSimulation : public hkReferencedObject {
    // total size: 0x28
public:
    class hkWorld * m_world; // offset 0x8, size 0x4
    enum LastProcessingStep m_lastProcessingStep; // offset 0xC, size 0x4
    float m_currentTime; // offset 0x10, size 0x4
    float m_currentPsiTime; // offset 0x14, size 0x4
    float m_physicsDeltaTime; // offset 0x18, size 0x4
    float m_simulateUntilTime; // offset 0x1C, size 0x4
    float m_frameMarkerPsiSnap; // offset 0x20, size 0x4
    enum hkStepResult m_previousStepResult; // offset 0x24, size 0x4
};
class NNS_MESHSET {
    // total size: 0x24
public:
    class NNS_VECTOR Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
    signed int iNode; // offset 0x10, size 0x4
    signed int iMatrix; // offset 0x14, size 0x4
    signed int iMaterial; // offset 0x18, size 0x4
    signed int iVtxList; // offset 0x1C, size 0x4
    signed int iPrimList; // offset 0x20, size 0x4
};
class hkTransform {
    // total size: 0x40
public:
    class hkRotation m_rotation; // offset 0x0, size 0x30
    class hkVector4 m_translation; // offset 0x30, size 0x10
};
class clsModelType_OB_TX_MO_MA {
    // total size: 0x20
public:
    class NNS_OBJECT * m_psObject; // offset 0x0, size 0x4
    class _NNS_TEXLIST * m_psTexList; // offset 0x4, size 0x4
    class NNS_MOTION * m_psMotion; // offset 0x8, size 0x4
    float m_f32MotionFrame; // offset 0xC, size 0x4
    class NNS_OBJECT * m_psMatMotObj; // offset 0x10, size 0x4
    class NNS_MOTION * m_psMatMotion; // offset 0x14, size 0x4
    unsigned int * m_psMatStatus; // offset 0x18, size 0x4
    float m_f32MatMotionFrame; // offset 0x1C, size 0x4
};
class hkDebugInfoOnPendingOperationQueues {
    // total size: 0x0
};
class hkArray {
    // total size: 0xC
public:
    class ShapeInheritance * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class value_compare : public binary_function {
    // total size: 0x1
public:
    class less comp; // offset 0x0, size 0x1
};
class stcParam {
    // total size: 0x160
public:
    unsigned short u16Flg; // offset 0x0, size 0x2
    unsigned char u8Num; // offset 0x2, size 0x1
    unsigned char u8MaxAlpha; // offset 0x3, size 0x1
    signed int s32No; // offset 0x4, size 0x4
    signed int s32RotZ; // offset 0x8, size 0x4
    float f32Frame; // offset 0xC, size 0x4
    float f32Tu; // offset 0x10, size 0x4
    float f32TuSize; // offset 0x14, size 0x4
    class NNS_VECTOR sPos; // offset 0x18, size 0xC
    class NNS_VECTOR sScale; // offset 0x24, size 0xC
    class NNS_VECTOR sAddScale; // offset 0x30, size 0xC
    class NNS_VECTOR sVec; // offset 0x3C, size 0xC
    class NNS_VECTOR sPower; // offset 0x48, size 0xC
    float sDrawMtx[4][4]; // offset 0x60, size 0x40
    class NNS_VECTOR asDrawPos[16]; // offset 0xA0, size 0xC0
};
class node_base {
    // total size: 0x8
public:
    class node * prev_; // offset 0x0, size 0x4
    class node * next_; // offset 0x4, size 0x4
};
class hkPhantom : public hkWorldObject {
    // total size: 0x70
public:
    class hkArray m_overlapListeners; // offset 0x58, size 0xC
    class hkArray m_phantomListeners; // offset 0x64, size 0xC
};
class stcWaterDropStatus {
    // total size: 0x18
public:
    signed int s32NextDataNo; // offset 0x0, size 0x4
    unsigned char bSnow; // offset 0x4, size 0x1
    float f32Frame; // offset 0x8, size 0x4
    float f32EndFrame; // offset 0xC, size 0x4
    unsigned int u32Num; // offset 0x10, size 0x4
    float f32LifeFrame; // offset 0x14, size 0x4
};
class clsLimitTime {
    // total size: 0x14
public:
    class stcRateTime m_sRateTime; // offset 0x0, size 0x10
    float m_f32LimitTime; // offset 0x10, size 0x4
};
class vector : private __vector_imp {
    // total size: 0xC
};
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
};
class binary_function {
    // total size: 0x1
};
class hkPadSpu {
    // total size: 0x4
public:
    class hkProcessCollisionInput * m_storage; // offset 0x0, size 0x4
};
enum enmLevel {
    LV_ERROR = -1,
    LV_BASE = 0,
    LV_01 = 1,
    LV_02 = 2,
    LV_03 = 3,
    MAX_LV_NUM = 4,
    MAX_LV_TABLE_NUM = 4,
    MAX_MODELS = 9,
};
enum enmFlag {
    FLAG_CLEAR = 0,
    FLAG_NOT_GRAVITY = 1,
};
class clsPlayerKey {
    // total size: 0x34
public:
    class _KeyBuf m_sKeyData; // offset 0x0, size 0x8
    unsigned int m_u32OldState; // offset 0x8, size 0x4
    unsigned int m_u32KeyMask; // offset 0xC, size 0x4
    float m_f32StiffFrame; // offset 0x10, size 0x4
    signed char m_s8OldLeverX; // offset 0x14, size 0x1
    signed char m_s8OldLeverY; // offset 0x15, size 0x1
    enum enmStiffType m_eStiffType; // offset 0x18, size 0x4
    unsigned char m_bValidFlag; // offset 0x1C, size 0x1
    class stcExtensionData m_sExtension; // offset 0x20, size 0x10
};
class clsPlayerPhysic {
    // total size: 0x2E0
public:
    class clsPlayerTask * m_pcPlayer; // offset 0x0, size 0x4
    class hkCharacterProxy * m_pcProxy; // offset 0x4, size 0x4
    class hkSimpleShapePhantom * m_pcPhantom; // offset 0x8, size 0x4
    class hkShape * m_pcShape; // offset 0xC, size 0x4
    class clsSimpleShapePhantom * m_pcAttackPhantom; // offset 0x10, size 0x4
    class clsPlayerStartPointCollector m_cStartPointCollect; // offset 0x20, size 0x260
    class stcInfo m_sColInfo[2]; // offset 0x280, size 0x20
    class stcInfo m_sPreviousColInfo; // offset 0x2A0, size 0x10
    enum enmColCheckType m_eCollisionCheckType; // offset 0x2B0, size 0x4
    float m_f32AttackRadius; // offset 0x2B4, size 0x4
    float m_f32Radius; // offset 0x2B8, size 0x4
    unsigned int m_u32HitFlg; // offset 0x2BC, size 0x4
    float m_f32InvalidFrame; // offset 0x2C0, size 0x4
    unsigned char m_bIsAttack; // offset 0x2C4, size 0x1
    unsigned char m_u8ColInfoNo; // offset 0x2C5, size 0x1
    class clsFlag m_cMaskColFilter; // offset 0x2C8, size 0x4
    enum enmColUpdateType m_enColUpdateType; // offset 0x2CC, size 0x4
    class hkVector4 m_cBackupVelocity; // offset 0x2D0, size 0x10
};
enum enmWallType {
    WALL_TYPE__NORMAL = 0,
    WALL_TYPE__WII = 1,
    WALL_TYPE__SPECIAL = 2,
    WALL_TYPE__VERTICAL = 3,
};
class hkPadSpu {
    // total size: 0x4
public:
    class hkConstraintOwner * m_storage; // offset 0x0, size 0x4
};
enum enmFlag {
    FLAG_CLEAR = 0,
    FLAG_UPDATE_POSTURAL_QUAT = 1,
    FLAG_UPDATE_BEHAVIOR = 2,
    FLAG_FACE_ROTATE = 4,
    FLAG_SLOPE_SLOWDOWN = 8,
    FLAG_CENTRIFUGAL_FORCE = 16,
    FLAG_REVERSE = 32,
    FLAG_NON_MOVE = 64,
    FLAG_ALL_TIME_ATTACK = 128,
    FLAG_LOSE = 256,
    FLAG_INIT = 59,
};
class node : public node_base {
    // total size: 0xC
public:
    void * data_; // offset 0x8, size 0x4
};
class hkVector4 {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class stcMotionTable {
    // total size: 0x8
public:
    unsigned int u32Num; // offset 0x0, size 0x4
    unsigned int u32FileSize; // offset 0x4, size 0x4
    class NNS_MOTION * aspTable[]; // offset 0x8, size 0x0
};
class clsObject {
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
class NNS_CAPSULE {
    // total size: 0x1C
public:
    class NNS_VECTOR c1; // offset 0x0, size 0xC
    class NNS_VECTOR c2; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
class __vector_imp : private __vector_pod, private compile_assert {
    // total size: 0xC
};
enum enmCalcNodePos {
    NODE_POS_SPINE = 0,
    NODE_POS_GRAVITYCTRL = 1,
    NODE_POS_GEAR = 2,
    NODE_POS_RIGHT_HAND = 3,
    NODE_POS_LEFT_HAND = 4,
    NODE_POS_RIGHT_TOE = 5,
    NODE_POS_HEAD_TOP = 6,
    NODE_POS_HIP = 7,
    NODE_POS_MAX = 8,
};
class clsPosturalCtrl {
    // total size: 0xB0
public:
    float m_sMtx[4][4]; // offset 0x0, size 0x40
    class NNS_VECTORFAST m_sDirVecFast; // offset 0x40, size 0x10
    class NNS_QUATERNION m_sQuat; // offset 0x50, size 0x10
    class clsSlerpQuat m_cSurface; // offset 0x60, size 0x3C
    class clsLerpParam m_cRotate; // offset 0x9C, size 0x10
};
class hkProcessCollisionInput : public hkCollisionInput {
    // total size: 0x40
public:
    class hkStepInfo m_stepInfo; // offset 0x20, size 0x10
    class hkPadSpu m_collisionQualityInfo; // offset 0x30, size 0x4
    void * m_dynamicsInfo; // offset 0x34, size 0x4
    unsigned char m_enableDeprecatedWelding; // offset 0x38, size 0x1
    class hkCollisionAgentConfig * m_config; // offset 0x3C, size 0x4
};
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
};
class hkAgentEntry {
    // total size: 0x8
public:
    unsigned char m_streamCommand; // offset 0x0, size 0x1
    unsigned char m_agentType; // offset 0x1, size 0x1
    unsigned char m_numContactPoints; // offset 0x2, size 0x1
    unsigned char m_size; // offset 0x3, size 0x1
    class UserData m_extraData; // offset 0x4, size 0x4
};
class hkContactPointMaterial {
    // total size: 0x8
public:
    void * m_userData; // offset 0x0, size 0x4
    class hkUFloat8 m_friction; // offset 0x4, size 0x1
    unsigned char m_restitution; // offset 0x5, size 0x1
    class hkUFloat8 m_maxImpulse; // offset 0x6, size 0x1
    unsigned char m_flags; // offset 0x7, size 0x1
};
class hkRayShapeCollectionFilter {
    // total size: 0x4
};
class clsWeather_Task : public clsTask {
    // total size: 0x19C0
public:
    float m_sWindMtx[4][4]; // offset 0x60, size 0x40
    float m_sSpdMtx[4][4]; // offset 0xA0, size 0x40
    class stcStatus m_sStatus; // offset 0xE0, size 0x68
    class stcWaterDropStatus * m_opsWaterDrop; // offset 0x148, size 0x4
    unsigned char m_u8Weather; // offset 0x14C, size 0x1
    unsigned int m_u32View; // offset 0x150, size 0x4
    float m_f32WaterDropFrame; // offset 0x154, size 0x4
    float m_f32WaterDropPlayFrame; // offset 0x158, size 0x4
    signed int m_s32RotX; // offset 0x15C, size 0x4
    signed int m_s32RotY; // offset 0x160, size 0x4
    unsigned int m_u32Col; // offset 0x164, size 0x4
    float m_sDrawMtx[4][4]; // offset 0x170, size 0x40
    class stcSeed m_asSeed[128]; // offset 0x1B0, size 0x1800
    class clsPlaySe_2D * m_pcPlaySe2D; // offset 0x19B0, size 0x4
};
enum SimulationType {
    SIMULATION_TYPE_INVALID = 0,
    SIMULATION_TYPE_DISCRETE = 1,
    SIMULATION_TYPE_CONTINUOUS = 2,
    SIMULATION_TYPE_MULTITHREADED = 3,
};
class NVS_SVRHEADER {
    // total size: 0x8
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short miplevel; // offset 0x2, size 0x2
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
};
class hkInplaceArray : public hkArray {
    // total size: 0x10
public:
    class hkEntity * m_storage[1]; // offset 0xC, size 0x4
};
class hkWorldOperationQueue {
    // total size: 0x0
};
class hkRotation : public hkMatrix3 {
    // total size: 0x30
};
class hkArray {
    // total size: 0xC
public:
    class hkPhantomOverlapListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkWorldPostIntegrateListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class ShapeInheritance {
    // total size: 0x8
public:
    enum hkShapeType m_primaryType; // offset 0x0, size 0x4
    enum hkShapeType m_alternateType; // offset 0x4, size 0x4
};
enum enmCorrectMode {
    COM_CORRECT_MODE_HIGH_SPEED = 0,
    COM_CORRECT_MODE_LOW_SPEED = 1,
    COM_CORRECT_MODE_END = 2,
};
class clsPlaySe_2D {
    // total size: 0x8
public:
    signed int m_s32SeId; // offset 0x0, size 0x4
    unsigned char m_bIsPlayWait; // offset 0x4, size 0x1
    unsigned char m_u8PlayWaitTimeOut; // offset 0x5, size 0x1
};
class hkWorldDeletionListener {
    // total size: 0x0
};
enum enmMoveFlag {
    MOVE_FLAG_NULL = 0,
    MOVE_FLAG_SPEED = 1,
    MOVE_FLAG_GRAVITY = 2,
    MOVE_FLAG_JUMP = 4,
    MOVE_FLAG_VECTOR = 8,
    MOVE_FLAG_PATH = 16,
    MOVE_FLAG_SURFACE_ADJUST = 32,
    DEFAULT_FLAG = 47,
};
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
class hkArray {
    // total size: 0xC
public:
    class hkEntity * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
enum enmDraw2DGearMode {
    GEAR_DRAW_2D_MODE_OPEN = 0,
    GEAR_DRAW_2D_MODE_CLOSE = 1,
    GEAR_DRAW_2D_MODE_LOCKED = 2,
};
class stcRateTime {
    // total size: 0x10
public:
    signed int s32Sec; // offset 0x0, size 0x4
    signed int s32PassageSec; // offset 0x4, size 0x4
    float f32MSec; // offset 0x8, size 0x4
    float f32PassageMSec; // offset 0xC, size 0x4
};
class hkPhantomOverlapListener {
    // total size: 0x4
};
class hkWorldPostIntegrateListener {
    // total size: 0x0
};
class __list_deleter {
    // total size: 0x14
public:
    class compressed_pair size_; // offset 0x0, size 0x8
    class compressed_pair end_; // offset 0x8, size 0xC
};
class stcParam {
    // total size: 0x40
public:
    signed char s8Interval; // offset 0x0, size 0x1
    unsigned char u8TexNo; // offset 0x1, size 0x1
    unsigned char u8StAlpha; // offset 0x2, size 0x1
    unsigned char u8EdAlpha; // offset 0x3, size 0x1
    signed short s16NodeNo; // offset 0x4, size 0x2
    signed short s16DataNum; // offset 0x6, size 0x2
    unsigned int u32Color; // offset 0x8, size 0x4
    float f32StTu; // offset 0xC, size 0x4
    float f32EdTu; // offset 0x10, size 0x4
    class NNS_VECTORFAST sSizeFast; // offset 0x20, size 0x10
    class NNS_VECTORFAST sOffsetFast; // offset 0x30, size 0x10
};
class clsPlayerMotion : public clsMotion {
    // total size: 0x11C
public:
    class stcMotionTable * m_apsMotionTable[8]; // offset 0x5C, size 0x20
    class stcPlayData m_sPlayData[2]; // offset 0x7C, size 0x90
    signed char m_s8PlayDataNo; // offset 0x10C, size 0x1
    signed char m_s8BaseMotionType; // offset 0x10D, size 0x1
    signed char m_s8OldBaseMotionType; // offset 0x10E, size 0x1
    signed char m_s8MotionNo; // offset 0x10F, size 0x1
    signed char m_s8LinkMotionNo; // offset 0x110, size 0x1
    signed char m_s8BlendMotionNo; // offset 0x111, size 0x1
    signed char m_s8MotionType; // offset 0x112, size 0x1
    signed char m_s8LinkMotionType; // offset 0x113, size 0x1
    signed char m_s8BlendMotionType; // offset 0x114, size 0x1
    unsigned char m_bRoboFlag; // offset 0x115, size 0x1
    class clsPlayerTask * m_pcPlayer; // offset 0x118, size 0x4
};
class clsGear {
    // total size: 0x50
public:
    class clsGearCtrl * m_pcGearCtrl; // offset 0x4, size 0x4
    class stcGearData & m_rsGearData; // offset 0x8, size 0x4
    class stcAddPrfm & m_rsGearPrfm; // offset 0xC, size 0x4
    class clsModelType_OB_TX m_sModel; // offset 0x10, size 0x8
    class clsModelType_OB m_sShadowModel; // offset 0x18, size 0x4
    class NNS_VECTORFAST m_sActionTrans; // offset 0x20, size 0x10
    class NNS_ROTATE m_sActionRot; // offset 0x30, size 0xC
    class NNS_VECTOR m_sActionScale; // offset 0x3C, size 0xC
    float m_f32ActionAlpha; // offset 0x48, size 0x4
    unsigned int m_u32ActionCnt; // offset 0x4C, size 0x4
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
class hkArray {
    // total size: 0xC
public:
    class hkPhantomListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class clsBackLineEffectTask : public clsTask {
    // total size: 0x4C0
public:
    class stcStatus m_sStatus; // offset 0x60, size 0x20
    class stcGimickParam m_sGimickParam; // offset 0x80, size 0x14
    unsigned int m_u32LineColor; // offset 0x94, size 0x4
    float m_f32GctrlWaitFrame; // offset 0x98, size 0x4
    class NNS_VECTORFAST m_sNoMovePosFast; // offset 0xA0, size 0x10
    class NNS_VECTORFAST m_sLastBasePosFast; // offset 0xB0, size 0x10
    class NNS_VECTORFAST * m_opsNoMovePosFastAdr; // offset 0xC0, size 0x4
    class NNS_VECTORFAST * m_opsCompPosFastAdr; // offset 0xC4, size 0x4
    float (* m_opsNoMoveMtx)[4][4]; // offset 0xC8, size 0x4
    class stcParam * m_opsParam; // offset 0xCC, size 0x4
    class stcTrickSubParam * m_opsTrickSubParam; // offset 0xD0, size 0x4
    class stcGimickSubParam * m_opsGimickSubParam; // offset 0xD4, size 0x4
    class NNS_VECTOR m_asPoint[82]; // offset 0xD8, size 0x3D8
    class _NNS_TEXLIST * m_psTexList; // offset 0x4B0, size 0x4
};
enum enmDingMode {
    COM_DING_MODE_TIME_SET = 0,
    COM_DING_MODE_SPEED_UP = 1,
    COM_DING_MODE_SPEED_DOWN = 2,
    COM_DING_MODE_NON = 3,
};
class binary_function {
    // total size: 0x1
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class hkContactMgrFactory {
    // total size: 0x0
};
class hkPadSpu {
    // total size: 0x4
public:
    float m_storage; // offset 0x0, size 0x4
};
class stcGearData {
    // total size: 0x8
public:
    unsigned int u32AttributeBits; // offset 0x0, size 0x4
    unsigned int u32AddAbility; // offset 0x4, size 0x4
};
class UserData {
    // total size: 0x4
public:
    union { // inferred
        class GskFlags m_gskFlags; // offset 0x0, size 0x4
        class hkCollisionAgent * m_bridgeChildAgent; // offset 0x0, size 0x4
    };
};
class less : public binary_function {
    // total size: 0x1
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
enum enmKicker {
    KICKER_FF = 0,
    KICKER_BF = 1,
    KICKER_SPIN = 2,
    KICKER_PIPE = 3,
    KICKER_FREE = 4,
    KICKER_WALL = 5,
    KICKER_TURB = 6,
    KICKER_VERTICAL = 7,
    KICKER_PARTS = 8,
    KICKER_TYPE_MAX = 9,
};
class hkArray {
    // total size: 0xC
public:
    class hkWorldPostSimulationListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkMultithreadedSimulationJobData {
    // total size: 0x0
};
enum enmStatus {
    STATUS__NONE = 0,
    STATUS__RANGE_IN = 1,
    STATUS__RANGE_ALWAYS = 2,
    STATUS__RANGE_OUT = 3,
};
class hkWorldPostSimulationListener {
    // total size: 0x0
};
class hkAction : public hkReferencedObject {
    // total size: 0x18
public:
    class hkWorld * m_world; // offset 0x8, size 0x4
    class hkSimulationIsland * m_island; // offset 0xC, size 0x4
    unsigned int m_userData; // offset 0x10, size 0x4
    char * m_name; // offset 0x14, size 0x4
};
class clsWallTrickAction : public clsBaseTrickAction {
    // total size: 0x4
};
class DeactivationInfo {
    // total size: 0x20
public:
    float m_linearVelocityThresholdInv; // offset 0x0, size 0x4
    float m_angularVelocityThresholdInv; // offset 0x4, size 0x4
    float m_slowObjectVelocityMultiplier; // offset 0x8, size 0x4
    float m_relativeSleepVelocityThreshold; // offset 0xC, size 0x4
    unsigned short m_stepsToDeactivate; // offset 0x10, size 0x2
    float m_maxDistSqrd[2]; // offset 0x14, size 0x8
    class hkHalf m_maxRotSqrd[2]; // offset 0x1C, size 0x4
};
class hkCollisionDetail {
    // total size: 0x4
public:
    class hkCollidable * m_collidable; // offset 0x0, size 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    unsigned int second_; // offset 0x4, size 0x4
};
class stcInitData {
    // total size: 0x30
public:
    class NNS_VECTORFAST sPosVecFast; // offset 0x0, size 0x10
    class NNS_VECTORFAST sUpVecFast; // offset 0x10, size 0x10
    float f32LocalAngleRad; // offset 0x20, size 0x4
    unsigned int u32Padding; // offset 0x24, size 0x4
};
class hkAgent3Input {
    // total size: 0x50
public:
    class hkPadSpu m_bodyA; // offset 0x0, size 0x4
    class hkPadSpu m_bodyB; // offset 0x4, size 0x4
    class hkPadSpu m_input; // offset 0x8, size 0x4
    class hkPadSpu m_contactMgr; // offset 0xC, size 0x4
    class hkTransform m_aTb; // offset 0x10, size 0x40
};
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
};
class _KeyBuf {
    // total size: 0x8
public:
    unsigned int u32KeyState; // offset 0x0, size 0x4
    signed char s8LeverX; // offset 0x4, size 0x1
    signed char s8LeverY; // offset 0x5, size 0x1
    unsigned char u8ExtType; // offset 0x6, size 0x1
    unsigned char u8Padding; // offset 0x7, size 0x1
};
class hkArray {
    // total size: 0xC
public:
    class hkPhantom * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class stcRecord {
    // total size: 0x4
public:
    unsigned char u8Minite; // offset 0x0, size 0x1
    unsigned char u8Second; // offset 0x1, size 0x1
    unsigned short u16MiliSecond; // offset 0x2, size 0x2
};
class clsInitialBoard {
    // total size: 0x0
};
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
};
class clsCharaVoice {
    // total size: 0x10
public:
    class clsPlayerTask * m_pcPlayer; // offset 0x4, size 0x4
    float m_f32VoiceDelayFrameRunPast; // offset 0x8, size 0x4
    float m_f32VoiceDelayFrameAttack; // offset 0xC, size 0x4
};
enum enmGDiveType {
    GDIVE_TYPE__NORMAL = 0,
    GDIVE_TYPE__CANCEL = 1,
    GDIVE_TYPE__REFLECTION = 2,
};
class stcGimickParam {
    // total size: 0x14
public:
    class NNS_OBJECT * opsObject; // offset 0x0, size 0x4
    class NNS_MOTION * opsMotion; // offset 0x4, size 0x4
    float (* opsMatrix)[4][4]; // offset 0x8, size 0x4
    float * opf32Frame; // offset 0xC, size 0x4
    float f32Scale; // offset 0x10, size 0x4
};
enum enmRunDelay {
    COM_RUN_STORY_NORMAL = 0,
    COM_RUN_STORY_LEADER = 1,
    COM_RUN_STORY_PLAYER = 2,
};
class hkShapeCollectionFilter {
    // total size: 0x4
};
class hkPadSpu {
    // total size: 0x4
public:
    class hkShapeCollectionFilter * m_storage; // offset 0x0, size 0x4
};
enum enmComMode {
    COM_AI_MODE_PRECE = 0,
    COM_AI_MODE_PULLOUT = 1,
    COM_AI_MODE_KEEP = 2,
    COM_AI_MODE_DINGDONG = 3,
    COM_AI_MODE_CORRECTION = 4,
    MAX_COM_AI_MODE = 5,
    MAX_COM_AI_MODE_LEAD = 2,
};
class SpuCollisionCallback {
    // total size: 0x8
public:
    class hkSpuCollisionCallbackUtil * m_util; // offset 0x0, size 0x4
    unsigned short m_capacity; // offset 0x4, size 0x2
    unsigned char m_eventFilter; // offset 0x6, size 0x1
    unsigned char m_userFilter; // offset 0x7, size 0x1
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};
class hkBroadPhaseBorderListener {
    // total size: 0x0
};
class hkBaseObject {
    // total size: 0x4
};
class hkArray {
    // total size: 0xC
public:
    unsigned char * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class clsComAI {
    // total size: 0x110
public:
    class clsPlayerTask * m_pcPlayer; // offset 0x4, size 0x4
    class NNS_VECTORFAST m_sNextDestination; // offset 0x10, size 0x10
    class clsRetPath m_cRetComPath; // offset 0x20, size 0x20
    enum enmActionType m_eOldActionType; // offset 0x40, size 0x4
    enum enmKickerRankZone m_eNextTrickZone; // offset 0x44, size 0x4
    enum enmRunMode m_eRunMode; // offset 0x48, size 0x4
    unsigned int m_u32AdjustStates; // offset 0x4C, size 0x4
    float m_f32CourseAngle; // offset 0x50, size 0x4
    unsigned short m_u16OldLineNo; // offset 0x54, size 0x2
    unsigned short m_u16ComExecMode; // offset 0x56, size 0x2
    unsigned short m_u16NextLine; // offset 0x58, size 0x2
    unsigned char m_u8PlannedRank; // offset 0x5A, size 0x1
    unsigned char m_bWallJumpFlag; // offset 0x5B, size 0x1
    signed int m_s32GameMode; // offset 0x5C, size 0x4
    enum enmComType m_eComTypeAI; // offset 0x60, size 0x4
    enum enmComMode m_eComModeAI; // offset 0x64, size 0x4
    enum enmComDis m_eComDisAI; // offset 0x68, size 0x4
    unsigned int m_u32NowTime; // offset 0x6C, size 0x4
    unsigned int m_u32OldTime; // offset 0x70, size 0x4
    unsigned int m_u32RandAI; // offset 0x74, size 0x4
    signed int m_s32AddSub; // offset 0x78, size 0x4
    signed int m_s32RaceAddSub; // offset 0x7C, size 0x4
    enum enmRunDelay m_eDelayMode; // offset 0x80, size 0x4
    enum enmDingMode m_eDingMode; // offset 0x84, size 0x4
    enum enmDingMode m_eOldDingMode; // offset 0x88, size 0x4
    enum enmCorrectMode m_eCorrectMode; // offset 0x8C, size 0x4
    unsigned int m_u32ShortTime; // offset 0x90, size 0x4
    unsigned int m_u32LapTimeFreeCnt; // offset 0x94, size 0x4
    unsigned int m_u32LapTimeFreeFrm; // offset 0x98, size 0x4
    signed int m_s32AddSubFree; // offset 0x9C, size 0x4
    signed int m_s32FreeLapFlag; // offset 0xA0, size 0x4
    float m_f32OldRankDepth; // offset 0xA4, size 0x4
    signed int m_s32SelectAi; // offset 0xA8, size 0x4
    float m_f32MaxSpeed; // offset 0xAC, size 0x4
    float m_f32MinSpeed; // offset 0xB0, size 0x4
    float m_f32CollisionCheckFrame; // offset 0xB4, size 0x4
    class NNS_VECTORFAST m_sOldPosVec; // offset 0xC0, size 0x10
    unsigned char m_u8OldPlannedRank; // offset 0xD0, size 0x1
    unsigned int m_u32StoryBestLap; // offset 0xD4, size 0x4
    unsigned int m_u32FreeBestLap; // offset 0xD8, size 0x4
    class NNS_VECTORFAST * m_psTrickGCtrlConnectPos; // offset 0xDC, size 0x4
    signed int m_s32TrickGCtrlTrickFrame; // offset 0xE0, size 0x4
    unsigned char m_bIsTrickGCtrlTry; // offset 0xE4, size 0x1
    signed char m_s8BunkiFlag; // offset 0xE5, size 0x1
    signed int m_s32HitCount; // offset 0xE8, size 0x4
    float m_f32BunkiFrame; // offset 0xEC, size 0x4
    float m_f32BunkiLimitFrame; // offset 0xF0, size 0x4
    signed int m_s32WallShortCutFlag; // offset 0xF4, size 0x4
    float m_f32WallShortCutTime; // offset 0xF8, size 0x4
    class stcTimePack m_sRoundTime; // offset 0xFC, size 0x4
    class stcTimePack m_sRoundOldTime; // offset 0x100, size 0x4
    class stcTimePack m_sDebugCheckTime; // offset 0x104, size 0x4
    class stcTimePack m_sDebugRoundTime; // offset 0x108, size 0x4
    class stcTimePack m_sDebugDelayTime; // offset 0x10C, size 0x4
};
class clsUserKey : public clsPlayerKey {
    // total size: 0x40
public:
    unsigned int m_u32PadNo; // offset 0x34, size 0x4
    class clsReplayKey * m_pcReplayKey; // offset 0x38, size 0x4
    class clsPlayerTask * m_pcPlayer; // offset 0x3C, size 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class _DebugDrawSphere {
    // total size: 0x14
public:
    class NNS_VECTOR sPos; // offset 0x0, size 0xC
    unsigned int u32Color; // offset 0xC, size 0x4
    float f32Size; // offset 0x10, size 0x4
};
class hkCollisionAgent : public hkReferencedObject {
    // total size: 0xC
public:
    class hkContactMgr * m_contactMgr; // offset 0x8, size 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkEntityListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class clsGravity {
    // total size: 0x130
public:
    float m_sMtx[4][4]; // offset 0x0, size 0x40
    class NNS_VECTORFAST m_sVecFast; // offset 0x40, size 0x10
    class NNS_VECTORFAST m_sUpVecFast; // offset 0x50, size 0x10
    class clsPlayerTask * m_pcPlayer; // offset 0x60, size 0x4
    class clsPath m_cPath; // offset 0x70, size 0x60
    class clsSlerpQuat m_cSlerpQuat; // offset 0xD0, size 0x3C
    float m_f32Speed; // offset 0x10C, size 0x4
    float m_f32Accele; // offset 0x110, size 0x4
    float m_f32FrameRate; // offset 0x114, size 0x4
    enum enmFlag m_eFlag; // offset 0x118, size 0x4
    enum enmType m_eType; // offset 0x11C, size 0x4
    float m_f32ChangeFrame; // offset 0x120, size 0x4
};
class clsComKey : public clsPlayerKey, public clsComAI {
    // total size: 0x190
public:
    unsigned short m_u16GrindJumpLineNo; // offset 0x150, size 0x2
    signed short m_s16GrindAccessWaitCnt; // offset 0x152, size 0x2
    unsigned char m_bIsGrindFirstJump; // offset 0x154, size 0x1
    unsigned char m_bIsGDiveTry; // offset 0x155, size 0x1
    unsigned char m_bIsTrickRailLinkTry; // offset 0x156, size 0x1
    unsigned char m_bIsStartReverOn; // offset 0x157, size 0x1
    unsigned char m_u8OldTrickKey; // offset 0x158, size 0x1
    signed char m_s8OldCurveLever; // offset 0x159, size 0x1
    class NNS_VECTORFAST m_sOffsetEndPoint; // offset 0x160, size 0x10
    signed int m_s32OffsetSign; // offset 0x170, size 0x4
    float m_f32OffsetPointPos; // offset 0x174, size 0x4
    unsigned char m_bIsGCtrlTry; // offset 0x178, size 0x1
    class NNS_VECTORFAST * m_psGCtrlEndPos; // offset 0x17C, size 0x4
    signed int m_s32GCtrlRestFrame; // offset 0x180, size 0x4
};
class NNS_ROTATE {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class hkEntityEntityBroadPhaseListener {
    // total size: 0x0
};
class hkWorldPostCollideListener {
    // total size: 0x0
};
class hkPadSpu {
    // total size: 0x4
public:
    unsigned int m_storage; // offset 0x0, size 0x4
};
enum enmActionMode {
    ACTION_MODE_NON = 0,
    ACTION_MODE_GETTING_ON = 1,
    ACTION_MODE_GETTING_OFF = 2,
};
class clsControlMatrix {
    // total size: 0x110
public:
    float m_sMtx[4][4]; // offset 0x0, size 0x40
    class NNS_ROTATE_A32 m_sAutoRotA32; // offset 0x40, size 0xC
    class NNS_ROTATE_A32 m_sAutoRotRetAddA32; // offset 0x4C, size 0xC
    class NNS_VECTORFAST m_sAutoRotAxisVecFast; // offset 0x60, size 0x10
    class NNS_VECTORFAST m_sVibTrsVecFast; // offset 0x70, size 0x10
    class NNS_VECTORFAST m_sVibTrsSyncVecFast; // offset 0x80, size 0x10
    class NNS_VECTORFAST m_sVibTrsSyncAddVecFast; // offset 0x90, size 0x10
    class NNS_VECTORFAST m_sVibRotVecFast; // offset 0xA0, size 0x10
    class NNS_VECTORFAST m_sVibRotSyncVecFast; // offset 0xB0, size 0x10
    class NNS_VECTORFAST m_sVibRotSyncAddVecFast; // offset 0xC0, size 0x10
    class NNS_VECTORFAST m_sVibRotAxisVecFast; // offset 0xD0, size 0x10
    float m_f32TrsDecayRate; // offset 0xE0, size 0x4
    float m_f32RotDecayRate; // offset 0xE4, size 0x4
    class NNS_VECTORFAST m_sScaleVecFast; // offset 0xF0, size 0x10
    enum enmFlag m_eFlag; // offset 0x100, size 0x4
};
enum enmAttackLR {
    TARGET_LEFT = 0,
    TARGET_RIGHT = 1,
};
class clsTask : public clsOOTask {
    // total size: 0x54
};
class hkCollidableCollidableFilter {
    // total size: 0x4
};
class sceGsMiptbp2 {
    // total size: 0x8
public:
    unsigned long TBP4 : 14; // offset 0x0, size 0x4
    unsigned long TBW4 : 6; // offset 0x0, size 0x4
    unsigned long TBP5 : 14; // offset 0x0, size 0x4
    unsigned long TBW5 : 6; // offset 0x0, size 0x4
    unsigned long TBP6 : 14; // offset 0x0, size 0x4
    unsigned long TBW6 : 6; // offset 0x0, size 0x4
    unsigned long pad60 : 4; // offset 0x0, size 0x4
};
enum enmStiffType {
    STIFF_TYPE__ALL = 0,
    STIFF_TYPE__LEVER = 1,
};
class hkWorld : public hkReferencedObject {
    // total size: 0x330
public:
    class hkSimulation * m_simulation; // offset 0x8, size 0x4
    class hkVector4 m_gravity; // offset 0x10, size 0x10
    class hkSimulationIsland * m_fixedIsland; // offset 0x20, size 0x4
    class hkRigidBody * m_fixedRigidBody; // offset 0x24, size 0x4
    class hkArray m_activeSimulationIslands; // offset 0x28, size 0xC
    class hkArray m_inactiveSimulationIslands; // offset 0x34, size 0xC
    class hkArray m_dirtySimulationIslands; // offset 0x40, size 0xC
    class hkWorldMaintenanceMgr * m_maintenanceMgr; // offset 0x4C, size 0x4
    class hkWorldMemoryWatchDog * m_memoryWatchDog; // offset 0x50, size 0x4
    class hkBroadPhase * m_broadPhase; // offset 0x54, size 0x4
    class hkTypedBroadPhaseDispatcher * m_broadPhaseDispatcher; // offset 0x58, size 0x4
    class hkPhantomBroadPhaseListener * m_phantomBroadPhaseListener; // offset 0x5C, size 0x4
    class hkEntityEntityBroadPhaseListener * m_entityEntityBroadPhaseListener; // offset 0x60, size 0x4
    class hkBroadPhaseBorderListener * m_broadPhaseBorderListener; // offset 0x64, size 0x4
    class hkMultithreadedSimulationJobData * m_multithreadedSimulationJobData; // offset 0x68, size 0x4
    class hkProcessCollisionInput * m_collisionInput; // offset 0x6C, size 0x4
    class hkCollisionFilter * m_collisionFilter; // offset 0x70, size 0x4
    class hkCollisionDispatcher * m_collisionDispatcher; // offset 0x74, size 0x4
    class hkConvexListFilter * m_convexListFilter; // offset 0x78, size 0x4
    class hkWorldOperationQueue * m_pendingOperations; // offset 0x7C, size 0x4
    signed int m_pendingOperationsCount; // offset 0x80, size 0x4
    signed int m_criticalOperationsLockCount; // offset 0x84, size 0x4
    signed int m_criticalOperationsLockCountForPhantoms; // offset 0x88, size 0x4
    class hkBool m_blockExecutingPendingOperations; // offset 0x8C, size 0x1
    class hkBool m_criticalOperationsAllowed; // offset 0x8D, size 0x1
    class hkDebugInfoOnPendingOperationQueues * m_pendingOperationQueues; // offset 0x90, size 0x4
    signed int m_pendingOperationQueueCount; // offset 0x94, size 0x4
    class hkMultiThreadCheck m_multiThreadCheck; // offset 0x98, size 0x8
    class hkBool m_processActionsInSingleThread; // offset 0xA0, size 0x1
    unsigned int m_minDesiredIslandSize; // offset 0xA4, size 0x4
    class hkCriticalSection * m_modifyConstraintCriticalSection; // offset 0xA8, size 0x4
    class hkCriticalSection * m_worldLock; // offset 0xAC, size 0x4
    class hkCriticalSection * m_islandDirtyListCriticalSection; // offset 0xB0, size 0x4
    class hkCriticalSection * m_propertyMasterLock; // offset 0xB4, size 0x4
    class hkArray m_propertyLocks; // offset 0xB8, size 0xC
    class hkBool m_wantSimulationIslands; // offset 0xC4, size 0x1
    float m_snapCollisionToConvexEdgeThreshold; // offset 0xC8, size 0x4
    float m_snapCollisionToConcaveEdgeThreshold; // offset 0xCC, size 0x4
    class hkBool m_enableToiWeldRejection; // offset 0xD0, size 0x1
    class hkBool m_wantDeactivation; // offset 0xD1, size 0x1
    class hkBool m_wantOldStyleDeactivation; // offset 0xD2, size 0x1
    class hkBool m_shouldActivateOnRigidBodyTransformChange; // offset 0xD3, size 0x1
    float m_highFrequencyDeactivationPeriod; // offset 0xD4, size 0x4
    float m_lowFrequencyDeactivationPeriod; // offset 0xD8, size 0x4
    float m_deactivationReferenceDistance; // offset 0xDC, size 0x4
    float m_toiCollisionResponseRotateNormal; // offset 0xE0, size 0x4
    enum SimulationType m_simulationType; // offset 0xE4, size 0x4
    unsigned int m_lastEntityUid; // offset 0xE8, size 0x4
    class hkArray m_phantoms; // offset 0xEC, size 0xC
    class hkArray m_actionListeners; // offset 0xF8, size 0xC
    class hkArray m_entityListeners; // offset 0x104, size 0xC
    class hkArray m_phantomListeners; // offset 0x110, size 0xC
    class hkArray m_constraintListeners; // offset 0x11C, size 0xC
    class hkArray m_worldDeletionListeners; // offset 0x128, size 0xC
    class hkArray m_islandActivationListeners; // offset 0x134, size 0xC
    class hkArray m_worldPostSimulationListeners; // offset 0x140, size 0xC
    class hkArray m_worldPostIntegrateListeners; // offset 0x14C, size 0xC
    class hkArray m_worldPostCollideListeners; // offset 0x158, size 0xC
    class hkArray m_islandPostIntegrateListeners; // offset 0x164, size 0xC
    class hkArray m_islandPostCollideListeners; // offset 0x170, size 0xC
    class hkArray m_collisionListeners; // offset 0x17C, size 0xC
    class hkArray m_contactImpulseLimitBreachedListeners; // offset 0x188, size 0xC
    class hkBroadPhaseBorder * m_broadPhaseBorder; // offset 0x194, size 0x4
    class hkWorldDynamicsStepInfo m_dynamicsStepInfo; // offset 0x1A0, size 0x150
    class hkVector4 m_broadPhaseExtents[2]; // offset 0x2F0, size 0x20
    signed int m_broadPhaseNumMarkers; // offset 0x310, size 0x4
    signed int m_sizeOfToiEventQueue; // offset 0x314, size 0x4
    signed int m_broadPhaseQuerySize; // offset 0x318, size 0x4
    signed int m_broadPhaseUpdateSize; // offset 0x31C, size 0x4
    class hkEnum m_contactPointGeneration; // offset 0x320, size 0x1
};
class hkArray {
    // total size: 0xC
public:
    class hkIslandActivationListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkContactPoint * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkActionListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class _NNS_NODEEX {
    // total size: 0x90
public:
    unsigned int fNodeExType; // offset 0x0, size 0x4
    unsigned int fNodeType; // offset 0x4, size 0x4
    signed short iMatrix; // offset 0x8, size 0x2
    signed short iNode; // offset 0xA, size 0x2
    class _NNS_NODEEX * pParent; // offset 0xC, size 0x4
    class _NNS_NODEEX * pChild; // offset 0x10, size 0x4
    class _NNS_NODEEX * pSibling; // offset 0x14, size 0x4
    class NNS_VECTOR Translation; // offset 0x18, size 0xC
    class NNS_ROTATE_A32 Rotation; // offset 0x24, size 0xC
    class NNS_VECTOR Scaling; // offset 0x30, size 0xC
    unsigned int User; // offset 0x3C, size 0x4
    float InvInitMtx[4][4]; // offset 0x40, size 0x40
    unsigned int reserved; // offset 0x80, size 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class clsOOStlAllocator first_; // offset 0x0, size 0x4
    class anchor second_; // offset 0x4, size 0x4
};
class hkLinearCastCollisionInput : public hkCollisionInput {
    // total size: 0x40
public:
    class hkVector4 m_path; // offset 0x20, size 0x10
    float m_maxExtraPenetration; // offset 0x30, size 0x4
    float m_cachedPathLength; // offset 0x34, size 0x4
    class hkCollisionAgentConfig * m_config; // offset 0x38, size 0x4
};
class NNS_SPHERE {
    // total size: 0x10
public:
    class NNS_VECTOR c; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
class clsBaseGravityAction {
    // total size: 0x18
public:
    class clsGravityActionManager * m_pcManager; // offset 0x0, size 0x4
    float m_f32Range; // offset 0x4, size 0x4
    float m_f32UsedRate; // offset 0x8, size 0x4
    float m_f32DefaultRange; // offset 0xC, size 0x4
    float m_f32DefaultUsedRate; // offset 0x10, size 0x4
};
class hkPhantomBroadPhaseListener {
    // total size: 0x0
};
class hkArray {
    // total size: 0xC
public:
    class hkAction * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkIslandActivationListener {
    // total size: 0x0
};
class clsOOTask {
    // total size: 0x54
public:
    unsigned int m_u32ExecFlags; // offset 0x4, size 0x4
    unsigned int m_u32EnablePauseFlags; // offset 0x8, size 0x4
    unsigned int m_u32Priority; // offset 0xC, size 0x4
    unsigned char m_u8Mode; // offset 0x10, size 0x1
    unsigned int m_u32TaskDepth; // offset 0x14, size 0x4
    class clsOOTask * m_pcParentTask; // offset 0x18, size 0x4
    class clsOOList m_lstChildTask; // offset 0x1C, size 0x14
    unsigned char m_bIsDead; // offset 0x30, size 0x1
    class generic_iterator m_itParentList; // offset 0x34, size 0x4
    class generic_iterator m_itMgrList; // offset 0x38, size 0x4
    class clsOOMap m_mapMgrExecListIt; // offset 0x3C, size 0x18
};
enum enmStatus {
    STATUS_CLEAR = 0,
    STATUS_GROUND = 1,
    STATUS_WALL = 2,
    STATUS_LANDING = 4,
    STATUS_START = 8,
    STATUS_GOAL = 16,
    STATUS_ON_WATER = 32,
    STATUS_WEATHER = 64,
    STATUS_REVERSE = 128,
    STATUS_INVINCIBILITY = 256,
    STATUS_DAMAGE = 512,
    STATUS_ON_SNOW = 1024,
    STATUS_THROUGH_WALLOBJ = 2048,
    STATUS_SEARCH_RAIL = 4096,
    STATUS_ATTACKDAMAGE = 8192,
    STATUS_ON_TURB = 16384,
    STATUS_TRAP_COLORBALL = 32768,
    STATUS_TRAP_PARTSLOCK = 65536,
    STATUS_SPEED_DOWN = 131072,
    STATUS_EGGCONFETTI = 262144,
    STATUS_NIGHTSEFFECT = 524288,
    STATUS_NONE_RIDE = 1048576,
    STATUS_MASK_UPDATE = 2080639,
    STATUS_MASK_CONDITION = 1015808,
};
class hkQuaternion {
    // total size: 0x10
public:
    class hkVector4 m_vec; // offset 0x0, size 0x10
};
class clsPhantomCollectorInfo : public clsCollectorInfo {
    // total size: 0x5C
};
enum enmCtrlMode {
    CTRL_MODE_WALK = 0,
    CTRL_MODE_RIDE = 1,
    CTRL_MODE_CHANGE = 2,
    CTRL_MODE_ADD_PARTS = 3,
    CTRL_MODE_GDIVE = 4,
};
class Agent3FuncsIntern : public Agent3Funcs {
    // total size: 0x34
public:
    enum Symmetric m_symmetric; // offset 0x30, size 0x4
};
class stcExtensionData {
    // total size: 0x10
public:
    class stcExtensionGDive sGDive; // offset 0x0, size 0x8
    class stcExtensionFlyAction sFly; // offset 0x8, size 0x8
};
enum enPlayerCtrlType {
    CTRL_TYPE_1P = 0,
    CTRL_TYPE_2P = 1,
    CTRL_TYPE_3P = 2,
    CTRL_TYPE_4P = 3,
    CTRL_TYPE_COM = 4,
    CTRL_TYPE_REPLAY = 5,
    CTRL_TYPE_GHOST = 6,
};
class Agent3Funcs {
    // total size: 0x30
public:
    void * (* m_createFunc)(class hkAgent3Input &, class hkAgentEntry *, void *); // offset 0x0, size 0x4
    void (* m_destroyFunc)(class hkAgentEntry *, void *, class hkContactMgr *, class hkConstraintOwner &, class hkCollisionDispatcher *); // offset 0x4, size 0x4
    void * (* m_cleanupFunc)(class hkAgentEntry *, void *, class hkContactMgr *, class hkConstraintOwner &); // offset 0x8, size 0x4
    void (* m_removePointFunc)(class hkAgentEntry *, void *, unsigned short); // offset 0xC, size 0x4
    void (* m_commitPotentialFunc)(class hkAgentEntry *, void *, unsigned short); // offset 0x10, size 0x4
    void (* m_createZombieFunc)(class hkAgentEntry *, void *, unsigned short); // offset 0x14, size 0x4
    void (* m_updateFilterFunc)(class hkAgentEntry *, void *, class hkCdBody &, class hkCdBody &, class hkCollisionInput &, class hkContactMgr *, class hkConstraintOwner &); // offset 0x18, size 0x4
    void (* m_invalidateTimFunc)(class hkAgentEntry *, void *, class hkCollisionInput &); // offset 0x1C, size 0x4
    void (* m_warpTimeFunc)(class hkAgentEntry *, void *, float, float, class hkCollisionInput &); // offset 0x20, size 0x4
    void (* m_sepNormalFunc)(class hkAgent3Input &, class hkAgentEntry *, void *, class hkVector4 &); // offset 0x24, size 0x4
    void * (* m_processFunc)(class hkAgent3ProcessInput &, class hkAgentEntry *, void *, class hkVector4 *, class hkProcessCollisionOutput &); // offset 0x28, size 0x4
    class hkBool m_isPredictive; // offset 0x2C, size 0x1
    class hkBool m_ignoreSymmetricVersion; // offset 0x2D, size 0x1
};
enum enmBaseType {
    BASE_PRFM_SPEED = 0,
    BASE_PRFM_FLY = 1,
    BASE_PRFM_POWER = 2,
    BASE_PRFM_SVBALL = 3,
    BASE_PRFM_SVBATTLE = 4,
    MAX_BASE_PRFM_NUM = 5,
};
class stcAddPrfm {
    // total size: 0x60
public:
    float f32MaxSpeedRate; // offset 0x0, size 0x4
    float f32AcceleRate; // offset 0x4, size 0x4
    float f32RotateSpeedRate; // offset 0x8, size 0x4
    float f32RotateAcceleRate; // offset 0xC, size 0x4
    float f32GripRate; // offset 0x10, size 0x4
    float f32DurabilityRate; // offset 0x14, size 0x4
    float af32MaxSpeed[3]; // offset 0x18, size 0xC
    float af32Accele[3]; // offset 0x24, size 0xC
    float f32RotateSpeed; // offset 0x30, size 0x4
    float f32RotateAccele; // offset 0x34, size 0x4
    float f32Grip; // offset 0x38, size 0x4
    float f32Durability; // offset 0x3C, size 0x4
    float f32Agp; // offset 0x40, size 0x4
    float f32GCtrlDischargeSpeed; // offset 0x44, size 0x4
    float f32GDiveSpeedRate; // offset 0x48, size 0x4
    float f32GPTakeRate; // offset 0x4C, size 0x4
    float f32GCtrlGpUseRate; // offset 0x50, size 0x4
    float f32GDiveGpUseRate; // offset 0x54, size 0x4
    signed int s32AttackEnableFrame; // offset 0x58, size 0x4
    signed short s16RingCapacity; // offset 0x5C, size 0x2
    signed char s8TrickRank; // offset 0x5E, size 0x1
    signed char s8ItemRank; // offset 0x5F, size 0x1
};
class hkTypedBroadPhaseHandle : public hkBroadPhaseHandle {
    // total size: 0xC
public:
    signed char m_type; // offset 0x4, size 0x1
    signed char m_ownerOffset; // offset 0x5, size 0x1
    unsigned short m_objectQualityType; // offset 0x6, size 0x2
    unsigned int m_collisionFilterInfo; // offset 0x8, size 0x4
};
class hkUFloat8 {
    // total size: 0x1
public:
    unsigned char m_value; // offset 0x0, size 0x1
};
class hkSpuCollisionCallbackUtil {
    // total size: 0x0
};
class hkShape : public hkReferencedObject {
    // total size: 0x10
public:
    unsigned int m_userData; // offset 0x8, size 0x4
    class hkEnum m_type; // offset 0xC, size 0x4
};
class clsEggConfetti {
    // total size: 0x208
public:
    class stcEggDetail m_sEggDetail[32]; // offset 0x4, size 0x200
    unsigned char m_u8EggDetailLoopNo; // offset 0x204, size 0x1
};
class stcStatus {
    // total size: 0x68
public:
    unsigned int u32Flg; // offset 0x0, size 0x4
    unsigned char u8Windy; // offset 0x4, size 0x1
    unsigned char u8WindWay; // offset 0x5, size 0x1
    signed int s32Num; // offset 0x8, size 0x4
    unsigned char u8RandApr; // offset 0xC, size 0x1
    float f32Up; // offset 0x10, size 0x4
    float f32Frame; // offset 0x14, size 0x4
    float f32Speed; // offset 0x18, size 0x4
    float f32RandSpeed; // offset 0x1C, size 0x4
    float f32FallSpeed; // offset 0x20, size 0x4
    float f32RandFallSpeed; // offset 0x24, size 0x4
    signed int s32TexNo; // offset 0x28, size 0x4
    unsigned char u8r; // offset 0x2C, size 0x1
    unsigned char u8g; // offset 0x2D, size 0x1
    unsigned char u8b; // offset 0x2E, size 0x1
    unsigned char u8a; // offset 0x2F, size 0x1
    signed int s32WindUnit; // offset 0x30, size 0x4
    float f32SpeedInfl; // offset 0x34, size 0x4
    class NNS_VECTOR sStartArea; // offset 0x38, size 0xC
    class NNS_VECTOR sScale; // offset 0x44, size 0xC
    class NNS_VECTOR sRandScale; // offset 0x50, size 0xC
    class NNS_VECTOR sOfsVec; // offset 0x5C, size 0xC
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
class hkMatrix3 {
    // total size: 0x30
public:
    class hkVector4 m_col0; // offset 0x0, size 0x10
    class hkVector4 m_col1; // offset 0x10, size 0x10
    class hkVector4 m_col2; // offset 0x20, size 0x10
};
class hkTypedBroadPhaseDispatcher {
    // total size: 0x0
};
class hkIslandPostCollideListener {
    // total size: 0x0
};
class hkArray {
    // total size: 0xC
public:
    class hkConstraintInstance * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class stcStatus {
    // total size: 0x20
public:
    unsigned char u8Type; // offset 0x0, size 0x1
    signed char s8Count; // offset 0x1, size 0x1
    signed short s16SubNo; // offset 0x2, size 0x2
    unsigned short u16Flg; // offset 0x4, size 0x2
    signed short s16CurNum; // offset 0x6, size 0x2
    class NNS_VECTORFAST sLastPosFast; // offset 0x10, size 0x10
};
class hkBroadPhaseHandle {
    // total size: 0x4
public:
    unsigned int m_id; // offset 0x0, size 0x4
};
class clsModelType_OB {
    // total size: 0x4
public:
    class NNS_OBJECT * m_psObject; // offset 0x0, size 0x4
};
class hkContactMgr : public hkReferencedObject {
    // total size: 0xC
public:
    enum Type m_type; // offset 0x8, size 0x4
};
class NNS_MOTION {
    // total size: 0x20
public:
    unsigned int fType; // offset 0x0, size 0x4
    float StartFrame; // offset 0x4, size 0x4
    float EndFrame; // offset 0x8, size 0x4
    signed int nSubmotion; // offset 0xC, size 0x4
    class NNS_SUBMOTION * pSubmotion; // offset 0x10, size 0x4
    float FrameRate; // offset 0x14, size 0x4
    unsigned int Reserved0; // offset 0x18, size 0x4
    unsigned int Reserved1; // offset 0x1C, size 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkWorldDeletionListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
enum enmGearCtrl {
    CTRL_UNKNOWN = -1,
    CTRL_DEF_START = 0,
    CTRL_DEF_SNC = 0,
    CTRL_DEF_TLS = 1,
    CTRL_DEF_KNC = 2,
    CTRL_DEF_AMY = 3,
    CTRL_DEF_JET = 4,
    CTRL_DEF_STM = 5,
    CTRL_DEF_WAV = 6,
    CTRL_DEF_EGG = 7,
    CTRL_DEF_CRM = 8,
    CTRL_DEF_RUG = 9,
    CTRL_DEF_SDW = 10,
    CTRL_DEF_BLZ = 11,
    CTRL_DEF_SLV = 12,
    CTRL_DEF_NIT = 13,
    CTRL_DEF_SAM = 14,
    CTRL_DEF_BLY = 15,
    CTRL_EMPTY_GP = 16,
    CTRL_DEF_END = 17,
    CTRL_EMPTY_SH = 17,
    CTRL_SHOOTING_STAR = 18,
    CTRL_FASTER = 19,
    CTRL_FASTEST = 20,
    CTRL_TURBO_STAR = 21,
    CTRL_LIGHT_BOARD = 22,
    CTRL_COVER_S = 23,
    CTRL_COVER_F = 24,
    CTRL_COVER_P = 25,
    CTRL_ADVANTAGE_S = 26,
    CTRL_ADVANTAGE_F = 27,
    CTRL_ADVANTAGE_P = 28,
    CTRL_WIND_STAR = 29,
    CTRL_ROAD_STAR = 30,
    CTRL_AIR_SHIP = 31,
    CTRL_WHEEL_CUSTOM = 32,
    CTRL_OMNI_TEMPOS = 33,
    CTRL_HYPER_DIVE = 34,
    CTRL_GC_BOOSTER = 35,
    CTRL_GC_MASTER = 36,
    CTRL_LEGEND = 37,
    CTRL_SINOBI = 38,
    CTRL_KUNOICHI = 39,
    CTRL_RAILLINKER = 40,
    CTRL_RING_LINKER = 41,
    CTRL_INFLUENTIAL = 42,
    CTRL_G_SHOT = 43,
    CTRL_MASTER_OFF_ROAD = 44,
    CTRL_RESERVE_TANK = 45,
    CTRL_GP_TANK = 46,
    CTRL_CHAOSEMERALD = 47,
    CTRL_THE_CRAZY = 48,
    CTRL_ANGEL_OR_DEVIL = 49,
    CTRL_THROTTLE = 50,
    CTRL_MONEY_CRISIS = 51,
    CTRL_BEGINNER = 52,
    CTRL_BIG_BANG = 53,
    CTRL_GAMBLER = 54,
    CTRL_BINGO_STAR = 55,
    CTRL_WANTED = 56,
    CTRL_HANG_ON = 57,
    CTRL_MAGIC_BROOME = 58,
    CTRL_MAG = 59,
    CTRL_UNTOUCHABLE = 60,
    CTRL_RAINBOW = 61,
    CTRL_WINDCATCHER = 62,
    CTRL_MAX = 63,
};
class hkHalf {
    // total size: 0x2
public:
    signed short m_value; // offset 0x0, size 0x2
};
class ToiInfo {
    // total size: 0x40
public:
    class hkContactPoint m_contactPoint; // offset 0x0, size 0x20
    class hkPadSpu m_time; // offset 0x20, size 0x4
    class hkPadSpu m_seperatingVelocity; // offset 0x24, size 0x4
    class hkGskCache16 m_gskCache; // offset 0x28, size 0xC
    class hkContactPointMaterial16 m_material; // offset 0x34, size 0x8
};
class stcTrickSubParam {
    // total size: 0xC
public:
    signed short s16DataNum; // offset 0x0, size 0x2
    float f32Width; // offset 0x4, size 0x4
    float f32Scale; // offset 0x8, size 0x4
};
class compile_assert {
    // total size: 0x1
};
class hkArray {
    // total size: 0xC
public:
    class hkCharacterProxyListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class stcAddPrfm {
    // total size: 0x6C
public:
    float f32MaxSpeedRate; // offset 0x0, size 0x4
    float f32AcceleRate; // offset 0x4, size 0x4
    float f32RotateSpeedRate; // offset 0x8, size 0x4
    float f32RotateAcceleRate; // offset 0xC, size 0x4
    float f32GripRate; // offset 0x10, size 0x4
    float f32DurabilityRate; // offset 0x14, size 0x4
    float f32Speed[3]; // offset 0x18, size 0xC
    float f32Accele[3]; // offset 0x24, size 0xC
    float f32RotateSpeed; // offset 0x30, size 0x4
    float f32RotateAccele; // offset 0x34, size 0x4
    float f32Grip; // offset 0x38, size 0x4
    float f32JumpSpeed; // offset 0x3C, size 0x4
    float f32JumpAccele; // offset 0x40, size 0x4
    float f32Durability; // offset 0x44, size 0x4
    unsigned int u32Ability; // offset 0x48, size 0x4
    float f32MaxAgp; // offset 0x4C, size 0x4
    float f32GCtrlDischargeSpeed; // offset 0x50, size 0x4
    float f32GDiveSpeedRate; // offset 0x54, size 0x4
    float f32GPTakeRate; // offset 0x58, size 0x4
    float f32GCtrlGpUseRate; // offset 0x5C, size 0x4
    float f32GDiveGpUseRate; // offset 0x60, size 0x4
    signed int s32AttackEnableFrame; // offset 0x64, size 0x4
    signed short s16RingCapacity; // offset 0x68, size 0x2
    signed char s8TrickRank; // offset 0x6A, size 0x1
    signed char s8ItemRank; // offset 0x6B, size 0x1
};
class hkBroadPhase : public hkReferencedObject {
    // total size: 0x14
public:
    class hkMultiThreadCheck m_multiThreadCheck; // offset 0x8, size 0x8
    class hkCriticalSection * m_criticalSection; // offset 0x10, size 0x4
};
class hkWorldDynamicsStepInfo {
    // total size: 0x150
public:
    class hkStepInfo m_stepInfo; // offset 0x0, size 0x10
    class hkSolverInfo m_solverInfo; // offset 0x10, size 0x140
};
enum enmDraw2DType {
    TYPE_2D_BOARD = 0,
    TYPE_2D_BIKE = 1,
    TYPE_2D_SKATE = 2,
    TYPE_2D_AIRRIDE = 3,
    TYPE_2D_WHEEL = 4,
    TYPE_2D_SURFING = 5,
    TYPE_2D_GRIND = 6,
    TYPE_2D_SP_DURABILITY = 7,
    TYPE_2D_SP_AGP = 8,
    TYPE_2D_SP_MAX_SPEED = 9,
    TYPE_2D_SP_1ST_SPEED = 10,
    TYPE_2D_SP_GC_SPEED = 11,
    TYPE_2D_SP_ADD_TRICK = 12,
    TYPE_2D_SP_GHOST = 13,
    TYPE_2D_SP_AUTO_WALL_RUN = 14,
    TYPE_2D_SP_RING_CAPACITY = 15,
    TYPE_2D_SP_TANK = 16,
    TYPE_2D_SP_MAG_BARRIER = 17,
    TYPE_2D_SP_ANGEL_OR_DEVIL = 18,
    TYPE_2D_SP_ITEM_RANK_UP = 19,
    TYPE_2D_SP_SOUND_CHANGE = 20,
    TYPE_2D_SP_TRAP_VIEW = 21,
    TYPE_2D_SP_TRAP_CTRL = 22,
    TYPE_2D_SP_TRAP_SPEED = 23,
    TYPE_2D_SP_ALL_PARAM_UP = 24,
    TYPE_2D_SP_ATTACK_TIME_UP = 25,
    TYPE_2D_SP_GP_INFINITY = 26,
    TYPE_2D_SP_GP_GET_RATE = 27,
    TYPE_2D_SP_ANGEL = 28,
    TYPE_2D_SP_DEVIL = 29,
    TYPE_2D_SP_THROTTLE = 30,
    TYPE_2D_MAX = 31,
    TYPE_2D_EMPTY = 32,
};
class clsOOMap : public map {
    // total size: 0x18
};
class hkAgentNnEntry : public hkAgentEntry {
    // total size: 0x1C
public:
    unsigned short m_agentIndexOnCollidable[2]; // offset 0x8, size 0x4
    class hkContactMgr * m_contactMgr; // offset 0xC, size 0x4
    unsigned char m_collisionQualityIndex; // offset 0x10, size 0x1
    unsigned char m_forceCollideOntoPpu; // offset 0x11, size 0x1
    unsigned char m_padding[2]; // offset 0x12, size 0x2
    class hkLinkedCollidable * m_collidable[2]; // offset 0x14, size 0x8
};
class hkArray {
    // total size: 0xC
public:
    class hkCollidable * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class __vector_pod {
    // total size: 0xC
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    unsigned int * data_; // offset 0x8, size 0x4
};
class hkCharacterProxyListener {
    // total size: 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
class hkArray {
    // total size: 0xC
public:
    class PropertyLock * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkEnum {
    // total size: 0x1
public:
    signed char m_storage; // offset 0x0, size 0x1
};
class stcExtensionFlyAction {
    // total size: 0x8
public:
    class stcExtensionLeverRate sLever; // offset 0x0, size 0x8
};
class hkAllCdPointCollector : public hkCdPointCollector {
    // total size: 0x1A0
public:
    class hkInplaceArray m_hits; // offset 0x10, size 0x190
};
class clsTurbTrickAction : public clsBaseTrickAction {
    // total size: 0x4
};
class hkContactImpulseLimitBreachedListener {
    // total size: 0x0
};
enum enmRunMode {
    COM_RUN_MODE_HIGH = 0,
    COM_RUN_MODE_NORMAL = 1,
    COM_RUN_MODE_LOW = 2,
};
class PropertyLock {
    // total size: 0xC
public:
    unsigned int m_key; // offset 0x0, size 0x4
    class hkMultiThreadCheck m_multiThreadCheck; // offset 0x4, size 0x8
};
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
};
class hkRayCollidableFilter {
    // total size: 0x4
};
class clsOOStlAllocator {
    // total size: 0x4
public:
    class clsOOHeapFragment * m_pcHeap; // offset 0x0, size 0x4
};
enum enmComDis {
    COM_DIS_NON = 0,
    COM_DIS_20 = 1,
    COM_DIS_40 = 2,
    COM_DIS_60 = 3,
    COM_DIS_80 = 4,
    MAX_COM_DIS = 4,
};
class hkReferencedObject : public hkBaseObject {
    // total size: 0x8
public:
    unsigned short m_memSizeAndFlags; // offset 0x4, size 0x2
    signed short m_referenceCount; // offset 0x6, size 0x2
};
class clsPipeTrickAction : public clsBaseTrickAction {
    // total size: 0x4
};
class __red_black_tree {
    // total size: 0x1
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x4
};
class compressed_pair_imp {
    // total size: 0x8
public:
    class value_compare first_; // offset 0x0, size 0x1
    class node * second_; // offset 0x4, size 0x4
};
class stcEggDetail {
    // total size: 0x10
public:
    float f32LifeFrame; // offset 0x0, size 0x4
    unsigned short u16x; // offset 0x4, size 0x2
    unsigned short u16y; // offset 0x6, size 0x2
    unsigned char u8Size; // offset 0x8, size 0x1
    unsigned char u8ColorNo; // offset 0x9, size 0x1
    signed char s8Uv; // offset 0xA, size 0x1
    unsigned char u8ViewportNo; // offset 0xB, size 0x1
    unsigned short s16Alpha; // offset 0xC, size 0x2
    signed short s16Rot; // offset 0xE, size 0x2
};
class hkCollisionAgentConfig {
    // total size: 0x0
};
class clsLerpParam {
    // total size: 0x10
public:
    float m_f32Target; // offset 0x0, size 0x4
    float m_f32Result; // offset 0x4, size 0x4
    float m_f32Add; // offset 0x8, size 0x4
    float m_f32Frame; // offset 0xC, size 0x4
};
class hkPadSpu {
    // total size: 0x4
public:
    class hkCdBody * m_storage; // offset 0x0, size 0x4
};
class hkContactPointMaterial16 : public hkContactPointMaterial {
    // total size: 0x8
};
enum enmRingTableType {
    RING_TABLE_0 = 0,
    RING_TABLE_50 = 1,
    RING_TABLE_100 = 2,
    RING_TABLE_20_40 = 3,
    RING_TABLE_50_70 = 4,
    RING_TABLE_50_80 = 5,
    RING_TABLE_50_100 = 6,
    RING_TABLE_10_20_50 = 7,
    RING_TABLE_20_40_50 = 8,
    RING_TABLE_20_40_60 = 9,
    RING_TABLE_20_40_70 = 10,
    RING_TABLE_20_40_100 = 11,
    RING_TABLE_20_50_70 = 12,
    RING_TABLE_30_40_50 = 13,
    RING_TABLE_40_50_70 = 14,
    RING_TABLE_50_70_100 = 15,
    RING_TABLE_40_60_80 = 16,
    RING_TABLE_50_100_100 = 17,
    MAX_RING_TABLE_NUM = 18,
};
class hkArray {
    // total size: 0xC
public:
    class hkRigidBody * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class anchor {
    // total size: 0x4
public:
    class node_base * left_; // offset 0x0, size 0x4
};
class hkSmallArray {
    // total size: 0x8
public:
    class hkConstraintInternal * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
class hkArray {
    // total size: 0xC
public:
    class hkConstraintListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class sceGsMiptbp1 {
    // total size: 0x8
public:
    unsigned long TBP1 : 14; // offset 0x0, size 0x4
    unsigned long TBW1 : 6; // offset 0x0, size 0x4
    unsigned long TBP2 : 14; // offset 0x0, size 0x4
    unsigned long TBW2 : 6; // offset 0x0, size 0x4
    unsigned long TBP3 : 14; // offset 0x0, size 0x4
    unsigned long TBW3 : 6; // offset 0x0, size 0x4
    unsigned long pad60 : 4; // offset 0x0, size 0x4
};
class NNS_SUBMOTION {
    // total size: 0x28
public:
    unsigned int fType; // offset 0x0, size 0x4
    unsigned int fIPType; // offset 0x4, size 0x4
    union { // inferred
        signed int Id; // offset 0x8, size 0x4
        struct { // inferred
            signed short Id0; // offset 0x8, size 0x2
            signed short Id1; // offset 0xA, size 0x2
        };
    };
    float StartFrame; // offset 0xC, size 0x4
    float EndFrame; // offset 0x10, size 0x4
    float StartKeyFrame; // offset 0x14, size 0x4
    float EndKeyFrame; // offset 0x18, size 0x4
    signed int nKeyFrame; // offset 0x1C, size 0x4
    signed int KeySize; // offset 0x20, size 0x4
    void * pKeyList; // offset 0x24, size 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkContactImpulseLimitBreachedListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class compressed_pair_imp : private allocator {
    // total size: 0x4
public:
    unsigned int second_; // offset 0x0, size 0x4
};
class hkRigidBody : public hkEntity {
    // total size: 0x200
};
class hkGskCache16 : public hkGskCache {
    // total size: 0xC
};
class hkCollisionInput {
    // total size: 0x14
public:
    class hkPadSpu m_dispatcher; // offset 0x0, size 0x4
    class hkPadSpu m_tolerance; // offset 0x4, size 0x4
    class hkPadSpu m_filter; // offset 0x8, size 0x4
    class hkPadSpu m_convexListFilter; // offset 0xC, size 0x4
    class hkPadSpu m_createPredictiveAgents; // offset 0x10, size 0x1
};
class hkBroadPhaseBorder {
    // total size: 0x0
};
enum Symmetric {
    IS_SYMMETRIC = 0,
    IS_NOT_SYMMETRIC = 1,
    IS_NOT_SYMMETRIC_AND_FLIPPED = 2,
};
class stcGDivePath {
    // total size: 0x10
public:
    signed short s16MaxSpeed; // offset 0x0, size 0x2
    signed short s16MinSpeed; // offset 0x2, size 0x2
    signed short s16Flag; // offset 0x4, size 0x2
    signed short as16Reserve[5]; // offset 0x6, size 0xA
};
class stcExtensionLeverRate {
    // total size: 0x8
public:
    float f32LeverRateX; // offset 0x0, size 0x4
    float f32LeverRateY; // offset 0x4, size 0x4
};
class hkInplaceArray : public hkArray {
    // total size: 0x190
public:
    class hkRootCdPoint m_storage[8]; // offset 0x10, size 0x180
};
class hkConstraintListener {
    // total size: 0x0
};
class NNS_QUATERNION {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
enum enmPriority {
    PRI_LV_00 = 0,
    PRI_LV_01 = 1,
    PRI_LV_02 = 2,
    PRI_LV_03 = 3,
    PRI_LV_04 = 4,
    PRI_LV_05 = 5,
    PRI_LV_06 = 6,
    PRI_HIGHT = 5,
    PRI_MID_HIGHT = 4,
    PRI_NORMAL = 3,
    PRI_MID_LOW = 2,
    PRI_LOW = 1,
};
enum enmRet {
    VISIBLE_CLIP = 0,
    VISIBLE = 1,
    OUT_VISIBLE = 2,
    OUT_PORTAL = 3,
    OUT_FAR = 4,
};
class hkPadSpu {
    // total size: 0x4
public:
    class hkCollisionQualityInfo * m_storage; // offset 0x0, size 0x4
};
class hkConstraintData : public hkReferencedObject {
    // total size: 0xC
public:
    unsigned int m_userData; // offset 0x8, size 0x4
};
class stcPlayStatus {
    // total size: 0x3C
public:
    float f32DefScale; // offset 0x0, size 0x4
    float f32RandScale; // offset 0x4, size 0x4
    float f32AddScale; // offset 0x8, size 0x4
    float f32FadeFrame; // offset 0xC, size 0x4
    float f32Height; // offset 0x10, size 0x4
    class NNS_VECTOR sStartVec; // offset 0x14, size 0xC
    class NNS_VECTOR sPowerScale; // offset 0x20, size 0xC
    float f32Speed; // offset 0x2C, size 0x4
    float f32TuStart; // offset 0x30, size 0x4
    float f32TuSize; // offset 0x34, size 0x4
    float f32TuSpeed; // offset 0x38, size 0x4
};
class node_base : public anchor {
    // total size: 0xC
public:
    class node_base * right_; // offset 0x4, size 0x4
    class __pointer_plus_bit parent_; // offset 0x8, size 0x4
};
class clsOOList : public list {
    // total size: 0x14
};
class hkArray {
    // total size: 0xC
public:
    class hkSimulationIsland * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class clsSlerpQuat {
    // total size: 0x3C
public:
    class NNS_QUATERNION m_sBaseQuat; // offset 0x0, size 0x10
    class NNS_QUATERNION m_sSlerpQuat; // offset 0x10, size 0x10
    class NNS_QUATERNION m_sResultQuat; // offset 0x20, size 0x10
    float m_f32Rate; // offset 0x30, size 0x4
    float m_f32Add; // offset 0x34, size 0x4
    unsigned char m_bIsSlerp; // offset 0x38, size 0x1
};
class allocator {
    // total size: 0x1
};
class hkBool {
    // total size: 0x1
public:
    char m_bool; // offset 0x0, size 0x1
};
class hkEnum {
    // total size: 0x4
public:
    unsigned int m_storage; // offset 0x0, size 0x4
};
class clsFreeTrickAction : public clsBaseTrickAction {
    // total size: 0x4
};
class hkSolverInfo {
    // total size: 0x140
public:
    float m_one; // offset 0x0, size 0x4
    float m_tau; // offset 0x4, size 0x4
    float m_damping; // offset 0x8, size 0x4
    float m_frictionTau; // offset 0xC, size 0x4
    class hkVector4 m_globalAccelerationPerSubStep; // offset 0x10, size 0x10
    class hkVector4 m_globalAccelerationPerStep; // offset 0x20, size 0x10
    class hkVector4 m_integrateVelocityFactor; // offset 0x30, size 0x10
    class hkVector4 m_invIntegrateVelocityFactor; // offset 0x40, size 0x10
    float m_dampDivTau; // offset 0x50, size 0x4
    float m_tauDivDamp; // offset 0x54, size 0x4
    float m_dampDivFrictionTau; // offset 0x58, size 0x4
    float m_frictionTauDivDamp; // offset 0x5C, size 0x4
    float m_contactRestingVelocity; // offset 0x60, size 0x4
    class DeactivationInfo m_deactivationInfo[6]; // offset 0x64, size 0xC0
    float m_deltaTime; // offset 0x124, size 0x4
    float m_invDeltaTime; // offset 0x128, size 0x4
    signed int m_numSteps; // offset 0x12C, size 0x4
    signed int m_numMicroSteps; // offset 0x130, size 0x4
    float m_invNumMicroSteps; // offset 0x134, size 0x4
    float m_invNumSteps; // offset 0x138, size 0x4
    class hkBool m_forceCoherentConstraintOrderingInSolver; // offset 0x13C, size 0x1
    unsigned char m_deactivationNumInactiveFramesSelectFlag[2]; // offset 0x13D, size 0x2
    unsigned char m_deactivationIntegrateCounter; // offset 0x13F, size 0x1
};
enum enmMode {
    MODE_NORMAL = 0,
    MODE_CURVE_CHECK = 1,
    MAX_MODE_NUM = 2,
};
class __pointer_plus_bit {
    // total size: 0x4
public:
    class node_base * ptr_; // offset 0x0, size 0x4
};
class stcData {
    // total size: 0x30
public:
    class NNS_VECTORFAST sPosVecFast; // offset 0x0, size 0x10
    class NNS_VECTORFAST sDirVecFast; // offset 0x10, size 0x10
    float f32Speed; // offset 0x20, size 0x4
    float f32Accele; // offset 0x24, size 0x4
    float f32Reserved[2]; // offset 0x28, size 0x8
};
class generic_iterator {
    // total size: 0x4
public:
    class generic_iterator i_; // offset 0x0, size 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkCollisionListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class compressed_pair : private compressed_pair_imp {
    // total size: 0x8
};
enum enmFlag {
    FLAG_NULL = 0,
    FLAG_DRAW_COL = 1,
    FLAG_DRAW_MOV_LINE = 2,
    FLAG_DRAW_PST_LINE = 4,
    FLAG_DRAW_VLC_LINE = 8,
    FLAG_DRAW_GRAVITY = 16,
    FLAG_DRAW_GRID = 32,
    FLAG_INFINI_AGP = 64,
    FLAG_FREE_GEARCHANGE = 128,
    FLAG_CHANGE_COM = 256,
    FLAG_STOP = 512,
    FLAG_UPDATE_TIMER = 268435456,
    FLAG_DEFAULT = 0,
};
class hkWorldObject : public hkReferencedObject {
    // total size: 0x58
public:
    class hkWorld * m_world; // offset 0x8, size 0x4
    void * m_userData; // offset 0xC, size 0x4
    class hkLinkedCollidable m_collidable; // offset 0x10, size 0x30
    class hkMultiThreadCheck m_multiThreadCheck; // offset 0x40, size 0x8
    char * m_name; // offset 0x48, size 0x4
    class hkArray m_properties; // offset 0x4C, size 0xC
};
class stcExtensionGDive {
    // total size: 0x8
public:
    class stcExtensionLeverRate sLever; // offset 0x0, size 0x8
};
class hkMultiThreadCheck {
    // total size: 0x8
public:
    unsigned int m_threadId; // offset 0x0, size 0x4
    signed short m_markCount; // offset 0x4, size 0x2
    unsigned short m_markBitStack; // offset 0x6, size 0x2
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class clsSurface {
    // total size: 0x20
public:
    class NNS_QUATERNION m_sQuat; // offset 0x0, size 0x10
    class NNS_VECTORFAST m_sUpVecFast; // offset 0x10, size 0x10
};
class hkCollisionListener {
    // total size: 0x4
};
class list : private __list_imp {
    // total size: 0x14
};
class vector : private __vector_imp {
    // total size: 0xC
};
class hkCharacterProxy : public hkReferencedObject, public hkEntityListener, public hkPhantomListener {
    // total size: 0xC0
public:
    class hkVector4 m_velocity; // offset 0x10, size 0x10
    class hkVector4 m_oldDisplacement; // offset 0x20, size 0x10
    class hkShapePhantom * m_shapePhantom; // offset 0x30, size 0x4
    float m_dynamicFriction; // offset 0x34, size 0x4
    float m_staticFriction; // offset 0x38, size 0x4
    class hkVector4 m_up; // offset 0x40, size 0x10
    float m_extraUpStaticFriction; // offset 0x50, size 0x4
    float m_extraDownStaticFriction; // offset 0x54, size 0x4
    float m_keepDistance; // offset 0x58, size 0x4
    float m_keepContactTolerance; // offset 0x5C, size 0x4
    float m_contactAngleSensitivity; // offset 0x60, size 0x4
    signed int m_userPlanes; // offset 0x64, size 0x4
    float m_maxCharacterSpeedForSolver; // offset 0x68, size 0x4
    float m_characterStrength; // offset 0x6C, size 0x4
    float m_characterMass; // offset 0x70, size 0x4
    class hkArray m_manifold; // offset 0x74, size 0xC
    class hkArray m_listeners; // offset 0x80, size 0xC
    class hkArray m_bodies; // offset 0x8C, size 0xC
    class hkArray m_phantoms; // offset 0x98, size 0xC
    float m_maxSlopeCosine; // offset 0xA4, size 0x4
    float m_penetrationRecoverySpeed; // offset 0xA8, size 0x4
    signed int m_maxCastIterations; // offset 0xAC, size 0x4
    unsigned char m_refreshManifoldInCheckSupport; // offset 0xB0, size 0x1
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
class clsReplayKey : public clsPlayerKey {
    // total size: 0x48
public:
    class vector m_vecKeyBuf; // offset 0x34, size 0xC
    signed int m_s32BufPos; // offset 0x40, size 0x4
    class clsPlayerTask * m_pcPlayer; // offset 0x44, size 0x4
};
class stcGravityPath {
    // total size: 0x10
public:
    signed short s16MaxSpeed; // offset 0x0, size 0x2
    signed short s16MinSpeed; // offset 0x2, size 0x2
    signed short s16Flag; // offset 0x4, size 0x2
    signed short as16Reserve[5]; // offset 0x6, size 0xA
};
enum enmWalkType {
    WALK_PRFM_NORMAL = 0,
    WALK_PRFM_SVLRACE_FAST = 1,
    WALK_PRFM_SVLRACE_USUALLY = 2,
    WALK_PRFM_SVLRACE_SLOW = 3,
    MAX_WALK_PRFM_NUM = 4,
};

// Range: 0x41A530 -> 0x41A584
void triggerDead(class clsReaction * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x41A530 -> 0x41A584
    }
}


