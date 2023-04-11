#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace world
{
struct ProxyMiscAdvancedParams
{
    static constexpr const char* NAME = "worldProxyMiscAdvancedParams";
    static constexpr const char* ALIAS = NAME;

    bool useLod1; // 00
    bool smoothVolume; // 01
    uint8_t blurCutout; // 02
    uint8_t occlusionRatio; // 03
    bool capTop; // 04
    bool capBottom; // 05
    uint8_t unk06[0x8 - 0x6]; // 6
    float fillHolesBeforeReduceRatio; // 08
    float fillHolesAfterReduceRatio; // 0C
    int32_t rsSweepOrder; // 10
    float rsDetailDrop; // 14
    Vector3 rsAxisPrecision; // 18
    Vector3 rsAxisExpand; // 24
    float rsAliasingReduction; // 30
    float bcMergeRange; // 34
    float bcSizeCutoff; // 38
    float bcIterations; // 3C
    float bcMaxSize; // 40
    float bcMinSize; // 44
    float bcMergeSensitivity; // 48
    float bcMinScale; // 4C
    float bcGridSize; // 50
    float bcFilterSensitivity; // 54
    float bcBoundsRatioLimit; // 58
    bool useClosestPointOnMesh; // 5C
    Color backgroundColor; // 5D
    bool removeIslands; // 61
    uint8_t unk62[0x64 - 0x62]; // 62
};
RED4EXT_ASSERT_SIZE(ProxyMiscAdvancedParams, 0x64);
} // namespace world
using worldProxyMiscAdvancedParams = world::ProxyMiscAdvancedParams;
} // namespace RED4ext

// clang-format on
