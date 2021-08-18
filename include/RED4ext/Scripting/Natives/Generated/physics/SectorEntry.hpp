#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>

namespace RED4ext
{
namespace physics { 
struct SectorEntry
{
    static constexpr const char* NAME = "physicsSectorEntry";
    static constexpr const char* ALIAS = NAME;

    Box sectorBounds; // 00
    uint64_t sectorHash; // 20
    uint32_t entryOffset; // 28
    uint32_t entrySize; // 2C
    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(SectorEntry, 0x40);
} // namespace physics
} // namespace RED4ext
