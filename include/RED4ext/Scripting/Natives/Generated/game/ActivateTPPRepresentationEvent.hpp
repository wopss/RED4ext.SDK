#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct ActivateTPPRepresentationEvent : red::Event
{
    static constexpr const char* NAME = "gameActivateTPPRepresentationEvent";
    static constexpr const char* ALIAS = "ActivateTPPRepresentationEvent";

    uint8_t unk40[0x78 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ActivateTPPRepresentationEvent, 0x78);
} // namespace game
using ActivateTPPRepresentationEvent = game::ActivateTPPRepresentationEvent;
} // namespace RED4ext
