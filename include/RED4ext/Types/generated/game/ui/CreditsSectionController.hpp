#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CreditsSectionController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiCreditsSectionController";
    static constexpr const char* ALIAS = NAME;

    ink::TextWidgetReference sectionName; // 68
};
RED4EXT_ASSERT_SIZE(CreditsSectionController, 0x80);
} // namespace game::ui
} // namespace RED4ext
