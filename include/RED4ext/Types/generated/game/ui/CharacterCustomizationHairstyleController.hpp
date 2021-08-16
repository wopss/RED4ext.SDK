#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/ui/CharacterCustomizationBodyPartsController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CharacterCustomizationHairstyleController : game::ui::CharacterCustomizationBodyPartsController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationHairstyleController";
    static constexpr const char* ALIAS = NAME;

    CName headGroupName; // A8
    uint8_t unkB0[0x100 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationHairstyleController, 0x100);
} // namespace game::ui
} // namespace RED4ext
