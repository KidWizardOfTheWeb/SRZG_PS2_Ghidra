/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Object\Gimmick\GimmickPath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_VECTORFAST tosZeroVecFast; // size: 0x10, address: 0x67E670
class clsPfSystem * m_tpcSingleton; // size: 0x4, address: 0x6E69B8
class clsHavok * m_tpcSingleton; // size: 0x4, address: 0x707E60
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
class hkCdPointCollector {
    // total size: 0x8
public:
    float m_earlyOutDistance; // offset 0x4, size 0x4
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
class clsRigidBody : public hkRigidBody {
    // total size: 0x210
public:
    void * m_pvCollisionInfo; // offset 0x200, size 0x4
};
class hkPhantomListener {
    // total size: 0x4
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
class hkArray {
    // total size: 0xC
public:
    class hkProperty * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
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
class PotentialInfo {
    // total size: 0x1008
public:
    class ContactRef * m_firstFreePotentialContact; // offset 0x0, size 0x4
    class hkProcessCdPoint * * m_firstFreeRepresentativeContact; // offset 0x4, size 0x4
    class hkProcessCdPoint * m_representativeContacts[256]; // offset 0x8, size 0x400
    class ContactRef m_potentialContacts[256]; // offset 0x408, size 0xC00
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
class hkConstraintOwner : public hkReferencedObject {
    // total size: 0x18
public:
    class hkConstraintInfo m_constraintInfo; // offset 0x8, size 0x10
};
class hkCriticalSection {
    // total size: 0x1
};
class clsSingleton {
    // total size: 0x4
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
enum hkStepResult {
    HK_STEP_RESULT_SUCCESS = 0,
    HK_STEP_RESULT_MEMORY_FAILURE_BEFORE_INTEGRATION = 1,
    HK_STEP_RESULT_MEMORY_FAILURE_DURING_COLLIDE = 2,
    HK_STEP_RESULT_MEMORY_FAILURE_DURING_TOI_SOLVE = 3,
};
class hkPadSpu {
    // total size: 0x4
public:
    class hkContactMgr * m_storage; // offset 0x0, size 0x4
};
class hkConvexListFilter {
    // total size: 0x0
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
class clsGimmickPath {
    // total size: 0x190
public:
    class clsPosturalCtrl m_cPostural; // offset 0x10, size 0xB0
    class clsPath m_cPath; // offset 0xC0, size 0x60
    float m_f32Speed; // offset 0x120, size 0x4
    float m_f32TotalFrame; // offset 0x124, size 0x4
    float m_f32StartWaitFrame; // offset 0x128, size 0x4
    float m_f32EventFrame; // offset 0x12C, size 0x4
    enum enmGimmickPathMode m_enGimmickPathMode; // offset 0x130, size 0x4
    class NNS_QUATERNION m_sInitRotQuat; // offset 0x134, size 0x10
    class NNS_VECTORFAST m_sInitPosVecFast; // offset 0x150, size 0x10
    unsigned int m_u32HitFlg; // offset 0x160, size 0x4
    unsigned char m_bPathPointChange; // offset 0x164, size 0x1
    unsigned char m_bObjRotChange; // offset 0x165, size 0x1
    class NNS_VECTORFAST m_sVelocityOld; // offset 0x170, size 0x10
    float m_f32SpeedOld; // offset 0x180, size 0x4
    class NNS_VECTOR m_sAngleVelocityOld; // offset 0x184, size 0xC
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
class hkProcessCollisionData {
    // total size: 0x3050
public:
    class hkPadSpu m_firstFreeContactPoint; // offset 0x0, size 0x4
    class hkPadSpu m_constraintOwner; // offset 0x4, size 0x4
    class hkProcessCdPoint m_contactPoints[256]; // offset 0x10, size 0x3000
    class ToiInfo m_toi; // offset 0x3010, size 0x40
};
class stcSpeedPath {
    // total size: 0x10
public:
    signed short s16MaxSpeed; // offset 0x0, size 0x2
    signed short s16MinSpeed; // offset 0x2, size 0x2
    signed short s16Type; // offset 0x4, size 0x2
    signed short as16Reserve[5]; // offset 0x6, size 0xA
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
class hkSmallArray {
    // total size: 0x8
public:
    class hkCollisionListener * * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
class hkArray {
    // total size: 0xC
public:
    class CollisionEntry * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
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
class clsStepInfo : public hkStepInfo {
    // total size: 0x20
public:
    class hkPadSpu m_invDeltaTimeCaret2; // offset 0x10, size 0x4
};
class hkEnum {
    // total size: 0x1
public:
    unsigned char m_storage; // offset 0x0, size 0x1
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
class hkArray {
    // total size: 0xC
public:
    class hkAgentNnSector * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
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
class hkSmallArray {
    // total size: 0x8
public:
    class hkAction * * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
class clsSingleton {
    // total size: 0x4
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
class hkArray {
    // total size: 0xC
public:
    class hkIslandPostCollideListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkContactPoint {
    // total size: 0x20
public:
    class hkVector4 m_position; // offset 0x0, size 0x10
    class hkVector4 m_separatingNormal; // offset 0x10, size 0x10
};
class hkStepInfo {
    // total size: 0x10
public:
    class hkPadSpu m_startTime; // offset 0x0, size 0x4
    class hkPadSpu m_endTime; // offset 0x4, size 0x4
    class hkPadSpu m_deltaTime; // offset 0x8, size 0x4
    class hkPadSpu m_invDeltaTime; // offset 0xC, size 0x4
};
class hkProperty {
    // total size: 0x10
public:
    unsigned int m_key; // offset 0x0, size 0x4
    unsigned int m_alignmentPadding; // offset 0x4, size 0x4
    class hkPropertyValue m_value; // offset 0x8, size 0x8
};
class hkCdBody {
    // total size: 0x10
public:
    class hkShape * m_shape; // offset 0x0, size 0x4
    unsigned int m_shapeKey; // offset 0x4, size 0x4
    void * m_motion; // offset 0x8, size 0x4
    class hkCdBody * m_parent; // offset 0xC, size 0x4
};
class hkConstraintInfo {
    // total size: 0x10
public:
    signed int m_maxSizeOfSchema; // offset 0x0, size 0x4
    signed int m_sizeOfSchemas; // offset 0x4, size 0x4
    signed int m_numSolverResults; // offset 0x8, size 0x4
    signed int m_numSolverElemTemps; // offset 0xC, size 0x4
};
class ContactRef {
    // total size: 0xC
public:
    class hkProcessCdPoint * m_contactPoint; // offset 0x0, size 0x4
    class hkAgentEntry * m_agentEntry; // offset 0x4, size 0x4
    void * m_agentData; // offset 0x8, size 0x4
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
class hkGskCache {
    // total size: 0xC
public:
    unsigned short m_vertices[4]; // offset 0x0, size 0x8
    unsigned char m_dimA; // offset 0x8, size 0x1
    unsigned char m_dimB; // offset 0x9, size 0x1
    unsigned char m_maxDimA; // offset 0xA, size 0x1
    unsigned char m_maxDimB; // offset 0xB, size 0x1
};
class hkSmallArray {
    // total size: 0x8
public:
    class hkEntityListener * * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
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
class clsPosturalCtrl {
    // total size: 0xB0
public:
    float m_sMtx[4][4]; // offset 0x0, size 0x40
    class NNS_VECTORFAST m_sDirVecFast; // offset 0x40, size 0x10
    class NNS_QUATERNION m_sQuat; // offset 0x50, size 0x10
    class clsSlerpQuat m_cSurface; // offset 0x60, size 0x3C
    class clsLerpParam m_cRotate; // offset 0x9C, size 0x10
};
class NNS_QUATERNION {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class hkEntityListener {
    // total size: 0x4
};
class hkProcessCdPoint {
    // total size: 0x30
public:
    class hkContactPoint m_contact; // offset 0x0, size 0x20
    class hkPadSpu m_contactPointId; // offset 0x20, size 0x4
};
class clsHavok : public clsSingleton {
    // total size: 0x40
public:
    class hkWorld * m_pcWorld; // offset 0x4, size 0x4
    char * m_pu8StackBuff; // offset 0x8, size 0x4
    class hkCollisionListener * m_pcRigidListener; // offset 0xC, size 0x4
    class clsStepInfo m_cStepInfo; // offset 0x10, size 0x20
    signed int m_s32ProcNum; // offset 0x30, size 0x4
};
class hkSmallArray {
    // total size: 0x8
public:
    class hkEntityActivationListener * * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
enum Type {
    TYPE_SIMPLE_CONSTRAINT_CONTACT_MGR = 0,
    TYPE_REPORT_CONTACT_MGR = 1,
    TYPE_CONVEX_LIST_CONTACT_MGR = 2,
    TYPE_NULL_CONTACT_MGR = 3,
    TYPE_USER_CONTACT_MGR = 4,
    TYPE_MAX = 5,
};
class hkIslandPostIntegrateListener {
    // total size: 0x0
};
class clsPfSystem : public clsSingleton, public clsOOSystem {
    // total size: 0x84
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
class hkEntityActivationListener {
    // total size: 0x0
};
class hkPropertyValue {
    // total size: 0x8
public:
    unsigned long m_data; // offset 0x0, size 0x4
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
class hkPadSpu {
    // total size: 0x1
public:
    class hkBool m_storage; // offset 0x0, size 0x1
};
class hkKeyframedRigidMotion : public hkMotion {
    // total size: 0x130
public:
    class hkMaxSizeMotion * m_savedMotion; // offset 0x120, size 0x4
    signed int m_savedQualityTypeIndex; // offset 0x124, size 0x4
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
class hkArray {
    // total size: 0xC
public:
    class hkWorldPostCollideListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
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
class hkTransform {
    // total size: 0x40
public:
    class hkRotation m_rotation; // offset 0x0, size 0x30
    class hkVector4 m_translation; // offset 0x30, size 0x10
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
class hkPhantom : public hkWorldObject {
    // total size: 0x70
public:
    class hkArray m_overlapListeners; // offset 0x58, size 0xC
    class hkArray m_phantomListeners; // offset 0x64, size 0xC
};
class clsPathData : public clsSingleton {
    // total size: 0x20
public:
    class stcData * m_apsData[7]; // offset 0x4, size 0x1C
};
enum enmSoundMode {
    SOUND_MODE___MONAURAL = 0,
    SOUND_MODE___STEREO = 1,
    SOUND_MODE___DOLBY_PROLOGIC2 = 2,
    SOUND_MODE___DOLBY_DIGITAL = 3,
    SOUND___MAX = 4,
};
class hkPadSpu {
    // total size: 0x4
public:
    class hkProcessCollisionInput * m_storage; // offset 0x0, size 0x4
};
class clsSingleton {
    // total size: 0x4
};
class hkPadSpu {
    // total size: 0x4
public:
    class hkConstraintOwner * m_storage; // offset 0x0, size 0x4
};
class hkVector4 {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class NNS_CAPSULE {
    // total size: 0x1C
public:
    class NNS_VECTOR c1; // offset 0x0, size 0xC
    class NNS_VECTOR c2; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
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
class hkProcessCollisionInput : public hkCollisionInput {
    // total size: 0x40
public:
    class hkStepInfo m_stepInfo; // offset 0x20, size 0x10
    class hkPadSpu m_collisionQualityInfo; // offset 0x30, size 0x4
    void * m_dynamicsInfo; // offset 0x34, size 0x4
    unsigned char m_enableDeprecatedWelding; // offset 0x38, size 0x1
    class hkCollisionAgentConfig * m_config; // offset 0x3C, size 0x4
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
enum SimulationType {
    SIMULATION_TYPE_INVALID = 0,
    SIMULATION_TYPE_DISCRETE = 1,
    SIMULATION_TYPE_CONTINUOUS = 2,
    SIMULATION_TYPE_MULTITHREADED = 3,
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
class hkWorldDeletionListener {
    // total size: 0x0
};
class hkArray {
    // total size: 0xC
public:
    class hkEntity * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkPhantomOverlapListener {
    // total size: 0x4
};
class hkWorldPostIntegrateListener {
    // total size: 0x0
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
class hkContactMgrFactory {
    // total size: 0x0
};
class hkPadSpu {
    // total size: 0x4
public:
    float m_storage; // offset 0x0, size 0x4
};
class UserData {
    // total size: 0x4
public:
    union { // inferred
        class GskFlags m_gskFlags; // offset 0x0, size 0x4
        class hkCollisionAgent * m_bridgeChildAgent; // offset 0x0, size 0x4
    };
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
class hkAgent3Input {
    // total size: 0x50
public:
    class hkPadSpu m_bodyA; // offset 0x0, size 0x4
    class hkPadSpu m_bodyB; // offset 0x4, size 0x4
    class hkPadSpu m_input; // offset 0x8, size 0x4
    class hkPadSpu m_contactMgr; // offset 0xC, size 0x4
    class hkTransform m_aTb; // offset 0x10, size 0x40
};
class hkArray {
    // total size: 0xC
public:
    class hkPhantom * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkShapeCollectionFilter {
    // total size: 0x4
};
class hkPadSpu {
    // total size: 0x4
public:
    class hkShapeCollectionFilter * m_storage; // offset 0x0, size 0x4
};
class SpuCollisionCallback {
    // total size: 0x8
public:
    class hkSpuCollisionCallbackUtil * m_util; // offset 0x0, size 0x4
    unsigned short m_capacity; // offset 0x4, size 0x2
    unsigned char m_eventFilter; // offset 0x6, size 0x1
    unsigned char m_userFilter; // offset 0x7, size 0x1
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
class hkCollidable : public hkCdBody {
    // total size: 0x24
public:
    signed char m_ownerOffset; // offset 0x10, size 0x1
    unsigned char m_forceCollideOntoPpu; // offset 0x11, size 0x1
    unsigned short m_shapeSizeOnSpu; // offset 0x12, size 0x2
    class hkTypedBroadPhaseHandle m_broadPhaseHandle; // offset 0x14, size 0xC
    float m_allowedPenetrationDepth; // offset 0x20, size 0x4
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
class stcScissorRect {
    // total size: 0x10
public:
    unsigned int u32OffsetX; // offset 0x0, size 0x4
    unsigned int u32OffsetY; // offset 0x4, size 0x4
    unsigned int u32Right; // offset 0x8, size 0x4
    unsigned int u32Bottom; // offset 0xC, size 0x4
};
class hkCollidableCollidableFilter {
    // total size: 0x4
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
    class hkActionListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
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
class hkQuaternion {
    // total size: 0x10
public:
    class hkVector4 m_vec; // offset 0x0, size 0x10
};
class Agent3FuncsIntern : public Agent3Funcs {
    // total size: 0x34
public:
    enum Symmetric m_symmetric; // offset 0x30, size 0x4
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
class hkUFloat8 {
    // total size: 0x1
public:
    unsigned char m_value; // offset 0x0, size 0x1
};
class hkSpuCollisionCallbackUtil {
    // total size: 0x0
};
class hkTypedBroadPhaseHandle : public hkBroadPhaseHandle {
    // total size: 0xC
public:
    signed char m_type; // offset 0x4, size 0x1
    signed char m_ownerOffset; // offset 0x5, size 0x1
    unsigned short m_objectQualityType; // offset 0x6, size 0x2
    unsigned int m_collisionFilterInfo; // offset 0x8, size 0x4
};
class hkShape : public hkReferencedObject {
    // total size: 0x10
public:
    unsigned int m_userData; // offset 0x8, size 0x4
    class hkEnum m_type; // offset 0xC, size 0x4
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
class hkBroadPhaseHandle {
    // total size: 0x4
public:
    unsigned int m_id; // offset 0x0, size 0x4
};
class hkContactMgr : public hkReferencedObject {
    // total size: 0xC
public:
    enum Type m_type; // offset 0x8, size 0x4
};
class hkArray {
    // total size: 0xC
public:
    class hkWorldDeletionListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
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
    class PropertyLock * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
class hkEnum {
    // total size: 0x1
public:
    signed char m_storage; // offset 0x0, size 0x1
};
class hkContactImpulseLimitBreachedListener {
    // total size: 0x0
};
class PropertyLock {
    // total size: 0xC
public:
    unsigned int m_key; // offset 0x0, size 0x4
    class hkMultiThreadCheck m_multiThreadCheck; // offset 0x4, size 0x8
};
class hkRayCollidableFilter {
    // total size: 0x4
};
class hkReferencedObject : public hkBaseObject {
    // total size: 0x8
public:
    unsigned short m_memSizeAndFlags; // offset 0x4, size 0x2
    signed short m_referenceCount; // offset 0x6, size 0x2
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
class hkArray {
    // total size: 0xC
public:
    class hkContactImpulseLimitBreachedListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
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
class hkRigidBody : public hkEntity {
    // total size: 0x200
};
class stcGDivePath {
    // total size: 0x10
public:
    signed short s16MaxSpeed; // offset 0x0, size 0x2
    signed short s16MinSpeed; // offset 0x2, size 0x2
    signed short s16Flag; // offset 0x4, size 0x2
    signed short as16Reserve[5]; // offset 0x6, size 0xA
};
class hkConstraintListener {
    // total size: 0x0
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
class hkArray {
    // total size: 0xC
public:
    class hkCollisionListener * * m_data; // offset 0x0, size 0x4
    signed int m_size; // offset 0x4, size 0x4
    signed int m_capacityAndFlags; // offset 0x8, size 0x4
};
enum enmGimmickPathMode {
    MODE_STARTWAIT = 0,
    MODE_MAIN = 1,
    MODE_WAIT = 2,
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
class hkCollisionListener {
    // total size: 0x4
};
class stcGravityPath {
    // total size: 0x10
public:
    signed short s16MaxSpeed; // offset 0x0, size 0x2
    signed short s16MinSpeed; // offset 0x2, size 0x2
    signed short s16Flag; // offset 0x4, size 0x2
    signed short as16Reserve[5]; // offset 0x6, size 0xA
};

// Range: 0x37A550 -> 0x37A6A0
void updatePosition_BSpline(class clsGimmickPath * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x37A550 -> 0x37A6A0
        class clsPath & rcPath; // r16
        class NNS_QUATERNION sQuat; // r29+0x90
        class NNS_VECTORFAST sDirVecFast; // r29+0x80
        class NNS_VECTORFAST sSideVecFast; // r29+0x70
        float sMtx[4][4]; // r29+0x30
    }
}


// Range: 0x37A6A0 -> 0x37A85C
void updatePosition(class clsGimmickPath * this /* r19 */, float f32SlerpAddRate /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x37A6A0 -> 0x37A85C
        class clsPath & rcPath; // r2
        class clsPosturalCtrl & rcPostural; // r2
        class NNS_QUATERNION sEndQuat; // r29+0x80
        class NNS_QUATERNION sQuatX; // r29+0x70
        class NNS_QUATERNION sQuatY; // r29+0x60
        float f32RadX; // r22
        float f32RadY; // r29+0x90
    }
}


// Range: 0x37A860 -> 0x37AE1C
void updatePosition(class clsGimmickPath * this /* r17 */, float f32SlerpAddRate /* r21 */, class clsRigidBody * pcRigid /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x37A860 -> 0x37AE1C
        class NNS_VECTORFAST sPosVecFast; // r29+0x140
        class clsPath & rcPath; // r21
        class clsPosturalCtrl & rcPostural; // r2
        class NNS_QUATERNION sOldRotQuat; // r29+0x130
        class hkVector4 cVelocity; // r29+0x120
        class hkVector4 cAngle; // r29+0x110
        class hkVector4 cZero; // r29+0x100
        class NNS_QUATERNION sEndQuat; // r29+0xF0
        class NNS_QUATERNION sQuatX; // r29+0xE0
        class NNS_QUATERNION sQuatY; // r29+0xD0
        float f32RadX; // r23
        float f32RadY; // r29+0x150
        class NNS_VECTORFAST sVelocityVecFast; // r29+0xC0
        class NNS_VECTORFAST & rsVelocityOld; // r19
        class NNS_VECTORFAST sVelocityVecFast; // r29+0xB0
        class hkQuaternion cRotQuat; // r29+0xA0
        class hkQuaternion cRotQuatNew; // r29+0x90
        class hkVector4 cZero; // r29+0x80
    }
}


// Range: 0x37AFE0 -> 0x37B078
void reset(class clsGimmickPath * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x37AFE0 -> 0x37B078
        class NNS_QUATERNION & rsPosturalQuat; // r16
    }
}


// Range: 0x37B080 -> 0x37B248
void init(class clsGimmickPath * this /* r18 */, unsigned int u32PathNo /* r17 */, unsigned int u32DirFlag /* r16 */, float f32Speed /* r29+0x80 */, float f32TotalFrame /* r29+0x80 */, float f32StartWaitFrame /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x37B080 -> 0x37B248
        class stcData * opsData_Gimmick; // r2
        class stcLine * opsLine_Gimmick; // r2
        class NNS_QUATERNION sEndQuat; // r29+0x70
        class NNS_VECTORFAST sDirVecFast; // r29+0x60
        float f32RadY; // r29+0x80
    }
}


