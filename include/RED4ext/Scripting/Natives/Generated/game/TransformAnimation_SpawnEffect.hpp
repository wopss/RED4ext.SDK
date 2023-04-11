#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimation_Effects.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimation_SpawnEffect : game::TransformAnimation_Effects
{
    static constexpr const char* NAME = "gameTransformAnimation_SpawnEffect";
    static constexpr const char* ALIAS = NAME;

    CName effectName; // 30
    CName effectTag; // 38
    bool persistOnDetach; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(TransformAnimation_SpawnEffect, 0x48);
} // namespace game
using gameTransformAnimation_SpawnEffect = game::TransformAnimation_SpawnEffect;
} // namespace RED4ext

// clang-format on
