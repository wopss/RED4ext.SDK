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
struct VirtualCompoundBackgroundController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkVirtualCompoundBackgroundController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(VirtualCompoundBackgroundController, 0x78);
} // namespace ink
using inkVirtualCompoundBackgroundController = ink::VirtualCompoundBackgroundController;
} // namespace RED4ext

// clang-format on
