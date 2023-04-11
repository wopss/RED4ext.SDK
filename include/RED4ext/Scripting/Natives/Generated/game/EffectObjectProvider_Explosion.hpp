#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectProvider_Explosion : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_Explosion";
    static constexpr const char* ALIAS = NAME;

    bool puppets; // 40
    bool gameObjects; // 41
    bool destructibleAndDynamic; // 42
    uint8_t unk43[0x48 - 0x43]; // 43
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_Explosion, 0x48);
} // namespace game
using gameEffectObjectProvider_Explosion = game::EffectObjectProvider_Explosion;
} // namespace RED4ext

// clang-format on
