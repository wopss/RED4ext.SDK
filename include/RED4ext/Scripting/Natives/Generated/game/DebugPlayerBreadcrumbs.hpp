#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDebugPlayerBreadcrumbs.hpp>

namespace RED4ext
{
namespace game { 
struct DebugPlayerBreadcrumbs : game::IDebugPlayerBreadcrumbs
{
    static constexpr const char* NAME = "gameDebugPlayerBreadcrumbs";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DebugPlayerBreadcrumbs, 0x48);
} // namespace game
} // namespace RED4ext
