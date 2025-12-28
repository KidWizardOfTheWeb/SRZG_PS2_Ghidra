/*
    Compile unit: C:\usr\local\sega\nvs\src\nvsclut.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class NVS_PALETTE_CONSTANT nvg_palette_const[2]; // size: 0x20, address: 0x0
unsigned int nvg_clutbuf[2]; // size: 0x8, address: 0x0
unsigned int nvg_clutnum[2]; // size: 0x8, address: 0x0
class NVS_CLUTMANAGE * nvg_clutmanage4; // size: 0x4, address: 0x6D1EC0
class NVS_CLUTMANAGE * nvg_clutmanage8; // size: 0x4, address: 0x6D1F00
unsigned char * nvg_cluthostbuf4; // size: 0x4, address: 0x0
unsigned char * nvg_cluthostbuf8; // size: 0x4, address: 0x0
class tagPXS_PUSHBUFFER * pxgCurrentPB; // size: 0x4, address: 0x6D1F08
class NVS_CLUTMANAGE {
    // total size: 0x100
public:
    unsigned short format; // offset 0x0, size 0x2
    unsigned short entrycount; // offset 0x2, size 0x2
    unsigned short psm; // offset 0x4, size 0x2
    unsigned short group; // offset 0x6, size 0x2
    void * hostbuf; // offset 0x8, size 0x4
    unsigned int localptr; // offset 0xC, size 0x4
    unsigned int enable; // offset 0x10, size 0x4
    unsigned int pktenable; // offset 0x14, size 0x4
    unsigned int reserved[10]; // offset 0x18, size 0x28
    unsigned int dmabuf[48]; // offset 0x40, size 0xC0
};
class NVS_SVRHEADER {
    // total size: 0x8
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short miplevel; // offset 0x2, size 0x2
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
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
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
};
class PXS_QWDATA {
    // total size: 0x10
public:
    union { // inferred
        __int128 ul128; // offset 0x0, size 0x10
        unsigned long ul64[2]; // offset 0x0, size 0x8
        unsigned int ui32[4]; // offset 0x0, size 0x10
    };
};
class NVS_SVPHEADER {
    // total size: 0x8
public:
    unsigned short mode; // offset 0x0, size 0x2
    signed short bank; // offset 0x2, size 0x2
    signed short entryoffset; // offset 0x4, size 0x2
    signed short entrycount; // offset 0x6, size 0x2
};
class NVS_PALETTE_CONSTANT {
    // total size: 0x10
public:
    unsigned int width; // offset 0x0, size 0x4
    unsigned int height; // offset 0x4, size 0x4
    unsigned int bits; // offset 0x8, size 0x4
    unsigned int bankSize; // offset 0xC, size 0x4
};
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
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
class NVS_CLUTINFO {
    // total size: 0x8
public:
    unsigned int localptr; // offset 0x0, size 0x4
    unsigned int psm; // offset 0x4, size 0x4
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
class NVS_CLUTCONFIG {
    // total size: 0x20
public:
    unsigned int c4localptr; // offset 0x0, size 0x4
    void * c4hostptr; // offset 0x4, size 0x4
    unsigned int c4num; // offset 0x8, size 0x4
    class NVS_CLUTMANAGE * c4mng; // offset 0xC, size 0x4
    unsigned int c8localptr; // offset 0x10, size 0x4
    void * c8hostptr; // offset 0x14, size 0x4
    unsigned int c8num; // offset 0x18, size 0x4
    class NVS_CLUTMANAGE * c8mng; // offset 0x1C, size 0x4
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
enum PXE_ERR {
    PXE_ERR_OK = 0,
    PXE_ERR_INVALIDARG = -1,
    PXE_ERR_BUSY = -2,
    PXE_ERR_NOTREADY = -10,
    PXE_ERR_NOTVB = -50,
    PXE_ERR_INVALIDVBVERSION = -51,
    PXE_ERR_TOOMANYVERTICES = -52,
    PXE_ERR_NODATA = -53,
    PXE_ERR_NOTENOUGHBUFFER = -54,
    PXE_ERR_INCORRECTDBINDEX = -55,
};
enum NVE_CLUTGROUP {
    NVE_CLUTGROUP_CLUT4 = 0,
    NVE_CLUTGROUP_CLUT8 = 1,
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
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};

// Range: 0x15A2E0 -> 0x15A32C
signed int nvIsClut(class NVS_SVROBJ * svrobj /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A2E0 -> 0x15A32C
    }
}


// Range: 0x15A330 -> 0x15A3B4
signed int nvGetClutInfo(class NVS_CLUTINFO * info /* r2 */, class NVS_SVROBJ * svrobj /* r2 */, unsigned int bank /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A330 -> 0x15A3B4
        class NVS_CLUTMANAGE * mng; // r5
    }
}


