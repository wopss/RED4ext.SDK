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
    uint8_t unk26C[0x2A3 - 0x26C]; // 26C
    bool isReversing;              // 2A3
    uint8_t unk2A4[0x2BC - 0x2A4]; // 2A4
    float burnout;                 // 2BC
    uint8_t unk2C0[0x3A0 - 0x2C0]; // 2C0
    Ref<AI::Archetype> archetype;  // 3A0
    uint8_t unk3B8[0x6D2 - 0x3B8]; // 3B8
    bool isVehicleOnStateLocked;   // 6D2
    uint8_t unk6D3[0xBA0 - 0x6D3]; // 6D3
};
RED4EXT_ASSERT_SIZE(BaseObject, 0xBA0);
RED4EXT_ASSERT_OFFSET(BaseObject, isOnGround, 0x25C);
RED4EXT_ASSERT_OFFSET(BaseObject, acceleration, 0x264);
RED4EXT_ASSERT_OFFSET(BaseObject, deceleration, 0x268);
RED4EXT_ASSERT_OFFSET(BaseObject, isReversing, 0x2A3);
RED4EXT_ASSERT_OFFSET(BaseObject, burnout, 0x2BC);
RED4EXT_ASSERT_OFFSET(BaseObject, archetype, 0x3A0);
RED4EXT_ASSERT_OFFSET(BaseObject, isVehicleOnStateLocked, 0x6D2);
} // namespace vehicle
using vehicleBaseObject = vehicle::BaseObject;
using VehicleObject = vehicle::BaseObject;
} // namespace RED4ext
