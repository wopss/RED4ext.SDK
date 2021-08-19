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

    DynArray<ink::WidgetLibraryReference> itemTemplates; // 1E0
    uint8_t unk1F0[0x229 - 0x1F0]; // 1F0
    bool cycleNavigation; // 229
    uint8_t unk22A[0x250 - 0x22A]; // 22A
};
RED4EXT_ASSERT_SIZE(VirtualListController, 0x250);
} // namespace ink
} // namespace RED4ext
