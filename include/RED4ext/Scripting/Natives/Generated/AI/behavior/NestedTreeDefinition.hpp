#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct NestedTreeDefinition : AI::behavior::TreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorNestedTreeDefinition";
    static constexpr const char* ALIAS = NAME;

    bool lateInitialization; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    DynArray<CName> initializeOnEvent; // 38
};
RED4EXT_ASSERT_SIZE(NestedTreeDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorNestedTreeDefinition = AI::behavior::NestedTreeDefinition;
} // namespace RED4ext

// clang-format on
