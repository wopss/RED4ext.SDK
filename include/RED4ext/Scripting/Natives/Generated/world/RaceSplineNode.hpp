#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/RaceSplineNodeOffset.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SpeedSplineNode.hpp>

namespace RED4ext
{
namespace world { 
struct RaceSplineNode : world::SpeedSplineNode
{
    static constexpr const char* NAME = "worldRaceSplineNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::RaceSplineNodeOffset> offsets; // C8
    uint8_t unkD8[0x104 - 0xD8]; // D8
    float offsetDefault; // 104
    uint8_t unk108[0x110 - 0x108]; // 108
};
RED4EXT_ASSERT_SIZE(RaceSplineNode, 0x110);
} // namespace world
} // namespace RED4ext
