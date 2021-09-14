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
struct PanzerPlayerController : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerPlayerController";
    static constexpr const char* ALIAS = "PanzerPlayerController";

    uint8_t unkC0[0xE0 - 0xC0]; // C0
    float bulletSpeed; // E0
    Vector2 bulletSpawnOffset; // E4
    uint8_t unkEC[0xF0 - 0xEC]; // EC
    CName bulletLibraryname; // F0
    float shootInterval; // F8
    uint8_t unkFC[0x100 - 0xFC]; // FC
    CName gameLayerName; // 100
    CName invulnerableAnimationName; // 108
    CName explosionLibraryName; // 110
};
RED4EXT_ASSERT_SIZE(PanzerPlayerController, 0x118);
} // namespace game::ui
using PanzerPlayerController = game::ui::PanzerPlayerController;
} // namespace RED4ext
