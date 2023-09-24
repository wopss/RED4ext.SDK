#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationBodyPartsController.hpp>

namespace RED4ext
{
namespace appearance { struct AppearanceResource; }

namespace game::ui
{
struct CharacterCustomizationArmCyberwareController : game::ui::CharacterCustomizationBodyPartsController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationArmCyberwareController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkC0[0xE0 - 0xC0]; // C0
    CName defaultGroupName; // E0
    DynArray<RaRef<appearance::AppearanceResource>> additionalCyberArmAppearances; // E8
    uint8_t unkF8[0x1C8 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationArmCyberwareController, 0x1C8);
} // namespace game::ui
using gameuiCharacterCustomizationArmCyberwareController = game::ui::CharacterCustomizationArmCyberwareController;
} // namespace RED4ext

// clang-format on
