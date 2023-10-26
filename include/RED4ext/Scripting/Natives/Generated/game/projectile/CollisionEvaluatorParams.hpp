#pragma once

// clang-format off

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

namespace game::projectile
{
struct __declspec(align(0x10)) CollisionEvaluatorParams : IScriptable
{
    static constexpr const char* NAME = "gameprojectileCollisionEvaluatorParams";
    static constexpr const char* ALIAS = "CollisionEvaluatorParams";

    WeakHandle<game::Object> target; // 40
    bool isPiercableSurface; // 50
    bool isWaterSurface; // 51
    bool isAutoBounceSurface; // 52
    uint8_t unk53[0x54 - 0x53]; // 53
    float angle; // 54
    uint32_t numBounces; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    Vector4 position; // 60
    CName projectilePenetration; // 70
    bool isTechPiercing; // 78
    bool isDestructible; // 79
    uint8_t unk7A[0x80 - 0x7A]; // 7A
};
RED4EXT_ASSERT_SIZE(CollisionEvaluatorParams, 0x80);
} // namespace game::projectile
using gameprojectileCollisionEvaluatorParams = game::projectile::CollisionEvaluatorParams;
using CollisionEvaluatorParams = game::projectile::CollisionEvaluatorParams;
} // namespace RED4ext

// clang-format on
