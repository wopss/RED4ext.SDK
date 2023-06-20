#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/InjectLootOperationType.hpp>

namespace RED4ext
{
namespace quest
{
struct InjectLoot_NodeTypeParams_OperationData : ISerializable
{
    static constexpr const char* NAME = "questInjectLoot_NodeTypeParams_OperationData";
    static constexpr const char* ALIAS = NAME;

    quest::InjectLootOperationType operationType; // 30
    TweakDBID itemTDBID; // 34
    int32_t quantity; // 3C
};
RED4EXT_ASSERT_SIZE(InjectLoot_NodeTypeParams_OperationData, 0x40);
} // namespace quest
using questInjectLoot_NodeTypeParams_OperationData = quest::InjectLoot_NodeTypeParams_OperationData;
} // namespace RED4ext

// clang-format on
