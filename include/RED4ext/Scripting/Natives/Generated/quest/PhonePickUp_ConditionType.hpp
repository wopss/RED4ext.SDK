#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct PhonePickUp_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questPhonePickUp_ConditionType";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> caller; // 38
    Handle<game::JournalPath> addressee; // 48
    bool releaseOnRejection; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(PhonePickUp_ConditionType, 0x60);
} // namespace quest
using questPhonePickUp_ConditionType = quest::PhonePickUp_ConditionType;
} // namespace RED4ext

// clang-format on
