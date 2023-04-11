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
struct StopWeaponFire : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsStopWeaponFire";
    static constexpr const char* ALIAS = "StopWeaponFireSoundEvent";

};
RED4EXT_ASSERT_SIZE(StopWeaponFire, 0x40);
} // namespace game::audio::events
using gameaudioeventsStopWeaponFire = game::audio::events::StopWeaponFire;
using StopWeaponFireSoundEvent = game::audio::events::StopWeaponFire;
} // namespace RED4ext

// clang-format on
