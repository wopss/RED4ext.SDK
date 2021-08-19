#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CrosshairContainerController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiCrosshairContainerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE8[0x1F0 - 0xE8]; // E8
    TweakDBID defaultCrosshair; // 1F0
};
RED4EXT_ASSERT_SIZE(CrosshairContainerController, 0x1F8);
} // namespace game::ui
} // namespace RED4ext
