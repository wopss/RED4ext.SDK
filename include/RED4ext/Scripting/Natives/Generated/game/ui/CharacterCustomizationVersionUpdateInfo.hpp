#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationOptionVersionUpdateInfo.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationVersionUpdateInfo
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationVersionUpdateInfo";
    static constexpr const char* ALIAS = NAME;

    uint32_t newVersion; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    DynArray<game::ui::CharacterCustomizationOptionVersionUpdateInfo> optionUpdates; // 08
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationVersionUpdateInfo, 0x18);
} // namespace game::ui
using gameuiCharacterCustomizationVersionUpdateInfo = game::ui::CharacterCustomizationVersionUpdateInfo;
} // namespace RED4ext

// clang-format on
