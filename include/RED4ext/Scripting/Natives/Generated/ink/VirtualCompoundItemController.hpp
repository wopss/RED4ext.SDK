#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VirtualCompoundItemControllerCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VirtualCompoundItemSelectControllerCallback.hpp>

namespace RED4ext
{
namespace ink { 
struct VirtualCompoundItemController : ink::ButtonController
{
    static constexpr const char* NAME = "inkVirtualCompoundItemController";
    static constexpr const char* ALIAS = NAME;

    ink::VirtualCompoundItemControllerCallback Added; // 1F8
    ink::VirtualCompoundItemControllerCallback ToggledOn; // 230
    ink::VirtualCompoundItemControllerCallback ToggledOff; // 268
    ink::VirtualCompoundItemSelectControllerCallback Selected; // 2A0
    ink::VirtualCompoundItemControllerCallback Deselected; // 2D8
    uint8_t unk310[0x370 - 0x310]; // 310
};
RED4EXT_ASSERT_SIZE(VirtualCompoundItemController, 0x370);
} // namespace ink
} // namespace RED4ext
