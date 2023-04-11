#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace rend
{
struct GridGeneratorData
{
    static constexpr const char* NAME = "rendGridGeneratorData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
    Vector3 startingPosition; // 30
    EulerAngles rotation; // 3C
    float xStep; // 48
    float yStep; // 4C
    uint32_t numberOfXSteps; // 50
    uint32_t numberOfYSteps; // 54
    float orbitDistance; // 58
    float zoom; // 5C
};
RED4EXT_ASSERT_SIZE(GridGeneratorData, 0x60);
} // namespace rend
using rendGridGeneratorData = rend::GridGeneratorData;
} // namespace RED4ext

// clang-format on
