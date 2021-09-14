#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct HolocallStartEvent : red::Event
{
    static constexpr const char* NAME = "gameuiHolocallStartEvent";
    static constexpr const char* ALIAS = "HolocallStartEvent";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(HolocallStartEvent, 0x50);
} // namespace game::ui
using HolocallStartEvent = game::ui::HolocallStartEvent;
} // namespace RED4ext
