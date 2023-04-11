#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AnimMoveOnSplineParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MoveOnSplineType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SimpleMoveOnSplineParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/WithCompanionMoveOnSplineParams.hpp>

namespace RED4ext
{
namespace quest
{
struct MoveOnSplineAdditionalParams : ISerializable
{
    static constexpr const char* NAME = "questMoveOnSplineAdditionalParams";
    static constexpr const char* ALIAS = NAME;

    quest::MoveOnSplineType type; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    quest::SimpleMoveOnSplineParams simpleParams; // 38
    quest::AnimMoveOnSplineParams animParams; // 58
    quest::WithCompanionMoveOnSplineParams withCompanionParams; // 98
};
RED4EXT_ASSERT_SIZE(MoveOnSplineAdditionalParams, 0x108);
} // namespace quest
using questMoveOnSplineAdditionalParams = quest::MoveOnSplineAdditionalParams;
} // namespace RED4ext

// clang-format on
