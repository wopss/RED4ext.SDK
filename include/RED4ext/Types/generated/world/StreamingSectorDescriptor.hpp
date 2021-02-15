#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Box.hpp>
#include <RED4ext/Types/generated/world/StreamingSectorVariant.hpp>

namespace RED4ext
{
namespace world { struct StreamingSector; }

namespace world { 
struct StreamingSectorDescriptor
{
    static constexpr const char* NAME = "worldStreamingSectorDescriptor";
    static constexpr const char* ALIAS = NAME;

    Box streamingBox; // 00
    RaRef<world::StreamingSector> data; // 20
    NodeRef questPrefabNodeRef; // 28
    DynArray<world::StreamingSectorVariant> variants; // 30
    uint32_t numNodeRanges; // 40
    uint32_t sectorIndex; // 44
    uint32_t level; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(StreamingSectorDescriptor, 0x50);
} // namespace world
} // namespace RED4ext
