#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/HeatmapSetup.hpp>

namespace RED4ext
{
namespace world { struct HeatmapLayer; }

namespace world { 
struct HeatmapResource : CResource
{
    static constexpr const char* NAME = "worldHeatmapResource";
    static constexpr const char* ALIAS = NAME;

    world::HeatmapSetup setup; // 40
    CString name; // 70
    DynArray<CString> layerNames; // 90
    DynArray<RaRef<world::HeatmapLayer>> layers; // A0
};
RED4EXT_ASSERT_SIZE(HeatmapResource, 0xB0);
} // namespace world
} // namespace RED4ext
