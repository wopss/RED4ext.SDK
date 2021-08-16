#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/ui/CharacterCustomizationActionType.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CharacterCustomizationAction
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationAction";
    static constexpr const char* ALIAS = NAME;

    game::ui::CharacterCustomizationActionType type; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CString params; // 08
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationAction, 0x28);
} // namespace game::ui
} // namespace RED4ext
