#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PatrolSplineControlPoint.hpp>

namespace RED4ext
{
namespace game { 
struct PatrolSplineProgress : ISerializable
{
    static constexpr const char* NAME = "gamePatrolSplineProgress";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x50 - 0x30]; // 30
    DynArray<game::PatrolSplineControlPoint> currentControlPoints; // 50
    uint8_t unk60[0xA0 - 0x60]; // 60
    float entrySplineParam; // A0
    uint8_t unkA4[0xA8 - 0xA4]; // A4
    uint32_t controlPointIndex; // A8
    uint8_t unkAC[0xC0 - 0xAC]; // AC
};
RED4EXT_ASSERT_SIZE(PatrolSplineProgress, 0xC0);
} // namespace game
} // namespace RED4ext
