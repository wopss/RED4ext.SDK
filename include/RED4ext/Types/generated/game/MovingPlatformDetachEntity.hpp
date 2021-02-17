#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game { 
struct MovingPlatformDetachEntity : red::Event
{
    static constexpr const char* NAME = "gameMovingPlatformDetachEntity";
    static constexpr const char* ALIAS = "DetachEntity";

    WeakHandle<ent::Entity> entity; // 40
};
RED4EXT_ASSERT_SIZE(MovingPlatformDetachEntity, 0x50);
} // namespace game
using DetachEntity = game::MovingPlatformDetachEntity;
} // namespace RED4ext
