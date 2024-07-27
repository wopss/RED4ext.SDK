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
    uint8_t unk25D[0x3A0 - 0x25D]; // 25D
    Ref<AI::Archetype> archetype;  // 3A0
    uint8_t unk3B8[0x6D2 - 0x3B8]; // 3B8
    bool isVehicleOnStateLocked;   // 6D2
    uint8_t unk6D3[0xB90 - 0x6D3]; // 6D3
};
RED4EXT_ASSERT_SIZE(BaseObject, 0xB90);
RED4EXT_ASSERT_OFFSET(BaseObject, isOnGround, 0x25C);
RED4EXT_ASSERT_OFFSET(BaseObject, archetype, 0x3A0);
RED4EXT_ASSERT_OFFSET(BaseObject, isVehicleOnStateLocked, 0x6D2);
} // namespace vehicle
using vehicleBaseObject = vehicle::BaseObject;
using VehicleObject = vehicle::BaseObject;
} // namespace RED4ext
