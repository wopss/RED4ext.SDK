#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogic.hpp>

namespace RED4ext
{
namespace game::ui
{
struct QuadRacerSprite : game::ui::SideScrollerMiniGameDynObjectLogic
{
    static constexpr const char* NAME = "gameuiQuadRacerSprite";
    static constexpr const char* ALIAS = "QuadRacerSprite";

    uint8_t unk90[0x98 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(QuadRacerSprite, 0x98);
} // namespace game::ui
using gameuiQuadRacerSprite = game::ui::QuadRacerSprite;
using QuadRacerSprite = game::ui::QuadRacerSprite;
} // namespace RED4ext

// clang-format on
