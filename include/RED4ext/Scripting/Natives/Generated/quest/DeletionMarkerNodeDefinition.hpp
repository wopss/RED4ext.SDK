#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct DeletionMarkerNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questDeletionMarkerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint16_t> deletedNodeIds; // 48
};
RED4EXT_ASSERT_SIZE(DeletionMarkerNodeDefinition, 0x58);
} // namespace quest
using questDeletionMarkerNodeDefinition = quest::DeletionMarkerNodeDefinition;
} // namespace RED4ext

// clang-format on
