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
struct ICompanionSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameICompanionSystem";
    static constexpr const char* ALIAS = "ICompanionSystem";

};
RED4EXT_ASSERT_SIZE(ICompanionSystem, 0x48);
} // namespace game
using gameICompanionSystem = game::ICompanionSystem;
using ICompanionSystem = game::ICompanionSystem;
} // namespace RED4ext

// clang-format on
