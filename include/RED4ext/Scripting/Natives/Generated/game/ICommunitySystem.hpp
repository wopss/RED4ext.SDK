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
struct ICommunitySystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameICommunitySystem";
    static constexpr const char* ALIAS = "ICommunitySystem";

};
RED4EXT_ASSERT_SIZE(ICommunitySystem, 0x48);
} // namespace game
using gameICommunitySystem = game::ICommunitySystem;
using ICommunitySystem = game::ICommunitySystem;
} // namespace RED4ext

// clang-format on
