#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct TutorialPopupGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiTutorialPopupGameController";
    static constexpr const char* ALIAS = "TutorialPopupGameController";

};
RED4EXT_ASSERT_SIZE(TutorialPopupGameController, 0xD0);
} // namespace game::ui
using TutorialPopupGameController = game::ui::TutorialPopupGameController;
} // namespace RED4ext
