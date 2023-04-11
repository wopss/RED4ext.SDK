#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ConfigGraphicsQualityLevel.hpp>

namespace RED4ext
{
namespace world
{
struct QualitySetting
{
    static constexpr const char* NAME = "worldQualitySetting";
    static constexpr const char* ALIAS = NAME;

    ConfigGraphicsQualityLevel QualityLevel; // 00
    uint32_t xEntitiesBudget; // 04
};
RED4EXT_ASSERT_SIZE(QualitySetting, 0x8);
} // namespace world
using worldQualitySetting = world::QualitySetting;
} // namespace RED4ext

// clang-format on
