#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct GlobaltvWidgetGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiGlobaltvWidgetGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0xF8 - 0xD0]; // D0
    ink::CompoundWidgetReference overlayContainer; // F8
};
RED4EXT_ASSERT_SIZE(GlobaltvWidgetGameController, 0x110);
} // namespace game::ui
} // namespace RED4ext
