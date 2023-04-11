#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenAgentSize.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace AI
{
struct OffMeshConnectionComponent : ent::IComponent
{
    static constexpr const char* NAME = "AIOffMeshConnectionComponent";
    static constexpr const char* ALIAS = "OffMeshConnectionComponent";

    DynArray<NodeRef> offMeshConnectionNodesRefs; // 90
    uint8_t unkA0[0xE0 - 0xA0]; // A0
    NavGenAgentSize agentSize; // E0
    uint8_t unkE4[0xE8 - 0xE4]; // E4
};
RED4EXT_ASSERT_SIZE(OffMeshConnectionComponent, 0xE8);
} // namespace AI
using AIOffMeshConnectionComponent = AI::OffMeshConnectionComponent;
using OffMeshConnectionComponent = AI::OffMeshConnectionComponent;
} // namespace RED4ext

// clang-format on
