#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DebugInfoBase.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct TreeNodeDebugInfo : AI::behavior::DebugInfoBase
{
    static constexpr const char* NAME = "AIbehaviorTreeNodeDebugInfo";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TreeNodeDebugInfo, 0x50);
} // namespace AI::behavior
using AIbehaviorTreeNodeDebugInfo = AI::behavior::TreeNodeDebugInfo;
} // namespace RED4ext

// clang-format on
