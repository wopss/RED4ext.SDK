#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DropItemFromSlot_NodeTypeParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IItemManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct DropItemFromSlot_NodeType : quest::IItemManagerNodeType
{
    static constexpr const char* NAME = "questDropItemFromSlot_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::DropItemFromSlot_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(DropItemFromSlot_NodeType, 0x40);
} // namespace quest
using questDropItemFromSlot_NodeType = quest::DropItemFromSlot_NodeType;
} // namespace RED4ext

// clang-format on
