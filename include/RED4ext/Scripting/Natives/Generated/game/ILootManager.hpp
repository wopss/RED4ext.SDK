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
struct ILootManager : game::IGameSystem
{
    static constexpr const char* NAME = "gameILootManager";
    static constexpr const char* ALIAS = "ILootManager";

};
RED4EXT_ASSERT_SIZE(ILootManager, 0x48);
} // namespace game
using gameILootManager = game::ILootManager;
using ILootManager = game::ILootManager;
} // namespace RED4ext

// clang-format on
