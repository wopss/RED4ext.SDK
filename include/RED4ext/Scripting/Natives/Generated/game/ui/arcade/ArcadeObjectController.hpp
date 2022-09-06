#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade { 
struct ArcadeObjectController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeArcadeObjectController";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetReference image; // 78
    uint8_t unk90[0xF0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(ArcadeObjectController, 0xF0);
} // namespace game::ui::arcade
} // namespace RED4ext
