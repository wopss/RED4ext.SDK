#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::ui
{
struct InputHintGroupData
{
    static constexpr const char* NAME = "gameuiInputHintGroupData";
    static constexpr const char* ALIAS = "InputHintGroupData";

    TweakDBID iconReference; // 00
    CString localizedTitle; // 08
    CString localizedDescription; // 28
    int32_t sortingPriority; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(InputHintGroupData, 0x50);
} // namespace game::ui
using gameuiInputHintGroupData = game::ui::InputHintGroupData;
using InputHintGroupData = game::ui::InputHintGroupData;
} // namespace RED4ext

// clang-format on
