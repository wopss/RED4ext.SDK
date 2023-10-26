#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) WaterNullAreaNodeInstance : world::AreaShapeNodeInstance
{
    static constexpr const char* NAME = "worldWaterNullAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0xF0 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(WaterNullAreaNodeInstance, 0xF0);
} // namespace world
using worldWaterNullAreaNodeInstance = world::WaterNullAreaNodeInstance;
} // namespace RED4ext

// clang-format on
