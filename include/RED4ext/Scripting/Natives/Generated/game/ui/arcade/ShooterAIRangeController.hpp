#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterAIController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterAIRangeController : game::ui::arcade::ShooterAIController
{
    static constexpr const char* NAME = "gameuiarcadeShooterAIRangeController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk280[0x2E0 - 0x280]; // 280
};
RED4EXT_ASSERT_SIZE(ShooterAIRangeController, 0x2E0);
} // namespace game::ui::arcade
using gameuiarcadeShooterAIRangeController = game::ui::arcade::ShooterAIRangeController;
} // namespace RED4ext

// clang-format on
