#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace sense { struct SensorObject; }

namespace sense
{
struct __declspec(align(0x10)) SensorObjectComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "senseSensorObjectComponent";
    static constexpr const char* ALIAS = "SensorObjectComponent";

    Handle<sense::SensorObject> sensorObject; // 120
};
RED4EXT_ASSERT_SIZE(SensorObjectComponent, 0x130);
} // namespace sense
using senseSensorObjectComponent = sense::SensorObjectComponent;
using SensorObjectComponent = sense::SensorObjectComponent;
} // namespace RED4ext

// clang-format on
