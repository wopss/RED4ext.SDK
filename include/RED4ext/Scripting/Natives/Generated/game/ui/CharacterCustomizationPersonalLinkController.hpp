#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ICharacterCustomizationComponent.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationPersonalLinkController : game::ui::ICharacterCustomizationComponent
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationPersonalLinkController";
    static constexpr const char* ALIAS = NAME;

    CName simpleLinkGroup; // 98
    uint8_t unkA0[0xC8 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationPersonalLinkController, 0xC8);
} // namespace game::ui
using gameuiCharacterCustomizationPersonalLinkController = game::ui::CharacterCustomizationPersonalLinkController;
} // namespace RED4ext

// clang-format on
