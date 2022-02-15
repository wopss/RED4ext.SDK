#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::projectile { 
struct CollisionEvaluatorParams : IScriptable
{
    static constexpr const char* NAME = "gameprojectileCollisionEvaluatorParams";
    static constexpr const char* ALIAS = "CollisionEvaluatorParams";

    WeakHandle<game::Object> target; // 40
    bool isPiercableSurface; // 50
    bool isWaterSurface; // 51
    uint8_t unk52[0x54 - 0x52]; // 52
    float angle; // 54
    uint32_t numBounces; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    Vector4 position; // 60
    CName projectilePenetration; // 70
    bool isTechPiercing; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
};
RED4EXT_ASSERT_SIZE(CollisionEvaluatorParams, 0x80);
} // namespace game::projectile
using CollisionEvaluatorParams = game::projectile::CollisionEvaluatorParams;
} // namespace RED4ext
