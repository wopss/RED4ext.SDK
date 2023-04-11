#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct LookAtBodyPartProperties
{
    static constexpr const char* NAME = "scnLookAtBodyPartProperties";
    static constexpr const char* ALIAS = NAME;

    float enableFactor; // 00
    float override; // 04
    int32_t mode; // 08
};
RED4EXT_ASSERT_SIZE(LookAtBodyPartProperties, 0xC);
} // namespace scn
using scnLookAtBodyPartProperties = scn::LookAtBodyPartProperties;
} // namespace RED4ext

// clang-format on
