#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/FoliagePopulationSpanInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CMesh;
namespace world { struct FoliageCompiledResource; }

namespace world
{
struct __declspec(align(0x10)) FoliageNode : world::Node
{
    static constexpr const char* NAME = "worldFoliageNode";
    static constexpr const char* ALIAS = NAME;

    RaRef<CMesh> mesh; // 38
    CName meshAppearance; // 40
    RaRef<world::FoliageCompiledResource> foliageResource; // 48
    Box foliageLocalBounds; // 50
    world::FoliagePopulationSpanInfo populationSpanInfo; // 70
    uint64_t destructionHash; // 80
    float autoHideDistanceScale; // 88
    float lodDistanceScale; // 8C
    float streamingDistance; // 90
    float meshHeight; // 94
    uint8_t unk98[0xA0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(FoliageNode, 0xA0);
} // namespace world
using worldFoliageNode = world::FoliageNode;
} // namespace RED4ext

// clang-format on
