#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace vehicle
{
struct IRacingSystem : game::IGameSystem
{
    static constexpr const char* NAME = "vehicleIRacingSystem";
    static constexpr const char* ALIAS = "IRacingSystem";

};
RED4EXT_ASSERT_SIZE(IRacingSystem, 0x48);
} // namespace vehicle
using vehicleIRacingSystem = vehicle::IRacingSystem;
using IRacingSystem = vehicle::IRacingSystem;
} // namespace RED4ext

// clang-format on
