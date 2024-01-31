#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/WrappingPolicy.hpp>

namespace RED4ext
{
namespace text
{
struct WrappingInfo
{
    static constexpr const char* NAME = "textWrappingInfo";
    static constexpr const char* ALIAS = NAME;

    bool autoWrappingEnabled; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    float wrappingAtPosition; // 04
    text::WrappingPolicy wrappingPolicy; // 08
    bool forceMinimumWidthToWrappingAtPosition; // 09
    uint8_t unk0A[0xC - 0xA]; // A
};
RED4EXT_ASSERT_SIZE(WrappingInfo, 0xC);
} // namespace text
using textWrappingInfo = text::WrappingInfo;
} // namespace RED4ext

// clang-format on
