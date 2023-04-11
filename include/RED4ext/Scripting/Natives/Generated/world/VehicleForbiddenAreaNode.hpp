#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world
{
struct VehicleForbiddenAreaNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldVehicleForbiddenAreaNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(VehicleForbiddenAreaNode, 0x70);
} // namespace world
using worldVehicleForbiddenAreaNode = world::VehicleForbiddenAreaNode;
} // namespace RED4ext

// clang-format on
