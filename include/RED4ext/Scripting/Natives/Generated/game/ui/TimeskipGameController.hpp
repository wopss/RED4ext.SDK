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
struct TimeskipGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiTimeskipGameController";
    static constexpr const char* ALIAS = "TimeskipGameController";

};
RED4EXT_ASSERT_SIZE(TimeskipGameController, 0xE0);
} // namespace game::ui
using gameuiTimeskipGameController = game::ui::TimeskipGameController;
using TimeskipGameController = game::ui::TimeskipGameController;
} // namespace RED4ext

// clang-format on
