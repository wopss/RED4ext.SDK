#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ITimeSystem.hpp>

namespace RED4ext
{
namespace game
{
struct TimeSystem : game::ITimeSystem
{
    static constexpr const char* NAME = "gameTimeSystem";
    static constexpr const char* ALIAS = "TimeSystem";

    uint8_t unk58[0x6EBC0 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(TimeSystem, 0x6EBC0);
} // namespace game
using gameTimeSystem = game::TimeSystem;
using TimeSystem = game::TimeSystem;
} // namespace RED4ext

// clang-format on
