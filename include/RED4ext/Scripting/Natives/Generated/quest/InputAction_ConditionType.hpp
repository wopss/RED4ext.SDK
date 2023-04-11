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
struct InputAction_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questInputAction_ConditionType";
    static constexpr const char* ALIAS = NAME;

    bool anyInputAction; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CName inputAction; // 40
    bool checkIfButtonAlreadyPressed; // 48
    bool axisAction; // 49
    uint8_t unk4A[0x4C - 0x4A]; // 4A
    float valueLessThan; // 4C
    float valueMoreThan; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(InputAction_ConditionType, 0x58);
} // namespace quest
using questInputAction_ConditionType = quest::InputAction_ConditionType;
} // namespace RED4ext

// clang-format on
