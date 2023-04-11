#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/GenericSystemNotificationLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct TrialPeriodTimerController : ink::GenericSystemNotificationLogicController
{
    static constexpr const char* NAME = "gameuiTrialPeriodTimerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1A0[0x1B0 - 0x1A0]; // 1A0
    ink::TextWidgetReference timerText; // 1B0
    uint8_t unk1C8[0x1D8 - 0x1C8]; // 1C8
};
RED4EXT_ASSERT_SIZE(TrialPeriodTimerController, 0x1D8);
} // namespace game::ui
using gameuiTrialPeriodTimerController = game::ui::TrialPeriodTimerController;
} // namespace RED4ext

// clang-format on
