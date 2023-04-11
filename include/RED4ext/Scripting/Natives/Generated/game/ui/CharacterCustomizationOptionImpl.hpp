#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationOption.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationOptionImpl : game::ui::CharacterCustomizationOption
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationOptionImpl";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CharacterCustomizationOptionImpl, 0x60);
} // namespace game::ui
using gameuiCharacterCustomizationOptionImpl = game::ui::CharacterCustomizationOptionImpl;
} // namespace RED4ext

// clang-format on
