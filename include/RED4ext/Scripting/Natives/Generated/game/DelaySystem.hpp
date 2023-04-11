#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDelaySystem.hpp>

namespace RED4ext
{
namespace game
{
struct DelaySystem : game::IDelaySystem
{
    static constexpr const char* NAME = "gameDelaySystem";
    static constexpr const char* ALIAS = "DelaySystem";

    uint8_t unk48[0x530C0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DelaySystem, 0x530C0);
} // namespace game
using gameDelaySystem = game::DelaySystem;
using DelaySystem = game::DelaySystem;
} // namespace RED4ext

// clang-format on
