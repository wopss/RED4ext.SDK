#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct TutorialBracketLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiTutorialBracketLogicController";
    static constexpr const char* ALIAS = "TutorialBracketLogicController";

    uint8_t unk78[0xC0 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(TutorialBracketLogicController, 0xC0);
} // namespace game::ui
using gameuiTutorialBracketLogicController = game::ui::TutorialBracketLogicController;
using TutorialBracketLogicController = game::ui::TutorialBracketLogicController;
} // namespace RED4ext

// clang-format on
