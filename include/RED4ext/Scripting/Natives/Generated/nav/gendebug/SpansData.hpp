#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/gendebug/CompactSpan.hpp>

namespace RED4ext
{
namespace nav::gendebug
{
struct SpansData
{
    static constexpr const char* NAME = "navgendebugSpansData";
    static constexpr const char* ALIAS = NAME;

    DynArray<nav::gendebug::CompactSpan> spans; // 00
    DynArray<uint8_t> areas; // 10
    DynArray<uint8_t> filteredAreas; // 20
};
RED4EXT_ASSERT_SIZE(SpansData, 0x30);
} // namespace nav::gendebug
using navgendebugSpansData = nav::gendebug::SpansData;
} // namespace RED4ext

// clang-format on
