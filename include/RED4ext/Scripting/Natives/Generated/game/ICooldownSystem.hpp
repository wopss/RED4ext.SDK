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
struct ICooldownSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameICooldownSystem";
    static constexpr const char* ALIAS = "ICooldownSystem";

};
RED4EXT_ASSERT_SIZE(ICooldownSystem, 0x48);
} // namespace game
using gameICooldownSystem = game::ICooldownSystem;
using ICooldownSystem = game::ICooldownSystem;
} // namespace RED4ext

// clang-format on
