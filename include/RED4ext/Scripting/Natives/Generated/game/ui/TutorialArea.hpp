#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct TutorialArea : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiTutorialArea";
    static constexpr const char* ALIAS = "TutorialArea";

    uint8_t unk78[0x80 - 0x78]; // 78
    CName bracketID; // 80
};
RED4EXT_ASSERT_SIZE(TutorialArea, 0x88);
} // namespace game::ui
using gameuiTutorialArea = game::ui::TutorialArea;
using TutorialArea = game::ui::TutorialArea;
} // namespace RED4ext

// clang-format on
