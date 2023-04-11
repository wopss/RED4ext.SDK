#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct AnimationPersistentDataSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameAnimationPersistentDataSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AnimationPersistentDataSystem, 0x88);
} // namespace game
using gameAnimationPersistentDataSystem = game::AnimationPersistentDataSystem;
} // namespace RED4ext

// clang-format on
