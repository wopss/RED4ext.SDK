#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeHealthController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterHealthController : game::ui::arcade::ArcadeHealthController
{
    static constexpr const char* NAME = "gameuiarcadeShooterHealthController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk80[0xA0 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(ShooterHealthController, 0xA0);
} // namespace game::ui::arcade
using gameuiarcadeShooterHealthController = game::ui::arcade::ShooterHealthController;
} // namespace RED4ext

// clang-format on
