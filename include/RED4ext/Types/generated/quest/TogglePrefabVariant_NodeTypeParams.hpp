#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/quest/VariantState.hpp>

namespace RED4ext
{
namespace quest { 
struct TogglePrefabVariant_NodeTypeParams
{
    static constexpr const char* NAME = "questTogglePrefabVariant_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef prefabNodeRef; // 00
    DynArray<quest::VariantState> variantStates; // 08
};
RED4EXT_ASSERT_SIZE(TogglePrefabVariant_NodeTypeParams, 0x18);
} // namespace quest
} // namespace RED4ext
