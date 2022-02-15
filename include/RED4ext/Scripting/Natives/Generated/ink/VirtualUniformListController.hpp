#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VirtualCompoundController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryReference.hpp>

namespace RED4ext
{
namespace ink { 
struct VirtualUniformListController : ink::VirtualCompoundController
{
    static constexpr const char* NAME = "inkVirtualUniformListController";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetLibraryReference itemTemplate; // 1F0
    uint8_t unk200[0x218 - 0x200]; // 200
};
RED4EXT_ASSERT_SIZE(VirtualUniformListController, 0x218);
} // namespace ink
} // namespace RED4ext
