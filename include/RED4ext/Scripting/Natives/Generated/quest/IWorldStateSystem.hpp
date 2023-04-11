#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace quest
{
struct IWorldStateSystem : game::IGameSystem
{
    static constexpr const char* NAME = "questIWorldStateSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IWorldStateSystem, 0x48);
} // namespace quest
using questIWorldStateSystem = quest::IWorldStateSystem;
} // namespace RED4ext

// clang-format on
