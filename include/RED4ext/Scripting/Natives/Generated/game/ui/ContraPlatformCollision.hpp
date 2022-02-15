#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameCollisionLogicAdvanced.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ContraPlatformCollision : game::ui::SideScrollerMiniGameCollisionLogicAdvanced
{
    static constexpr const char* NAME = "gameuiContraPlatformCollision";
    static constexpr const char* ALIAS = "ContraPlatformCollision";

};
RED4EXT_ASSERT_SIZE(ContraPlatformCollision, 0xC0);
} // namespace game::ui
using ContraPlatformCollision = game::ui::ContraPlatformCollision;
} // namespace RED4ext
