#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudSimpleParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MixingActionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverContext.hpp>

namespace RED4ext
{
namespace audio
{
struct MixingActionData
{
    static constexpr const char* NAME = "audioMixingActionData";
    static constexpr const char* ALIAS = NAME;

    audio::MixingActionType actionType; // 00
    loc::VoiceoverContext voContext; // 01
    uint8_t unk02[0x8 - 0x2]; // 2
    CName tagValue; // 08
    float dbOffset; // 10
    float distanceRolloffFactor; // 14
    CName voEventOverride; // 18
    uint64_t customParametersSetKey; // 20
    DynArray<audio::AudSimpleParameter> customParameters; // 28
};
RED4EXT_ASSERT_SIZE(MixingActionData, 0x38);
} // namespace audio
using audioMixingActionData = audio::MixingActionData;
} // namespace RED4ext

// clang-format on
