#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world::geometry::average { 
struct NormalDetectionHelperResult : IScriptable
{
    static constexpr const char* NAME = "worldgeometryaverageNormalDetectionHelperResult";
    static constexpr const char* ALIAS = "AverageNormalResult";

    uint8_t unk40[0x1A0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(NormalDetectionHelperResult, 0x1A0);
} // namespace world::geometry::average
using AverageNormalResult = world::geometry::average::NormalDetectionHelperResult;
} // namespace RED4ext
