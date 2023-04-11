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
struct TransformAnimatorNode_Action_Pause : quest::TransformAnimatorNode_ActionType
{
    static constexpr const char* NAME = "questTransformAnimatorNode_Action_Pause";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TransformAnimatorNode_Action_Pause, 0x30);
} // namespace quest
using questTransformAnimatorNode_Action_Pause = quest::TransformAnimatorNode_Action_Pause;
} // namespace RED4ext

// clang-format on
