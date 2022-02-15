#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingSectorCategory.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingSectorVariant.hpp>

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
    uint32_t blockIndex; // 44
    uint8_t level; // 48
    world::StreamingSectorCategory category; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
};
RED4EXT_ASSERT_SIZE(StreamingSectorDescriptor, 0x50);
} // namespace world
} // namespace RED4ext
