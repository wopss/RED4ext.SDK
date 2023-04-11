#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IReplicatedGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct IDebugCheatsSystem : game::IReplicatedGameSystem
{
    static constexpr const char* NAME = "gameIDebugCheatsSystem";
    static constexpr const char* ALIAS = "IDebugCheatsSystem";

};
RED4EXT_ASSERT_SIZE(IDebugCheatsSystem, 0x58);
} // namespace game
using gameIDebugCheatsSystem = game::IDebugCheatsSystem;
using IDebugCheatsSystem = game::IDebugCheatsSystem;
} // namespace RED4ext

// clang-format on
