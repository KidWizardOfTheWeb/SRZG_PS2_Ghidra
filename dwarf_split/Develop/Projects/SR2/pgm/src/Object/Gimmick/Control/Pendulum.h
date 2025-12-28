/*
    Compile unit: C:\Develop\Projects\SR2\pgm\src\Object\Gimmick\Control\Pendulum.h
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E63C0 -> 0x002E6528
*/
// Range: 0x2E63C0 -> 0x2E6528
void * __dt(class clsPendulum * this /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2E63C0 -> 0x2E6528
        class clsHavok * pcHavok; // r2
        class stcAngleLimitsData * it; // r17
        class stcAngleLimitsData * end; // r2
        class clsGimmickRigidBody * * it; // r17
        class clsGimmickRigidBody * * end; // r2
        class hkShape * * it; // r17
        class hkShape * * end; // r2
    }
}


// Range: 0x39FEA0 -> 0x39FEC8
void getPosition(class clsPendulum * this /* r2 */, unsigned char u8Num /* r2 */, class NNS_VECTORFAST & rsPosVecFast /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x39FEA0 -> 0x39FEC8
    }
}


// Range: 0x39FEE0 -> 0x39FF18
void getRotQuat(class clsPendulum * this /* r2 */, unsigned char u8Num /* r2 */, class NNS_QUATERNION & rsRotQuat /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x39FEE0 -> 0x39FF18
    }
}


// Range: 0x3A0C50 -> 0x3A0CC4
void updatePosition(class clsPendulum * this /* r16 */, float f32Length /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3A0C50 -> 0x3A0CC4
        float sMtx[4][4]; // r29+0x40
        class NNS_VECTORFAST sDownVecFast; // r29+0x30
    }
}


// Range: 0x49D930 -> 0x49DCA8
void * __ct(class clsPendulum * this /* r20 */, unsigned char u8LineNum /* r2 */, class NNS_VECTORFAST & rsPosVecFast /* r19 */, class NNS_QUATERNION & rsRotQuat /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x49D930 -> 0x49DCA8
        class hkShape * pcSphereShape; // r2
        class hkRigidBodyCinfo cInfo; // r29+0xB0
    }
}


