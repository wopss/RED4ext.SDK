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
struct IDelaySystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIDelaySystem";
    static constexpr const char* ALIAS = "IDelaySystem";

};
RED4EXT_ASSERT_SIZE(IDelaySystem, 0x48);
} // namespace game
using gameIDelaySystem = game::IDelaySystem;
using IDelaySystem = game::IDelaySystem;
} // namespace RED4ext

// clang-format on
