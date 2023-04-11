#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct SyncNodeSignal
{
    static constexpr const char* NAME = "scnSyncNodeSignal";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    uint32_t nodeId; // 08
    uint16_t name; // 0C
    uint16_t ordinal; // 0E
    uint16_t numRuns; // 10
    uint8_t unk12[0x14 - 0x12]; // 12
};
RED4EXT_ASSERT_SIZE(SyncNodeSignal, 0x14);
} // namespace scn
using scnSyncNodeSignal = scn::SyncNodeSignal;
} // namespace RED4ext

// clang-format on
