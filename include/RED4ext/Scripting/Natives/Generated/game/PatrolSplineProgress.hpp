#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PatrolSplineControlPoint.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) PatrolSplineProgress : IScriptable
{
    static constexpr const char* NAME = "gamePatrolSplineProgress";
    static constexpr const char* ALIAS = "PatrolSplineProgress";

    uint8_t unk40[0x60 - 0x40]; // 40
    DynArray<game::PatrolSplineControlPoint> currentControlPoints; // 60
    uint8_t unk70[0xB0 - 0x70]; // 70
    float entrySplineParam; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
    uint32_t controlPointIndex; // B8
    uint8_t unkBC[0xD0 - 0xBC]; // BC
};
RED4EXT_ASSERT_SIZE(PatrolSplineProgress, 0xD0);
} // namespace game
using gamePatrolSplineProgress = game::PatrolSplineProgress;
using PatrolSplineProgress = game::PatrolSplineProgress;
} // namespace RED4ext

// clang-format on
