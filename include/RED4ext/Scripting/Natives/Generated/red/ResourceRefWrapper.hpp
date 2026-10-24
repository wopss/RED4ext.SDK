#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace red
{
struct ResourceRefWrapper
{
    static constexpr const char* NAME = "redResourceRefWrapper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ResourceRefWrapper, 0x18);
} // namespace red
using redResourceRefWrapper = red::ResourceRefWrapper;
} // namespace RED4ext

// clang-format on
