#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct EmitterDelaySettings
{
    static constexpr const char* NAME = "EmitterDelaySettings";
    static constexpr const char* ALIAS = NAME;

    float emitterDelay; // 00
    float emitterDelayLow; // 04
    bool useEmitterDelayRange; // 08
    bool useEmitterDelayOnce; // 09
    uint8_t unk0A[0xC - 0xA]; // A
};
RED4EXT_ASSERT_SIZE(EmitterDelaySettings, 0xC);
} // namespace RED4ext

// clang-format on
