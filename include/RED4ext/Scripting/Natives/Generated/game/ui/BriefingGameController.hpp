#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct BriefingGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiBriefingGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0x1E8 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(BriefingGameController, 0x1E8);
} // namespace game::ui
} // namespace RED4ext
