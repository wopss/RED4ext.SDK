#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IRealTimeEventSystem.hpp>

namespace RED4ext
{
namespace game
{
struct RealTimeEventSystem : game::IRealTimeEventSystem
{
    static constexpr const char* NAME = "gameRealTimeEventSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RealTimeEventSystem, 0x50);
} // namespace game
using gameRealTimeEventSystem = game::RealTimeEventSystem;
} // namespace RED4ext

// clang-format on
