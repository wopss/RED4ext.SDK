#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct PatrolSplineControlPoint
{
    static constexpr const char* NAME = "gamePatrolSplineControlPoint";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x1D0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(PatrolSplineControlPoint, 0x1D0);
} // namespace game
} // namespace RED4ext
