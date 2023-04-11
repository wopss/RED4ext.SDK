#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IWorkspotGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct WorkspotGameSystem : game::IWorkspotGameSystem
{
    static constexpr const char* NAME = "gameWorkspotGameSystem";
    static constexpr const char* ALIAS = "WorkspotGameSystem";

};
RED4EXT_ASSERT_SIZE(WorkspotGameSystem, 0x48);
} // namespace game
using gameWorkspotGameSystem = game::WorkspotGameSystem;
using WorkspotGameSystem = game::WorkspotGameSystem;
} // namespace RED4ext

// clang-format on
