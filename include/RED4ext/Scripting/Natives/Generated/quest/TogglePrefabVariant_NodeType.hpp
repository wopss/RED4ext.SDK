#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IWorldDataManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TogglePrefabVariant_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct TogglePrefabVariant_NodeType : quest::IWorldDataManagerNodeType
{
    static constexpr const char* NAME = "questTogglePrefabVariant_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::TogglePrefabVariant_NodeTypeParams> params; // 38
};
RED4EXT_ASSERT_SIZE(TogglePrefabVariant_NodeType, 0x48);
} // namespace quest
using questTogglePrefabVariant_NodeType = quest::TogglePrefabVariant_NodeType;
} // namespace RED4ext

// clang-format on
