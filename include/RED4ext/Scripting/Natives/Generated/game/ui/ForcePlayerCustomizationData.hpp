#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationPart.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ForcePlayerCustomizationData
{
    static constexpr const char* NAME = "gameuiForcePlayerCustomizationData";
    static constexpr const char* ALIAS = NAME;

    game::ui::CharacterCustomizationPart customizationPart; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName uiSlot; // 08
    uint32_t index; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
    CName partUiSlot; // 18
    uint32_t partIndex; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
    CName definitionUiSlot; // 28
    CName definition; // 30
};
RED4EXT_ASSERT_SIZE(ForcePlayerCustomizationData, 0x38);
} // namespace game::ui
using gameuiForcePlayerCustomizationData = game::ui::ForcePlayerCustomizationData;
} // namespace RED4ext

// clang-format on
