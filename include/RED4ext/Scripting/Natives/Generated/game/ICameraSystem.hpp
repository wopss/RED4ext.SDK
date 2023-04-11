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
struct ICameraSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameICameraSystem";
    static constexpr const char* ALIAS = "ICameraSystem";

};
RED4EXT_ASSERT_SIZE(ICameraSystem, 0x48);
} // namespace game
using gameICameraSystem = game::ICameraSystem;
using ICameraSystem = game::ICameraSystem;
} // namespace RED4ext

// clang-format on
