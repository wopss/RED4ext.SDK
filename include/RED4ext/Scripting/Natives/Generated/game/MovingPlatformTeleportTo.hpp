#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct MovingPlatformTeleportTo : red::Event
{
    static constexpr const char* NAME = "gameMovingPlatformTeleportTo";
    static constexpr const char* ALIAS = "TeleportTo";

    NodeRef destinationNode; // 40
    uint8_t unk48[0x50 - 0x48]; // 48
    Vector4 rootEntityPosition; // 50
};
RED4EXT_ASSERT_SIZE(MovingPlatformTeleportTo, 0x60);
} // namespace game
using TeleportTo = game::MovingPlatformTeleportTo;
} // namespace RED4ext
