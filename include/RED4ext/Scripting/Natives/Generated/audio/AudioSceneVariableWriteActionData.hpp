#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/NumberOperation.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioSceneVariableWriteActionData
{
    static constexpr const char* NAME = "audioAudioSceneVariableWriteActionData";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    audio::NumberOperation operation; // 08
    uint8_t unk09[0xC - 0x9]; // 9
    int32_t value; // 0C
};
RED4EXT_ASSERT_SIZE(AudioSceneVariableWriteActionData, 0x10);
} // namespace audio
using audioAudioSceneVariableWriteActionData = audio::AudioSceneVariableWriteActionData;
} // namespace RED4ext

// clang-format on
