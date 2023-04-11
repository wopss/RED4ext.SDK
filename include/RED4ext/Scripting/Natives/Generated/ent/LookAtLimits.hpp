#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ent
{
struct LookAtLimits
{
    static constexpr const char* NAME = "entLookAtLimits";
    static constexpr const char* ALIAS = NAME;

    float softLimitDegrees; // 00
    float hardLimitDegrees; // 04
    float hardLimitDistance; // 08
    float backLimitDegrees; // 0C
};
RED4EXT_ASSERT_SIZE(LookAtLimits, 0x10);
} // namespace ent
using entLookAtLimits = ent::LookAtLimits;
} // namespace RED4ext

// clang-format on
