#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) Segment
{
    static constexpr const char* NAME = "Segment";
    static constexpr const char* ALIAS = NAME;

    Vector4 origin; // 00
    Vector4 direction; // 10
};
RED4EXT_ASSERT_SIZE(Segment, 0x20);
} // namespace RED4ext

// clang-format on
