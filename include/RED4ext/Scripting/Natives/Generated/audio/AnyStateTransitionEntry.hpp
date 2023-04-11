#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace audio
{
struct AnyStateTransitionEntry
{
    static constexpr const char* NAME = "audioAnyStateTransitionEntry";
    static constexpr const char* ALIAS = NAME;

    bool isDisabled; // 00
    uint8_t sourceStateId; // 01
    uint8_t targetStateId; // 02
    uint8_t unk03[0x4 - 0x3]; // 3
    float transitionTime; // 04
};
RED4EXT_ASSERT_SIZE(AnyStateTransitionEntry, 0x8);
} // namespace audio
using audioAnyStateTransitionEntry = audio::AnyStateTransitionEntry;
} // namespace RED4ext

// clang-format on
