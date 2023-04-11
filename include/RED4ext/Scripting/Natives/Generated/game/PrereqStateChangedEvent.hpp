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
struct PrereqStateChangedEvent : red::Event
{
    static constexpr const char* NAME = "gamePrereqStateChangedEvent";
    static constexpr const char* ALIAS = "PrereqStateChangedEvent";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PrereqStateChangedEvent, 0x50);
} // namespace game
using gamePrereqStateChangedEvent = game::PrereqStateChangedEvent;
using PrereqStateChangedEvent = game::PrereqStateChangedEvent;
} // namespace RED4ext

// clang-format on
