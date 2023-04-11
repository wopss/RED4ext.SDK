#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PuppetNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ICharacterManager_NodeSubType : quest::PuppetNodeType
{
    static constexpr const char* NAME = "questICharacterManager_NodeSubType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ICharacterManager_NodeSubType, 0x70);
} // namespace quest
using questICharacterManager_NodeSubType = quest::ICharacterManager_NodeSubType;
} // namespace RED4ext

// clang-format on
