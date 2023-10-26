#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingBlockIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingSectorCategory.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingSectorVariant.hpp>

namespace RED4ext
{
namespace world { struct StreamingSector; }

namespace world
{
struct __declspec(align(0x10)) StreamingSectorDescriptor
{
    static constexpr const char* NAME = "worldStreamingSectorDescriptor";
    static constexpr const char* ALIAS = NAME;

    Box streamingBox; // 00
    RaRef<world::StreamingSector> data; // 20
    NodeRef questPrefabNodeRef; // 28
    DynArray<world::StreamingSectorVariant> variants; // 30
    uint32_t numNodeRanges; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    world::StreamingBlockIndex blockIndex; // 48
    uint8_t level; // 50
    world::StreamingSectorCategory category; // 51
    uint8_t unk52[0x60 - 0x52]; // 52
};
RED4EXT_ASSERT_SIZE(StreamingSectorDescriptor, 0x60);
} // namespace world
using worldStreamingSectorDescriptor = world::StreamingSectorDescriptor;
} // namespace RED4ext

// clang-format on
