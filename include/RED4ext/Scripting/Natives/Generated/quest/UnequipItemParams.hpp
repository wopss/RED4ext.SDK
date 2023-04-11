#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct UnequipItemParams
{
    static constexpr const char* NAME = "questUnequipItemParams";
    static constexpr const char* ALIAS = NAME;

    TweakDBID slotId; // 00
    float unequipDurationOverride; // 08
};
RED4EXT_ASSERT_SIZE(UnequipItemParams, 0xC);
} // namespace quest
using questUnequipItemParams = quest::UnequipItemParams;
} // namespace RED4ext

// clang-format on
