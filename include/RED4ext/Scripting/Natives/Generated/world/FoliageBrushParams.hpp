#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct FoliageBrushParams
{
    static constexpr const char* NAME = "worldFoliageBrushParams";
    static constexpr const char* ALIAS = NAME;

    float Proximity; // 00
    float Scale; // 04
    float ScaleVariation; // 08
};
RED4EXT_ASSERT_SIZE(FoliageBrushParams, 0xC);
} // namespace world
using worldFoliageBrushParams = world::FoliageBrushParams;
} // namespace RED4ext

// clang-format on
