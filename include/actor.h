#ifndef ACTOR_H
#define ACTOR_H

#include "common_structs.h"
#include "common.h"

typedef struct {
    /* 0x00 */ Vec3s rot;
    /* 0x06 */ u16 _pad;
    /* 0x08 */ float scale;
    /* 0x0C */ Vec3f pos;
    /* 0x18 */ Vec3f vel;
    /* 0x24 */ float anim_percent;
    /* 0x28 */ u8 unk_0x28[0x18];
    /* 0x40 */ UNK_PTR header; // probably wrong
    /* 0x44 */ u8 unk_0x44[4];
    /* 0x48 */ u16 type_hi;
    /* 0x4A */ u16 type_lo;
    /* 0x4C */ u8 unk_0x4C[0x194];
} Actor; /* sizeof = 0x1E0 ? */

#endif

