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
struct TransformAnimatorNode_Action_Play : quest::TransformAnimatorNode_ActionType
{
    static constexpr const char* NAME = "questTransformAnimatorNode_Action_Play";
    static constexpr const char* ALIAS = NAME;

    int32_t timesPlayed; // 30
    float timeScale; // 34
    bool reverse; // 38
    bool useEntitySetup; // 39
    uint8_t unk3A[0x40 - 0x3A]; // 3A
};
RED4EXT_ASSERT_SIZE(TransformAnimatorNode_Action_Play, 0x40);
} // namespace quest
using questTransformAnimatorNode_Action_Play = quest::TransformAnimatorNode_Action_Play;
} // namespace RED4ext

// clang-format on
