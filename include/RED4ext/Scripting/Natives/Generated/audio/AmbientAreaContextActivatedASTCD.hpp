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
struct AmbientAreaContextActivatedASTCD : audio::AudioStateTransitionConditionData
{
    static constexpr const char* NAME = "audioAmbientAreaContextActivatedASTCD";
    static constexpr const char* ALIAS = NAME;

    CName areaMixingContext; // 38
};
RED4EXT_ASSERT_SIZE(AmbientAreaContextActivatedASTCD, 0x40);
} // namespace audio
using audioAmbientAreaContextActivatedASTCD = audio::AmbientAreaContextActivatedASTCD;
} // namespace RED4ext

// clang-format on
