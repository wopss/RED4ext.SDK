#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterEventSpawnerData.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterEventData
{
    static constexpr const char* NAME = "gameuiarcadeShooterEventData";
    static constexpr const char* ALIAS = NAME;

    Vector2 triggerPosition; // 00
    Vector2 finalPosition; // 08
    uint8_t unk10[0x18 - 0x10]; // 10
    DynArray<game::ui::arcade::ShooterEventSpawnerData> spawnerDataList; // 18
};
RED4EXT_ASSERT_SIZE(ShooterEventData, 0x28);
} // namespace game::ui::arcade
using gameuiarcadeShooterEventData = game::ui::arcade::ShooterEventData;
} // namespace RED4ext

// clang-format on
