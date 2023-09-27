#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CrosshairContainerController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiCrosshairContainerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkF8[0x280 - 0xF8]; // F8
    TweakDBID defaultCrosshair; // 280
};
RED4EXT_ASSERT_SIZE(CrosshairContainerController, 0x288);
} // namespace game::ui
using gameuiCrosshairContainerController = game::ui::CrosshairContainerController;
} // namespace RED4ext

// clang-format on
