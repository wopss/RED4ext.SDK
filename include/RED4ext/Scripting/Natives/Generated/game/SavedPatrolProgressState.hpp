#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace game
{
struct SavedPatrolProgressState : ISerializable
{
    static constexpr const char* NAME = "gameSavedPatrolProgressState";
    static constexpr const char* ALIAS = NAME;

    float entrySplineParam; // 30
    uint32_t entrySectionIndex; // 34
    uint32_t controlPointIndex; // 38
    Vector3 splineEntryPosition; // 3C
    Vector3 splineEntryTangent; // 48
    bool isSplineReversed; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
    Vector3 currentDestinationPosition; // 58
    Vector3 currentDestinationTangent; // 64
};
RED4EXT_ASSERT_SIZE(SavedPatrolProgressState, 0x70);
} // namespace game
using gameSavedPatrolProgressState = game::SavedPatrolProgressState;
} // namespace RED4ext

// clang-format on
