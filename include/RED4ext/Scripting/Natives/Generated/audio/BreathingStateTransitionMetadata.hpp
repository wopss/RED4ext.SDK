#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/BreathingTransitionComparator.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/BreathingTransitionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/breathing/EventTag.hpp>

namespace RED4ext
{
namespace audio
{
struct BreathingStateTransitionMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioBreathingStateTransitionMetadata";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x40 - 0x38]; // 38
    DynArray<CName> fromNames; // 40
    CName toName; // 50
    CName transitionStateName; // 58
    audio::BreathingTransitionType conditionType; // 60
    audio::BreathingTransitionComparator conditionComparator; // 64
    CName value; // 68
    DynArray<audio::breathing::EventTag> eventTags; // 70
    bool isImmediate; // 80
    uint8_t unk81[0x98 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(BreathingStateTransitionMetadata, 0x98);
} // namespace audio
using audioBreathingStateTransitionMetadata = audio::BreathingStateTransitionMetadata;
} // namespace RED4ext

// clang-format on
