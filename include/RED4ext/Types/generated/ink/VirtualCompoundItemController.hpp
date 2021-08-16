#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/ButtonController.hpp>
#include <RED4ext/Types/generated/ink/VirtualCompoundItemControllerCallback.hpp>
#include <RED4ext/Types/generated/ink/VirtualCompoundItemSelectControllerCallback.hpp>

namespace RED4ext
{
namespace ink { 
struct VirtualCompoundItemController : ink::ButtonController
{
    static constexpr const char* NAME = "inkVirtualCompoundItemController";
    static constexpr const char* ALIAS = NAME;

    ink::VirtualCompoundItemControllerCallback Added; // 1E8
    ink::VirtualCompoundItemControllerCallback ToggledOn; // 220
    ink::VirtualCompoundItemControllerCallback ToggledOff; // 258
    ink::VirtualCompoundItemSelectControllerCallback Selected; // 290
    ink::VirtualCompoundItemControllerCallback Deselected; // 2C8
    uint8_t unk300[0x360 - 0x300]; // 300
};
RED4EXT_ASSERT_SIZE(VirtualCompoundItemController, 0x360);
} // namespace ink
} // namespace RED4ext
