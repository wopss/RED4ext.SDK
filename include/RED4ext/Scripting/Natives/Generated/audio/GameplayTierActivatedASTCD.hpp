#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioStateTransitionConditionData.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/GameplayTier.hpp>

namespace RED4ext
{
namespace audio
{
struct GameplayTierActivatedASTCD : audio::AudioStateTransitionConditionData
{
    static constexpr const char* NAME = "audioGameplayTierActivatedASTCD";
    static constexpr const char* ALIAS = NAME;

    audio::GameplayTier gameplayTier; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(GameplayTierActivatedASTCD, 0x40);
} // namespace audio
using audioGameplayTierActivatedASTCD = audio::GameplayTierActivatedASTCD;
} // namespace RED4ext

// clang-format on
