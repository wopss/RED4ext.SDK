#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SaveHandlingController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiSaveHandlingController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkF0[0x160 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(SaveHandlingController, 0x160);
} // namespace game::ui
using gameuiSaveHandlingController = game::ui::SaveHandlingController;
} // namespace RED4ext

// clang-format on
