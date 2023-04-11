#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectSystem.hpp>

namespace RED4ext
{
namespace game
{
struct EffectSystem : game::IEffectSystem
{
    static constexpr const char* NAME = "gameEffectSystem";
    static constexpr const char* ALIAS = "EffectSystem";

    uint8_t unk48[0xF8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(EffectSystem, 0xF8);
} // namespace game
using gameEffectSystem = game::EffectSystem;
using EffectSystem = game::EffectSystem;
} // namespace RED4ext

// clang-format on
