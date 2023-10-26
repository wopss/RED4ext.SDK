#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterBossController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct __declspec(align(0x10)) ShooterBossBasilisk : game::ui::arcade::ShooterBossController
{
    static constexpr const char* NAME = "gameuiarcadeShooterBossBasilisk";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk280[0x380 - 0x280]; // 280
};
RED4EXT_ASSERT_SIZE(ShooterBossBasilisk, 0x380);
} // namespace game::ui::arcade
using gameuiarcadeShooterBossBasilisk = game::ui::arcade::ShooterBossBasilisk;
} // namespace RED4ext

// clang-format on
