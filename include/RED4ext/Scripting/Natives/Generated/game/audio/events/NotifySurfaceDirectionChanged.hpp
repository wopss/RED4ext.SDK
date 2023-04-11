#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/events/SurfaceDirection.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct NotifySurfaceDirectionChanged : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsNotifySurfaceDirectionChanged";
    static constexpr const char* ALIAS = "NotifySurfaceDirectionChangedEvent";

    game::audio::events::SurfaceDirection surfaceDirection; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(NotifySurfaceDirectionChanged, 0x48);
} // namespace game::audio::events
using gameaudioeventsNotifySurfaceDirectionChanged = game::audio::events::NotifySurfaceDirectionChanged;
using NotifySurfaceDirectionChangedEvent = game::audio::events::NotifySurfaceDirectionChanged;
} // namespace RED4ext

// clang-format on
