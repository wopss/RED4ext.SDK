#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogic.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/QuadWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct QuadRacerRoad : game::ui::SideScrollerMiniGameDynObjectLogic
{
    static constexpr const char* NAME = "gameuiQuadRacerRoad";
    static constexpr const char* ALIAS = "QuadRacerRoad";

    ink::QuadWidgetReference roadQuad; // 90
    ink::QuadWidgetReference leftBackground; // A8
    ink::QuadWidgetReference rightBackground; // C0
    DynArray<CName> groundParts; // D8
    DynArray<CName> roadParts; // E8
};
RED4EXT_ASSERT_SIZE(QuadRacerRoad, 0xF8);
} // namespace game::ui
using gameuiQuadRacerRoad = game::ui::QuadRacerRoad;
using QuadRacerRoad = game::ui::QuadRacerRoad;
} // namespace RED4ext

// clang-format on
