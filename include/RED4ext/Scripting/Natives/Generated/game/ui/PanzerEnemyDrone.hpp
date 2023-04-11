#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PanzerEnemy.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerEnemyDrone : game::ui::PanzerEnemy
{
    static constexpr const char* NAME = "gameuiPanzerEnemyDrone";
    static constexpr const char* ALIAS = "PanzerEnemyDrone";

    float speed; // 138
    float shootIntervalMinimum; // 13C
    float shootIntervalMaximum; // 140
    uint8_t unk144[0x150 - 0x144]; // 144
};
RED4EXT_ASSERT_SIZE(PanzerEnemyDrone, 0x150);
} // namespace game::ui
using gameuiPanzerEnemyDrone = game::ui::PanzerEnemyDrone;
using PanzerEnemyDrone = game::ui::PanzerEnemyDrone;
} // namespace RED4ext

// clang-format on
