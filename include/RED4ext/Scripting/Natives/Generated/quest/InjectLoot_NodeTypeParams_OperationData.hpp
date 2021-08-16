#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/InjectLootOperationType.hpp>

namespace RED4ext
{
namespace quest { 
struct InjectLoot_NodeTypeParams_OperationData
{
    static constexpr const char* NAME = "questInjectLoot_NodeTypeParams_OperationData";
    static constexpr const char* ALIAS = NAME;

    quest::InjectLootOperationType operationType; // 00
    TweakDBID itemTDBID; // 04
    int32_t quantity; // 0C
};
RED4EXT_ASSERT_SIZE(InjectLoot_NodeTypeParams_OperationData, 0x10);
} // namespace quest
} // namespace RED4ext
