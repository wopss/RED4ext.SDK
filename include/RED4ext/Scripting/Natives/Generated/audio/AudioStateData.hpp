#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioSceneVariableWriteActionData.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioStateTransitionData.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MixingActionData.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioStateData
{
    static constexpr const char* NAME = "audioAudioStateData";
    static constexpr const char* ALIAS = NAME;

    CName stateName; // 00
    CName enterEvent; // 08
    CName exitEvent; // 10
    DynArray<audio::AudioStateTransitionData> exitTransitions; // 18
    DynArray<audio::MixingActionData> mixingActions; // 28
    DynArray<CName> interruptionSources; // 38
    DynArray<audio::AudioSceneVariableWriteActionData> writeVariableActions; // 48
};
RED4EXT_ASSERT_SIZE(AudioStateData, 0x58);
} // namespace audio
using audioAudioStateData = audio::AudioStateData;
} // namespace RED4ext

// clang-format on
