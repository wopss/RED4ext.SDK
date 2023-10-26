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
struct __declspec(align(0x10)) DynamicMeshNodeInstance : world::MeshNodeInstance
{
    static constexpr const char* NAME = "worldDynamicMeshNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x1B0 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(DynamicMeshNodeInstance, 0x1B0);
} // namespace world
using worldDynamicMeshNodeInstance = world::DynamicMeshNodeInstance;
} // namespace RED4ext

// clang-format on
