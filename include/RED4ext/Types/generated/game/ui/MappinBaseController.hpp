#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MappinBaseController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiMappinBaseController";
    static constexpr const char* ALIAS = "BaseMappinBaseController";

    uint8_t unk68[0x180 - 0x68]; // 68
    ink::ImageWidgetReference iconWidget; // 180
    ink::WidgetReference playerTrackedWidget; // 198
    ink::WidgetReference scaleWidget; // 1B0
};
RED4EXT_ASSERT_SIZE(MappinBaseController, 0x1C8);
} // namespace game::ui
using BaseMappinBaseController = game::ui::MappinBaseController;
} // namespace RED4ext
