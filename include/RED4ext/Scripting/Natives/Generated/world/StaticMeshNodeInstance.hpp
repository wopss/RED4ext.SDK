#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) StaticMeshNodeInstance : world::MeshNodeInstance
{
    static constexpr const char* NAME = "worldStaticMeshNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StaticMeshNodeInstance, 0x100);
} // namespace world
using worldStaticMeshNodeInstance = world::StaticMeshNodeInstance;
} // namespace RED4ext

// clang-format on
