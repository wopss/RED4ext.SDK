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
struct IGameplayLogicPackageSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIGameplayLogicPackageSystem";
    static constexpr const char* ALIAS = "IGameplayLogicPackageSystem";

};
RED4EXT_ASSERT_SIZE(IGameplayLogicPackageSystem, 0x48);
} // namespace game
using gameIGameplayLogicPackageSystem = game::IGameplayLogicPackageSystem;
using IGameplayLogicPackageSystem = game::IGameplayLogicPackageSystem;
} // namespace RED4ext

// clang-format on
