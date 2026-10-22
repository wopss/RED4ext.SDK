#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
struct AreaShapeOutline;

namespace world
{
struct VehicleForbiddenAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldVehicleForbiddenAreaNotifier";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB8[0xC8 - 0xB8]; // B8
    bool innerAreaBoundToOuterArea; // C8
    uint8_t unkC9[0xD0 - 0xC9]; // C9
    Handle<AreaShapeOutline> innerAreaOutline; // D0
    DynArray<NodeRef> parkingSpots; // E0
    float innerAreaSpeedLimit; // F0
    float areaSpeedLimit; // F4
    bool speedLimitAppliedWhenEntityIsPassenger; // F8
    bool enableNullArea; // F9
    bool dismount; // FA
    bool enableSummoning; // FB
    uint8_t unkFC[0x100 - 0xFC]; // FC
};
RED4EXT_ASSERT_SIZE(VehicleForbiddenAreaNotifier, 0x100);
} // namespace world
using worldVehicleForbiddenAreaNotifier = world::VehicleForbiddenAreaNotifier;
} // namespace RED4ext

// clang-format on
