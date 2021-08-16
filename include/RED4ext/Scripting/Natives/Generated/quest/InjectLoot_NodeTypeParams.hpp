#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/InjectLoot_NodeTypeParams_OperationData.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest { 
struct InjectLoot_NodeTypeParams
{
    static constexpr const char* NAME = "questInjectLoot_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> objectRef; // 00
    DynArray<quest::InjectLoot_NodeTypeParams_OperationData> operations; // 10
};
RED4EXT_ASSERT_SIZE(InjectLoot_NodeTypeParams, 0x20);
} // namespace quest
} // namespace RED4ext
