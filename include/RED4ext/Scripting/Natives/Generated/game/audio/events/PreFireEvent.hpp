#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct PreFireEvent : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsPreFireEvent";
    static constexpr const char* ALIAS = "WeaponPreFireEvent";

};
RED4EXT_ASSERT_SIZE(PreFireEvent, 0x40);
} // namespace game::audio::events
using gameaudioeventsPreFireEvent = game::audio::events::PreFireEvent;
using WeaponPreFireEvent = game::audio::events::PreFireEvent;
} // namespace RED4ext

// clang-format on
