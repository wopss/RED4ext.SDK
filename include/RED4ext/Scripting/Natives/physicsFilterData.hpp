#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/RTTISystem.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/CustomFilterData.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryFilter.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationFilter.hpp>

#include <cstdint>

namespace RED4ext
{
namespace physics
{
struct FilterData : ISerializable
{
    static constexpr const char* NAME = "physicsFilterData";
    static constexpr const char* ALIAS = NAME;

    RED4EXT_IMPL_NATIVE_TYPE();

    QueryFilter queryFilter;                   // 30
    SimulationFilter simulationFilter;         // 40
    CName preset;                              // 50
    Handle<CustomFilterData> customFilterData; // 58
};
RED4EXT_ASSERT_SIZE(FilterData, 0x68);
} // namespace physics
using physicsFilterData = physics::FilterData;
} // namespace RED4ext
