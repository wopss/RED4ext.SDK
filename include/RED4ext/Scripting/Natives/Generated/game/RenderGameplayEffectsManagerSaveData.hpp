#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CyberspacePixelsortEffectParams.hpp>

namespace RED4ext
{
namespace game
{
struct RenderGameplayEffectsManagerSaveData : ISerializable
{
    static constexpr const char* NAME = "gameRenderGameplayEffectsManagerSaveData";
    static constexpr const char* ALIAS = NAME;

    game::CyberspacePixelsortEffectParams cyberspacePixelsortParams; // 30
    bool cyberspacePixelsortEnabled; // 78
    bool enforceScreenSpaceReflectionsUberQuality; // 79
    uint8_t unk7A[0x80 - 0x7A]; // 7A
};
RED4EXT_ASSERT_SIZE(RenderGameplayEffectsManagerSaveData, 0x80);
} // namespace game
using gameRenderGameplayEffectsManagerSaveData = game::RenderGameplayEffectsManagerSaveData;
} // namespace RED4ext

// clang-format on
