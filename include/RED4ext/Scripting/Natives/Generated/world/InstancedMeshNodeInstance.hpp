#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/INodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct InstancedMeshNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldInstancedMeshNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x110 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(InstancedMeshNodeInstance, 0x110);
} // namespace world
} // namespace RED4ext
