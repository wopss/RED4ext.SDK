#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct LookAtHeadProperties
{
    static constexpr const char* NAME = "scnLookAtHeadProperties";
    static constexpr const char* ALIAS = NAME;

    float enableFactor; // 00
    float override; // 04
    int32_t mode; // 08
};
RED4EXT_ASSERT_SIZE(LookAtHeadProperties, 0xC);
} // namespace scn
using scnLookAtHeadProperties = scn::LookAtHeadProperties;
} // namespace RED4ext

// clang-format on
