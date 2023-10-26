#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct __declspec(align(0x10)) LinearMovementEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileLinearMovementEvent";
    static constexpr const char* ALIAS = NAME;

    Vector4 targetPosition; // 40
};
RED4EXT_ASSERT_SIZE(LinearMovementEvent, 0x50);
} // namespace game::projectile
using gameprojectileLinearMovementEvent = game::projectile::LinearMovementEvent;
} // namespace RED4ext

// clang-format on
