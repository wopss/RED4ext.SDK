#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectorSystem.hpp>

namespace RED4ext
{
namespace game
{
struct EffectorSystem : game::IEffectorSystem
{
    static constexpr const char* NAME = "gameEffectorSystem";
    static constexpr const char* ALIAS = "EffectorSystem";

    uint8_t unk48[0x98 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(EffectorSystem, 0x98);
} // namespace game
using gameEffectorSystem = game::EffectorSystem;
using EffectorSystem = game::EffectorSystem;
} // namespace RED4ext

// clang-format on
