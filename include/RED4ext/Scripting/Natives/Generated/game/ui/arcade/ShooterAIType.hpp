#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::ui::arcade {
enum class ShooterAIType : int32_t
{
    MELEE = 0,
    RANGESHOOTER = 1,
    RANGEGRENADE = 2,
    FLYINGDRONE = 3,
    SPIDERDRONE = 4,
    POWERUPDRONE = 5,
    TRANSPORT = 6,
    VIP = 8,
    VIPPLAT = 9,
    LANDMINE = 12,
    BARREL = 13,
    NINJA = 14,
    MEATHEAD = 15,
    BASILISK = 16,
};
} // namespace game::ui::arcade
using gameuiarcadeShooterAIType = game::ui::arcade::ShooterAIType;
} // namespace RED4ext

// clang-format on
