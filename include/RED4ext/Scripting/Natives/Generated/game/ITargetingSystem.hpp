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
struct ITargetingSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameITargetingSystem";
    static constexpr const char* ALIAS = "ITargetingSystem";

};
RED4EXT_ASSERT_SIZE(ITargetingSystem, 0x48);
} // namespace game
using gameITargetingSystem = game::ITargetingSystem;
using ITargetingSystem = game::ITargetingSystem;
} // namespace RED4ext

// clang-format on
