#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct CollisionEvaluator : IScriptable
{
    static constexpr const char* NAME = "gameprojectileCollisionEvaluator";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CollisionEvaluator, 0x40);
} // namespace game::projectile
using gameprojectileCollisionEvaluator = game::projectile::CollisionEvaluator;
} // namespace RED4ext

// clang-format on
