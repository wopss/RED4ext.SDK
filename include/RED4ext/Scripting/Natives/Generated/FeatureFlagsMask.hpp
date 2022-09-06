#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct FeatureFlagsMask
{
    static constexpr const char* NAME = "FeatureFlagsMask";
    static constexpr const char* ALIAS = NAME;

    uint64_t flags; // 00
};
RED4EXT_ASSERT_SIZE(FeatureFlagsMask, 0x8);
} // namespace RED4ext

// clang-format on
