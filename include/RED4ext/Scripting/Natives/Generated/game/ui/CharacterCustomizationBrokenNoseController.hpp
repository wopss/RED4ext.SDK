#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationBrokenNoseControllerBrokenNoseAppearance.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ICharacterCustomizationComponent.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationBrokenNoseController : game::ui::ICharacterCustomizationComponent
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationBrokenNoseController";
    static constexpr const char* ALIAS = NAME;

    game::ui::CharacterCustomizationBrokenNoseControllerBrokenNoseAppearance stage1App; // 98
    game::ui::CharacterCustomizationBrokenNoseControllerBrokenNoseAppearance stage2App; // A8
    CName finalSceneGroup; // B8
    uint8_t unkC0[0xD8 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationBrokenNoseController, 0xD8);
} // namespace game::ui
using gameuiCharacterCustomizationBrokenNoseController = game::ui::CharacterCustomizationBrokenNoseController;
} // namespace RED4ext

// clang-format on
