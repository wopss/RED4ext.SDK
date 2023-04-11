#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyNormalAngleStepSize.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxySyncNormalSource.hpp>

namespace RED4ext
{
namespace world
{
struct ProxySurfaceFlattenParams
{
    static constexpr const char* NAME = "worldProxySurfaceFlattenParams";
    static constexpr const char* ALIAS = NAME;

    bool flatten; // 00
    world::ProxyNormalAngleStepSize groupingStepAngle; // 01
    world::ProxySyncNormalSource syncNormalSource; // 02
    uint8_t unk03[0x4 - 0x3]; // 3
    float coreAxisRotationOffset; // 04
    bool postFlattenReduce; // 08
    uint8_t unk09[0xC - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(ProxySurfaceFlattenParams, 0xC);
} // namespace world
using worldProxySurfaceFlattenParams = world::ProxySurfaceFlattenParams;
} // namespace RED4ext

// clang-format on
