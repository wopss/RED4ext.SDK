#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world::geometry::average
{
struct __declspec(align(0x10)) NormalDetectionHelperQuery : IScriptable
{
    static constexpr const char* NAME = "worldgeometryaverageNormalDetectionHelperQuery";
    static constexpr const char* ALIAS = "AverageNormalQuery";

    uint8_t unk40[0x90 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(NormalDetectionHelperQuery, 0x90);
} // namespace world::geometry::average
using worldgeometryaverageNormalDetectionHelperQuery = world::geometry::average::NormalDetectionHelperQuery;
using AverageNormalQuery = world::geometry::average::NormalDetectionHelperQuery;
} // namespace RED4ext

// clang-format on
