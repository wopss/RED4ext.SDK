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
struct AcousticDataCell
{
    static constexpr const char* NAME = "worldAcousticDataCell";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x4 - 0x0]; // 0
    uint32_t sectorId; // 04
    uint8_t unk08[0x10 - 0x8]; // 8
    DeferredDataBuffer nodes; // 10
};
RED4EXT_ASSERT_SIZE(AcousticDataCell, 0x68);
} // namespace world
using worldAcousticDataCell = world::AcousticDataCell;
} // namespace RED4ext

// clang-format on
