#ifndef PLAYER_CHARACTER_H
#define PLAYER_CHARACTER_H

enum {
    /* 0x00 */ WEAPONINDEX_PISTOL,
    /* 0x01 */ WEAPONINDEX_HOMING_MISSILE,
    /* 0x02 */ WEAPONINDEX_MACHINE_GUN,
    /* 0x03 */ WEAPONINDEX_PLASMA_SHOTGUN,
    /* 0x04 */ WEAPONINDEX_SHOCKER,
    /* 0x05 */ WEAPONINDEX_TRI_ROCKET,
    /* 0x06 */ WEAPONINDEX_FLAMETHROWER,
    /* 0x07 */ WEAPONINDEX_SNIPER,
    /* 0x08 */ WEAPONINDEX_GRENADES,
    /* 0x09 */ WEAPONINDEX_SHURIKEN,
    /* 0x0A */ WEAPONINDEX_FISH_FOOD,
    /* 0x0B */ WEAPONINDEX_TIMED_MINES,
    /* 0x0C */ WEAPONINDEX_REMOTE_MINES,
    /* 0x0D */ WEAPONINDEX_FLARES,
    /* 0x0E */ WEAPONINDEX_CLUSTER_BOMBS,
    /* 0x0F */ WEAPONINDEX_SPREAD,
    /* 0x10 */ WEAPONINDEX_COUNT
} WeaponIndex;

typedef struct {
    /* 0x00 */ u8 health;
    /* 0x01 */ u16 unk_0x1;
    /* 0x03 */ u8 healthSegments;
    /* 0x04 */ u16 unk_0x4;
    /* 0x06 */ u16 tribalHeads;
    /* 0x08 */ u16 bugHeads;
    /* 0x0A */ u16 weaponFlags; // bitfeild of available weapons
    /* 0x0C */ u16 someWeaponTimer; // increments for each firing
    /* 0x0E */ u16 unk_0xE;
    /* 0x10 */ u16 unk_0x10;
    /* 0x12 */ u16 unk_0x12;
    /* 0x14 */ u16 ammo[16];
    /* 0x34 */ u16 ammoMax[16];
    /* 0x54 */ u8 unk_0x54[0x10]; // some other bytes tied to weapons damage, maybe?
    /* 0x64 */ u16 unk_0x64;
    /* 0x66 */ u8 inventory[3]; // keys, key items as bitfeild
    /* 0x69 */ u8 unk_0x69[7];
    /* 0x70 */ u8 selectedWeaponIndex;
    /* 0x71 */ u8 unk_0x71[3];
    /* 0x74 */ u16 unk_0x74;
} CharacterData; /* sizeof = 0x76 */

typedef struct {
    /* 0x00 */ u8 animByte; // 0x33 for guns, 0 for thrown
    /* 0x01 */ u8 unk_0x1;
    /* 0x02 */ u8 unk_0x2;
    /* 0x03 */ u8 damage; // only for pistol, MG, sniper, spread and Shocker; could represent projectile type
    /* 0x04 */ u8 unk_0x4;
    /* 0x05 */ u8 delay; // time between shots
    /* 0x06 */ u8 behavior;
    /* 0x07 */ u8 lifespan; // lifespan of projectile
    /* 0x08 */ u16 spread[2];
    /* 0x0C */ float floatArray[6]; // entry 1 is velocity
    /* 0x24 */ u16 shortArray[6]; // 0 = AmmoMax init, 2 = Ammo to Start, 3 = Ammo from pickup
} WeaponData; /* sizeof = 0x30 */

typedef struct {
    /* 0x00 */ u32 shoot;
    /* 0x04 */ u32 weaponCycleUp;
    /* 0x08 */ u32 weaponCycleDown;
    /* 0x0C */ u32 jump;
    /* 0x10 */ u32 crouch;
    /* 0x14 */ u32 aimWalkForward;
    /* 0x18 */ u32 aimWalkBackward;
} ControlBinding; /* sizeof = 0x1C */

struct {
    /* 0x000 */ u8 unk_0x0;
    /* 0x001 */ u8 unk_0x1;
    /* 0x002 */ u8 unk_0x2;
    /* 0x003 */ u8 unk_0x3;
    /* 0x004 */ u8 unk_0x4;
    /* 0x005 */ u8 unk_0x5;
    /* 0x006 */ u8 unk_0x6;
    /* 0x007 */ u8 unk_0x7;
    /* 0x008 */ u8 unk_0x8[0x20];
    /* 0x028 */ u8 unk_0x28[8];
    /* 0x030 */ u8 partyAvailable; // bitfeild
    /* 0x031 */ u8 unk_0x31[0x2B]; // pretty sure these are bitfeilds for events/achievements.
    /* 0x05C */ u16 unk_0x5C[0x40];
    /* 0x0DC */ u16 unk_0xDC[0x40];
    /* 0x15C */ CharacterData CharData[3];
    /* 0x2BE */ u8 unk_0x2BE[0x76];
    /* 0x334 */ u64 unk_0x334[0x28]; // likely some 8-byte struct.
    /* 0x474 */ u32 ShotsFired[16];
    /* 0x4B4 */ u32 ShotsHit[16];
    /* 0x4F4 */ u16 ShotsKilled[16];
    /* 0x514 */ u32 timerA;
    /* 0x518 */ u32 timerB;
    /* 0x51C */ char name[10];
    /* 0x526 */ u8 unk_0x526[10];
    /* 0x530 */ u16 unk_0x530;
    /* 0x532 */ u8 unk_0x532[2];
    /* 0x534 */ u8 dpadWeapon[4];
} PlayerValueStruct; /* sizeof = 0x538 */

#endif

