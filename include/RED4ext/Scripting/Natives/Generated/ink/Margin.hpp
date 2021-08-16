#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ink { 
struct Margin
{
    static constexpr const char* NAME = "inkMargin";
    static constexpr const char* ALIAS = NAME;

    float left; // 00
    float top; // 04
    float right; // 08
    float bottom; // 0C
};
RED4EXT_ASSERT_SIZE(Margin, 0x10);
} // namespace ink
} // namespace RED4ext
