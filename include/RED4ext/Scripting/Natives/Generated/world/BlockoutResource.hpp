#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace world { struct BlockoutData; }

namespace world
{
struct BlockoutResource : CResource
{
    static constexpr const char* NAME = "worldBlockoutResource";
    static constexpr const char* ALIAS = NAME;

    Handle<world::BlockoutData> blockoutData; // 40
};
RED4EXT_ASSERT_SIZE(BlockoutResource, 0x50);
} // namespace world
using worldBlockoutResource = world::BlockoutResource;
} // namespace RED4ext

// clang-format on
