#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/VariantState.hpp>

namespace RED4ext
{
namespace quest
{
struct TogglePrefabVariant_NodeTypeParams
{
    static constexpr const char* NAME = "questTogglePrefabVariant_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef prefabNodeRef; // 00
    DynArray<quest::VariantState> variantStates; // 08
};
RED4EXT_ASSERT_SIZE(TogglePrefabVariant_NodeTypeParams, 0x18);
} // namespace quest
using questTogglePrefabVariant_NodeTypeParams = quest::TogglePrefabVariant_NodeTypeParams;
} // namespace RED4ext

// clang-format on
