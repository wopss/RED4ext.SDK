#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/WorldListResourceEntry.hpp>

namespace RED4ext
{
namespace world
{
struct WorldListResource : CResource
{
    static constexpr const char* NAME = "worldWorldListResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::WorldListResourceEntry> worlds; // 40
};
RED4EXT_ASSERT_SIZE(WorldListResource, 0x50);
} // namespace world
using worldWorldListResource = world::WorldListResource;
} // namespace RED4ext

// clang-format on
