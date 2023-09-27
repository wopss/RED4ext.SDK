#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FractureFieldParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ShapeType.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutor_PhysicalFractureField : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_PhysicalFractureField";
    static constexpr const char* ALIAS = NAME;

    physics::FractureFieldParams fieldParams; // 48
    Vector3 fieldDimensions; // 60
    physics::ShapeType fieldShape; // 6C
    bool fromHitPosition; // 6D
    uint8_t unk6E[0x70 - 0x6E]; // 6E
};
RED4EXT_ASSERT_SIZE(EffectExecutor_PhysicalFractureField, 0x70);
} // namespace game
using gameEffectExecutor_PhysicalFractureField = game::EffectExecutor_PhysicalFractureField;
} // namespace RED4ext

// clang-format on
