#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IItemManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { struct InjectLoot_NodeTypeParams; }

namespace quest
{
struct InjectLoot_NodeType : quest::IItemManagerNodeType
{
    static constexpr const char* NAME = "questInjectLoot_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<quest::InjectLoot_NodeTypeParams>> params; // 30
};
RED4EXT_ASSERT_SIZE(InjectLoot_NodeType, 0x40);
} // namespace quest
using questInjectLoot_NodeType = quest::InjectLoot_NodeType;
} // namespace RED4ext

// clang-format on
