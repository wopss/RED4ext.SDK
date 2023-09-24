#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ProjectedHUDGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct NpcNameplateGameController : game::ui::ProjectedHUDGameController
{
    static constexpr const char* NAME = "gameuiNpcNameplateGameController";
    static constexpr const char* ALIAS = "NpcNameplateGameController";

    uint8_t unk160[0x190 - 0x160]; // 160
    ink::WidgetReference projection; // 190
};
RED4EXT_ASSERT_SIZE(NpcNameplateGameController, 0x1A8);
} // namespace game::ui
using gameuiNpcNameplateGameController = game::ui::NpcNameplateGameController;
using NpcNameplateGameController = game::ui::NpcNameplateGameController;
} // namespace RED4ext

// clang-format on
