#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::ui { struct CharacterCustomizationUiPreset; }

namespace game::ui
{
struct CharacterCustomizationUiPresetInfo
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationUiPresetInfo";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    RaRef<game::ui::CharacterCustomizationUiPreset> resource; // 08
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationUiPresetInfo, 0x10);
} // namespace game::ui
using gameuiCharacterCustomizationUiPresetInfo = game::ui::CharacterCustomizationUiPresetInfo;
} // namespace RED4ext

// clang-format on
