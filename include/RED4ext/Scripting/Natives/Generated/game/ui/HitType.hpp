#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::ui {
enum class HitType : int32_t
{
    Miss = 0,
    Glance = 1,
    Hit = 2,
    CriticalHit = 3,
    CriticalHit_x2 = 4,
    Special = 5,
};
} // namespace game::ui
using gameuiHitType = game::ui::HitType;
} // namespace RED4ext

// clang-format on
