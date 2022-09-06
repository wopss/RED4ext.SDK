#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct ShadowCascadeConfig
{
    static constexpr const char* NAME = "ShadowCascadeConfig";
    static constexpr const char* ALIAS = NAME;

    float range; // 00
    float filterSize; // 04
    float blendRange; // 08
    float biasOffset; // 0C
};
RED4EXT_ASSERT_SIZE(ShadowCascadeConfig, 0x10);
} // namespace RED4ext

// clang-format on
