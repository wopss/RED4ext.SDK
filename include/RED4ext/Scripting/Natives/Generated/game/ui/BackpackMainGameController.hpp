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
struct BackpackMainGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiBackpackMainGameController";
    static constexpr const char* ALIAS = "BackpackMainGameController";

};
RED4EXT_ASSERT_SIZE(BackpackMainGameController, 0xF0);
} // namespace game::ui
using gameuiBackpackMainGameController = game::ui::BackpackMainGameController;
using BackpackMainGameController = game::ui::BackpackMainGameController;
} // namespace RED4ext

// clang-format on
