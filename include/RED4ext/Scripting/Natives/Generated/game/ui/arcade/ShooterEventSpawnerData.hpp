#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterTriggerType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterEventSpawnerData
{
    static constexpr const char* NAME = "gameuiarcadeShooterEventSpawnerData";
    static constexpr const char* ALIAS = NAME;

    CName dataName; // 00
    ink::WidgetReference targetSpawner; // 08
    ink::WidgetReference tiedSpawner; // 20
    game::ui::arcade::ShooterTriggerType triggerCondition; // 38
    float delayDuration; // 3C
    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ShooterEventSpawnerData, 0x48);
} // namespace game::ui::arcade
using gameuiarcadeShooterEventSpawnerData = game::ui::arcade::ShooterEventSpawnerData;
} // namespace RED4ext

// clang-format on
