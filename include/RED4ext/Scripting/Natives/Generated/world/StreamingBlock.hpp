#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingSectorDescriptor.hpp>

namespace RED4ext
{
namespace world { 
struct StreamingBlock : CResource
{
    static constexpr const char* NAME = "worldStreamingBlock";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::StreamingSectorDescriptor> descriptors; // 40
    uint32_t index; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(StreamingBlock, 0x58);
} // namespace world
} // namespace RED4ext
