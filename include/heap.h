#ifndef HEAP_H
#define HEAP_H

typedef struct {
    /* 0x00 */ u32 itemsMax;
    /* 0x04 */ u32 itemsCurrent;
    /* 0x08 */ HeapItem* ptr;
    /* 0x0C */ u32 memUsed;
} HeapBlock; /* sizeof = 0x10 */

typedef struct {
    /* 0x00 */ void* ptr;
    /* 0x04 */ u32 itemSize;
    /* 0x08 */ u16 unk_0x8;
    /* 0x0A */ s16 unk_0xA;
    /* 0x0C */ s16 unk_0xC;
    /* 0x0E */ u16 unk_0xE;
    /* 0x10 */ u32 unk_0x10;
} HeapItem; /* sizeof = 0x14 */

#endif

