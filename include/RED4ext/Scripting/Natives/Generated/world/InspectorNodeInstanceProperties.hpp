#pragma once

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

namespace world { 
struct InspectorNodeInstanceProperties : ISerializable
{
    static constexpr const char* NAME = "worldInspectorNodeInstanceProperties";
    static constexpr const char* ALIAS = NAME;

    world::CompiledNodeInstanceSetupInfo setupInfo; // 30
    Handle<world::MeshNode> meshNode; // B0
    Handle<world::InstancedMeshNode> instancedMeshNode; // C0
    float lastObserverDistanceToStreamingPoint; // D0
    float lastObserverDistanceToSecondaryReferencePoint; // D4
    uint64_t renderProxyAddressForDebug; // D8
};
RED4EXT_ASSERT_SIZE(InspectorNodeInstanceProperties, 0xE0);
} // namespace world
} // namespace RED4ext
