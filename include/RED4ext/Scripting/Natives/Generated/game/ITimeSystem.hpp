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
struct ITimeSystem : game::IReplicatedGameSystem
{
    static constexpr const char* NAME = "gameITimeSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ITimeSystem, 0x58);
} // namespace game
using gameITimeSystem = game::ITimeSystem;
} // namespace RED4ext

// clang-format on
