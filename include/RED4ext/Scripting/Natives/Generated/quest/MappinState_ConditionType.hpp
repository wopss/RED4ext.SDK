#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IJournalConditionType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct MappinState_ConditionType : quest::IJournalConditionType
{
    static constexpr const char* NAME = "questMappinState_ConditionType";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> mappinPath; // 38
    bool active; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(MappinState_ConditionType, 0x50);
} // namespace quest
using questMappinState_ConditionType = quest::MappinState_ConditionType;
} // namespace RED4ext

// clang-format on
