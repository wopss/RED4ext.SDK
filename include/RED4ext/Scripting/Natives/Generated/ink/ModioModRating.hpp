#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ModioRating.hpp>

namespace RED4ext
{
namespace ink
{
struct ModioModRating
{
    static constexpr const char* NAME = "inkModioModRating";
    static constexpr const char* ALIAS = NAME;

    int64_t id; // 00
    ink::ModioRating rating; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(ModioModRating, 0x10);
} // namespace ink
using inkModioModRating = ink::ModioModRating;
} // namespace RED4ext

// clang-format on
