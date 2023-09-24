#pragma once

// clang-format off

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
namespace ink
{
struct GridController : ink::VirtualCompoundController
{
    static constexpr const char* NAME = "inkGridController";
    static constexpr const char* ALIAS = NAME;

    uint32_t width; // 208
    uint32_t height; // 20C
    Vector2 slotSize; // 210
    uint8_t unk218[0x230 - 0x218]; // 218
    DynArray<ink::GridItem> items; // 230
    uint8_t unk240[0x250 - 0x240]; // 240
    DynArray<ink::GridItemTemplate> itemTemplates; // 250
    uint8_t unk260[0x298 - 0x260]; // 260
};
RED4EXT_ASSERT_SIZE(GridController, 0x298);
} // namespace ink
using inkGridController = ink::GridController;
} // namespace RED4ext

// clang-format on
