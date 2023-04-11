#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLayout.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink
{
struct IWidgetSlotController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkIWidgetSlotController";
    static constexpr const char* ALIAS = NAME;

    CName slotID; // 78
    ink::WidgetLayout layout; // 80
    uint8_t unkB0[0xC8 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(IWidgetSlotController, 0xC8);
} // namespace ink
using inkIWidgetSlotController = ink::IWidgetSlotController;
} // namespace RED4ext

// clang-format on
