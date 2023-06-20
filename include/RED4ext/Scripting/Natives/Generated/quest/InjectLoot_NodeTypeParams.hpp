#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/InjectLoot_NodeTypeParams_OperationData.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest
{
struct InjectLoot_NodeTypeParams : ISerializable
{
    static constexpr const char* NAME = "questInjectLoot_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> objectRef; // 30
    DynArray<Handle<quest::InjectLoot_NodeTypeParams_OperationData>> lootOperations; // 40
    DynArray<quest::InjectLoot_NodeTypeParams_OperationData> operations; // 50
};
RED4EXT_ASSERT_SIZE(InjectLoot_NodeTypeParams, 0x60);
} // namespace quest
using questInjectLoot_NodeTypeParams = quest::InjectLoot_NodeTypeParams;
} // namespace RED4ext

// clang-format on
