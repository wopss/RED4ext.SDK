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
    static constexpr const char* ALIAS = NAME;

    bool hideInMenu; // 68
    bool hideOnInput; // 69
    uint8_t unk6A[0x70 - 0x6A]; // 6A
};
RED4EXT_ASSERT_SIZE(TutorialOverlayLogicController, 0x70);
} // namespace game::ui
} // namespace RED4ext
