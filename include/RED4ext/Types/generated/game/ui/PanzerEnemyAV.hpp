#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/PanzerEnemy.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PanzerEnemyAV : game::ui::PanzerEnemy
{
    static constexpr const char* NAME = "gameuiPanzerEnemyAV";
    static constexpr const char* ALIAS = "PanzerEnemyAV";

    float speed; // 128
    uint32_t shotsAmount; // 12C
    float longShotInterval; // 130
    float shortShotInterval; // 134
    uint8_t unk138[0x140 - 0x138]; // 138
};
RED4EXT_ASSERT_SIZE(PanzerEnemyAV, 0x140);
} // namespace game::ui
using PanzerEnemyAV = game::ui::PanzerEnemyAV;
} // namespace RED4ext
