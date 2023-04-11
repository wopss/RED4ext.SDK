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
struct BaseGOGProfileController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiBaseGOGProfileController";
    static constexpr const char* ALIAS = "BaseGOGProfileController";

    uint8_t unkE0[0xF8 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(BaseGOGProfileController, 0xF8);
} // namespace game::ui
using gameuiBaseGOGProfileController = game::ui::BaseGOGProfileController;
using BaseGOGProfileController = game::ui::BaseGOGProfileController;
} // namespace RED4ext

// clang-format on
