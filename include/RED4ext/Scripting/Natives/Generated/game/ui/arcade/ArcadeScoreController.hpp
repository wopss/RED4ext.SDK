#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ArcadeScoreController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeArcadeScoreController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x90 - 0x78]; // 78
    ink::WidgetReference scoreText; // 90
};
RED4EXT_ASSERT_SIZE(ArcadeScoreController, 0xA8);
} // namespace game::ui::arcade
using gameuiarcadeArcadeScoreController = game::ui::arcade::ArcadeScoreController;
} // namespace RED4ext

// clang-format on
