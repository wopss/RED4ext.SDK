#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogicAdvanced.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerEnemy : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerEnemy";
    static constexpr const char* ALIAS = "PanzerEnemy";

    uint8_t unkD0[0xDC - 0xD0]; // D0
    int32_t health; // DC
    uint32_t score; // E0
    Vector2 shootPoint; // E4
    float bulletSpeed; // EC
    CName bulletLibraryName; // F0
    CName gameLayerName; // F8
    CName explosionLibraryName; // 100
    CName lifeBonusLibraryName; // 108
    uint32_t lifeBonusChanceCoeff; // 110
    uint8_t unk114[0x118 - 0x114]; // 114
    CName scoreBonusLibraryName; // 118
    uint32_t scoreBonusChanceCoeff; // 120
    uint32_t score50ChanceCoeff; // 124
    uint32_t score100ChanceCoeff; // 128
    uint32_t score200ChanceCoeff; // 12C
    uint32_t noBonusChanceCoeff; // 130
    uint8_t unk134[0x138 - 0x134]; // 134
};
RED4EXT_ASSERT_SIZE(PanzerEnemy, 0x138);
} // namespace game::ui
using gameuiPanzerEnemy = game::ui::PanzerEnemy;
using PanzerEnemy = game::ui::PanzerEnemy;
} // namespace RED4ext

// clang-format on
