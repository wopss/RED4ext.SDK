#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct NewsFeedDisplayController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiNewsFeedDisplayController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xA0 - 0x78]; // 78
    ink::TextWidgetReference newsTitleWidget; // A0
    CName randomNewsLibraryWidget; // B8
    ink::CompoundWidgetReference randomNewsContainer; // C0
};
RED4EXT_ASSERT_SIZE(NewsFeedDisplayController, 0xD8);
} // namespace game::ui
using gameuiNewsFeedDisplayController = game::ui::NewsFeedDisplayController;
} // namespace RED4ext

// clang-format on
