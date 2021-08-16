#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IWidgetSlotController.hpp>

namespace RED4ext
{
namespace ink { 
struct WidgetSlotController : ink::IWidgetSlotController
{
    static constexpr const char* NAME = "inkWidgetSlotController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB8[0xD0 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(WidgetSlotController, 0xD0);
} // namespace ink
} // namespace RED4ext
