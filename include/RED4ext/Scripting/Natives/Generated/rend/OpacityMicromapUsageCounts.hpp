#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace rend
{
struct OpacityMicromapUsageCounts
{
    static constexpr const char* NAME = "rendOpacityMicromapUsageCounts";
    static constexpr const char* ALIAS = NAME;

    uint32_t bdivisionLevel; // 00
    uint32_t rmat; // 04
    uint32_t unt; // 08
};
RED4EXT_ASSERT_SIZE(OpacityMicromapUsageCounts, 0xC);
} // namespace rend
using rendOpacityMicromapUsageCounts = rend::OpacityMicromapUsageCounts;
} // namespace RED4ext

// clang-format on
