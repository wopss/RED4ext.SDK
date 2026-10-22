#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>
#include <cstdint>

namespace RED4ext
{
namespace AI
{
struct Archetype;
}

namespace vehicle
{
struct BaseObject : game::Object
{
    static constexpr const char* NAME = "vehicleBaseObject";
    static constexpr const char* ALIAS = "VehicleObject";

    uint8_t unk240[0x25C - 0x240]; // 240
    bool isOnGround;               // 25C
    uint8_t unk25D[0x264 - 0x25D]; // 25D
    float acceleration;            // 264
    float deceleration;            // 268
    uint8_t unk26C[0x2AB - 0x26C]; // 26C
    bool isReversing;              // 2AB
    uint8_t unk2AC[0x2C4 - 0x2AC]; // 2AC
    float burnout;                 // 2C4
    uint8_t unk2C8[0x3B0 - 0x2C8]; // 2C8
    Ref<AI::Archetype> archetype;  // 3B0
    uint8_t unk3C8[0x6F2 - 0x3C8]; // 3C8
    bool isVehicleOnStateLocked;   // 6F2
    uint8_t unk6F3[0xBC0 - 0x6F3]; // 6F3
};
// Game 2.5 (3.0.88.46235): size 0xBA0 -> 0xBC0 (registration 0xEC3F00 `mov r8d, 0xbc0`). Reflected: archetype
// 0x3A0 -> 0x3B0 (0xB4D1DD), isVehicleOnStateLocked 0x6D2 -> 0x6F2 (0xB4D24A).
// isOnGround/acceleration/deceleration/isReversing/burnout are not reflected by the game (Codeware adds them), so
// they come from the constructor (2.31 0x8640E8, 2.5 0x23591C), whose stores match up to 0x298 and then shift by 8:
//   isOnGround   2.31 0x864113 / 2.5 0x235947 `mov byte ptr [rdi+0x25C], 1`            (unchanged)
//   accel/decel  2.31 0x86417D / 2.5 0x2359B1 `mov qword ptr [rdi+0x268], rbx`, 0x260 the same (unchanged)
//   new member   2.5 0x2359E2 `mov qword ptr [rdi+0x2A0], rbx`; 2.31 0x8641AE dword [rdi+0x2A0] (holding 0x2A3)
//                is 2.5 0x2359E9 dword [rdi+0x2A8], so isReversing 0x2A3 -> 0x2AB
//   burnout      2.31 0x8641C8 qword [rdi+0x2B8] (holding 0x2BC) is 2.5 0x235A03 qword [rdi+0x2C0] -> 0x2C4
RED4EXT_ASSERT_SIZE(BaseObject, 0xBC0);
RED4EXT_ASSERT_OFFSET(BaseObject, isOnGround, 0x25C);
RED4EXT_ASSERT_OFFSET(BaseObject, acceleration, 0x264);
RED4EXT_ASSERT_OFFSET(BaseObject, deceleration, 0x268);
RED4EXT_ASSERT_OFFSET(BaseObject, isReversing, 0x2AB);
RED4EXT_ASSERT_OFFSET(BaseObject, burnout, 0x2C4);
RED4EXT_ASSERT_OFFSET(BaseObject, archetype, 0x3B0);
RED4EXT_ASSERT_OFFSET(BaseObject, isVehicleOnStateLocked, 0x6F2);
} // namespace vehicle
using vehicleBaseObject = vehicle::BaseObject;
using VehicleObject = vehicle::BaseObject;
} // namespace RED4ext
