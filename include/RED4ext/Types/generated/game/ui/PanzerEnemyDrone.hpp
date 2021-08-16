#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/PanzerEnemy.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PanzerEnemyDrone : game::ui::PanzerEnemy
{
    static constexpr const char* NAME = "gameuiPanzerEnemyDrone";
    static constexpr const char* ALIAS = "PanzerEnemyDrone";

    float speed; // 128
    float shootIntervalMinimum; // 12C
    float shootIntervalMaximum; // 130
    uint8_t unk134[0x140 - 0x134]; // 134
};
RED4EXT_ASSERT_SIZE(PanzerEnemyDrone, 0x140);
} // namespace game::ui
using PanzerEnemyDrone = game::ui::PanzerEnemyDrone;
} // namespace RED4ext
