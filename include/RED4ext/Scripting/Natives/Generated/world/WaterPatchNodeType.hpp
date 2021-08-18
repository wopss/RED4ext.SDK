#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace world { 
struct WaterPatchNodeType
{
    static constexpr const char* NAME = "worldWaterPatchNodeType";
    static constexpr const char* ALIAS = NAME;

    CName typeName; // 00
    uint8_t unk08[0x10 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(WaterPatchNodeType, 0x10);
} // namespace world
} // namespace RED4ext
