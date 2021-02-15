#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/CensorshipFlags.hpp>
#include <RED4ext/Types/generated/game/ui/CharacterCustomizationActionType.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CensorshipInfo
{
    static constexpr const char* NAME = "gameuiCensorshipInfo";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    CensorshipFlags censorFlag; // 08
    game::ui::CharacterCustomizationActionType censorFlagAction; // 0C
};
RED4EXT_ASSERT_SIZE(CensorshipInfo, 0x10);
} // namespace game::ui
} // namespace RED4ext
