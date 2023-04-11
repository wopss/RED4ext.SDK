#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationOptionVersionPrereq
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationOptionVersionPrereq";
    static constexpr const char* ALIAS = NAME;

    CName optionName; // 00
    CName definitionName; // 08
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationOptionVersionPrereq, 0x10);
} // namespace game::ui
using gameuiCharacterCustomizationOptionVersionPrereq = game::ui::CharacterCustomizationOptionVersionPrereq;
} // namespace RED4ext

// clang-format on
