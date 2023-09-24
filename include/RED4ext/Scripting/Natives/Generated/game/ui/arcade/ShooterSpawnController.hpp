#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterAIType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterSpawnerCondition.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterSpawnController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeShooterSpawnController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xB8 - 0x78]; // 78
    game::ui::arcade::ShooterAIType enemyType; // B8
    game::ui::arcade::ShooterSpawnerCondition spawnCondition; // BC
    CString enemyParameter; // C0
    uint32_t spawnCount; // E0
    float skipOffset; // E4
    uint8_t unkE8[0xEC - 0xE8]; // E8
    float spawnDelay; // EC
    float offScreenSpawnExpiryTime; // F0
    uint8_t unkF4[0xF9 - 0xF4]; // F4
    bool awaitPreviousUnitDead; // F9
    uint8_t unkFA[0xFB - 0xFA]; // FA
    bool skippable; // FB
    uint8_t unkFC[0x100 - 0xFC]; // FC
};
RED4EXT_ASSERT_SIZE(ShooterSpawnController, 0x100);
} // namespace game::ui::arcade
using gameuiarcadeShooterSpawnController = game::ui::arcade::ShooterSpawnController;
} // namespace RED4ext

// clang-format on
