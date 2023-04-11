#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PuppetsEffector.hpp>

namespace RED4ext
{
namespace quest
{
struct PuppetsUnconscious : quest::PuppetsEffector
{
    static constexpr const char* NAME = "questPuppetsUnconscious";
    static constexpr const char* ALIAS = NAME;

    bool setUnconscious; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(PuppetsUnconscious, 0x38);
} // namespace quest
using questPuppetsUnconscious = quest::PuppetsUnconscious;
} // namespace RED4ext

// clang-format on
