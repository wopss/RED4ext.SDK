#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IRenderGameplayEffectsManagerSystem.hpp>

namespace RED4ext
{
namespace game
{
struct RenderGameplayEffectsManagerSystem : game::IRenderGameplayEffectsManagerSystem
{
    static constexpr const char* NAME = "gameRenderGameplayEffectsManagerSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xC0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RenderGameplayEffectsManagerSystem, 0xC0);
} // namespace game
using gameRenderGameplayEffectsManagerSystem = game::RenderGameplayEffectsManagerSystem;
} // namespace RED4ext

// clang-format on
