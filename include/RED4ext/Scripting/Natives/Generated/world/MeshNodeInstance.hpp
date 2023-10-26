#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SnappableNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) MeshNodeInstance : world::SnappableNodeInstance
{
    static constexpr const char* NAME = "worldMeshNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x100 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(MeshNodeInstance, 0x100);
} // namespace world
using worldMeshNodeInstance = world::MeshNodeInstance;
} // namespace RED4ext

// clang-format on
