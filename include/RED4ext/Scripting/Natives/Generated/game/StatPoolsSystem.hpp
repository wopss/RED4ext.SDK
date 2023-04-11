#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatPoolsSystem.hpp>

namespace RED4ext
{
namespace game
{
struct StatPoolsSystem : game::IStatPoolsSystem
{
    static constexpr const char* NAME = "gameStatPoolsSystem";
    static constexpr const char* ALIAS = "StatPoolsSystem";

    uint8_t unk48[0x1A8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatPoolsSystem, 0x1A8);
} // namespace game
using gameStatPoolsSystem = game::StatPoolsSystem;
using StatPoolsSystem = game::StatPoolsSystem;
} // namespace RED4ext

// clang-format on
