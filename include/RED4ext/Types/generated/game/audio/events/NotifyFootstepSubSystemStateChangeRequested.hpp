#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events { 
struct NotifyFootstepSubSystemStateChangeRequested : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsNotifyFootstepSubSystemStateChangeRequested";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(NotifyFootstepSubSystemStateChangeRequested, 0x48);
} // namespace game::audio::events
} // namespace RED4ext
