#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ICharacterCustomizationState.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationState : game::ui::ICharacterCustomizationState
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xF0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationState, 0xF0);
} // namespace game::ui
using gameuiCharacterCustomizationState = game::ui::CharacterCustomizationState;
} // namespace RED4ext

// clang-format on
