#ifndef COMMON_STRUCTS_H
#define COMMON_STRUCTS_H

typedef struct {
    /* 0x00 */ s16 x;
    /* 0x02 */ s16 y;
    /* 0x04 */ s16 z;
} Vec3s; /* sizeof = 0x06 */

typedef struct {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ s32 z;
} Vec3f; /* sizeof = 0x0C */

typedef struct {
    /* 0x00 */ u8 state;
    /* 0x01 */ u8 flag;
    /* 0x02 */ u16 unk_0x2;
    /* 0x04 */ u16 unk_0x4;
    /* 0x06 */ u16 rumbleTime;
    /* 0x08 */ u16 timer;
} RumbleStruct; /* sizeof = 0x0A */

#endif

