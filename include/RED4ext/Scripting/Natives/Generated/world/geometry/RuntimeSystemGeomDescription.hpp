#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace world::geometry
{
struct RuntimeSystemGeomDescription : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldgeometryRuntimeSystemGeomDescription";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemGeomDescription, 0x50);
} // namespace world::geometry
using worldgeometryRuntimeSystemGeomDescription = world::geometry::RuntimeSystemGeomDescription;
} // namespace RED4ext

// clang-format on
