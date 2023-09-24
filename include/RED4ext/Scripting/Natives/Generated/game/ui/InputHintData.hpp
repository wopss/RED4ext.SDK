#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InputHintHoldIndicationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InputHintKeyCombinationType.hpp>

namespace RED4ext
{
namespace game::ui
{
struct InputHintData
{
    static constexpr const char* NAME = "gameuiInputHintData";
    static constexpr const char* ALIAS = "InputHintData";

    CName action; // 00
    CName source; // 08
    CName groupId; // 10
    CName tutorialAction; // 18
    CString localizedLabel; // 20
    int32_t queuePriority; // 40
    int32_t sortingPriority; // 44
    int32_t tutorialActionCount; // 48
    ink::InputHintKeyCombinationType inputHintKeyCombinationType; // 4C
    bool enableHoldAnimation; // 50
    ink::InputHintHoldIndicationType holdIndicationType; // 51
    uint8_t unk52[0x58 - 0x52]; // 52
};
RED4EXT_ASSERT_SIZE(InputHintData, 0x58);
} // namespace game::ui
using gameuiInputHintData = game::ui::InputHintData;
using InputHintData = game::ui::InputHintData;
} // namespace RED4ext

// clang-format on
