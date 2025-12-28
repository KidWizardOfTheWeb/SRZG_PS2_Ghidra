/*
    Compile unit: C:\usr\local\sega\nvs\src\nvtexmalloc.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class NVS_ALLOC_AREA head; // size: 0x14, address: 0x6E1470
static class NVS_ALLOC_AREA tail; // size: 0x14, address: 0x6E1490
static class NVS_ALLOC_AREA texblock[1024]; // size: 0x5000, address: 0x6E14B0
static class NVS_ALLOC_AREA * max_area; // size: 0x4, address: 0x6D1E84
static class NVS_ALLOC_AREA * space_area; // size: 0x4, address: 0x6D1E88
static unsigned int tex_area_addr; // size: 0x4, address: 0x6D1E8C
static unsigned int tex_area_size; // size: 0x4, address: 0x6D1E90
class NVS_ALLOC_AREA {
    // total size: 0x14
public:
    class NVS_ALLOC_AREA * next; // offset 0x0, size 0x4
    class NVS_ALLOC_AREA * before; // offset 0x4, size 0x4
    signed int flag; // offset 0x8, size 0x4
    unsigned int addr; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
};

// Range: 0x159D90 -> 0x159DB4
void nvInitTexMemory(unsigned int localptr /* r2 */, unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x159D90 -> 0x159DB4
    }
}


// Range: 0x159DC0 -> 0x159DCC
void nvSetTexArea(unsigned int localptr /* r2 */, unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x159DC0 -> 0x159DCC
    }
}


// Range: 0x159DD0 -> 0x159F90
signed int nvInitTexArea() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x159DD0 -> 0x159F90
        signed int i; // r11
        unsigned int size; // r4
    }
}


// Range: 0x159F90 -> 0x15A154
unsigned int nvTexMalloc(unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x159F90 -> 0x15A154
        class NVS_ALLOC_AREA * ptr; // r7
        class NVS_ALLOC_AREA * ptr2; // r6
    }
}


// Range: 0x15A160 -> 0x15A284
void nvTexFree(unsigned int addr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A160 -> 0x15A284
        class NVS_ALLOC_AREA * ptr; // r3
        class NVS_ALLOC_AREA * ptr2; // r7
    }
}


// Range: 0x15A290 -> 0x15A2D8
void nvCalcTexAreaFree(unsigned int * SizeOfTexture /* r2 */, unsigned int * MaxBlockSizeOfTexture /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x15A290 -> 0x15A2D8
        class NVS_ALLOC_AREA * ptr; // r7
        unsigned int t_size; // r6
    }
}


