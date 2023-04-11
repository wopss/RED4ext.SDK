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
struct SetScannableThroughWallsEvent : red::Event
{
    static constexpr const char* NAME = "gameSetScannableThroughWallsEvent";
    static constexpr const char* ALIAS = "SetScannableThroughWallsEvent";

    bool isScannableThroughWalls; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(SetScannableThroughWallsEvent, 0x48);
} // namespace game
using gameSetScannableThroughWallsEvent = game::SetScannableThroughWallsEvent;
using SetScannableThroughWallsEvent = game::SetScannableThroughWallsEvent;
} // namespace RED4ext

// clang-format on
