#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::projectile { 
struct LinearMovementEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileLinearMovementEvent";
    static constexpr const char* ALIAS = NAME;

    Vector4 targetPosition; // 40
};
RED4EXT_ASSERT_SIZE(LinearMovementEvent, 0x50);
} // namespace game::projectile
} // namespace RED4ext
