#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SetAsCrowdObstacle_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerParameters_SetAsCrowdObstacle : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetAsCrowdObstacle";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::SetAsCrowdObstacle_NodeTypeParams> params; // 70
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetAsCrowdObstacle, 0x80);
} // namespace quest
using questCharacterManagerParameters_SetAsCrowdObstacle = quest::CharacterManagerParameters_SetAsCrowdObstacle;
} // namespace RED4ext

// clang-format on
