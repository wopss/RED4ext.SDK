#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IItemManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { struct AddRemoveItem_NodeTypeParams; }

namespace quest { 
struct AddRemoveItem_NodeType : quest::IItemManagerNodeType
{
    static constexpr const char* NAME = "questAddRemoveItem_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<quest::AddRemoveItem_NodeTypeParams>> params; // 30
};
RED4EXT_ASSERT_SIZE(AddRemoveItem_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
