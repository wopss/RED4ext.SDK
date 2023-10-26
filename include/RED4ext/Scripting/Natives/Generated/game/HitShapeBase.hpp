#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IHitShape.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) HitShapeBase : game::IHitShape
{
    static constexpr const char* NAME = "gameHitShapeBase";
    static constexpr const char* ALIAS = "HitShapeBase";

    Vector3 translation; // 30
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    Quaternion rotation; // 40
    Matrix localTransform; // 50
};
RED4EXT_ASSERT_SIZE(HitShapeBase, 0x90);
} // namespace game
using gameHitShapeBase = game::HitShapeBase;
using HitShapeBase = game::HitShapeBase;
} // namespace RED4ext

// clang-format on
