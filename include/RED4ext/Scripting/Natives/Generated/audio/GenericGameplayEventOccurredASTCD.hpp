#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioStateTransitionConditionData.hpp>

namespace RED4ext
{
namespace audio
{
struct GenericGameplayEventOccurredASTCD : audio::AudioStateTransitionConditionData
{
    static constexpr const char* NAME = "audioGenericGameplayEventOccurredASTCD";
    static constexpr const char* ALIAS = NAME;

    CName gameplayEvent; // 38
};
RED4EXT_ASSERT_SIZE(GenericGameplayEventOccurredASTCD, 0x40);
} // namespace audio
using audioGenericGameplayEventOccurredASTCD = audio::GenericGameplayEventOccurredASTCD;
} // namespace RED4ext

// clang-format on
