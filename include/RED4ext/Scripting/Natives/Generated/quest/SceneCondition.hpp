#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct ISceneConditionType; }

namespace quest
{
struct SceneCondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questSceneCondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ISceneConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(SceneCondition, 0x40);
} // namespace quest
using questSceneCondition = quest::SceneCondition;
} // namespace RED4ext

// clang-format on
