#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ui/IWidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct WidgetGameController : world::ui::IWidgetGameController
{
    static constexpr const char* NAME = "gameuiWidgetGameController";
    static constexpr const char* ALIAS = "inkGameController";

    uint8_t unkD0[0xE0 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(WidgetGameController, 0xE0);
} // namespace game::ui
using gameuiWidgetGameController = game::ui::WidgetGameController;
using inkGameController = game::ui::WidgetGameController;
} // namespace RED4ext

// clang-format on
