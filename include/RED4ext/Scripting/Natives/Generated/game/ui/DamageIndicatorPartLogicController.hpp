#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseDirectionalIndicatorPartLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) DamageIndicatorPartLogicController : game::ui::BaseDirectionalIndicatorPartLogicController
{
    static constexpr const char* NAME = "gameuiDamageIndicatorPartLogicController";
    static constexpr const char* ALIAS = "DamageIndicatorPartLogicController";

    uint8_t unkD0[0xEC - 0xD0]; // D0
    float maxDistanceForSharedIndicators; // EC
    uint8_t unkF0[0x100 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(DamageIndicatorPartLogicController, 0x100);
} // namespace game::ui
using gameuiDamageIndicatorPartLogicController = game::ui::DamageIndicatorPartLogicController;
using DamageIndicatorPartLogicController = game::ui::DamageIndicatorPartLogicController;
} // namespace RED4ext

// clang-format on
