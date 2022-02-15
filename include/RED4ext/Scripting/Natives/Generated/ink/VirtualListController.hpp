#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VirtualCompoundController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryReference.hpp>

namespace RED4ext
{
namespace ink { 
struct VirtualListController : ink::VirtualCompoundController
{
    static constexpr const char* NAME = "inkVirtualListController";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::WidgetLibraryReference> itemTemplates; // 1F0
    uint8_t unk200[0x239 - 0x200]; // 200
    bool cycleNavigation; // 239
    uint8_t unk23A[0x260 - 0x23A]; // 23A
};
RED4EXT_ASSERT_SIZE(VirtualListController, 0x260);
} // namespace ink
} // namespace RED4ext
