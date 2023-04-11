#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::ui
{
struct HUDVideoStopEvent
{
    static constexpr const char* NAME = "gameuiHUDVideoStopEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    uint64_t videoPathHash; // 08
    bool isSkip; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(HUDVideoStopEvent, 0x18);
} // namespace game::ui
using gameuiHUDVideoStopEvent = game::ui::HUDVideoStopEvent;
} // namespace RED4ext

// clang-format on
