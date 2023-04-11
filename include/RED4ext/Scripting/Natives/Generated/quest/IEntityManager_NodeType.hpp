#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/INodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct IEntityManager_NodeType : quest::INodeType
{
    static constexpr const char* NAME = "questIEntityManager_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IEntityManager_NodeType, 0x30);
} // namespace quest
using questIEntityManager_NodeType = quest::IEntityManager_NodeType;
} // namespace RED4ext

// clang-format on
