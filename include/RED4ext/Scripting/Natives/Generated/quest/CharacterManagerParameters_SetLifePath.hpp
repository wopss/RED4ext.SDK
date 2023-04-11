#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerParameters_SetLifePath : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetLifePath";
    static constexpr const char* ALIAS = NAME;

    TweakDBID lifePathID; // 70
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetLifePath, 0x78);
} // namespace quest
using questCharacterManagerParameters_SetLifePath = quest::CharacterManagerParameters_SetLifePath;
} // namespace RED4ext

// clang-format on
