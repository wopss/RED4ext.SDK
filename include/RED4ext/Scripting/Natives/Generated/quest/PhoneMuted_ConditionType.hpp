#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct PhoneMuted_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questPhoneMuted_ConditionType";
    static constexpr const char* ALIAS = NAME;

    CName groupName; // 38
    bool inverted; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(PhoneMuted_ConditionType, 0x48);
} // namespace quest
using questPhoneMuted_ConditionType = quest::PhoneMuted_ConditionType;
} // namespace RED4ext

// clang-format on
