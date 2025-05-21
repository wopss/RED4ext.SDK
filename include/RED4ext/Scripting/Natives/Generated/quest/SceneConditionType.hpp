#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace quest {
enum class SceneConditionType : int8_t
{
    Undefined = 0,
    IsInside = 1,
    IsOutside = 2,
    Entered = 3,
    Exited = 4,
};
} // namespace quest
using questSceneConditionType = quest::SceneConditionType;
} // namespace RED4ext

// clang-format on
