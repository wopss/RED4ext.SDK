#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct IManager : game::IGameSystem
{
    static constexpr const char* NAME = "gameinteractionsIManager";
    static constexpr const char* ALIAS = "IInteractionManager";

};
RED4EXT_ASSERT_SIZE(IManager, 0x48);
} // namespace game::interactions
using gameinteractionsIManager = game::interactions::IManager;
using IInteractionManager = game::interactions::IManager;
} // namespace RED4ext

// clang-format on
