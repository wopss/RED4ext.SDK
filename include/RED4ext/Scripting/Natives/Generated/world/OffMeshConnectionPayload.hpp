#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct OffMeshConnectionPayload
{
    static constexpr const char* NAME = "worldOffMeshConnectionPayload";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x20 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(OffMeshConnectionPayload, 0x20);
} // namespace world
using worldOffMeshConnectionPayload = world::OffMeshConnectionPayload;
} // namespace RED4ext

// clang-format on
