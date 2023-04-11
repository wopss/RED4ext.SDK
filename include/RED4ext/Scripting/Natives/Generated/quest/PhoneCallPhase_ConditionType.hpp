#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallPhase.hpp>

namespace RED4ext
{
namespace quest
{
struct PhoneCallPhase_ConditionType : quest::IPhoneConditionType
{
    static constexpr const char* NAME = "questPhoneCallPhase_ConditionType";
    static constexpr const char* ALIAS = NAME;

    quest::PhoneCallPhase callPhase; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(PhoneCallPhase_ConditionType, 0x48);
} // namespace quest
using questPhoneCallPhase_ConditionType = quest::PhoneCallPhase_ConditionType;
} // namespace RED4ext

// clang-format on
