#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IObjectConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Destruction_ConditionType : quest::IObjectConditionType
{
    static constexpr const char* NAME = "questDestruction_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 38
    float threshold; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(Destruction_ConditionType, 0x78);
} // namespace quest
using questDestruction_ConditionType = quest::Destruction_ConditionType;
} // namespace RED4ext

// clang-format on
