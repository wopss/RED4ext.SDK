#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace rend
{
struct EmitterDurationSettings
{
    static constexpr const char* NAME = "rendEmitterDurationSettings";
    static constexpr const char* ALIAS = NAME;

    float emitterDuration; // 00
    float emitterDurationLow; // 04
    bool useEmitterDurationRange; // 08
    uint8_t unk09[0xC - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(EmitterDurationSettings, 0xC);
} // namespace rend
using rendEmitterDurationSettings = rend::EmitterDurationSettings;
} // namespace RED4ext

// clang-format on
