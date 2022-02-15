#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ListItemControllerCallback.hpp>

namespace RED4ext
{
namespace ink { 
struct ListItemController : ink::ButtonController
{
    static constexpr const char* NAME = "inkListItemController";
    static constexpr const char* ALIAS = "ListItemController";

    ink::ListItemControllerCallback AddedToList; // 1F8
    ink::ListItemControllerCallback ToggledOn; // 230
    ink::ListItemControllerCallback ToggledOff; // 268
    ink::ListItemControllerCallback Selected; // 2A0
    ink::ListItemControllerCallback Deselected; // 2D8
    uint8_t unk310[0x358 - 0x310]; // 310
};
RED4EXT_ASSERT_SIZE(ListItemController, 0x358);
} // namespace ink
using ListItemController = ink::ListItemController;
} // namespace RED4ext
