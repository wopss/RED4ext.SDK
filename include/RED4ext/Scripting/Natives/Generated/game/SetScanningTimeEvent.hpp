#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct SetScanningTimeEvent : red::Event
{
    static constexpr const char* NAME = "gameSetScanningTimeEvent";
    static constexpr const char* ALIAS = "SetScanningTimeEvent";

    float time; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(SetScanningTimeEvent, 0x48);
} // namespace game
using gameSetScanningTimeEvent = game::SetScanningTimeEvent;
using SetScanningTimeEvent = game::SetScanningTimeEvent;
} // namespace RED4ext

// clang-format on
