#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PanzerBullet.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerEnemyBullet : game::ui::PanzerBullet
{
    static constexpr const char* NAME = "gameuiPanzerEnemyBullet";
    static constexpr const char* ALIAS = "PanzerEnemyBullet";

};
RED4EXT_ASSERT_SIZE(PanzerEnemyBullet, 0xD0);
} // namespace game::ui
using gameuiPanzerEnemyBullet = game::ui::PanzerEnemyBullet;
using PanzerEnemyBullet = game::ui::PanzerEnemyBullet;
} // namespace RED4ext

// clang-format on
