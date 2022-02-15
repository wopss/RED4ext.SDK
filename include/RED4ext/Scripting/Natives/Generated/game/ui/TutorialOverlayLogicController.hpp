#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct TutorialOverlayLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiTutorialOverlayLogicController";
    static constexpr const char* ALIAS = "TutorialOverlayLogicController";

    bool hideInMenu; // 78
    bool hideOnInput; // 79
    uint8_t unk7A[0x80 - 0x7A]; // 7A
};
RED4EXT_ASSERT_SIZE(TutorialOverlayLogicController, 0x80);
} // namespace game::ui
using TutorialOverlayLogicController = game::ui::TutorialOverlayLogicController;
} // namespace RED4ext
