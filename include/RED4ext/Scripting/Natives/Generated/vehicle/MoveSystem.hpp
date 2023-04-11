#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/IMoveSystem.hpp>

namespace RED4ext
{
namespace vehicle
{
struct MoveSystem : vehicle::IMoveSystem
{
    static constexpr const char* NAME = "vehicleMoveSystem";
    static constexpr const char* ALIAS = "MoveSystem";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MoveSystem, 0x90);
} // namespace vehicle
using vehicleMoveSystem = vehicle::MoveSystem;
using MoveSystem = vehicle::MoveSystem;
} // namespace RED4ext

// clang-format on
