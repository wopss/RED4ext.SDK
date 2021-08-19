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

    uint32_t width; // 1E0
    uint32_t height; // 1E4
    Vector2 slotSize; // 1E8
    uint8_t unk1F0[0x208 - 0x1F0]; // 1F0
    DynArray<ink::GridItem> items; // 208
    uint8_t unk218[0x228 - 0x218]; // 218
    DynArray<ink::GridItemTemplate> itemTemplates; // 228
    uint8_t unk238[0x270 - 0x238]; // 238
};
RED4EXT_ASSERT_SIZE(GridController, 0x270);
} // namespace ink
} // namespace RED4ext
