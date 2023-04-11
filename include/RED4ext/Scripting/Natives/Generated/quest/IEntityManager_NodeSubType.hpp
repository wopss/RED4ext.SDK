#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ObjectNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct IEntityManager_NodeSubType : quest::ObjectNodeType
{
    static constexpr const char* NAME = "questIEntityManager_NodeSubType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IEntityManager_NodeSubType, 0x30);
} // namespace quest
using questIEntityManager_NodeSubType = quest::IEntityManager_NodeSubType;
} // namespace RED4ext

// clang-format on
