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
struct IMinimapSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIMinimapSystem";
    static constexpr const char* ALIAS = "IMinimapSystem";

};
RED4EXT_ASSERT_SIZE(IMinimapSystem, 0x48);
} // namespace game
using gameIMinimapSystem = game::IMinimapSystem;
using IMinimapSystem = game::IMinimapSystem;
} // namespace RED4ext

// clang-format on
