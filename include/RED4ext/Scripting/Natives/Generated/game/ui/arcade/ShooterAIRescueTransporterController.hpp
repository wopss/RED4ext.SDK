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
struct __declspec(align(0x10)) ShooterAIRescueTransporterController : game::ui::arcade::ShooterAIController
{
    static constexpr const char* NAME = "gameuiarcadeShooterAIRescueTransporterController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ShooterAIRescueTransporterController, 0x280);
} // namespace game::ui::arcade
using gameuiarcadeShooterAIRescueTransporterController = game::ui::arcade::ShooterAIRescueTransporterController;
} // namespace RED4ext

// clang-format on
