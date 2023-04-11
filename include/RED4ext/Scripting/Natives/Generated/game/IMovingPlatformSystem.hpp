#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct IMovingPlatformSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIMovingPlatformSystem";
    static constexpr const char* ALIAS = "IMovingPlatformSystem";

};
RED4EXT_ASSERT_SIZE(IMovingPlatformSystem, 0x48);
} // namespace game
using gameIMovingPlatformSystem = game::IMovingPlatformSystem;
using IMovingPlatformSystem = game::IMovingPlatformSystem;
} // namespace RED4ext

// clang-format on
