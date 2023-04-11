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
struct PinInfo
{
    static constexpr const char* NAME = "gameuiPinInfo";
    static constexpr const char* ALIAS = "PinInfo";

    bool shouldShow; // 00
    bool showFloorAbove; // 01
    bool showFloorBelow; // 02
    uint8_t unk03[0x4 - 0x3]; // 3
    int32_t iconType; // 04
    float offset; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    CString displayText; // 10
};
RED4EXT_ASSERT_SIZE(PinInfo, 0x30);
} // namespace game::ui
using gameuiPinInfo = game::ui::PinInfo;
using PinInfo = game::ui::PinInfo;
} // namespace RED4ext

// clang-format on
