#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::input
{
struct ActionDisplayData
{
    static constexpr const char* NAME = "gameinputActionDisplayData";
    static constexpr const char* ALIAS = "ActionDisplayData";

    CName name; // 00
    bool isHold; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
    CString inputDisplayPad; // 10
    CString inputDisplayKeyboard; // 30
};
RED4EXT_ASSERT_SIZE(ActionDisplayData, 0x50);
} // namespace game::input
using gameinputActionDisplayData = game::input::ActionDisplayData;
using ActionDisplayData = game::input::ActionDisplayData;
} // namespace RED4ext

// clang-format on
