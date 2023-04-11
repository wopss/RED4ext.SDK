#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace quest { struct IBaseCondition; }

namespace quest
{
struct ConditionItem
{
    static constexpr const char* NAME = "questConditionItem";
    static constexpr const char* ALIAS = NAME;

    uint32_t socketId; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    Handle<quest::IBaseCondition> condition; // 08
};
RED4EXT_ASSERT_SIZE(ConditionItem, 0x18);
} // namespace quest
using questConditionItem = quest::ConditionItem;
} // namespace RED4ext

// clang-format on
