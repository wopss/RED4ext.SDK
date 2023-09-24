#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationHeadPartsController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationBeardController : game::ui::CharacterCustomizationHeadPartsController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationBeardController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CharacterCustomizationBeardController, 0x120);
} // namespace game::ui
using gameuiCharacterCustomizationBeardController = game::ui::CharacterCustomizationBeardController;
} // namespace RED4ext

// clang-format on
