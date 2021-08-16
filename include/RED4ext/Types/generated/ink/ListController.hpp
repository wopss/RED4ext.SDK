#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/ink/ListControllerCallback.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct ListController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkListController";
    static constexpr const char* ALIAS = "ListController";

    ink::ListControllerCallback ItemSelected; // 68
    ink::ListControllerCallback ItemActivated; // A0
    uint8_t unkD8[0x108 - 0xD8]; // D8
    CName itemLibraryID; // 108
    bool cycledNavigation; // 110
    bool beginToggled; // 111
    uint8_t unk112[0x118 - 0x112]; // 112
};
RED4EXT_ASSERT_SIZE(ListController, 0x118);
} // namespace ink
using ListController = ink::ListController;
} // namespace RED4ext
