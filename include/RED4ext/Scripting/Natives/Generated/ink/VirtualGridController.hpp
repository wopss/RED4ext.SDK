#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VirtualListController.hpp>

namespace RED4ext
{
namespace ink
{
struct VirtualGridController : ink::VirtualListController
{
    static constexpr const char* NAME = "inkVirtualGridController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(VirtualGridController, 0x278);
} // namespace ink
using inkVirtualGridController = ink::VirtualGridController;
} // namespace RED4ext

// clang-format on
