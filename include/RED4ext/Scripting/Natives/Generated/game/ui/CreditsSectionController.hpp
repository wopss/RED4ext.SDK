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
struct CreditsSectionController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiCreditsSectionController";
    static constexpr const char* ALIAS = NAME;

    ink::TextWidgetReference sectionName; // 78
};
RED4EXT_ASSERT_SIZE(CreditsSectionController, 0x90);
} // namespace game::ui
using gameuiCreditsSectionController = game::ui::CreditsSectionController;
} // namespace RED4ext

// clang-format on
