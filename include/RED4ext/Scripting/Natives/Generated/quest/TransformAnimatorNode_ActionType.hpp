#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IBaseNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct TransformAnimatorNode_ActionType : quest::IBaseNodeType
{
    static constexpr const char* NAME = "questTransformAnimatorNode_ActionType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TransformAnimatorNode_ActionType, 0x30);
} // namespace quest
using questTransformAnimatorNode_ActionType = quest::TransformAnimatorNode_ActionType;
} // namespace RED4ext

// clang-format on
