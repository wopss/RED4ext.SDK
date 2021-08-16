#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/ink/WidgetLayout.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct IWidgetSlotController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkIWidgetSlotController";
    static constexpr const char* ALIAS = NAME;

    CName slotID; // 68
    ink::WidgetLayout layout; // 70
    uint8_t unkA0[0xB8 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(IWidgetSlotController, 0xB8);
} // namespace ink
} // namespace RED4ext
