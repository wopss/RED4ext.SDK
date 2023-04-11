#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerParameters_SetAttitudeGroupForPuppet : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetAttitudeGroupForPuppet";
    static constexpr const char* ALIAS = NAME;

    CName groupName; // 70
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetAttitudeGroupForPuppet, 0x78);
} // namespace quest
using questCharacterManagerParameters_SetAttitudeGroupForPuppet = quest::CharacterManagerParameters_SetAttitudeGroupForPuppet;
} // namespace RED4ext

// clang-format on
