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
struct BaseCharacterCreationController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiBaseCharacterCreationController";
    static constexpr const char* ALIAS = "BaseCharacterCreationController";

};
RED4EXT_ASSERT_SIZE(BaseCharacterCreationController, 0xF0);
} // namespace game::ui
using gameuiBaseCharacterCreationController = game::ui::BaseCharacterCreationController;
using BaseCharacterCreationController = game::ui::BaseCharacterCreationController;
} // namespace RED4ext

// clang-format on
