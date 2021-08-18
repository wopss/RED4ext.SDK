#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::projectile { 
struct ForceActivationEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileForceActivationEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ForceActivationEvent, 0x40);
} // namespace game::projectile
} // namespace RED4ext
