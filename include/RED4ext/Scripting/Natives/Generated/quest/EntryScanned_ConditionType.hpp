#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IObjectConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntryScanned_ConditionType : quest::IObjectConditionType
{
    static constexpr const char* NAME = "questEntryScanned_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 38
    TweakDBID entryID; // 70
};
RED4EXT_ASSERT_SIZE(EntryScanned_ConditionType, 0x78);
} // namespace quest
using questEntryScanned_ConditionType = quest::EntryScanned_ConditionType;
} // namespace RED4ext

// clang-format on
