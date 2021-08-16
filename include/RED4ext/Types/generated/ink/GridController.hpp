#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/Vector2.hpp>
#include <RED4ext/Types/generated/ink/GridItem.hpp>
#include <RED4ext/Types/generated/ink/GridItemTemplate.hpp>
#include <RED4ext/Types/generated/ink/VirtualCompoundController.hpp>

namespace RED4ext
{
namespace ink { 
struct GridController : ink::VirtualCompoundController
{
    static constexpr const char* NAME = "inkGridController";
    static constexpr const char* ALIAS = NAME;

    uint32_t width; // 180
    uint32_t height; // 184
    Vector2 slotSize; // 188
    uint8_t unk190[0x1A8 - 0x190]; // 190
    DynArray<ink::GridItem> items; // 1A8
    uint8_t unk1B8[0x1C8 - 0x1B8]; // 1B8
    DynArray<ink::GridItemTemplate> itemTemplates; // 1C8
    uint8_t unk1D8[0x1E8 - 0x1D8]; // 1D8
};
RED4EXT_ASSERT_SIZE(GridController, 0x1E8);
} // namespace ink
} // namespace RED4ext
