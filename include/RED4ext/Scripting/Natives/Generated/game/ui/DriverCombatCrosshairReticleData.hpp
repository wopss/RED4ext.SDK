#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/DriverCombatCrosshairReticleDataState.hpp>

namespace RED4ext
{
namespace game::ui
{
struct DriverCombatCrosshairReticleData
{
    static constexpr const char* NAME = "gameuiDriverCombatCrosshairReticleData";
    static constexpr const char* ALIAS = NAME;

    game::ui::DriverCombatCrosshairReticleDataState state; // 00
    float opacity; // 04
};
RED4EXT_ASSERT_SIZE(DriverCombatCrosshairReticleData, 0x8);
} // namespace game::ui
using gameuiDriverCombatCrosshairReticleData = game::ui::DriverCombatCrosshairReticleData;
} // namespace RED4ext

// clang-format on
