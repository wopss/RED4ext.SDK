#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETextureAddressing.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETextureComparisonFunction.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETextureFilteringMag.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETextureFilteringMin.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETextureFilteringMip.hpp>

namespace RED4ext
{
struct SamplerStateInfo
{
    static constexpr const char* NAME = "SamplerStateInfo";
    static constexpr const char* ALIAS = NAME;

    ETextureFilteringMin filteringMin; // 00
    ETextureFilteringMag filteringMag; // 01
    ETextureFilteringMip filteringMip; // 02
    ETextureAddressing addressU; // 03
    ETextureAddressing addressV; // 04
    ETextureAddressing addressW; // 05
    ETextureComparisonFunction comparisonFunc; // 06
    uint8_t register_; // 07 -- register
};
RED4EXT_ASSERT_SIZE(SamplerStateInfo, 0x8);
} // namespace RED4ext

// clang-format on
