#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyBBoxSyncOptions.hpp>

namespace RED4ext
{
namespace world
{
struct ProxyBoundingBoxSyncParams
{
    static constexpr const char* NAME = "worldProxyBoundingBoxSyncParams";
    static constexpr const char* ALIAS = NAME;

    world::ProxyBBoxSyncOptions positiveAxis; // 00
    world::ProxyBBoxSyncOptions negativeAxis; // 01
    uint8_t unk02[0x4 - 0x2]; // 2
    float pullRange; // 04
    bool makeStackable; // 08
    uint8_t unk09[0xC - 0x9]; // 9
    Vector3 stackOffset; // 0C
};
RED4EXT_ASSERT_SIZE(ProxyBoundingBoxSyncParams, 0x18);
} // namespace world
using worldProxyBoundingBoxSyncParams = world::ProxyBoundingBoxSyncParams;
} // namespace RED4ext

// clang-format on
