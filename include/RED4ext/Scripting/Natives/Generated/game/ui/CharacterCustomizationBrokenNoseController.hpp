#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationBrokenNoseControllerBrokenNoseAppearance.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ICharacterCustomizationComponent.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CharacterCustomizationBrokenNoseController : game::ui::ICharacterCustomizationComponent
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationBrokenNoseController";
    static constexpr const char* ALIAS = NAME;

    game::ui::CharacterCustomizationBrokenNoseControllerBrokenNoseAppearance stage1App; // 98
    game::ui::CharacterCustomizationBrokenNoseControllerBrokenNoseAppearance stage2App; // A8
    uint8_t unkB8[0xC8 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationBrokenNoseController, 0xC8);
} // namespace game::ui
} // namespace RED4ext
