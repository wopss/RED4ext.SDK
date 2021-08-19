#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HoldIndicatorProgressCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EmptyCallback.hpp>

namespace RED4ext
{
namespace game::ui { 
struct HoldIndicatorGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiHoldIndicatorGameController";
    static constexpr const char* ALIAS = NAME;

    game::ui::HoldIndicatorProgressCallback HoldProgress; // D0
    ink::EmptyCallback HoldStart; // 108
    ink::EmptyCallback HoldFinish; // 140
    ink::EmptyCallback HoldStop; // 178
    uint8_t unk1B0[0x1D8 - 0x1B0]; // 1B0
};
RED4EXT_ASSERT_SIZE(HoldIndicatorGameController, 0x1D8);
} // namespace game::ui
} // namespace RED4ext
