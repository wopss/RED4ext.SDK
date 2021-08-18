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

    uint8_t unkD0[0x240 - 0xD0]; // D0
    DynArray<ink::CompoundWidgetReference> resolutionSensitiveRoots; // 240
    uint8_t unk250[0x268 - 0x250]; // 250
};
RED4EXT_ASSERT_SIZE(RootHudGameController, 0x268);
} // namespace game::ui
} // namespace RED4ext
