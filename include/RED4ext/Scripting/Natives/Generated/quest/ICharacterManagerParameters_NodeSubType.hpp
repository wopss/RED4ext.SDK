#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManager_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct ICharacterManagerParameters_NodeSubType : quest::ICharacterManager_NodeSubType
{
    static constexpr const char* NAME = "questICharacterManagerParameters_NodeSubType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ICharacterManagerParameters_NodeSubType, 0x70);
} // namespace quest
using questICharacterManagerParameters_NodeSubType = quest::ICharacterManagerParameters_NodeSubType;
} // namespace RED4ext

// clang-format on
