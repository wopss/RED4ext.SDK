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

    uint8_t unkD0[0x280 - 0xD0]; // D0
    DynArray<ink::CompoundWidgetReference> resolutionSensitiveRoots; // 280
    uint8_t unk290[0x2C8 - 0x290]; // 290
};
RED4EXT_ASSERT_SIZE(RootHudGameController, 0x2C8);
} // namespace game::ui
} // namespace RED4ext
