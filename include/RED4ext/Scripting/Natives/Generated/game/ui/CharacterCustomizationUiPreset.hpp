#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationUiPresetValue.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationUiPreset : CResource
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationUiPreset";
    static constexpr const char* ALIAS = NAME;

    bool isMaleVO; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
    DynArray<game::ui::CharacterCustomizationUiPresetValue> values; // 48
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationUiPreset, 0x58);
} // namespace game::ui
using gameuiCharacterCustomizationUiPreset = game::ui::CharacterCustomizationUiPreset;
} // namespace RED4ext

// clang-format on
