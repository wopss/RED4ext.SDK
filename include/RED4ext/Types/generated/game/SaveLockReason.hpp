#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game { 
enum class SaveLockReason : uint32_t
{
    Nothing = 0,
    Combat = 1,
    Scene = 2,
    Quest = 3,
    Script = 4,
    Boundary = 5,
    MainMenu = 6,
    LoadingScreen = 7,
    PlayerStateMachine = 8,
    PlayerState = 9,
    Tier = 10,
    NotEnoughSlots = 11,
    NotEnoughSpace = 12,
    PlayerOnMovingPlatform = 13,
};
} // namespace game
} // namespace RED4ext
