#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest { 
struct CharacterManagerParameters_SetLowGravity : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetLowGravity";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetLowGravity, 0x78);
} // namespace quest
} // namespace RED4ext
