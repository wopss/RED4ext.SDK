#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct RewindableSectionPlaySpeedModifiers
{
    static constexpr const char* NAME = "scnRewindableSectionPlaySpeedModifiers";
    static constexpr const char* ALIAS = NAME;

    float forwardVeryFast; // 00
    float forwardFast; // 04
    float forwardSlow; // 08
    float backwardVeryFast; // 0C
    float backwardFast; // 10
    float backwardSlow; // 14
};
RED4EXT_ASSERT_SIZE(RewindableSectionPlaySpeedModifiers, 0x18);
} // namespace scn
using scnRewindableSectionPlaySpeedModifiers = scn::RewindableSectionPlaySpeedModifiers;
} // namespace RED4ext

// clang-format on
