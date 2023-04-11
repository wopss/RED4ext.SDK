#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeAtomicDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeCompleteImmediatelyDefinition : AI::CTreeNodeAtomicDefinition
{
    static constexpr const char* NAME = "AICTreeNodeCompleteImmediatelyDefinition";
    static constexpr const char* ALIAS = NAME;

    bool completeWithSuccess; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(CTreeNodeCompleteImmediatelyDefinition, 0x38);
} // namespace AI
using AICTreeNodeCompleteImmediatelyDefinition = AI::CTreeNodeCompleteImmediatelyDefinition;
} // namespace RED4ext

// clang-format on
