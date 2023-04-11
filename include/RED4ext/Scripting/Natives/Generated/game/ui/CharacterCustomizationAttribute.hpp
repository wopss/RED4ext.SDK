#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationAttribute
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationAttribute";
    static constexpr const char* ALIAS = "CharacterCustomizationAttribute";

    game::data::StatType type; // 00
    uint32_t value; // 04
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationAttribute, 0x8);
} // namespace game::ui
using gameuiCharacterCustomizationAttribute = game::ui::CharacterCustomizationAttribute;
using CharacterCustomizationAttribute = game::ui::CharacterCustomizationAttribute;
} // namespace RED4ext

// clang-format on
