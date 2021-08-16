#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct MenuAccountLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkMenuAccountLogicController";
    static constexpr const char* ALIAS = "MenuAccountLogicController";

    uint8_t unk68[0x88 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(MenuAccountLogicController, 0x88);
} // namespace ink
using MenuAccountLogicController = ink::MenuAccountLogicController;
} // namespace RED4ext
