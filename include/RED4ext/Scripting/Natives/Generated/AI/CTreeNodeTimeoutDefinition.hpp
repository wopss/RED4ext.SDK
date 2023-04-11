#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeExtendableNodeDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeTimeoutDefinition : AI::CTreeExtendableNodeDefinition
{
    static constexpr const char* NAME = "AICTreeNodeTimeoutDefinition";
    static constexpr const char* ALIAS = NAME;

    float timeout; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(CTreeNodeTimeoutDefinition, 0x50);
} // namespace AI
using AICTreeNodeTimeoutDefinition = AI::CTreeNodeTimeoutDefinition;
} // namespace RED4ext

// clang-format on
