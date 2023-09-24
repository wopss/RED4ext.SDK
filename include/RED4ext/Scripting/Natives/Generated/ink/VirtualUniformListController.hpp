#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VirtualCompoundController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryReference.hpp>

namespace RED4ext
{
namespace ink
{
struct VirtualUniformListController : ink::VirtualCompoundController
{
    static constexpr const char* NAME = "inkVirtualUniformListController";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetLibraryReference itemTemplate; // 208
    uint8_t unk218[0x230 - 0x218]; // 218
};
RED4EXT_ASSERT_SIZE(VirtualUniformListController, 0x230);
} // namespace ink
using inkVirtualUniformListController = ink::VirtualUniformListController;
} // namespace RED4ext

// clang-format on
