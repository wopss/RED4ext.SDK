#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ProjectedHUDGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiProjectedHUDGameController";
    static constexpr const char* ALIAS = "inkProjectedHUDGameController";

    uint8_t unkF8[0x148 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(ProjectedHUDGameController, 0x148);
} // namespace game::ui
using inkProjectedHUDGameController = game::ui::ProjectedHUDGameController;
} // namespace RED4ext
