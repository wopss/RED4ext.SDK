#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/quest/IItemManagerNodeType.hpp>
#include <RED4ext/Types/generated/quest/SetItemTags_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest { 
struct SetItemTags_NodeType : quest::IItemManagerNodeType
{
    static constexpr const char* NAME = "questSetItemTags_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::SetItemTags_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(SetItemTags_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
