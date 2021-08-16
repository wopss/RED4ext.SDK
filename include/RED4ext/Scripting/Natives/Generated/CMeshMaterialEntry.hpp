#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
struct CMeshMaterialEntry
{
    static constexpr const char* NAME = "CMeshMaterialEntry";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x20 - 0x0]; // 0
    CName name; // 20
    uint16_t index; // 28
    bool isLocalInstance; // 2A
    uint8_t unk2B[0x30 - 0x2B]; // 2B
};
RED4EXT_ASSERT_SIZE(CMeshMaterialEntry, 0x30);
} // namespace RED4ext
