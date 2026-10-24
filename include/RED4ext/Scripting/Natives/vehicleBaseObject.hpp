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
