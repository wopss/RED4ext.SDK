#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/BendedMeshNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) CableMeshNodeInstance : world::BendedMeshNodeInstance
{
    static constexpr const char* NAME = "worldCableMeshNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x120 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(CableMeshNodeInstance, 0x120);
} // namespace world
using worldCableMeshNodeInstance = world::CableMeshNodeInstance;
} // namespace RED4ext

// clang-format on
