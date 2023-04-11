#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/InputDevice.hpp>

namespace RED4ext
{
namespace quest
{
struct InputController_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questInputController_ConditionType";
    static constexpr const char* ALIAS = NAME;

    quest::InputDevice inputController; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(InputController_ConditionType, 0x40);
} // namespace quest
using questInputController_ConditionType = quest::InputController_ConditionType;
} // namespace RED4ext

// clang-format on
