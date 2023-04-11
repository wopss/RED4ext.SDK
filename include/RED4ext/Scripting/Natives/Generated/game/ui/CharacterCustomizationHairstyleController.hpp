#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationBodyPartsController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationHairstyleController : game::ui::CharacterCustomizationBodyPartsController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationHairstyleController";
    static constexpr const char* ALIAS = NAME;

    CName headGroupName; // C0
    uint8_t unkC8[0x130 - 0xC8]; // C8
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationHairstyleController, 0x130);
} // namespace game::ui
using gameuiCharacterCustomizationHairstyleController = game::ui::CharacterCustomizationHairstyleController;
} // namespace RED4ext

// clang-format on
