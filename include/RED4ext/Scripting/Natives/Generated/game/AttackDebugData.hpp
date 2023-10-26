#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) AttackDebugData
{
    static constexpr const char* NAME = "gameAttackDebugData";
    static constexpr const char* ALIAS = "AttackDebugData";

    WorldTransform pointOfViewTransform; // 00
    Vector4 projectileHitplaneSpread; // 20
    Vector4 bulletStartPosition; // 30
};
RED4EXT_ASSERT_SIZE(AttackDebugData, 0x40);
} // namespace game
using gameAttackDebugData = game::AttackDebugData;
using AttackDebugData = game::AttackDebugData;
} // namespace RED4ext

// clang-format on
