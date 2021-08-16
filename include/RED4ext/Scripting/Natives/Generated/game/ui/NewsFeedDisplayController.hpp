#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct NewsFeedDisplayController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiNewsFeedDisplayController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x90 - 0x68]; // 68
    ink::TextWidgetReference newsTitleWidget; // 90
    CName randomNewsLibraryWidget; // A8
    ink::CompoundWidgetReference randomNewsContainer; // B0
};
RED4EXT_ASSERT_SIZE(NewsFeedDisplayController, 0xC8);
} // namespace game::ui
} // namespace RED4ext
