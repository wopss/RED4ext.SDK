#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ListItemControllerCallback.hpp>

namespace RED4ext
{
namespace ink
{
struct ListItemController : ink::ButtonController
{
    static constexpr const char* NAME = "inkListItemController";
    static constexpr const char* ALIAS = "ListItemController";

    ink::ListItemControllerCallback AddedToList; // 240
    ink::ListItemControllerCallback ToggledOn; // 278
    ink::ListItemControllerCallback ToggledOff; // 2B0
    ink::ListItemControllerCallback Selected; // 2E8
    ink::ListItemControllerCallback Deselected; // 320
    uint8_t unk358[0x3A0 - 0x358]; // 358
};
RED4EXT_ASSERT_SIZE(ListItemController, 0x3A0);
} // namespace ink
using inkListItemController = ink::ListItemController;
using ListItemController = ink::ListItemController;
} // namespace RED4ext

// clang-format on
