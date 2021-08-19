#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogicAdvanced.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PanzerEnemy : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerEnemy";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkC0[0xCC - 0xC0]; // C0
    int32_t health; // CC
    uint32_t score; // D0
    Vector2 shootPoint; // D4
    float bulletSpeed; // DC
    CName bulletLibraryName; // E0
    CName gameLayerName; // E8
    CName explosionLibraryName; // F0
    CName lifeBonusLibraryName; // F8
    uint32_t lifeBonusChanceCoeff; // 100
    uint8_t unk104[0x108 - 0x104]; // 104
    CName scoreBonusLibraryName; // 108
    uint32_t scoreBonusChanceCoeff; // 110
    uint32_t score50ChanceCoeff; // 114
    uint32_t score100ChanceCoeff; // 118
    uint32_t score200ChanceCoeff; // 11C
    uint32_t noBonusChanceCoeff; // 120
    uint8_t unk124[0x128 - 0x124]; // 124
};
RED4EXT_ASSERT_SIZE(PanzerEnemy, 0x128);
} // namespace game::ui
} // namespace RED4ext
