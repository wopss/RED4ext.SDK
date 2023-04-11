#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CreditsPositionController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiCreditsPositionController";
    static constexpr const char* ALIAS = NAME;

    ink::TextWidgetReference titleText; // 78
    ink::TextWidgetReference namesText; // 90
};
RED4EXT_ASSERT_SIZE(CreditsPositionController, 0xA8);
} // namespace game::ui
using gameuiCreditsPositionController = game::ui::CreditsPositionController;
} // namespace RED4ext

// clang-format on
