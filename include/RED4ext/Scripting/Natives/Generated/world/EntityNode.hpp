#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntitySpawnPriority.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace ent { struct EntityInstanceData; }
namespace ent { struct EntityTemplate; }

namespace world
{
struct EntityNode : world::Node
{
    static constexpr const char* NAME = "worldEntityNode";
    static constexpr const char* ALIAS = NAME;

    RaRef<ent::EntityTemplate> entityTemplate; // 38
    Handle<ent::EntityInstanceData> instanceData; // 40
    CName appearanceName; // 50
    ent::EntitySpawnPriority ioPriority; // 58
    uint8_t unk59[0x5A - 0x59]; // 59
    uint16_t entityLod; // 5A
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(EntityNode, 0x60);
} // namespace world
using worldEntityNode = world::EntityNode;
} // namespace RED4ext

// clang-format on
