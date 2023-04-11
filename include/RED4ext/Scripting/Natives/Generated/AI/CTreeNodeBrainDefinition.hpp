#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeCompositeDefinition.hpp>

namespace RED4ext
{
struct LibTreeINodeDefinition;

namespace AI
{
struct CTreeNodeBrainDefinition : AI::CTreeNodeCompositeDefinition
{
    static constexpr const char* NAME = "AICTreeNodeBrainDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    DynArray<Handle<LibTreeINodeDefinition>> children; // 38
    bool useScoring; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(CTreeNodeBrainDefinition, 0x50);
} // namespace AI
using AICTreeNodeBrainDefinition = AI::CTreeNodeBrainDefinition;
} // namespace RED4ext

// clang-format on
