#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world
{
struct CompiledEffectEventInfo
{
    static constexpr const char* NAME = "worldCompiledEffectEventInfo";
    static constexpr const char* ALIAS = NAME;

    CRUID eventRUID; // 00
    uint64_t placementIndexMask; // 08
    uint64_t componentIndexMask; // 10
    uint8_t flags; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(CompiledEffectEventInfo, 0x20);
} // namespace world
using worldCompiledEffectEventInfo = world::CompiledEffectEventInfo;
} // namespace RED4ext

// clang-format on
