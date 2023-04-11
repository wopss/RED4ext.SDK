#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game
{
struct MovingPlatformDetachEntity : red::Event
{
    static constexpr const char* NAME = "gameMovingPlatformDetachEntity";
    static constexpr const char* ALIAS = "DetachEntity";

    WeakHandle<ent::Entity> entity; // 40
};
RED4EXT_ASSERT_SIZE(MovingPlatformDetachEntity, 0x50);
} // namespace game
using gameMovingPlatformDetachEntity = game::MovingPlatformDetachEntity;
using DetachEntity = game::MovingPlatformDetachEntity;
} // namespace RED4ext

// clang-format on
