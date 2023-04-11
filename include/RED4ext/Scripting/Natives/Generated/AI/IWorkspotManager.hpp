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
struct IWorkspotManager : game::IGameSystem
{
    static constexpr const char* NAME = "AIIWorkspotManager";
    static constexpr const char* ALIAS = "IWorkspotManager";

};
RED4EXT_ASSERT_SIZE(IWorkspotManager, 0x48);
} // namespace AI
using AIIWorkspotManager = AI::IWorkspotManager;
using IWorkspotManager = AI::IWorkspotManager;
} // namespace RED4ext

// clang-format on
