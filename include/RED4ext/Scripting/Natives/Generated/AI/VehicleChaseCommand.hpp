#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/VehicleCommand.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace AI { 
struct VehicleChaseCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleChaseCommand";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> target; // 68
    float distanceMin; // 78
    float distanceMax; // 7C
    float forcedStartSpeed; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(VehicleChaseCommand, 0x88);
} // namespace AI
} // namespace RED4ext
