#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/VirtualCompoundController.hpp>
#include <RED4ext/Types/generated/ink/WidgetLibraryReference.hpp>

namespace RED4ext
{
namespace ink { 
struct VirtualUniformListController : ink::VirtualCompoundController
{
    static constexpr const char* NAME = "inkVirtualUniformListController";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetLibraryReference itemTemplate; // 180
    uint8_t unk190[0x1A8 - 0x190]; // 190
};
RED4EXT_ASSERT_SIZE(VirtualUniformListController, 0x1A8);
} // namespace ink
} // namespace RED4ext
