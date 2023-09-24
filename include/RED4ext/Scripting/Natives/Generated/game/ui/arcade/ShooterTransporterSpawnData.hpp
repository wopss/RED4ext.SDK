#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterAIType.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterTransporterSpawnData
{
    static constexpr const char* NAME = "gameuiarcadeShooterTransporterSpawnData";
    static constexpr const char* ALIAS = NAME;

    game::ui::arcade::ShooterAIType aiType; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName parameter; // 08
    int32_t count; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(ShooterTransporterSpawnData, 0x18);
} // namespace game::ui::arcade
using gameuiarcadeShooterTransporterSpawnData = game::ui::arcade::ShooterTransporterSpawnData;
} // namespace RED4ext

// clang-format on
