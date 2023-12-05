#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPopulationSystem.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) PopulationSystem : game::IPopulationSystem
{
    static constexpr const char* NAME = "gamePopulationSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x20D0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PopulationSystem, 0x20D0);
} // namespace game
using gamePopulationSystem = game::PopulationSystem;
} // namespace RED4ext

// clang-format on
