#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace world
{
struct FoliageCompiledResource : CResource
{
    static constexpr const char* NAME = "worldFoliageCompiledResource";
    static constexpr const char* ALIAS = NAME;

    uint32_t version; // 40
    uint32_t populationCount; // 44
    uint32_t bucketCount; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    DataBuffer dataBuffer; // 50
};
RED4EXT_ASSERT_SIZE(FoliageCompiledResource, 0x78);
} // namespace world
using worldFoliageCompiledResource = world::FoliageCompiledResource;
} // namespace RED4ext

// clang-format on
