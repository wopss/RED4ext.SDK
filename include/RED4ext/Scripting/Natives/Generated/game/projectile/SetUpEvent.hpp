#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace game::projectile { struct TrajectoryParams; }

namespace game::projectile { 
struct SetUpEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileSetUpEvent";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> owner; // 40
    WeakHandle<game::Object> weapon; // 50
    Handle<game::projectile::TrajectoryParams> trajectoryParams; // 60
    float lerpMultiplier; // 70
    uint8_t unk74[0xA0 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(SetUpEvent, 0xA0);
} // namespace game::projectile
} // namespace RED4ext
