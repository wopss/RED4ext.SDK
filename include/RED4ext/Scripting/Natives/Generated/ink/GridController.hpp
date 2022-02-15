#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/GridItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/GridItemTemplate.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VirtualCompoundController.hpp>

namespace RED4ext
{
namespace ink { 
struct GridController : ink::VirtualCompoundController
{
    static constexpr const char* NAME = "inkGridController";
    static constexpr const char* ALIAS = NAME;

    uint32_t width; // 1F0
    uint32_t height; // 1F4
    Vector2 slotSize; // 1F8
    uint8_t unk200[0x218 - 0x200]; // 200
    DynArray<ink::GridItem> items; // 218
    uint8_t unk228[0x238 - 0x228]; // 228
    DynArray<ink::GridItemTemplate> itemTemplates; // 238
    uint8_t unk248[0x280 - 0x248]; // 248
};
RED4EXT_ASSERT_SIZE(GridController, 0x280);
} // namespace ink
} // namespace RED4ext
