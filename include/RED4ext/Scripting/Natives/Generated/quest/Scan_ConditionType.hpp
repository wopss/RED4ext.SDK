#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IObjectConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ObjectScanEventType.hpp>

namespace RED4ext
{
namespace quest
{
struct Scan_ConditionType : quest::IObjectConditionType
{
    static constexpr const char* NAME = "questScan_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 38
    quest::ObjectScanEventType eventType; // 70
    uint8_t unk71[0x80 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(Scan_ConditionType, 0x80);
} // namespace quest
using questScan_ConditionType = quest::Scan_ConditionType;
} // namespace RED4ext

// clang-format on
