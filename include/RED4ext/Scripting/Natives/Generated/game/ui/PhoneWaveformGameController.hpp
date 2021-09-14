#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PhoneWaveformGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiPhoneWaveformGameController";
    static constexpr const char* ALIAS = "PhoneWaveformGameController";

    uint8_t unkD0[0xE0 - 0xD0]; // D0
    int32_t measurementsCount; // E0
    float measurementsIntreval; // E4
    uint8_t unkE8[0xF0 - 0xE8]; // E8
};
RED4EXT_ASSERT_SIZE(PhoneWaveformGameController, 0xF0);
} // namespace game::ui
using PhoneWaveformGameController = game::ui::PhoneWaveformGameController;
} // namespace RED4ext
