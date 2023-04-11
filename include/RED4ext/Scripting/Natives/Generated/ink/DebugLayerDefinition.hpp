#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DebugLayerEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LayerDefinition.hpp>

namespace RED4ext
{
namespace ink
{
struct DebugLayerDefinition : ink::LayerDefinition
{
    static constexpr const char* NAME = "inkDebugLayerDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::DebugLayerEntry> entries; // 38
};
RED4EXT_ASSERT_SIZE(DebugLayerDefinition, 0x48);
} // namespace ink
using inkDebugLayerDefinition = ink::DebugLayerDefinition;
} // namespace RED4ext

// clang-format on
