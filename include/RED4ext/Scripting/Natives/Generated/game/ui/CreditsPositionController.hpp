#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CreditsPositionController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiCreditsPositionController";
    static constexpr const char* ALIAS = NAME;

    ink::TextWidgetReference titleText; // 68
    ink::TextWidgetReference namesText; // 80
};
RED4EXT_ASSERT_SIZE(CreditsPositionController, 0x98);
} // namespace game::ui
} // namespace RED4ext
