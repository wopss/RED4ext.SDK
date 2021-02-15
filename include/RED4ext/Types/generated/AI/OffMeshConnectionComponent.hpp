#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/NavGenAgentSize.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace AI { 
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
using OffMeshConnectionComponent = AI::OffMeshConnectionComponent;
} // namespace RED4ext
