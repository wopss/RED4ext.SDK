#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/SideScrollerMiniGameDynObjectLogic.hpp>

namespace RED4ext
{
namespace game::ui { 
struct QuadRacerSprite : game::ui::SideScrollerMiniGameDynObjectLogic
{
    static constexpr const char* NAME = "gameuiQuadRacerSprite";
    static constexpr const char* ALIAS = "QuadRacerSprite";

    uint8_t unk80[0x88 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(QuadRacerSprite, 0x88);
} // namespace game::ui
using QuadRacerSprite = game::ui::QuadRacerSprite;
} // namespace RED4ext
