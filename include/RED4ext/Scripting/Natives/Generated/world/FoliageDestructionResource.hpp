#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace world { struct FoliageDestructionMapping; }

namespace world
{
struct FoliageDestructionResource : CResource
{
    static constexpr const char* NAME = "worldFoliageDestructionResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<world::FoliageDestructionMapping>> mappings; // 40
};
RED4EXT_ASSERT_SIZE(FoliageDestructionResource, 0x50);
} // namespace world
using worldFoliageDestructionResource = world::FoliageDestructionResource;
} // namespace RED4ext

// clang-format on
