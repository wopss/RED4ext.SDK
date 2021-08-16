#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct IMovingPlatformMovement; }

namespace game { 
struct MovingPlatformSavedData
{
    static constexpr const char* NAME = "gameMovingPlatformSavedData";
    static constexpr const char* ALIAS = NAME;

    Handle<game::IMovingPlatformMovement> movement; // 00
    CName destinationName; // 10
    int32_t destinationData; // 18
    float time; // 1C
    float maxTime; // 20
    uint32_t mountedPlayerEntityID; // 24
};
RED4EXT_ASSERT_SIZE(MovingPlatformSavedData, 0x28);
} // namespace game
} // namespace RED4ext
