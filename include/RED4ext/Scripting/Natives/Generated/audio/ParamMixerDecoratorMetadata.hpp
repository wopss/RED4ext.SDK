#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EmitterMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MixParamDescription.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MixParamsAction.hpp>

namespace RED4ext
{
namespace audio
{
struct ParamMixerDecoratorMetadata : audio::EmitterMetadata
{
    static constexpr const char* NAME = "audioParamMixerDecoratorMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::MixParamDescription> inParams; // 38
    CName outputName; // 48
    audio::MixParamsAction operation; // 50
    bool globalOutput; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
};
RED4EXT_ASSERT_SIZE(ParamMixerDecoratorMetadata, 0x58);
} // namespace audio
using audioParamMixerDecoratorMetadata = audio::ParamMixerDecoratorMetadata;
} // namespace RED4ext

// clang-format on
