#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IWidgetSlotController.hpp>

namespace RED4ext
{
namespace ink
{
struct WidgetSlotController : ink::IWidgetSlotController
{
    static constexpr const char* NAME = "inkWidgetSlotController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkC8[0xE0 - 0xC8]; // C8
};
RED4EXT_ASSERT_SIZE(WidgetSlotController, 0xE0);
} // namespace ink
using inkWidgetSlotController = ink::WidgetSlotController;
} // namespace RED4ext

// clang-format on
