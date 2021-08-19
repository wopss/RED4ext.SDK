#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct TutorialPopupGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiTutorialPopupGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0xD8 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(TutorialPopupGameController, 0xD8);
} // namespace game::ui
} // namespace RED4ext
