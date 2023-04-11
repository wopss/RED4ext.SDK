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
struct IInventoryManager : game::IGameSystem
{
    static constexpr const char* NAME = "gameIInventoryManager";
    static constexpr const char* ALIAS = "IInventoryManager";

};
RED4EXT_ASSERT_SIZE(IInventoryManager, 0x48);
} // namespace game
using gameIInventoryManager = game::IInventoryManager;
using IInventoryManager = game::IInventoryManager;
} // namespace RED4ext

// clang-format on
