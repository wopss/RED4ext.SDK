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
struct MovingPlatformAttachEntity : red::Event
{
    static constexpr const char* NAME = "gameMovingPlatformAttachEntity";
    static constexpr const char* ALIAS = "AttachEntity";

    WeakHandle<ent::Entity> entity; // 40
};
RED4EXT_ASSERT_SIZE(MovingPlatformAttachEntity, 0x50);
} // namespace game
using gameMovingPlatformAttachEntity = game::MovingPlatformAttachEntity;
using AttachEntity = game::MovingPlatformAttachEntity;
} // namespace RED4ext

// clang-format on
