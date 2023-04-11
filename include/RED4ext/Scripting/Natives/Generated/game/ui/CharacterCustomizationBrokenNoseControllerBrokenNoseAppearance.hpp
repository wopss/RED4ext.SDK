#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace appearance { struct AppearanceResource; }

namespace game::ui
{
struct CharacterCustomizationBrokenNoseControllerBrokenNoseAppearance
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationBrokenNoseControllerBrokenNoseAppearance";
    static constexpr const char* ALIAS = NAME;

    RaRef<appearance::AppearanceResource> resource; // 00
    CName definition; // 08
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationBrokenNoseControllerBrokenNoseAppearance, 0x10);
} // namespace game::ui
using gameuiCharacterCustomizationBrokenNoseControllerBrokenNoseAppearance = game::ui::CharacterCustomizationBrokenNoseControllerBrokenNoseAppearance;
} // namespace RED4ext

// clang-format on
