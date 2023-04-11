#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct AugmentedRealitySignGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiAugmentedRealitySignGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0x108 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(AugmentedRealitySignGameController, 0x108);
} // namespace game::ui
using gameuiAugmentedRealitySignGameController = game::ui::AugmentedRealitySignGameController;
} // namespace RED4ext

// clang-format on
