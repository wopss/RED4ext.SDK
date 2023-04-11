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
struct IWorkspotGameSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIWorkspotGameSystem";
    static constexpr const char* ALIAS = "IWorkspotGameSystem";

};
RED4EXT_ASSERT_SIZE(IWorkspotGameSystem, 0x48);
} // namespace game
using gameIWorkspotGameSystem = game::IWorkspotGameSystem;
using IWorkspotGameSystem = game::IWorkspotGameSystem;
} // namespace RED4ext

// clang-format on
