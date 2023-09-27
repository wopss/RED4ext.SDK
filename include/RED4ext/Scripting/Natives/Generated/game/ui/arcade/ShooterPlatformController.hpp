#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterObjectController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterPlatformController : game::ui::arcade::ShooterObjectController
{
    static constexpr const char* NAME = "gameuiarcadeShooterPlatformController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x160 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(ShooterPlatformController, 0x160);
} // namespace game::ui::arcade
using gameuiarcadeShooterPlatformController = game::ui::arcade::ShooterPlatformController;
} // namespace RED4ext

// clang-format on
