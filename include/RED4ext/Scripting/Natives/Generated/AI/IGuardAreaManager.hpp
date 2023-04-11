#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace AI
{
struct IGuardAreaManager : game::IGameSystem
{
    static constexpr const char* NAME = "AIIGuardAreaManager";
    static constexpr const char* ALIAS = "IRestrictMovementAreaManager";

};
RED4EXT_ASSERT_SIZE(IGuardAreaManager, 0x48);
} // namespace AI
using AIIGuardAreaManager = AI::IGuardAreaManager;
using IRestrictMovementAreaManager = AI::IGuardAreaManager;
} // namespace RED4ext

// clang-format on
