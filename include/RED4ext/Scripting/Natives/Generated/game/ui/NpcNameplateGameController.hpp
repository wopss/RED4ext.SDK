#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ProjectedHUDGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct NpcNameplateGameController : game::ui::ProjectedHUDGameController
{
    static constexpr const char* NAME = "gameuiNpcNameplateGameController";
    static constexpr const char* ALIAS = "NpcNameplateGameController";

    uint8_t unk148[0x178 - 0x148]; // 148
    ink::WidgetReference projection; // 178
};
RED4EXT_ASSERT_SIZE(NpcNameplateGameController, 0x190);
} // namespace game::ui
using NpcNameplateGameController = game::ui::NpcNameplateGameController;
} // namespace RED4ext
