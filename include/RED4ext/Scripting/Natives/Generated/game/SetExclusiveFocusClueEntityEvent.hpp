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
struct SetExclusiveFocusClueEntityEvent : red::Event
{
    static constexpr const char* NAME = "gameSetExclusiveFocusClueEntityEvent";
    static constexpr const char* ALIAS = "SetExclusiveFocusClueEntityEvent";

    bool isSetExclusive; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(SetExclusiveFocusClueEntityEvent, 0x48);
} // namespace game
using gameSetExclusiveFocusClueEntityEvent = game::SetExclusiveFocusClueEntityEvent;
using SetExclusiveFocusClueEntityEvent = game::SetExclusiveFocusClueEntityEvent;
} // namespace RED4ext

// clang-format on
