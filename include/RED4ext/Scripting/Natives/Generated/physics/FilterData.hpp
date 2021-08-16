#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryFilter.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationFilter.hpp>

namespace RED4ext
{
namespace physics { struct CustomFilterData; }

namespace physics { 
struct FilterData : ISerializable
{
    static constexpr const char* NAME = "physicsFilterData";
    static constexpr const char* ALIAS = NAME;

    physics::QueryFilter queryFilter; // 30
    physics::SimulationFilter simulationFilter; // 40
    CName preset; // 50
    Handle<physics::CustomFilterData> customFilterData; // 58
};
RED4EXT_ASSERT_SIZE(FilterData, 0x68);
} // namespace physics
} // namespace RED4ext
