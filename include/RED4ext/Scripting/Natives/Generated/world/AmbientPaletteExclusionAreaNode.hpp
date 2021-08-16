#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AmbientPaletteEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world { 
struct AmbientPaletteExclusionAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldAmbientPaletteExclusionAreaNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::AmbientPaletteEntry> exclusionPaletteEntries; // 60
};
RED4EXT_ASSERT_SIZE(AmbientPaletteExclusionAreaNode, 0x70);
} // namespace world
} // namespace RED4ext
