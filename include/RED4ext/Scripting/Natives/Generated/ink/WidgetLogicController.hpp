#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IWidgetLogicController.hpp>

namespace RED4ext
{
namespace ink
{
struct WidgetLogicController : ink::IWidgetLogicController
{
    static constexpr const char* NAME = "inkWidgetLogicController";
    static constexpr const char* ALIAS = "inkLogicController";

};
RED4EXT_ASSERT_SIZE(WidgetLogicController, 0x78);
} // namespace ink
using inkWidgetLogicController = ink::WidgetLogicController;
using inkLogicController = ink::WidgetLogicController;
} // namespace RED4ext

// clang-format on
