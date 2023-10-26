#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) VehicleForbiddenAreaNodeInstance : world::TriggerAreaNodeInstance
{
    static constexpr const char* NAME = "worldVehicleForbiddenAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(VehicleForbiddenAreaNodeInstance, 0x100);
} // namespace world
using worldVehicleForbiddenAreaNodeInstance = world::VehicleForbiddenAreaNodeInstance;
} // namespace RED4ext

// clang-format on
