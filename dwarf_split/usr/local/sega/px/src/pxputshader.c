/*
    Compile unit: C:\usr\local\sega\px\src\pxputshader.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class tagPXS_PUSHBUFFER * pxgCurrentPB; // size: 0x4, address: 0x6D1F08
void * pxgShaderTableRPCT[]; // size: 0x0, address: 0x5FB9A0
void * pxgShaderTableRPCTFast[]; // size: 0x0, address: 0x5FB9E0
void * pxgShaderTableRPNTDirSpecular[]; // size: 0x0, address: 0x5FB960
void * pxgShaderTableRPNTDir[]; // size: 0x0, address: 0x5FB8E0
void * pxgShaderTableRPNTDirFast[]; // size: 0x0, address: 0x5FB920
void * pxgShaderTablePCT[]; // size: 0x0, address: 0x5FB320
void * pxgShaderTablePCTFast[]; // size: 0x0, address: 0x5FB7E0
void * pxgShaderTablePNTDirSpecular[]; // size: 0x0, address: 0x5FB220
void * pxgShaderTablePNTDir[]; // size: 0x0, address: 0x5FB120
void * pxgShaderTablePNTDirFast[]; // size: 0x0, address: 0x5FB6E0
void * pxgShaderTableSpecial[]; // size: 0x0, address: 0x5FB420
void * pxgShaderTableSpecialFast[]; // size: 0x0, address: 0x5FB580
class tagPXS_PUSHBUFFER {
    // total size: 0xA0
public:
    unsigned int flag; // offset 0x0, size 0x4
    unsigned short dbIndex; // offset 0x4, size 0x2
    unsigned short renderIndex; // offset 0x6, size 0x2
    unsigned int peakTags; // offset 0x8, size 0x4
    unsigned int peakBytes; // offset 0xC, size 0x4
    unsigned int beginFlag; // offset 0x10, size 0x4
    void * recentAddr; // offset 0x14, size 0x4
    class tagPXS_PUSHBUFFER * prev; // offset 0x18, size 0x4
    class tagPXS_PUSHBUFFER * next; // offset 0x1C, size 0x4
    class PXS_PUSHBUFFER1 db[2]; // offset 0x20, size 0x80
};
class PXS_PUSHBUFFER1 {
    // total size: 0x40
public:
    __int128 * tagTop; // offset 0x0, size 0x4
    __int128 * tagPtr; // offset 0x4, size 0x4
    __int128 * bufTop; // offset 0x8, size 0x4
    __int128 * bufPtr; // offset 0xC, size 0x4
    __int128 * beginPtr; // offset 0x10, size 0x4
    unsigned int bufSize; // offset 0x14, size 0x4
    unsigned int maxTags; // offset 0x18, size 0x4
    unsigned int numTags; // offset 0x1C, size 0x4
    unsigned int numBytes; // offset 0x20, size 0x4
    unsigned int pushVuOffset; // offset 0x24, size 0x4
    unsigned int nextVifCmd; // offset 0x28, size 0x4
    unsigned int ready; // offset 0x2C, size 0x4
    unsigned int reserved2[4]; // offset 0x30, size 0x10
};

// Range: 0x15A540 -> 0x15A6E8
void PXPutShader(unsigned int type /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A540 -> 0x15A6E8
        void * shader; // r2
    }
}


