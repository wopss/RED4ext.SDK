#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/LinearMovementEvent.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct __declspec(align(0x10)) AcceleratedMovementEvent : game::projectile::LinearMovementEvent
{
    static constexpr const char* NAME = "gameprojectileAcceleratedMovementEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AcceleratedMovementEvent, 0x50);
} // namespace game::projectile
using gameprojectileAcceleratedMovementEvent = game::projectile::AcceleratedMovementEvent;
} // namespace RED4ext

// clang-format on
