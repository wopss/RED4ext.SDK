#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ArcadeHealthController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeArcadeHealthController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(ArcadeHealthController, 0x80);
} // namespace game::ui::arcade
using gameuiarcadeArcadeHealthController = game::ui::arcade::ArcadeHealthController;
} // namespace RED4ext

// clang-format on
