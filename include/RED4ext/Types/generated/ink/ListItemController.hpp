#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/ButtonController.hpp>
#include <RED4ext/Types/generated/ink/ListItemControllerCallback.hpp>

namespace RED4ext
{
namespace ink { 
struct ListItemController : ink::ButtonController
{
    static constexpr const char* NAME = "inkListItemController";
    static constexpr const char* ALIAS = "ListItemController";

    ink::ListItemControllerCallback AddedToList; // 1E8
    ink::ListItemControllerCallback ToggledOn; // 220
    ink::ListItemControllerCallback ToggledOff; // 258
    ink::ListItemControllerCallback Selected; // 290
    ink::ListItemControllerCallback Deselected; // 2C8
    uint8_t unk300[0x348 - 0x300]; // 300
};
RED4EXT_ASSERT_SIZE(ListItemController, 0x348);
} // namespace ink
using ListItemController = ink::ListItemController;
} // namespace RED4ext
