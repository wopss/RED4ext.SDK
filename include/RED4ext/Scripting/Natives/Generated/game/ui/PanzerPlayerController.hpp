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
struct PanzerPlayerController : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerPlayerController";
    static constexpr const char* ALIAS = "PanzerPlayerController";

    uint8_t unkD0[0xF0 - 0xD0]; // D0
    float bulletSpeed; // F0
    Vector2 bulletSpawnOffset; // F4
    uint8_t unkFC[0x100 - 0xFC]; // FC
    CName bulletLibraryname; // 100
    float shootInterval; // 108
    uint8_t unk10C[0x110 - 0x10C]; // 10C
    CName gameLayerName; // 110
    CName invulnerableAnimationName; // 118
    CName explosionLibraryName; // 120
};
RED4EXT_ASSERT_SIZE(PanzerPlayerController, 0x128);
} // namespace game::ui
using gameuiPanzerPlayerController = game::ui::PanzerPlayerController;
using PanzerPlayerController = game::ui::PanzerPlayerController;
} // namespace RED4ext

// clang-format on
