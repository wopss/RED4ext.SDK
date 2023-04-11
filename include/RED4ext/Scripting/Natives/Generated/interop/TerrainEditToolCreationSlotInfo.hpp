#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace interop
{
struct TerrainEditToolCreationSlotInfo
{
    static constexpr const char* NAME = "interopTerrainEditToolCreationSlotInfo";
    static constexpr const char* ALIAS = NAME;

    Vector2 scale; // 00
    bool heightMappingOverrideEnable; // 08
    uint8_t unk09[0xC - 0x9]; // 9
    float heightMappingMin; // 0C
    float heightMappingMax; // 10
};
RED4EXT_ASSERT_SIZE(TerrainEditToolCreationSlotInfo, 0x14);
} // namespace interop
using interopTerrainEditToolCreationSlotInfo = interop::TerrainEditToolCreationSlotInfo;
} // namespace RED4ext

// clang-format on
