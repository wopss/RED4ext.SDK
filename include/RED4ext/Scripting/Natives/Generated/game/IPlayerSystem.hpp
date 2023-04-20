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
struct IPlayerSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIPlayerSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IPlayerSystem, 0x48);
} // namespace game
using gameIPlayerSystem = game::IPlayerSystem;
} // namespace RED4ext

// clang-format on
