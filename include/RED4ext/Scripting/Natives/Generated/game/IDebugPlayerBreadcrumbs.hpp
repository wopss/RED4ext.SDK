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
struct IDebugPlayerBreadcrumbs : game::IGameSystem
{
    static constexpr const char* NAME = "gameIDebugPlayerBreadcrumbs";
    static constexpr const char* ALIAS = "IDebugPlayerBreadcrumbs";

};
RED4EXT_ASSERT_SIZE(IDebugPlayerBreadcrumbs, 0x48);
} // namespace game
using gameIDebugPlayerBreadcrumbs = game::IDebugPlayerBreadcrumbs;
using IDebugPlayerBreadcrumbs = game::IDebugPlayerBreadcrumbs;
} // namespace RED4ext

// clang-format on
