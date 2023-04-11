#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace quest
{
struct VariantState
{
    static constexpr const char* NAME = "questVariantState";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    bool show; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(VariantState, 0x10);
} // namespace quest
using questVariantState = quest::VariantState;
} // namespace RED4ext

// clang-format on
