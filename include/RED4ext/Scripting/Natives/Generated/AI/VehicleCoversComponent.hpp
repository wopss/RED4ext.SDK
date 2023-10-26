#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace AI
{
struct __declspec(align(0x10)) VehicleCoversComponent : ent::IComponent
{
    static constexpr const char* NAME = "AIVehicleCoversComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x120 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(VehicleCoversComponent, 0x120);
} // namespace AI
using AIVehicleCoversComponent = AI::VehicleCoversComponent;
} // namespace RED4ext

// clang-format on
