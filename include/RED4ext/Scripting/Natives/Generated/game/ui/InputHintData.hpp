#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InputHintHoldIndicationType.hpp>

namespace RED4ext
{
namespace game::ui { 
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
    bool enableHoldAnimation; // 4C
    ink::InputHintHoldIndicationType holdIndicationType; // 4D
    uint8_t unk4E[0x50 - 0x4E]; // 4E
};
RED4EXT_ASSERT_SIZE(InputHintData, 0x50);
} // namespace game::ui
using InputHintData = game::ui::InputHintData;
} // namespace RED4ext
