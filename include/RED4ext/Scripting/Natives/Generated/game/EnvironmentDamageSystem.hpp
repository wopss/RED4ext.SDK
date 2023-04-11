#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEnvironmentDamageSystem.hpp>

namespace RED4ext
{
namespace game
{
struct EnvironmentDamageSystem : game::IEnvironmentDamageSystem
{
    static constexpr const char* NAME = "gameEnvironmentDamageSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x190 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(EnvironmentDamageSystem, 0x190);
} // namespace game
using gameEnvironmentDamageSystem = game::EnvironmentDamageSystem;
} // namespace RED4ext

// clang-format on
