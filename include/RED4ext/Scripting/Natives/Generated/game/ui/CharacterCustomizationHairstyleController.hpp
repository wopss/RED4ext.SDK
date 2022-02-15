#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationBodyPartsController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CharacterCustomizationHairstyleController : game::ui::CharacterCustomizationBodyPartsController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationHairstyleController";
    static constexpr const char* ALIAS = NAME;

    CName headGroupName; // C0
    uint8_t unkC8[0x128 - 0xC8]; // C8
    bool forceDissolveAppearances; // 128
    uint8_t unk129[0x130 - 0x129]; // 129
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationHairstyleController, 0x130);
} // namespace game::ui
} // namespace RED4ext
