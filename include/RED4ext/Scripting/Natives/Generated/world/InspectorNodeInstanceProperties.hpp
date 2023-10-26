#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CompiledNodeInstanceSetupInfo.hpp>

namespace RED4ext
{
namespace world { struct InstancedMeshNode; }
namespace world { struct MeshNode; }

namespace world
{
struct __declspec(align(0x10)) InspectorNodeInstanceProperties : ISerializable
{
    static constexpr const char* NAME = "worldInspectorNodeInstanceProperties";
    static constexpr const char* ALIAS = NAME;

    world::CompiledNodeInstanceSetupInfo setupInfo; // 30
    Handle<world::MeshNode> meshNode; // C0
    Handle<world::InstancedMeshNode> instancedMeshNode; // D0
    float lastObserverDistanceToStreamingPoint; // E0
    float lastObserverDistanceToSecondaryReferencePoint; // E4
    uint64_t renderProxyAddressForDebug; // E8
};
RED4EXT_ASSERT_SIZE(InspectorNodeInstanceProperties, 0xF0);
} // namespace world
using worldInspectorNodeInstanceProperties = world::InspectorNodeInstanceProperties;
} // namespace RED4ext

// clang-format on
