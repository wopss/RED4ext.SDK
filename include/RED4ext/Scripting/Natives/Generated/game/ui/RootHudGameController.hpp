#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct RootHudGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiRootHudGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0x290 - 0xE0]; // E0
    DynArray<ink::CompoundWidgetReference> resolutionSensitiveRoots; // 290
    uint8_t unk2A0[0x2D8 - 0x2A0]; // 2A0
};
RED4EXT_ASSERT_SIZE(RootHudGameController, 0x2D8);
} // namespace game::ui
} // namespace RED4ext
