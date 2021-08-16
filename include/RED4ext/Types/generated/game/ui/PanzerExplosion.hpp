#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/ui/SideScrollerMiniGameDynObjectLogicAdvanced.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PanzerExplosion : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerExplosion";
    static constexpr const char* ALIAS = "PanzerExplosion";

    CName animationName; // C0
};
RED4EXT_ASSERT_SIZE(PanzerExplosion, 0xC8);
} // namespace game::ui
using PanzerExplosion = game::ui::PanzerExplosion;
} // namespace RED4ext
