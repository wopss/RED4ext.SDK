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
struct CharacterManagerParameters_SetProgressionBuild : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetProgressionBuild";
    static constexpr const char* ALIAS = NAME;

    TweakDBID buildID; // 70
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetProgressionBuild, 0x78);
} // namespace quest
using questCharacterManagerParameters_SetProgressionBuild = quest::CharacterManagerParameters_SetProgressionBuild;
} // namespace RED4ext

// clang-format on
