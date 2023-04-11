#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimation_Movement.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimation_Movement_CustomCurve : game::TransformAnimation_Movement
{
    static constexpr const char* NAME = "gameTransformAnimation_Movement_CustomCurve";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> curve; // 30
};
RED4EXT_ASSERT_SIZE(TransformAnimation_Movement_CustomCurve, 0x68);
} // namespace game
using gameTransformAnimation_Movement_CustomCurve = game::TransformAnimation_Movement_CustomCurve;
} // namespace RED4ext

// clang-format on
