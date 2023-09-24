#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingBlockIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingSectorDescriptor.hpp>

namespace RED4ext
{
namespace world
{
struct StreamingBlock : CResource
{
    static constexpr const char* NAME = "worldStreamingBlock";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::StreamingSectorDescriptor> descriptors; // 40
    world::StreamingBlockIndex index; // 50
};
RED4EXT_ASSERT_SIZE(StreamingBlock, 0x58);
} // namespace world
using worldStreamingBlock = world::StreamingBlock;
} // namespace RED4ext

// clang-format on
