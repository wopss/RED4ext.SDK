#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace rend { 
struct HistogramBias
{
    static constexpr const char* NAME = "rendHistogramBias";
    static constexpr const char* ALIAS = NAME;

    Vector3 mulCoef; // 00
    Vector3 addCoef; // 0C
};
RED4EXT_ASSERT_SIZE(HistogramBias, 0x18);
} // namespace rend
} // namespace RED4ext
