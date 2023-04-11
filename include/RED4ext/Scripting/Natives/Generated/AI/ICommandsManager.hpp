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
struct ICommandsManager : game::IGameSystem
{
    static constexpr const char* NAME = "AIICommandsManager";
    static constexpr const char* ALIAS = "ICommandsManager";

};
RED4EXT_ASSERT_SIZE(ICommandsManager, 0x48);
} // namespace AI
using AIICommandsManager = AI::ICommandsManager;
using ICommandsManager = AI::ICommandsManager;
} // namespace RED4ext

// clang-format on
