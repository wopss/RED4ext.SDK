#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MappinBaseController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiMappinBaseController";
    static constexpr const char* ALIAS = "BaseMappinBaseController";

    uint8_t unk78[0x190 - 0x78]; // 78
    ink::ImageWidgetReference iconWidget; // 190
    ink::WidgetReference playerTrackedWidget; // 1A8
    ink::WidgetReference scaleWidget; // 1C0
};
RED4EXT_ASSERT_SIZE(MappinBaseController, 0x1D8);
} // namespace game::ui
using BaseMappinBaseController = game::ui::MappinBaseController;
} // namespace RED4ext
