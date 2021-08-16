#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ICharacterCustomizationBodyPartsController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CharacterCustomizationBodyPartsController : game::ui::ICharacterCustomizationBodyPartsController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationBodyPartsController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk98[0xA8 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationBodyPartsController, 0xA8);
} // namespace game::ui
} // namespace RED4ext
