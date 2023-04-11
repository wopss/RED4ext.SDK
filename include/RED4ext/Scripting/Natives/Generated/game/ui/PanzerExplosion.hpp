#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogicAdvanced.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerExplosion : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerExplosion";
    static constexpr const char* ALIAS = "PanzerExplosion";

    CName animationName; // D0
};
RED4EXT_ASSERT_SIZE(PanzerExplosion, 0xD8);
} // namespace game::ui
using gameuiPanzerExplosion = game::ui::PanzerExplosion;
using PanzerExplosion = game::ui::PanzerExplosion;
} // namespace RED4ext

// clang-format on
