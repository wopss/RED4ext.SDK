#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/IVehicleCoversSystem.hpp>

namespace RED4ext
{
namespace AI
{
struct VehicleCoversSystem : AI::IVehicleCoversSystem
{
    static constexpr const char* NAME = "AIVehicleCoversSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleCoversSystem, 0x90);
} // namespace AI
using AIVehicleCoversSystem = AI::VehicleCoversSystem;
} // namespace RED4ext

// clang-format on
