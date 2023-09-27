#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/DestructionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FractureFieldEffect.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FractureFieldOptions.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FractureFieldType.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FractureFieldValueType.hpp>

namespace RED4ext
{
namespace physics
{
struct FractureFieldParams
{
    static constexpr const char* NAME = "physicsFractureFieldParams";
    static constexpr const char* ALIAS = NAME;

    Vector3 origin; // 00
    float fractureFieldValue; // 0C
    physics::DestructionType destructionTypeMask; // 10
    physics::FractureFieldType fractureFieldTypeMask; // 12
    physics::FractureFieldOptions fractureFieldOptionsMask; // 14
    physics::FractureFieldEffect fractureFieldEffect; // 16
    physics::FractureFieldValueType fractureFieldValueType; // 17
};
RED4EXT_ASSERT_SIZE(FractureFieldParams, 0x18);
} // namespace physics
using physicsFractureFieldParams = physics::FractureFieldParams;
} // namespace RED4ext

// clang-format on
