#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ITimeConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct TickDelay_ConditionType : quest::ITimeConditionType
{
    static constexpr const char* NAME = "questTickDelay_ConditionType";
    static constexpr const char* ALIAS = NAME;

    uint32_t tickCount; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(TickDelay_ConditionType, 0x40);
} // namespace quest
using questTickDelay_ConditionType = quest::TickDelay_ConditionType;
} // namespace RED4ext

// clang-format on
