#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/ui/CharacterCustomizationBodyPartsController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CharacterCustomizationGenitalsController : game::ui::CharacterCustomizationBodyPartsController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationGenitalsController";
    static constexpr const char* ALIAS = NAME;

    CName upperBodyGroupName; // A8
    CName bottomBodyGroupName; // B0
    bool forceHideGenitals; // B8
    uint8_t unkB9[0x168 - 0xB9]; // B9
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationGenitalsController, 0x168);
} // namespace game::ui
} // namespace RED4ext
