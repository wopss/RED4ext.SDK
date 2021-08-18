#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/CollisionEvaluator.hpp>

namespace RED4ext
{
namespace game::projectile { 
struct ScriptCollisionEvaluator : game::projectile::CollisionEvaluator
{
    static constexpr const char* NAME = "gameprojectileScriptCollisionEvaluator";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ScriptCollisionEvaluator, 0x40);
} // namespace game::projectile
} // namespace RED4ext
