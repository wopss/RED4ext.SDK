#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/Box.hpp>
#include <RED4ext/Types/generated/res/StreamedResource.hpp>
#include <RED4ext/Types/generated/world/NavigationTileData.hpp>

namespace RED4ext
{
namespace world { 
struct NavigationTileResource : res::StreamedResource
{
    static constexpr const char* NAME = "worldNavigationTileResource";
    static constexpr const char* ALIAS = NAME;

    Box localBoundingBox; // 40
    DynArray<world::NavigationTileData> tilesData; // 60
};
RED4EXT_ASSERT_SIZE(NavigationTileResource, 0x70);
} // namespace world
} // namespace RED4ext
