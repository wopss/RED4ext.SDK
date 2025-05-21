#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace rend {
enum class EPathTracingLightUsage : int8_t
{
    PTLU_Everywhere = 0,
    PTLU_OnlyInPathTracing = 1,
    PTLU_ExcludeFromPathTracing = 2,
};
} // namespace rend
using rendEPathTracingLightUsage = rend::EPathTracingLightUsage;
} // namespace RED4ext

// clang-format on
