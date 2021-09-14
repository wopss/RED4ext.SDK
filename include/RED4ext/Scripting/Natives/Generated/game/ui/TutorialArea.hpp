#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct TutorialArea : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiTutorialArea";
    static constexpr const char* ALIAS = "TutorialArea";

    uint8_t unk68[0x70 - 0x68]; // 68
    CName bracketID; // 70
};
RED4EXT_ASSERT_SIZE(TutorialArea, 0x78);
} // namespace game::ui
using TutorialArea = game::ui::TutorialArea;
} // namespace RED4ext
