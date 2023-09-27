#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystem.hpp>

namespace RED4ext
{
namespace game
{
struct IPlayerHandicapSystem : game::ScriptableSystem
{
    static constexpr const char* NAME = "gameIPlayerHandicapSystem";
    static constexpr const char* ALIAS = "IPlayerHandicapSystem";

};
RED4EXT_ASSERT_SIZE(IPlayerHandicapSystem, 0x530);
} // namespace game
using gameIPlayerHandicapSystem = game::IPlayerHandicapSystem;
using IPlayerHandicapSystem = game::IPlayerHandicapSystem;
} // namespace RED4ext

// clang-format on
