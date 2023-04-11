#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
struct FoliageDestructionMapping : ISerializable
{
    static constexpr const char* NAME = "worldFoliageDestructionMapping";
    static constexpr const char* ALIAS = NAME;

    RaRef<CMesh> baseMesh; // 30
    RaRef<CMesh> destructibleMesh; // 38
    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(FoliageDestructionMapping, 0x68);
} // namespace world
using worldFoliageDestructionMapping = world::FoliageDestructionMapping;
} // namespace RED4ext

// clang-format on
