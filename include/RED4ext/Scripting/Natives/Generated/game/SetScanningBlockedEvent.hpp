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
struct SetScanningBlockedEvent : red::Event
{
    static constexpr const char* NAME = "gameSetScanningBlockedEvent";
    static constexpr const char* ALIAS = "SetScanningBlockedEvent";

    bool isBlocked; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(SetScanningBlockedEvent, 0x48);
} // namespace game
using gameSetScanningBlockedEvent = game::SetScanningBlockedEvent;
using SetScanningBlockedEvent = game::SetScanningBlockedEvent;
} // namespace RED4ext

// clang-format on
