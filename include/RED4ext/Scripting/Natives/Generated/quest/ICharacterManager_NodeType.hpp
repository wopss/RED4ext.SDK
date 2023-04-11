#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IRetNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ICharacterManager_NodeType : quest::IRetNodeType
{
    static constexpr const char* NAME = "questICharacterManager_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ICharacterManager_NodeType, 0x30);
} // namespace quest
using questICharacterManager_NodeType = quest::ICharacterManager_NodeType;
} // namespace RED4ext

// clang-format on
