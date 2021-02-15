#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/audio/AudSimpleParameter.hpp>
#include <RED4ext/Types/generated/audio/MixingActionType.hpp>
#include <RED4ext/Types/generated/loc/VoiceoverContext.hpp>

namespace RED4ext
{
namespace audio { 
struct MixingActionData
{
    static constexpr const char* NAME = "audioMixingActionData";
    static constexpr const char* ALIAS = NAME;

    audio::MixingActionType actionType; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    loc::VoiceoverContext voContext; // 04
    CName tagValue; // 08
    float dbOffset; // 10
    float distanceRolloffFactor; // 14
    CName voEventOverride; // 18
    uint64_t customParametersSetKey; // 20
    DynArray<audio::AudSimpleParameter> customParameters; // 28
};
RED4EXT_ASSERT_SIZE(MixingActionData, 0x38);
} // namespace audio
} // namespace RED4ext
