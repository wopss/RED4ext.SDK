#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioSceneVariableReadActionData.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioStateTransitionData
{
    static constexpr const char* NAME = "audioAudioStateTransitionData";
    static constexpr const char* ALIAS = NAME;

    uint8_t targetStateId; // 00
    bool allConditionsFulfilled; // 01
    uint8_t unk02[0x4 - 0x2]; // 2
    float transitionTime; // 04
    float exitTime; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    CName exitSignal; // 10
    DynArray<audio::AudioSceneVariableReadActionData> readVariableActions; // 18
    DynArray<CName> conditions; // 28
};
RED4EXT_ASSERT_SIZE(AudioStateTransitionData, 0x38);
} // namespace audio
using audioAudioStateTransitionData = audio::AudioStateTransitionData;
} // namespace RED4ext

// clang-format on
