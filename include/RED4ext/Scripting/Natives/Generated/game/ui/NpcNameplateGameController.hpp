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

    uint8_t unk138[0x168 - 0x138]; // 138
    ink::WidgetReference projection; // 168
};
RED4EXT_ASSERT_SIZE(NpcNameplateGameController, 0x180);
} // namespace game::ui
using NpcNameplateGameController = game::ui::NpcNameplateGameController;
} // namespace RED4ext
