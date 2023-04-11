#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace game
{
struct StatsComponent : game::Component
{
    static constexpr const char* NAME = "gameStatsComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkA8[0xC8 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(StatsComponent, 0xC8);
} // namespace game
using gameStatsComponent = game::StatsComponent;
} // namespace RED4ext

// clang-format on
