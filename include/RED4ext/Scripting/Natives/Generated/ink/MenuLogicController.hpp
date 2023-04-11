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
struct MenuLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkMenuLogicController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MenuLogicController, 0x78);
} // namespace ink
using inkMenuLogicController = ink::MenuLogicController;
} // namespace RED4ext

// clang-format on
