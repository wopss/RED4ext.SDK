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
struct CharacterCustomizationHairstyleController : game::ui::CharacterCustomizationHeadPartsController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationHairstyleController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CharacterCustomizationHairstyleController, 0x120);
} // namespace game::ui
using gameuiCharacterCustomizationHairstyleController = game::ui::CharacterCustomizationHairstyleController;
} // namespace RED4ext

// clang-format on
