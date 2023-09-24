#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VirtualCompoundItemControllerCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VirtualCompoundItemSelectControllerCallback.hpp>

namespace RED4ext
{
namespace ink
{
struct VirtualCompoundItemController : ink::ButtonController
{
    static constexpr const char* NAME = "inkVirtualCompoundItemController";
    static constexpr const char* ALIAS = NAME;

    ink::VirtualCompoundItemControllerCallback Added; // 240
    ink::VirtualCompoundItemControllerCallback ToggledOn; // 278
    ink::VirtualCompoundItemControllerCallback ToggledOff; // 2B0
    ink::VirtualCompoundItemSelectControllerCallback Selected; // 2E8
    ink::VirtualCompoundItemControllerCallback Deselected; // 320
    uint8_t unk358[0x3B8 - 0x358]; // 358
};
RED4EXT_ASSERT_SIZE(VirtualCompoundItemController, 0x3B8);
} // namespace ink
using inkVirtualCompoundItemController = ink::VirtualCompoundItemController;
} // namespace RED4ext

// clang-format on
