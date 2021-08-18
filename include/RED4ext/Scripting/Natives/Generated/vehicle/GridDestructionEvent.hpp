#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle { 
struct GridDestructionEvent : red::Event
{
    static constexpr const char* NAME = "vehicleGridDestructionEvent";
    static constexpr const char* ALIAS = "VehicleGridDestructionEvent";

    NativeArray<float, 16> state; // 40
    NativeArray<float, 16> rawChange; // 80
    NativeArray<float, 16> desiredChange; // C0
};
RED4EXT_ASSERT_SIZE(GridDestructionEvent, 0x100);
} // namespace vehicle
using VehicleGridDestructionEvent = vehicle::GridDestructionEvent;
} // namespace RED4ext
