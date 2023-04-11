#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink
{
struct MenuAccountLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkMenuAccountLogicController";
    static constexpr const char* ALIAS = "MenuAccountLogicController";

    uint8_t unk78[0x98 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(MenuAccountLogicController, 0x98);
} // namespace ink
using inkMenuAccountLogicController = ink::MenuAccountLogicController;
using MenuAccountLogicController = ink::MenuAccountLogicController;
} // namespace RED4ext

// clang-format on
