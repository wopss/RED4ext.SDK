#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IBreachSystem.hpp>

namespace RED4ext
{
namespace game
{
struct BreachSystem : game::IBreachSystem
{
    static constexpr const char* NAME = "gameBreachSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(BreachSystem, 0x60);
} // namespace game
using gameBreachSystem = game::BreachSystem;
} // namespace RED4ext

// clang-format on
