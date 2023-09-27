#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterEventData.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterEventManager : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeShooterEventManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x98 - 0x78]; // 78
    DynArray<game::ui::arcade::ShooterEventData> eventList; // 98
    uint8_t unkA8[0xB8 - 0xA8]; // A8
    Vector2 nextLevelThreshold; // B8
    uint8_t unkC0[0xD0 - 0xC0]; // C0
    float levelEndCheckDelay; // D0
    uint8_t unkD4[0xD8 - 0xD4]; // D4
    float eventFinishDelay; // D8
    uint8_t unkDC[0xE0 - 0xDC]; // DC
    int32_t eventId; // E0
    uint8_t unkE4[0xF0 - 0xE4]; // E4
};
RED4EXT_ASSERT_SIZE(ShooterEventManager, 0xF0);
} // namespace game::ui::arcade
using gameuiarcadeShooterEventManager = game::ui::arcade::ShooterEventManager;
} // namespace RED4ext

// clang-format on
