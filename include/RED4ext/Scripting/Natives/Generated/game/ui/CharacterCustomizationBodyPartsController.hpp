#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ICharacterCustomizationBodyPartsController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationBodyPartsController : game::ui::ICharacterCustomizationBodyPartsController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationBodyPartsController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk98[0xB8 - 0x98]; // 98
    bool isHiddenInFpp; // B8
    uint8_t unkB9[0xC0 - 0xB9]; // B9
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationBodyPartsController, 0xC0);
} // namespace game::ui
using gameuiCharacterCustomizationBodyPartsController = game::ui::CharacterCustomizationBodyPartsController;
} // namespace RED4ext

// clang-format on
