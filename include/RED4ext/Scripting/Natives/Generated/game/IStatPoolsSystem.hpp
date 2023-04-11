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
struct IStatPoolsSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIStatPoolsSystem";
    static constexpr const char* ALIAS = "IStatPoolsSystem";

};
RED4EXT_ASSERT_SIZE(IStatPoolsSystem, 0x48);
} // namespace game
using gameIStatPoolsSystem = game::IStatPoolsSystem;
using IStatPoolsSystem = game::IStatPoolsSystem;
} // namespace RED4ext

// clang-format on
