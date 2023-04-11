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
struct CharacterCustomizationUiPresetValue
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationUiPresetValue";
    static constexpr const char* ALIAS = NAME;

    CName optionName; // 00
    bool isActive; // 08
    uint8_t unk09[0xC - 0x9]; // 9
    uint32_t value; // 0C
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationUiPresetValue, 0x10);
} // namespace game::ui
using gameuiCharacterCustomizationUiPresetValue = game::ui::CharacterCustomizationUiPresetValue;
} // namespace RED4ext

// clang-format on
