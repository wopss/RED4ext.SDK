#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioStateTransitionConditionData.hpp>

namespace RED4ext
{
namespace audio
{
struct WaitTimeASTCD : audio::AudioStateTransitionConditionData
{
    static constexpr const char* NAME = "audioWaitTimeASTCD";
    static constexpr const char* ALIAS = NAME;

    float timeToWait; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(WaitTimeASTCD, 0x40);
} // namespace audio
using audioWaitTimeASTCD = audio::WaitTimeASTCD;
} // namespace RED4ext

// clang-format on
