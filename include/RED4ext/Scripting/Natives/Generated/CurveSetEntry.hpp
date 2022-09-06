#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct CurveSetEntry
{
    static constexpr const char* NAME = "CurveSetEntry";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CurveData<float> curve; // 08
};
RED4EXT_ASSERT_SIZE(CurveSetEntry, 0x40);
} // namespace RED4ext

// clang-format on
