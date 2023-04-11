#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/NumberComparer.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioSceneVariableReadActionData
{
    static constexpr const char* NAME = "audioAudioSceneVariableReadActionData";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    audio::NumberComparer comparer; // 08
    uint8_t unk09[0xC - 0x9]; // 9
    int32_t value; // 0C
};
RED4EXT_ASSERT_SIZE(AudioSceneVariableReadActionData, 0x10);
} // namespace audio
using audioAudioSceneVariableReadActionData = audio::AudioSceneVariableReadActionData;
} // namespace RED4ext

// clang-format on
