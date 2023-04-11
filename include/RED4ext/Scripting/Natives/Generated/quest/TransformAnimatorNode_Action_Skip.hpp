#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TransformAnimatorNode_ActionType.hpp>

namespace RED4ext
{
namespace quest
{
struct TransformAnimatorNode_Action_Skip : quest::TransformAnimatorNode_ActionType
{
    static constexpr const char* NAME = "questTransformAnimatorNode_Action_Skip";
    static constexpr const char* ALIAS = NAME;

    float skipTo; // 30
    bool skipToEnd; // 34
    uint8_t unk35[0x38 - 0x35]; // 35
};
RED4EXT_ASSERT_SIZE(TransformAnimatorNode_Action_Skip, 0x38);
} // namespace quest
using questTransformAnimatorNode_Action_Skip = quest::TransformAnimatorNode_Action_Skip;
} // namespace RED4ext

// clang-format on
