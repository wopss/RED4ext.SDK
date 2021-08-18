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

    DynArray<ink::WidgetLibraryReference> itemTemplates; // 180
    uint8_t unk190[0x1C9 - 0x190]; // 190
    bool cycleNavigation; // 1C9
    uint8_t unk1CA[0x1D0 - 0x1CA]; // 1CA
};
RED4EXT_ASSERT_SIZE(VirtualListController, 0x1D0);
} // namespace ink
} // namespace RED4ext
