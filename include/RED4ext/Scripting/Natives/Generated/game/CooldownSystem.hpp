#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ICooldownSystem.hpp>

namespace RED4ext
{
namespace game
{
struct CooldownSystem : game::ICooldownSystem
{
    static constexpr const char* NAME = "gameCooldownSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xD8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CooldownSystem, 0xD8);
} // namespace game
using gameCooldownSystem = game::CooldownSystem;
} // namespace RED4ext

// clang-format on
