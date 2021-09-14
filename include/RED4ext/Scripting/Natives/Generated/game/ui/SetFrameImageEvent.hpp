#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SetFrameImageEvent : red::Event
{
    static constexpr const char* NAME = "gameuiSetFrameImageEvent";
    static constexpr const char* ALIAS = "SetFrameImageEvent";

    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SetFrameImageEvent, 0x68);
} // namespace game::ui
using SetFrameImageEvent = game::ui::SetFrameImageEvent;
} // namespace RED4ext
