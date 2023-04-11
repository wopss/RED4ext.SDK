#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EasingFunction.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimation_Movement.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimation_Movement_PredefinedFunction : game::TransformAnimation_Movement
{
    static constexpr const char* NAME = "gameTransformAnimation_Movement_PredefinedFunction";
    static constexpr const char* ALIAS = NAME;

    EasingFunction function; // 30
};
RED4EXT_ASSERT_SIZE(TransformAnimation_Movement_PredefinedFunction, 0x38);
} // namespace game
using gameTransformAnimation_Movement_PredefinedFunction = game::TransformAnimation_Movement_PredefinedFunction;
} // namespace RED4ext

// clang-format on
