#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/Matrix.hpp>
#include <RED4ext/Types/generated/Quaternion.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>
#include <RED4ext/Types/generated/game/IHitShape.hpp>

namespace RED4ext
{
namespace game { 
struct HitShapeBase : game::IHitShape
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
using HitShapeBase = game::HitShapeBase;
} // namespace RED4ext
