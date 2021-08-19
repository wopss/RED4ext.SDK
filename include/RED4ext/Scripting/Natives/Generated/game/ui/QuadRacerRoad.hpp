#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogic.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/QuadWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct QuadRacerRoad : game::ui::SideScrollerMiniGameDynObjectLogic
{
    static constexpr const char* NAME = "gameuiQuadRacerRoad";
    static constexpr const char* ALIAS = NAME;

    ink::QuadWidgetReference roadQuad; // 80
    ink::QuadWidgetReference leftBackground; // 98
    ink::QuadWidgetReference rightBackground; // B0
    DynArray<CName> groundParts; // C8
    DynArray<CName> roadParts; // D8
};
RED4EXT_ASSERT_SIZE(QuadRacerRoad, 0xE8);
} // namespace game::ui
} // namespace RED4ext
