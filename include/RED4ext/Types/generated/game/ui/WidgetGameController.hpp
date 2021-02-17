#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/ui/IWidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct WidgetGameController : world::ui::IWidgetGameController
{
    static constexpr const char* NAME = "gameuiWidgetGameController";
    static constexpr const char* ALIAS = "inkGameController";

    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(WidgetGameController, 0xD0);
} // namespace game::ui
using inkGameController = game::ui::WidgetGameController;
} // namespace RED4ext
