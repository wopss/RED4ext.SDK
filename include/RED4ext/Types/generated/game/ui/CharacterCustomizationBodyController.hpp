#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/ICharacterCustomizationBodyController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CharacterCustomizationBodyController : game::ui::ICharacterCustomizationBodyController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationBodyController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk98[0xA8 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationBodyController, 0xA8);
} // namespace game::ui
} // namespace RED4ext
