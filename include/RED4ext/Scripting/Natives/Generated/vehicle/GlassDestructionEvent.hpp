#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct GlassDestructionEvent : red::Event
{
    static constexpr const char* NAME = "vehicleGlassDestructionEvent";
    static constexpr const char* ALIAS = "VehicleGlassDestructionEvent";

    CName glassName; // 40
};
RED4EXT_ASSERT_SIZE(GlassDestructionEvent, 0x48);
} // namespace vehicle
using vehicleGlassDestructionEvent = vehicle::GlassDestructionEvent;
using VehicleGlassDestructionEvent = vehicle::GlassDestructionEvent;
} // namespace RED4ext

// clang-format on
