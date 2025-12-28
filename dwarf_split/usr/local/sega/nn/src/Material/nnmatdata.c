/*
    Compile unit: C:\usr\local\sega\nn\src\Material\nnmatdata.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NNS_MATERIAL_SINGLE nngMonoWireMaterial[1]; // size: 0x70, address: 0x5F8A80
class NNS_MATERIALPTR nngMonoWireMatptrlist[1]; // size: 0x8, address: 0x0
class NNS_MATERIAL_SINGLE nngDivColorMaterial[1]; // size: 0x70, address: 0x0
class NNS_MATERIALPTR nngDivColorMatptrlist[1]; // size: 0x8, address: 0x0
class NNS_MATERIAL_SINGLE nngPrim3dMaterial[1]; // size: 0x70, address: 0x5F8AF0
class NNS_MATERIALPTR nngPrim3dMatptrlist[1]; // size: 0x8, address: 0x6D1AC8
class NNS_MATERIAL_SINGLE nngPrimParticle3dMaterial[1]; // size: 0x70, address: 0x0
class NNS_MATERIALPTR nngPrimParticle3dMatptrlist[1]; // size: 0x8, address: 0x0
class NNS_MATERIAL_SINGLE nngMatCtrlMaterial[2]; // size: 0xE0, address: 0x5F8B60
class NNS_MATERIALPTR nngMatCtrlMatptrlist[1]; // size: 0x8, address: 0x6D1AD0
class NNS_MATERIAL_COLOR_PXPLUS nngDivColorMaterialColorPXPlus[1]; // size: 0x40, address: 0x0
class NNS_MATERIAL_COLOR_PXPLUS nngMonoWireMaterialColorPXPlus[1]; // size: 0x40, address: 0x0
class NNS_MATERIAL_LOGIC nngMonoWireMaterialLogicPXPlus[1]; // size: 0x10, address: 0x0
class NNS_MATERIAL_DESC nngMonoWireMaterialPXPlus[1]; // size: 0x20, address: 0x0
class NNS_MATERIAL_COLOR_PXPLUS2 nngMatCtrlMaterialColorPXPlus[1]; // size: 0x50, address: 0x0
class NNS_MATERIAL_LOGIC nngMatCtrlMaterialLogicPXPlus[2]; // size: 0x20, address: 0x0
class NNS_MATERIAL_TEXMAP_DESC_EX nngMatCtrlMaterialTexDescPXPlus[2]; // size: 0x80, address: 0x0
class NNS_MATERIAL_DESC nngMatCtrlMaterialPXPlus[1]; // size: 0x20, address: 0x0
class NNS_MATERIALPTR nngMatCtrlMatptrlistPXPlus[1]; // size: 0x8, address: 0x0
class NNS_MATERIAL_COLOR_PXPLUS2 {
    // total size: 0x50
public:
    class NNS_RGB Diffuse; // offset 0x0, size 0xC
    float Specular; // offset 0xC, size 0x4
    class NNS_RGB Ambient; // offset 0x10, size 0xC
    float Alpha; // offset 0x1C, size 0x4
    class NNS_RGBA Emissive; // offset 0x20, size 0x10
    class NNS_RGBA Clamp[2]; // offset 0x30, size 0x20
};
class PXS_TEXOBJ {
    // total size: 0x20
public:
    class PXS_TEXREG texReg; // offset 0x0, size 0x20
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
class NNS_MATERIAL_TEXMAP_DESC {
    // total size: 0x20
public:
    unsigned int fTexMapType; // offset 0x0, size 0x4
    unsigned short fTexWrapMode; // offset 0x4, size 0x2
    unsigned short iTexIdx; // offset 0x6, size 0x2
    class NNS_TEXCOORD Offset; // offset 0x8, size 0x8
    unsigned int GsTexA; // offset 0x10, size 0x4
    unsigned short GsTexLODL; // offset 0x14, size 0x2
    signed short GsTexLODK; // offset 0x16, size 0x2
    unsigned short GsClampMINU; // offset 0x18, size 0x2
    unsigned short GsClampMAXU; // offset 0x1A, size 0x2
    unsigned short GsClampMINV; // offset 0x1C, size 0x2
    unsigned short GsClampMAXV; // offset 0x1E, size 0x2
};
class NNS_MATERIAL_TEXMAP_DESC_EX {
    // total size: 0x40
public:
    unsigned int fTexMapType; // offset 0x0, size 0x4
    signed int iTexIdx; // offset 0x4, size 0x4
    class NNS_TEXCOORD UVOffset; // offset 0x8, size 0x8
    float Blend; // offset 0x10, size 0x4
    class _NNS_TEXINFO * pTexInfo; // offset 0x14, size 0x4
    unsigned long GsTex1; // offset 0x18, size 0x4
    unsigned long GsTex0; // offset 0x20, size 0x4
    unsigned long GsClamp; // offset 0x28, size 0x4
    unsigned long GsTexa; // offset 0x30, size 0x4
    float UVArea; // offset 0x38, size 0x4
    unsigned int Reserved; // offset 0x3C, size 0x4
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
class NNS_RGB {
    // total size: 0xC
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
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
class NNS_MATERIAL_SINGLE {
    // total size: 0x70
public:
    class NNS_RGB Diffuse; // offset 0x0, size 0xC
    float Specular; // offset 0xC, size 0x4
    class NNS_RGB Ambient; // offset 0x10, size 0xC
    float Alpha; // offset 0x1C, size 0x4
    class NNS_RGBA Emissive; // offset 0x20, size 0x10
    float Power; // offset 0x30, size 0x4
    float ColorClamp; // offset 0x34, size 0x4
    float AlphaClamp; // offset 0x38, size 0x4
    unsigned int GsTest; // offset 0x3C, size 0x4
    unsigned int fMatFlag; // offset 0x40, size 0x4
    unsigned int fGsPrimMode; // offset 0x44, size 0x4
    unsigned int GsAlpha; // offset 0x48, size 0x4
    unsigned int User; // offset 0x4C, size 0x4
    class NNS_MATERIAL_TEXMAP_DESC TexDesc[1]; // offset 0x50, size 0x20
};
class NNS_RGBA {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
class NNS_MATERIAL_LOGIC {
    // total size: 0x10
public:
    unsigned int fGsPrimMode; // offset 0x0, size 0x4
    unsigned int GsTest; // offset 0x4, size 0x4
    unsigned int GsAlpha; // offset 0x8, size 0x4
    unsigned int Reserved; // offset 0xC, size 0x4
};
class NVS_GBIXHEADER {
    // total size: 0x8
public:
    unsigned int globalIndex; // offset 0x0, size 0x4
    unsigned int bank; // offset 0x4, size 0x4
};
class NNS_MATERIAL_DESC {
    // total size: 0x20
public:
    unsigned int fMatFlag; // offset 0x0, size 0x4
    unsigned int User; // offset 0x4, size 0x4
    void * pMatColor; // offset 0x8, size 0x4
    class NNS_MATERIAL_LOGIC * pMatLogic; // offset 0xC, size 0x4
    class NNS_MATERIAL_TEXMAP_DESC_EX * pTexDesc; // offset 0x10, size 0x4
    float PolyArea; // offset 0x14, size 0x4
    unsigned int Reserved[2]; // offset 0x18, size 0x8
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
class PXS_TEXREG {
    // total size: 0x20
public:
    class sceGsTex1 tex1; // offset 0x0, size 0x8
    class sceGsTex0 tex0; // offset 0x8, size 0x8
    class sceGsMiptbp1 miptbp1; // offset 0x10, size 0x8
    class sceGsMiptbp2 miptbp2; // offset 0x18, size 0x8
};
class NNS_MATERIALPTR {
    // total size: 0x8
public:
    unsigned int fType; // offset 0x0, size 0x4
    void * pMaterial; // offset 0x4, size 0x4
};
class NVS_SVROBJ {
    // total size: 0x30
public:
    class NVS_GBIXHEADER gbixh; // offset 0x0, size 0x8
    class NVS_SVRHEADER svrh; // offset 0x8, size 0x8
    class PXS_TEXOBJ texobj; // offset 0x10, size 0x20
};
class NNS_MATERIAL_COLOR_PXPLUS {
    // total size: 0x40
public:
    class NNS_RGB Diffuse; // offset 0x0, size 0xC
    float Specular; // offset 0xC, size 0x4
    class NNS_RGB Ambient; // offset 0x10, size 0xC
    float Alpha; // offset 0x1C, size 0x4
    class NNS_RGBA Emissive; // offset 0x20, size 0x10
    class NNS_RGBA Clamp; // offset 0x30, size 0x10
};
class NNS_TEXCOORD {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};

