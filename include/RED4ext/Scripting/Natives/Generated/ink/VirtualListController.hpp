#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VirtualCompoundController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryReference.hpp>

namespace RED4ext
{
namespace ink
{
struct VirtualListController : ink::VirtualCompoundController
{
    static constexpr const char* NAME = "inkVirtualListController";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::WidgetLibraryReference> itemTemplates; // 208
    uint8_t unk218[0x251 - 0x218]; // 218
    bool cycleNavigation; // 251
    uint8_t unk252[0x278 - 0x252]; // 252
};
RED4EXT_ASSERT_SIZE(VirtualListController, 0x278);
} // namespace ink
using inkVirtualListController = ink::VirtualListController;
} // namespace RED4ext

// clang-format on
