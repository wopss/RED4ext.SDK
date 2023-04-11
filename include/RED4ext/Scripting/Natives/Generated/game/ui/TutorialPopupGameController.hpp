#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct TutorialPopupGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiTutorialPopupGameController";
    static constexpr const char* ALIAS = "TutorialPopupGameController";

    uint8_t unkE0[0xE8 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(TutorialPopupGameController, 0xE8);
} // namespace game::ui
using gameuiTutorialPopupGameController = game::ui::TutorialPopupGameController;
using TutorialPopupGameController = game::ui::TutorialPopupGameController;
} // namespace RED4ext

// clang-format on
