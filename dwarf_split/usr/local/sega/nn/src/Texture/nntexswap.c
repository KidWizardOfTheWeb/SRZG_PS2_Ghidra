/*
    Compile unit: C:\usr\local\sega\nn\src\Texture\nntexswap.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned char nnsDoneflag[64]; // size: 0x40, address: 0x0
static unsigned char nnsOverlapflag[64]; // size: 0x40, address: 0x0
unsigned int nngTexSwapMode; // size: 0x4, address: 0x6D1D88
static unsigned char cb_buf[32]; // size: 0x20, address: 0x6E1080
static class PXS_CONTEXTBUFFER * cb_texflush; // size: 0x4, address: 0x6D1DC0
class NNS_TEXAREA_PARAM nngTexArea; // size: 0x10, address: 0x6DE6C0
class NNS_TEXBUFF_PS2 nngTexBuff; // size: 0x34, address: 0x6DF000
class NNS_TEXCACHE_PS2 nngTexCache; // size: 0xFC, address: 0x0
class NNS_PUSHBUFFER nngTexPath3PBWork; // size: 0x48, address: 0x6DF040
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
class NNS_SUBOBJ {
    // total size: 0x14
public:
    unsigned int fType; // offset 0x0, size 0x4
    signed int nMeshset; // offset 0x4, size 0x4
    class NNS_MESHSET * pMeshsetList; // offset 0x8, size 0x4
    signed int nTex; // offset 0xC, size 0x4
    signed int * pTexNumList; // offset 0x10, size 0x4
};
class _NNS_TEXLIST {
    // total size: 0x8
public:
    signed int nTex; // offset 0x0, size 0x4
    class _NNS_TEXINFO * pTexInfoList; // offset 0x4, size 0x4
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
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
};
class NNS_VTXLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pVtxList; // offset 0x4, size 0x4
};
class PXS_DMATAG {
    // total size: 0x10
public:
    unsigned short qwc; // offset 0x0, size 0x2
    unsigned short id; // offset 0x2, size 0x2
    void * addr; // offset 0x4, size 0x4
    unsigned int vifnop; // offset 0x8, size 0x4
    unsigned int directhl; // offset 0xC, size 0x4
};
class NNS_TEXCACHE_PS2 {
    // total size: 0xFC
public:
    unsigned int Flag; // offset 0x0, size 0x4
    class NNS_TEXCACHE_INFO_PS2 CacheInfo[2][8]; // offset 0x4, size 0xC0
    unsigned int iCurrOrder[2]; // offset 0xC4, size 0x8
    unsigned int CacheSize[2]; // offset 0xCC, size 0x8
    unsigned int iCurrCache; // offset 0xD4, size 0x4
    unsigned int nCache; // offset 0xD8, size 0x4
    unsigned int CacheBuffAddr; // offset 0xDC, size 0x4
    unsigned int CacheBuffSize; // offset 0xE0, size 0x4
    unsigned int TransferNum; // offset 0xE4, size 0x4
    unsigned int TransferSize; // offset 0xE8, size 0x4
    unsigned int CacheHitNum; // offset 0xEC, size 0x4
    unsigned int CacheHitSize; // offset 0xF0, size 0x4
    unsigned int fReqSync; // offset 0xF4, size 0x4
    void * pLastSyncPath3Tag; // offset 0xF8, size 0x4
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
class NNS_TEXDMATAGINFO {
    // total size: 0x10
public:
    unsigned int nDmaTag; // offset 0x0, size 0x4
    void * pLocalMemory; // offset 0x4, size 0x4
    unsigned int nLocalBytes; // offset 0x8, size 0x4
    void * pDmaTagList; // offset 0xC, size 0x4
};
class NVS_CLUTINFO {
    // total size: 0x8
public:
    unsigned int localptr; // offset 0x0, size 0x4
    unsigned int psm; // offset 0x4, size 0x4
};
class NNS_TEXAREA_PARAM {
    // total size: 0x10
public:
    unsigned int startaddr; // offset 0x0, size 0x4
    unsigned int endaddr; // offset 0x4, size 0x4
    unsigned int curraddr; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
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
class NNS_PUSHBUFFER1 {
    // total size: 0x18
public:
    __int128 * tagTop; // offset 0x0, size 0x4
    __int128 * tagPtr; // offset 0x4, size 0x4
    unsigned int bufSize; // offset 0x8, size 0x4
    unsigned int maxTags; // offset 0xC, size 0x4
    unsigned int numTags; // offset 0x10, size 0x4
    unsigned int numBytes; // offset 0x14, size 0x4
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
class NNS_TEXBUFF_PS2 {
    // total size: 0x34
public:
    unsigned int Flag; // offset 0x0, size 0x4
    unsigned int StartAddr[3]; // offset 0x4, size 0xC
    unsigned int EndAddr[3]; // offset 0x10, size 0xC
    unsigned int CurrAddr; // offset 0x1C, size 0x4
    unsigned int BlockSize; // offset 0x20, size 0x4
    unsigned char nBlock; // offset 0x24, size 0x1
    unsigned char iCurrBlock; // offset 0x25, size 0x1
    unsigned short iCurrBlockTotal; // offset 0x26, size 0x2
    unsigned short iCurr; // offset 0x28, size 0x2
    unsigned short fReqSync; // offset 0x2A, size 0x2
    unsigned int TransferNum; // offset 0x2C, size 0x4
    unsigned int TransferSize; // offset 0x30, size 0x4
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
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};
class NNS_ROTATE_A32 {
    // total size: 0xC
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int z; // offset 0x8, size 0x4
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
class PXS_CONTEXTBUFFER {
    // total size: 0x20
public:
    unsigned int giftag[4]; // offset 0x0, size 0x10
    class PXS_GSREG_AD reg[1]; // offset 0x10, size 0x10
};
class NNS_VECTOR {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
};
class PXS_GSREG_AD {
    // total size: 0x10
public:
    unsigned long data; // offset 0x0, size 0x4
    unsigned long addr; // offset 0x8, size 0x4
};
class NNS_NODEEXPTR {
    // total size: 0x4
public:
    class _NNS_NODEEX * pNodeEx; // offset 0x0, size 0x4
};
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
};
class NNS_PUSHBUFFER {
    // total size: 0x48
public:
    unsigned int flag; // offset 0x0, size 0x4
    unsigned int dbIndex; // offset 0x4, size 0x4
    unsigned int maxData; // offset 0x8, size 0x4
    unsigned int workSize; // offset 0xC, size 0x4
    unsigned int peakTags; // offset 0x10, size 0x4
    unsigned int peakBytes; // offset 0x14, size 0x4
    class NNS_PUSHBUFFER1 db[2]; // offset 0x18, size 0x30
};
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
};
class NNS_PRIMLISTPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pPrimList; // offset 0x4, size 0x4
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
class NNS_TEXCACHE_INFO_PS2 {
    // total size: 0xC
public:
    signed int CacheOrder; // offset 0x0, size 0x4
    unsigned int CacheAddr; // offset 0x4, size 0x4
    class _NNS_TEXINFO * pTexInfo; // offset 0x8, size 0x4
};

// Range: 0x148CC0 -> 0x148D04
void nnInitTextureSwapPS2() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x148CC0 -> 0x148D04
    }
}


// Range: 0x148D10 -> 0x148D18
void nnSetTextureSwapModePS2(unsigned int mode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x148D10 -> 0x148D18
    }
}


