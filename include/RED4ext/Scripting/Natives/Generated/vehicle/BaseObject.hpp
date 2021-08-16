#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace AI { struct Archetype; }

namespace vehicle { 
struct BaseObject : game::Object
{
    static constexpr const char* NAME = "vehicleBaseObject";
    static constexpr const char* ALIAS = "VehicleObject";

    uint8_t unk230[0x340 - 0x230]; // 230
    Ref<AI::Archetype> archetype; // 340
    uint8_t unk358[0x900 - 0x358]; // 358
};
RED4EXT_ASSERT_SIZE(BaseObject, 0x900);
} // namespace vehicle
using VehicleObject = vehicle::BaseObject;
} // namespace RED4ext
